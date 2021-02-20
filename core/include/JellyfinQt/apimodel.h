/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef JELLYFIN_API_MODEL
#define JELLYFIN_API_MODEL

#include <QAbstractListModel>
#include <QFlags>
#include <QMetaEnum>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QtQml>
#include <QQmlParserStatus>
#include <QVariant>

#include "apiclient.h"
#include "jsonhelper.h"

namespace Jellyfin {

namespace DTO {
    class Item;
    class JsonSerializable;
    class User;
}
class SortOptions : public QObject {
    Q_OBJECT
public:
    explicit SortOptions (QObject *parent = nullptr) : QObject(parent) {}
    enum SortBy {
        Album,
        AlbumArtist,
        Artist,
        Budget,
        CommunityRating,
        CriticRating,
        DateCreated,
        DatePlayed,
        PlayCount,
        PremiereDate,
        ProductionYear,
        SortName,
        Random,
        Revenue,
        Runtime
    };
    Q_ENUM(SortBy)
};

/**
 * Q_OBJECT does not support template classes. This base class declares the
 * Q_OBJECT related properties and signals.
 */
class BaseApiModel : public QAbstractListModel, public QQmlParserStatus {
    Q_OBJECT
public:
    explicit BaseApiModel(QString path, bool hasRecordResponse, bool addUserId, QObject *parent = nullptr);
    enum ModelStatus {
        Uninitialised,
        Loading,
        Ready,
        Error,
        LoadingMore
    };
    Q_ENUM(ModelStatus)

    enum SortOrder {
        Unspecified,
        Ascending,
        Descending
    };
    Q_ENUM(SortOrder)
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient NOTIFY apiClientChanged)
    Q_PROPERTY(ModelStatus status READ status NOTIFY statusChanged)

    // Query properties
    Q_PROPERTY(int limit MEMBER m_limit NOTIFY limitChanged)
    Q_PROPERTY(QList<QString> sortBy MEMBER m_sortBy NOTIFY sortByChanged)
    Q_PROPERTY(QList<QString> fields MEMBER m_fields NOTIFY fieldsChanged)
    Q_PROPERTY(SortOrder sortOrder MEMBER m_sortOrder NOTIFY sortOrderChanged)

    ModelStatus status() const { return m_status; }
    void setApiClient(ApiClient *newApiClient);
    void setLimit(int newLimit);

    // From AbstractListModel, gets implemented in ApiModel<T>
    virtual int rowCount(const QModelIndex &index) const override = 0;
    virtual QHash<int, QByteArray> roleNames() const override = 0;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override = 0;
    virtual bool canFetchMore(const QModelIndex &parent) const override = 0;
    virtual void fetchMore(const QModelIndex &parent) override = 0;


signals:
    void ready();
    void apiClientChanged(ApiClient *newApiClient);
    void statusChanged(ModelStatus newStatus);
    void limitChanged(int newLimit);
    void sortByChanged(QList<QString> newSortOrder);
    void sortOrderChanged(SortOrder newSortOrder);
    void fieldsChanged(QList<QString> newFields);

public slots:
    /**
     * @brief (Re)loads the data into this model. This might make a network request.
     */
    void reload();

protected:
    enum LoadType {
        RELOAD,
        LOAD_MORE
    };

    ApiClient *m_apiClient = nullptr;
    bool m_isBeingParsed = false;
    // Per-model specific settings.
    QString m_path;
    bool m_hasRecordResponse;
    bool m_addUserId;
    bool padding; bool padding2;

    // Query/record controlling properties
    int m_limit = -1;
    int m_startIndex = 0;
    int m_totalRecordCount = 0;
    const int DEFAULT_LIMIT = 100;

    // Query properties
    QList<QString> m_fields = {};
    QList<QString> m_sortBy = {};
    SortOrder m_sortOrder = Unspecified;

    // State properties.
    ModelStatus m_status = Uninitialised;

    void setStatus(ModelStatus newStatus) {
        if (this->m_status != newStatus) {
            this->m_status = newStatus;
            emit this->statusChanged(newStatus);
            if (m_status == Ready) {
                emit ready();
            }
        }
    }

    void load(LoadType loadType);
    virtual void setModelData(QJsonArray &data) = 0;
    virtual void appendModelData(QJsonArray &data) = 0;
    /**
     * @brief Adds parameters to the query
     * @param query The query to add parameters to
     *
     * This method is intended to be overrided by subclasses. It gets called
     * before a request is made to the server and can be used to enable
     * query types specific for a certain model to be available.
     *
     * Make sure to call the method in the superclass as well!
     */
    virtual void addQueryParameters(QUrlQuery &query);

    /**
     * @brief Replaces placeholders in an URL.
     * @param path The path in which placeholders should be replaced.
     *
     * This method is intended to be overrided by subclasses. It gets called
     * before a request is made to the server and can be used to enable
     * query types specific for a certain model to be available.
     *
     * Make sure to call the method in the superclass as well!
     */
    virtual void replacePathPlaceholders(QString &path);

    virtual void classBegin() override;
    virtual void componentComplete() override;
};


/**
 * @brief Abstract model for displaying a REST JSON collection. Role names will be based on the fields encountered in the
 * first record.
 *
 * To create a new model, extend this class and create an QObject-parent constructor.
 * Call the right super constructor with the right values, depending which path should be queried and
 * how the result should be interpreted.
 *
 * Register the model in QML and create an instance. Don't forget to set the apiClient attribute or else
 * the model you've created will be useless!
 *
 * Rolenames are based on the fields in the first object within the array of results, with the first letter
 * lowercased, to accomodate for QML style guidelines. (This ain't C# here).
 *
 * If a call to /cats/new results in
 * @code{.json}
 * [
 *   {"Name": "meow", "Id": 432},
 *   {"Name": "miew", "Id": 323}
 * ]
 * @endcode
 * The model will have roleNames for "name" and "id".
 *
 */
template <typename T>
class ApiModel : public BaseApiModel {
public:
    /**
     * @brief Creates a new basemodel
     * @param path The path (relative to the baseUrl of JellyfinApiClient) to make the call to.
     * @param subfield Leave empty if the root of the result is the array with results. Otherwise, set to the key name in the
     * root object which contains the data.
     * @param parent Parent (Standard QObject stuff)
     *
     * If the response looks something like this:
     * @code{.json}
     * [{...}, {...}, {...}]
     * @endcode
     *
     * or
     * @code{.json}
     * {...}
     * @endcode
     * responseHasRecords should be false
     *
     * If the response looks something like this:
     * @code{.json}
     * {
     *   "Offset": 0,
     *   "Count": 20,
     *   "Items": [{...}, {...}, {...}, ..., {...}]
     * }
     * @endcode
     * responseHasRecords should be true
     */
    explicit ApiModel(QString path, bool responseHasRecords, bool passUserId = false, QObject *parent = nullptr);

    // Standard QAbstractItemModel overrides
    int rowCount(const QModelIndex &index) const override {
        if (!index.isValid()) return m_array.size();
        return 0;
    }
    QHash<int, QByteArray> roleNames() const override { return m_roles; }
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    bool canFetchMore(const QModelIndex &parent) const override;
    void fetchMore(const QModelIndex &parent) override;

    // Helper methods
    template<typename QEnum>
    QString enumToString (const QEnum anEnum) { return QVariant::fromValue(anEnum).toString(); }

    // QList-like API
    T* at(int index) { return m_array.at(index); }
    int size() { return rowCount(QModelIndex()); }
    void insert(int index, T* object);
    void append(T* object) { insert(size(), object); }
    void removeAt(int index);
    void removeOne(T* object);

    template<typename QEnum>
    QString enumListToString (const QList<QEnum> enumList) {
        QString result;
        for (QEnum e : enumList) {
            result += QVariant::fromValue(e).toString() + ",";
        }
        return result;
    }

protected:
    // AbstractItemModel bookkeeping
    QHash<int, QByteArray> m_roles;

    // Helper methods.
    T *deserializeResult(QJsonValueRef source);
    virtual void addQueryParameters(QUrlQuery &query) override;
    virtual void replacePathPlaceholders(QString &path) override;

    virtual void setModelData(QJsonArray &data) override;
    virtual void appendModelData(QJsonArray &data) override;

    // Model-specific properties.
    QList<T*> m_array;

private:
    /**
     * @brief Generates roleNames based on the first record in m_array.
     */
    void generateFields();
    QString sortByToString(SortOptions::SortBy sortBy);
};

/**
 * @brief List of the public users on the server.
 */
class PublicUserModel : public ApiModel<User> {
public:
    explicit PublicUserModel (QObject *parent = nullptr);
};

/**
 * @brief Base class for each model that works with items.
 *
 * Listens for updates in the library and updates the model accordingly.
 */
class ItemModel : public ApiModel<Item> {
    Q_OBJECT
public:
    explicit ItemModel (QString path, bool responseHasRecords, bool replaceUser, QObject *parent = nullptr);
    // Query parameters
    Q_PROPERTY(QString parentId MEMBER m_parentId WRITE setParentId NOTIFY parentIdChanged)
    Q_PROPERTY(QString seasonId MEMBER m_seasonId NOTIFY seasonIdChanged)
    Q_PROPERTY(QList<QString> imageTypes MEMBER m_imageTypes NOTIFY imageTypesChanged)
    Q_PROPERTY(QList<QString> includeItemTypes MEMBER m_includeItemTypes NOTIFY includeItemTypesChanged)
    Q_PROPERTY(bool recursive MEMBER m_recursive)
    QList<QString> m_includeItemTypes = {};

    // Path properties
    Q_PROPERTY(QString show MEMBER m_show NOTIFY showChanged)

    void setParentId(const QString &parentId) {
        m_parentId = parentId;
        emit parentIdChanged(m_parentId);
    }
signals:
    // Query property signals
    void parentIdChanged(QString newParentId);
    void seasonIdChanged(QString newSeasonId);
    void imageTypesChanged(QList<QString> newImageTypes);
    void includeItemTypesChanged(const QList<QString> &newIncludeItemTypes);

    // Path property signals
    void showChanged(QString newShow);
public slots:
    void onUserDataChanged(const QString &itemId, DTO::UserData *userData);
protected:
    virtual void addQueryParameters(QUrlQuery &query) override;
    virtual void replacePathPlaceholders(QString &path) override;
private:
    // Path properties
    QString m_show;

    // Query parameters
    QString m_parentId;
    QString m_seasonId;
    QList<QString> m_imageTypes = {};
    bool m_recursive = false;
};

//template<>
//void ApiModel<Item>::apiClientChanged();

class UserViewModel : public ItemModel {
public:
    explicit UserViewModel (QObject *parent = nullptr);
};

class UserItemModel : public ItemModel {
public:
    explicit UserItemModel (QObject *parent = nullptr);
};

class UserItemResumeModel : public ItemModel {
public:
    explicit UserItemResumeModel (QObject *parent = nullptr);
};

class UserItemLatestModel : public ItemModel {
public:
    explicit UserItemLatestModel (QObject *parent = nullptr);
};

class ShowNextUpModel : public ItemModel {
public:
    explicit ShowNextUpModel (QObject *parent = nullptr);
};

class ShowSeasonsModel : public ItemModel {
public:
    explicit ShowSeasonsModel (QObject *parent = nullptr);
};

class ShowEpisodesModel : public ItemModel {
public:
    explicit ShowEpisodesModel (QObject *parent = nullptr);
};


void registerModels(const char *URI);

}
#endif //JELLYFIN_API_MODEL
