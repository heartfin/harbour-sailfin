#ifndef JELLYFIN_API_MODEL
#define JELLYFIN_API_MODEL

#include <QAbstractListModel>
#include <QFlags>
#include <QMetaEnum>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariant>

#include "jellyfinapiclient.h"

namespace Jellyfin {
class SortOrder {
    Q_GADGET
public:
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
class ApiModel : public QAbstractListModel {
    Q_OBJECT
public:
    enum ModelStatus {
        Uninitialised,
        Loading,
        Ready,
        Error
    };
    Q_ENUM(ModelStatus)

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
     * subfield should be left empty
     *
     * If the response looks something like this:
     * @code{.json}
     * {
     *   "offset": 0,
     *   "count": 20,
     *   "data": [{...}, {...}, {...}, ..., {...}]
     * }
     * @endcode
     * Subfield should be set to "data" in this example.
     */
    explicit ApiModel(QString path, QString subfield, bool passUserId = false, QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(ModelStatus status READ status NOTIFY statusChanged)

    // Query properties
    Q_PROPERTY(int limit MEMBER m_limit NOTIFY limitChanged)
    Q_PROPERTY(QString parentId MEMBER m_parentId NOTIFY parentIdChanged)
    Q_PROPERTY(QList<QString> sortBy MEMBER m_sortBy NOTIFY sortByChanged)
    Q_PROPERTY(QList<QString> fields MEMBER m_fields NOTIFY fieldsChanged)
    Q_PROPERTY(QString seasonId MEMBER m_seasonId NOTIFY seasonIdChanged)
    Q_PROPERTY(QList<QString> imageTypes MEMBER m_imageTypes NOTIFY imageTypesChanged)
    Q_PROPERTY(bool recursive MEMBER m_recursive)

    // Path properties
    Q_PROPERTY(QString show MEMBER m_show NOTIFY showChanged)

    int rowCount(const QModelIndex &index) const override {
        if (!index.isValid()) return m_array.size();
        return 0;
    }
    QHash<int, QByteArray> roleNames() const override { return m_roles; }

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    ModelStatus status() const { return m_status; }

    template<typename QEnum>
    QString enumToString (const QEnum anEnum) { return QVariant::fromValue(anEnum).toString(); }

    template<typename QEnum>
    QString enumListToString (const QList<QEnum> enumList) {
        QString result;
        for (QEnum e : enumList) {
            result += QVariant::fromValue(e).toString() + ",";
        }
        return result;
    }
signals:
    void statusChanged(ModelStatus newStatus);
    void limitChanged(int newLimit);
    void parentIdChanged(QString newParentId);
    void sortByChanged(QList<QString> newSortOrder);
    void showChanged(QString newShow);
    void seasonIdChanged(QString newSeasonId);
    void fieldsChanged(QList<QString> newFields);
    void imageTypesChanged(QList<QString> newImageTypes);

public slots:
    /**
     * @brief (Re)loads the data into this model. This might make a network request.
     */
    void reload();
protected:
    ApiClient *m_apiClient = nullptr;
    ModelStatus m_status = Uninitialised;

    QString m_path;
    QString m_subfield;
    QJsonArray m_array;

    // Path properties
    QString m_show;

    // Query properties
    int m_limit = -1;
    bool m_addUserId = false;
    QString m_parentId;
    QString m_seasonId;
    QList<QString> m_fields;
    QList<QString> m_imageTypes;
    QList<QString> m_sortBy = {};
    bool m_recursive;

    QHash<int, QByteArray> m_roles;
    //QHash<QByteArray, int> m_reverseRoles;

    void setStatus(ModelStatus newStatus) {
        this->m_status = newStatus;
        emit this->statusChanged(newStatus);
    }

private:
    /**
     * @brief Generates roleNames based on the first record in m_array.
     */
    void generateFields();
    QString sortByToString(SortOrder::SortBy sortBy);
};

/**
 * @brief List of the public users on the server.
 */
class PublicUserModel : public ApiModel {
public:
    explicit PublicUserModel (QObject *parent = nullptr)
        : ApiModel ("/users/public", "", false, parent) { }
};

class UserViewModel : public ApiModel {
public:
    explicit UserViewModel (QObject *parent = nullptr)
        : ApiModel ("/Users/{{user}}/Views", "Items", false, parent) {}
};

class UserItemModel : public ApiModel {
public:
    explicit UserItemModel (QObject *parent = nullptr)
        : ApiModel ("/Users/{{user}}/Items", "Items", false, parent) {}
};
class UserItemLatestModel : public ApiModel {
public:
    explicit UserItemLatestModel (QObject *parent = nullptr)
        : ApiModel ("/Users/{{user}}/Items/Latest", "", false, parent) {}
};

class ShowSeasonsModel : public ApiModel {
public:
    explicit ShowSeasonsModel (QObject *parent = nullptr)
        : ApiModel ("/Shows/{{show}}/Seasons", "Items", true, parent) {}
};

class ShowEpisodesModel : public ApiModel {
public:
    explicit ShowEpisodesModel (QObject *parent = nullptr)
        : ApiModel ("/Shows/{{show}}/Episodes", "Items", true, parent) {}
};


void registerModels(const char *URI);

}
#endif //JELLYFIN_API_MODEL
