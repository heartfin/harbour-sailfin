#ifndef JELLYFINITEM_H
#define JELLYFINITEM_H

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QDateTime>
#include <QObject>

#include <QNetworkReply>

#include <QtQml>

#include <optional>

#include "jellyfinapiclient.h"

namespace Jellyfin {

/**
 * @brief Base class for a serializable object.
 *
 * This class will be (de)serialized based on its properties.
 * Note: it must have a constructor without arguments marked with Q_INVOKABLE
 */
class JsonSerializable : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE JsonSerializable(QObject *parent);
    /**
     * @brief Sets this objects properties based on obj.
     * @param obj The data to load into this object.
     */
    void deserialize(const QJsonObject &obj);
    QJsonObject serialize() const;
private:
    QVariant jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root) const;
    QJsonValue variantToJson(const QVariant var) const;

    /**
     * @brief Sets the first letter of the string to lower case (to make it camelCase).
     * @param str The string to modify
     * @return THe modified string
     */
    static QString fromPascalCase(QString str);
    /**
     * @brief Sets the first letter of the string to uper case (to make it PascalCase).
     * @param str The string to modify
     * @return THe modified string
     */
    static QString toPascalCase(QString str);
};

/**
 * @brief An "interface" for a remote data source
 *
 * This class is basically a base class for JSON data that can be fetched from over the network.
 * Subclasses should reimplement reload and call setStatus to update the QML part of the code
 * appropiatly.
 */
class RemoteData : public JsonSerializable {
    Q_OBJECT
public:
    enum Status {
        /// The data is unitialized and not loading either.
        Uninitialised,
        /// The data is being loaded over the network
        Loading,
        /// The data is ready, the properties in this object are up to date.
        Ready,
        /// An error has occurred while loading the data. See error() for more details.
        Error
    };
    Q_ENUM(Status)

    explicit RemoteData(QObject *parent = nullptr);

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient NOTIFY apiClientChanged STORED false)
    Q_PROPERTY(Status status READ status NOTIFY statusChanged STORED false)
    Q_PROPERTY(QNetworkReply::NetworkError error READ error NOTIFY errorChanged STORED false)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged STORED false)

    Status status() const { return m_status; }
    QNetworkReply::NetworkError error() const { return m_error; }
    QString errorString() const { return m_errorString; }

    void setApiClient(ApiClient *newApiClient);
signals:
    void statusChanged(Status newStatus);
    void apiClientChanged(ApiClient *newApiClient);
    void errorChanged(QNetworkReply::NetworkError newError);
    void errorStringChanged(QString newErrorString);
public slots:
    virtual void reload() = 0;
protected:
    void setStatus(Status newStatus);
    void setError(QNetworkReply::NetworkError error);
    void setErrorString(const QString &newErrorString);
    ApiClient *m_apiClient = nullptr;
private:
    Status m_status = Uninitialised;
    QNetworkReply::NetworkError m_error = QNetworkReply::NoError;
    QString m_errorString;
};

class Item : public RemoteData {
    Q_OBJECT
public:
    Q_INVOKABLE explicit Item(QObject *parent = nullptr);

    Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)

    // Based on https://github.com/jellyfin/jellyfin/blob/907695dec7fda152d0e17c1197637bc0e17c9928/MediaBrowser.Model/Dto/BaseItemDto.cs
    // I copy, pasted and replaced. I feel like a Go programmer implementing generic containers.
    // If this were D, I would've writed a compile-time C# parser to parse that source code at compile time, extract
    // the properties and generate a class based on that.
    // Doing that in C++ would be more difficult and I dislike qmake. Does it even support running programs at compile time?
    // But here I am, using ctrl-C++
    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(QString originalTitle MEMBER m_originalTitle NOTIFY originalTitleChanged)
    Q_PROPERTY(QString serverId MEMBER m_serverId NOTIFY serverIdChanged)
    Q_PROPERTY(QString etag MEMBER m_etag NOTIFY etagChanged)
    Q_PROPERTY(QString sourceType MEMBER m_sourceType NOTIFY sourceTypeChanged)
    Q_PROPERTY(QString playlistItemId MEMBER m_playlistItemId NOTIFY playlistItemIdChanged)
    Q_PROPERTY(QDateTime dateCreated MEMBER m_dateCreated NOTIFY dateCreatedChanged)
    Q_PROPERTY(QDateTime dateLastMediaAdded MEMBER m_dateLastMediaAdded NOTIFY dateLastMediaAddedChanged)
    Q_PROPERTY(QString extraType MEMBER m_extraType NOTIFY extraTypeChanged)
    Q_PROPERTY(int airsBeforeSeasonNumber READ airsBeforeSeasonNumber WRITE setAirsBeforeSeasonNumber NOTIFY airsBeforeSeasonNumberChanged)
    Q_PROPERTY(int airsAfterSeasonNumber READ airsAfterSeasonNumber WRITE setAirsAfterSeasonNumber NOTIFY airsAfterSeasonNumberChanged)
    Q_PROPERTY(int airsBeforeEpisodeNumber READ airsBeforeEpisodeNumber WRITE setAirsBeforeEpisodeNumber NOTIFY airsBeforeEpisodeNumberChanged)
    Q_PROPERTY(bool canDelete READ canDelete WRITE setCanDelete NOTIFY canDeleteChanged)
    Q_PROPERTY(bool canDownload READ canDownload WRITE setCanDownload NOTIFY canDownloadChanged)
    Q_PROPERTY(bool hasSubtitles READ hasSubtitles WRITE setHasSubtitles NOTIFY hasSubtitlesChanged)
    Q_PROPERTY(QString preferredMetadataLanguage MEMBER m_preferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)
    Q_PROPERTY(QString preferredMetadataCountryCode MEMBER m_preferredMetadataCountryCode NOTIFY preferredMetadataCountryCodeChanged)
    Q_PROPERTY(bool supportsSync READ supportsSync WRITE setSupportsSync NOTIFY supportsSyncChanged)
    Q_PROPERTY(QString container MEMBER m_container NOTIFY containerChanged)
    Q_PROPERTY(QString sortName MEMBER m_sortName NOTIFY sortNameChanged)
    Q_PROPERTY(QString forcedSortName MEMBER m_forcedSortName NOTIFY forcedSortNameChanged)
    //SKIP: Video3DFormat
    Q_PROPERTY(QDateTime premiereData MEMBER m_premiereDate NOTIFY premiereDateChanged)
    //SKIP: ExternalUrls
    //SKIP: MediaSources

    // Handpicked, important ones
    Q_PROPERTY(QString overview MEMBER m_overview NOTIFY overviewChanged)
    Q_PROPERTY(int productionYear READ productionYear WRITE setProductionYear NOTIFY productionYearChanged)
    Q_PROPERTY(int indexNumber READ indexNumber WRITE setProductionYear NOTIFY indexNumberChanged)

    QString jellyfinId() const { return m_id; }
    void setJellyfinId(QString newId);

    int airsBeforeSeasonNumber() const { return m_airsBeforeSeasonNumber.value_or(-1); }
    void setAirsBeforeSeasonNumber(int newAirsBeforeSeasonNumber) { m_airsBeforeSeasonNumber = newAirsBeforeSeasonNumber; emit airsBeforeSeasonNumberChanged(newAirsBeforeSeasonNumber); }
    int airsAfterSeasonNumber() const { return m_airsAfterSeasonNumber.value_or(-1); }
    void setAirsAfterSeasonNumber(int newAirsAfterSeasonNumber) { m_airsAfterSeasonNumber = newAirsAfterSeasonNumber; emit airsAfterSeasonNumberChanged(newAirsAfterSeasonNumber); }
    int airsBeforeEpisodeNumber() const { return m_airsBeforeEpisodeNumber.value_or(-1); }
    void setAirsBeforeEpisodeNumber(int newAirsBeforeEpisodeNumber) { m_airsBeforeEpisodeNumber = newAirsBeforeEpisodeNumber; emit airsBeforeEpisodeNumberChanged(newAirsBeforeEpisodeNumber); }

    bool canDelete() const { return m_canDelete.value_or(false); }
    void setCanDelete(bool newCanDelete) { m_canDelete = newCanDelete; emit canDeleteChanged(newCanDelete); }
    bool canDownload() const { return m_canDownload.value_or(false); }
    void setCanDownload(bool newCanDownload) { m_canDownload = newCanDownload; emit canDownloadChanged(newCanDownload); }
    bool hasSubtitles() const { return m_hasSubtitles.value_or(false); }
    void setHasSubtitles(bool newHasSubtitles) { m_hasSubtitles = newHasSubtitles; emit hasSubtitlesChanged(newHasSubtitles); }
    bool supportsSync() const { return m_supportsSync.value_or(false); }
    void setSupportsSync(bool newSupportsSync) { m_supportsSync = newSupportsSync; emit supportsSyncChanged(newSupportsSync); }

    // Handpicked, important ones
    int productionYear() const { return m_productionYear.value_or(-1); }
    void setProductionYear(int newProductionYear) { m_productionYear = newProductionYear; emit productionYearChanged(newProductionYear); }
    int indexNumber() const { return m_indexNumber.value_or(-1); }
    void setIndexNumber(int newIndexNumber) { m_indexNumber = newIndexNumber; emit indexNumberChanged(newIndexNumber); }

signals:
    void jellyfinIdChanged(const QString &newId);
    void nameChanged(const QString &newName);
    void originalTitleChanged(const QString &newOriginalTitle);
    void serverIdChanged(const QString &newServerId);
    void etagChanged(const QString &newEtag);
    void sourceTypeChanged(const QString &sourceType);
    void playlistItemIdChanged(const QString &playlistItemIdChanged);
    void dateCreatedChanged(QDateTime newDateCreatedChanged);
    void dateLastMediaAddedChanged(QDateTime newDateLastMediaAdded);
    void extraTypeChanged(const QString &newExtraType);
    void airsBeforeSeasonNumberChanged(int newAirsBeforeSeasonNumber);
    void airsAfterSeasonNumberChanged(int newAirsAfterSeasonNumber);
    void airsBeforeEpisodeNumberChanged(int newAirsAfterEpisodeNumber);
    bool canDeleteChanged(bool newCanDelete);
    void canDownloadChanged(bool newCanDownload);
    void hasSubtitlesChanged(bool newHasSubtitles);
    void preferredMetadataLanguageChanged(const QString &newPreferredMetadataLanguage);
    void preferredMetadataCountryCodeChanged(const QString &newPreferredMetadataCountryCode);
    void supportsSyncChanged(bool newSupportsSync);
    void containerChanged(const QString &newContainer);
    void sortNameChanged(const QString &newSortName);
    void forcedSortNameChanged(const QString &newForcedSortName);
    void premiereDateChanged(QDateTime newPremiereDate);

    // Handpicked, important ones
    void overviewChanged(const QString &newOverview);
    void productionYearChanged(int newProductionYear);
    void indexNumberChanged(int newIndexNumber);

public slots:
    /**
     * @brief (Re)loads the item from the Jellyfin server.
     */
    void reload() override;
protected:
    QString m_id;
    QString m_name;
    QString m_originalTitle;
    QString m_serverId;
    QString m_etag;
    QString m_sourceType;
    QString m_playlistItemId;
    QDateTime m_dateCreated;
    QDateTime m_dateLastMediaAdded;
    QString m_extraType;
    std::optional<int> m_airsBeforeSeasonNumber = std::nullopt;
    std::optional<int> m_airsAfterSeasonNumber = std::nullopt;
    std::optional<int> m_airsBeforeEpisodeNumber = std::nullopt;
    std::optional<bool> m_canDelete = std::nullopt;
    std::optional<bool> m_canDownload = std::nullopt;
    std::optional<bool> m_hasSubtitles = std::nullopt;
    QString m_preferredMetadataLanguage;
    QString m_preferredMetadataCountryCode;
    std::optional<bool> m_supportsSync = std::nullopt;
    QString m_container;
    QString m_sortName;
    QString m_forcedSortName;
    QDateTime m_premiereDate;

    // Handpicked, important ones
    QString m_overview;
    std::optional<int> m_productionYear = std::nullopt;
    std::optional<int> m_indexNumber = std::nullopt;
};

void registerSerializableJsonTypes(const char* URI);
}

#endif // JELLYFINITEM_H
