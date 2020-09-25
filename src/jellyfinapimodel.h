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

    enum MediaType {
        MediaUnspecified,
        Series
    };
    Q_DECLARE_FLAGS(MediaTypes, MediaType)
    Q_FLAG(MediaTypes)
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
    explicit ApiModel(QString path, QString subfield, QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(ModelStatus status READ status NOTIFY statusChanged)
    Q_PROPERTY(int limit MEMBER m_limit NOTIFY limitChanged)
    Q_PROPERTY(QString parentId MEMBER m_parentId NOTIFY parentIdChanged)
    Q_PROPERTY(QList<SortOrder::SortBy> sortBy MEMBER m_sortBy NOTIFY sortByChanged)
    //Q_PROPERTY(MediaTypes includeTypes MEMBER m_includeTypes NOTIFY includeTypesChanged)

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
    void sortByChanged(SortOrder::SortBy newSortOrder);
    void includeTypesChanged(MediaTypes newTypes);

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

    // Query properties
    int m_limit = -1;
    QString m_parentId;
    QList<SortOrder::SortBy> m_sortBy = {};
    MediaTypes m_includeTypes = MediaUnspecified;

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
    QString mediaTypeToString(MediaType mediaType);
};

/**
 * @brief List of the public users on the server.
 */
class PublicUserModel : public ApiModel {
public:
    explicit PublicUserModel (QObject *parent = nullptr)
        : ApiModel ("/users/public", "", parent) { }
};

class UserViewModel : public ApiModel {
public:
    explicit UserViewModel (QObject *parent = nullptr)
        : ApiModel ("/Users/:user/Views", "Items", parent) {}
};

class UserItemModel : public ApiModel {
public:
    explicit UserItemModel (QObject *parent = nullptr)
        : ApiModel ("/Users/:user/Items", "Items", parent) {}
};
class UserItemLatestModel : public ApiModel {
public:
    explicit UserItemLatestModel (QObject *parent = nullptr)
        : ApiModel ("/Users/:user/Items/Latest", "", parent) {}
};


void registerModels(const char *URI);

Q_DECLARE_OPERATORS_FOR_FLAGS(ApiModel::MediaTypes)

}
#endif //JELLYFIN_API_MODEL
