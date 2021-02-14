/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

#ifndef JELLYFIN_ITEM_H
#define JELLYFIN_ITEM_H

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QDateTime>
#include <QObject>
#include <QRegularExpression>
#include <QtQml>

#include <QNetworkReply>

#include <optional>

#include <cmath>

#include "jellyfinapiclient.h"
#include "jsonhelper.h"

namespace Jellyfin {
class ApiClient;
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
    QJsonObject serialize(bool capitalize = true) const;
private:
    QVariant jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root);
    QJsonValue variantToJson(const QVariant var) const;
    QVariant deserializeQobject(const QJsonObject &obj, const QMetaProperty &prop);

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
    static QString toPascalCase(QString st);

    static const QRegularExpression m_listExpression;
    /**
     * @brief Qt is doing weird. I'll keep track of the metatypes myself.
     */
    QHash<QString, const QMetaType *> m_nameMetatypeMap;
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
    /**
     * @brief Convenience signal for status == RemoteData.Ready.
     */
    void ready();
public slots:

    /**
     * @brief Overload this method to reimplement the fetching mechanism to
     * populate the RemoteData with data from the server.
     *
     * The default implementation makes a GET request to getDataUrl() and parses the resulting JSON,
     * which should be enough for most cases. Consider overriding getDataUrl() and
     * canRelaod() if possible. Manual overrides need to make sure that
     * they're calling setStatus(Status), setError(QNetworkReply::NetworkError) and
     * setErrorString() to let the QML side know what this thing is up to.
     */
    virtual void reload();
protected:
    /**
     * @brief Subclasses should implement this to determine if they can
     * load data from the server.
     *
     * Usage cases include checking if the
     * required properties, such as the item id are set.
     */
    virtual bool canReload() const = 0;

    /**
     * @brief Construct the URL to fetch the data from.
     * @return The URL to load data from.
     */
    virtual QString getDataUrl() const = 0;

    void setStatus(Status newStatus);
    void setError(QNetworkReply::NetworkError error);
    void setErrorString(const QString &newErrorString);
    ApiClient *m_apiClient = nullptr;
private:
    Status m_status = Uninitialised;
    QNetworkReply::NetworkError m_error = QNetworkReply::NoError;
    QString m_errorString;
};

class NameGuidPair : public JsonSerializable {
    Q_OBJECT
public:
    Q_INVOKABLE NameGuidPair(QObject *parent = nullptr);
    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    // Once again the Jellyfin id workaround
    Q_PROPERTY(QString jellyfinId MEMBER m_id NOTIFY jellyfinIdChanged)
signals:
    void nameChanged(const QString &newName);
    void jellyfinIdChanged(const QString &newJellyfinId);
private:
    QString m_name;
    QString m_id;
};

class User : public RemoteData {
    Q_OBJECT
public:
    Q_INVOKABLE User(QObject *parent = nullptr);

    Q_PROPERTY(QString userId MEMBER m_userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(QString primaryImageTag MEMBER m_primaryImageTag NOTIFY primaryImageTagChanged)

    void setUserId(const QString &newUserId) {
        this->m_userId = newUserId;
        emit userIdChanged(newUserId);
        reload();
    }
signals:
    void userIdChanged(const QString &newUserId);
    void nameChanged(const QString &newName);
    void primaryImageTagChanged(const QString &newPrimaryImageTag);
protected:
    QString getDataUrl() const override;
    bool canReload() const override;
private:
    QString m_userId;
    QString m_name;
    QString m_primaryImageTag;
};

class MediaStream : public JsonSerializable {
    Q_OBJECT
public:
    Q_INVOKABLE explicit MediaStream(QObject *parent = nullptr);
    MediaStream(const MediaStream &other);
    bool operator==(const MediaStream &other);
    virtual ~MediaStream() { qDebug() << "MediaStream destroyed"; }

    enum MediaStreamType {
        Undefined,
        Audio,
        Video,
        Subtitle,
        EmbeddedImage
    };
    Q_ENUM(MediaStreamType)

    Q_PROPERTY(QString codec MEMBER m_codec NOTIFY codecChanged)
    Q_PROPERTY(QString codecTag MEMBER m_codecTag NOTIFY codecTagChanged)
    Q_PROPERTY(QString language MEMBER m_language NOTIFY languageChanged)
    Q_PROPERTY(QString displayTitle MEMBER m_displayTitle NOTIFY displayTitleChanged)
    Q_PROPERTY(MediaStreamType type MEMBER m_type NOTIFY typeChanged)
    Q_PROPERTY(int index MEMBER m_index NOTIFY indexChanged)
signals:
    void codecChanged(const QString &newCodec);
    void codecTagChanged(const QString &newCodecTag);
    void languageChanged(const QString &newLanguage);
    void displayTitleChanged(const QString &newDisplayTitle);
    void typeChanged(MediaStreamType newType);
    void indexChanged(int newIndex);
private:
    QString m_codec;
    QString m_codecTag;
    QString m_language;
    QString m_displayTitle;
    MediaStreamType m_type = Undefined;
    int m_index = -1;
};

class UserData : public JsonSerializable {
    Q_OBJECT
public:
    Q_INVOKABLE explicit UserData(QObject *parent = nullptr);

    Q_PROPERTY(double playedPercentage READ playedPercentage WRITE setPlayedPercentage RESET resetPlayedPercentage NOTIFY playedPercentageChanged)
    Q_PROPERTY(qint64 playbackPositionTicks READ playbackPositionTicks WRITE setPlaybackPositionTicks NOTIFY playbackPositionTicksChanged)
    Q_PROPERTY(bool isFavorite READ isFavorite WRITE setIsFavorite NOTIFY isFavoriteChanged)
    Q_PROPERTY(bool likes READ likes WRITE setLikes RESET resetLikes NOTIFY likesChanged)
    Q_PROPERTY(bool played READ played WRITE setPlayed NOTIFY playedChanged)
    Q_PROPERTY(QString itemId READ itemId MEMBER m_itemId);

    double playedPercentage() const { return m_playedPercentage.value_or(0.0); }
    void setPlayedPercentage(double newPlayedPercentage) { m_playedPercentage = newPlayedPercentage; emit playedPercentageChanged(newPlayedPercentage); }
    void resetPlayedPercentage() { m_playedPercentage = std::nullopt; emit playedPercentageChanged(0.0); updateOnServer(); }

    qint64 playbackPositionTicks() const { return m_playbackPositionTicks; }
    void setPlaybackPositionTicks(qint64 newPlaybackPositionTicks) { m_playbackPositionTicks = newPlaybackPositionTicks; emit playbackPositionTicksChanged(newPlaybackPositionTicks); }

    bool played() const { return m_played; }
    void setPlayed(bool newPlayed) { m_played = newPlayed; emit playedChanged(newPlayed); updateOnServer(); }

    bool likes() const { return m_likes.value_or(false); }
    void setLikes(bool newLikes) { m_likes = newLikes; emit likesChanged(newLikes); }
    void resetLikes() { m_likes = std::nullopt; emit likesChanged(false); updateOnServer(); }

    bool isFavorite() const { return m_isFavorite; }
    void setIsFavorite(bool newIsFavorite) { m_isFavorite = newIsFavorite; emit isFavoriteChanged(newIsFavorite); updateOnServer(); }

    const QString &itemId() const { return m_itemId; }
signals:
    void playedPercentageChanged(double newPlayedPercentage);
    void playbackPositionTicksChanged(qint64 playbackPositionTicks);
    void isFavoriteChanged(bool newIsFavorite);
    void likesChanged(bool newLikes);
    void playedChanged(bool newPlayed);
public slots:
    void updateOnServer();
    void onUpdated(QSharedPointer<UserData> other);
private:
    std::optional<double> m_playedPercentage =  std::nullopt;
    qint64 m_playbackPositionTicks = 0;
    bool m_isFavorite = false;
    std::optional<bool> m_likes = std::nullopt;
    bool m_played;
    QString m_itemId;
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

    // Please keep the order of the properties the same as in the file linked above.
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
    Q_PROPERTY(float criticRating READ criticRating WRITE setCriticRating NOTIFY criticRatingChanged)
    Q_PROPERTY(QStringList productionLocations MEMBER m_productionLocations NOTIFY productionLocationsChanged)

    // Handpicked, important ones
    Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks WRITE setRunTimeTicks NOTIFY runTimeTicksChanged)
    Q_PROPERTY(QString overview MEMBER m_overview NOTIFY overviewChanged)
    Q_PROPERTY(int productionYear READ productionYear WRITE setProductionYear NOTIFY productionYearChanged)
    Q_PROPERTY(int indexNumber READ indexNumber WRITE setIndexNumber NOTIFY indexNumberChanged)
    Q_PROPERTY(int indexNumberEnd READ indexNumberEnd WRITE setIndexNumberEnd NOTIFY indexNumberEndChanged)
    Q_PROPERTY(bool isFolder READ isFolder WRITE setIsFolder NOTIFY isFolderChanged)
    Q_PROPERTY(QString type MEMBER m_type NOTIFY typeChanged)
    Q_PROPERTY(QString parentBackdropItemId MEMBER m_parentBackdropItemId NOTIFY parentBackdropItemIdChanged)
    Q_PROPERTY(QStringList parentBackdropImageTags MEMBER m_parentBackdropImageTags NOTIFY parentBackdropImageTagsChanged)
    Q_PROPERTY(UserData *userData MEMBER m_userData NOTIFY userDataChanged)
    Q_PROPERTY(int recursiveItemCount READ recursiveItemCount WRITE setRecursiveItemCount NOTIFY recursiveItemCountChanged)
    Q_PROPERTY(int childCount READ childCount WRITE setChildCount NOTIFY childCountChanged)
    Q_PROPERTY(QString albumArtist MEMBER m_albumArtist NOTIFY albumArtistChanged)
    Q_PROPERTY(QList<NameGuidPair *> __list__albumArtists MEMBER __list__m_albumArtists NOTIFY albumArtistsChanged)
    Q_PROPERTY(QVariantList albumArtists MEMBER m_albumArtists NOTIFY albumArtistsChanged STORED false)
    Q_PROPERTY(QString seriesName MEMBER m_seriesName NOTIFY seriesNameChanged)
    Q_PROPERTY(QString seasonName MEMBER m_seasonName NOTIFY seasonNameChanged)
    Q_PROPERTY(QList<MediaStream *> __list__mediaStreams MEMBER __list__m_mediaStreams NOTIFY mediaStreamsChanged)
    Q_PROPERTY(QVariantList mediaStreams MEMBER m_mediaStreams NOTIFY mediaStreamsChanged STORED false)
    Q_PROPERTY(QStringList artists MEMBER m_artists NOTIFY artistsChanged)
    // Why is this a QJsonObject? Well, because I couldn't be bothered to implement the deserialisations of
    // a QHash at the moment.
    Q_PROPERTY(QJsonObject imageTags MEMBER m_imageTags NOTIFY imageTagsChanged)
    Q_PROPERTY(QStringList backdropImageTags MEMBER m_backdropImageTags NOTIFY backdropImageTagsChanged)
    Q_PROPERTY(QJsonObject imageBlurHashes MEMBER m_imageBlurHashes NOTIFY imageBlurHashesChanged)
    Q_PROPERTY(QString mediaType MEMBER m_mediaType READ mediaType NOTIFY mediaTypeChanged)
    Q_PROPERTY(int width MEMBER m_width NOTIFY widthChanged)
    Q_PROPERTY(int height MEMBER m_height NOTIFY heightChanged)

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
    float criticRating() const { return m_criticRating.value_or(std::nanf("")); }
    void setCriticRating(float newCriticRating) { m_criticRating = newCriticRating; emit criticRatingChanged(newCriticRating); }

    // Handpicked, important ones
    qint64 runTimeTicks() const { return m_runTimeTicks.value_or(-1); }
    void setRunTimeTicks(qint64 newRunTimeTicks) { m_runTimeTicks = newRunTimeTicks; emit runTimeTicksChanged(newRunTimeTicks); }
    int productionYear() const { return m_productionYear.value_or(-1); }
    void setProductionYear(int newProductionYear) { m_productionYear = std::optional<int>(newProductionYear); emit productionYearChanged(newProductionYear); }
    int indexNumber() const { return m_indexNumber.value_or(-1); }
    void setIndexNumber(int newIndexNumber) { m_indexNumber = std::optional<int>(newIndexNumber); emit indexNumberChanged(newIndexNumber); }
    int indexNumberEnd() const { return m_indexNumberEnd.value_or(-1); }
    void setIndexNumberEnd(int newIndexNumberEnd) { m_indexNumberEnd = std::optional<int>(newIndexNumberEnd); emit indexNumberEndChanged(newIndexNumberEnd); }
    bool isFolder() const { return m_isFolder.value_or(false); }
    void setIsFolder(bool newIsFolder) { m_isFolder = newIsFolder; emit isFolderChanged(newIsFolder); }
    int recursiveItemCount() const { return m_recursiveItemCount.value_or(-1); }
    void setRecursiveItemCount(int newRecursiveItemCount) { m_recursiveItemCount = newRecursiveItemCount; emit recursiveItemCountChanged(newRecursiveItemCount); }
    int childCount() const { return m_childCount.value_or(-1); }
    void setChildCount(int newChildCount) { m_childCount = newChildCount; emit childCountChanged(newChildCount); }
    QString mediaType() const { return m_mediaType; }

    //QQmlListProperty<MediaStream> mediaStreams() { return toReadOnlyQmlListProperty<MediaStream>(m_mediaStreams); }
    //QList<QObject *> mediaStreams() { return *reinterpret_cast<QList<QObject *> *>(&m_mediaStreams); }
    QVariantList mediaStreams() { QVariantList l; for (auto e: m_mediaStreams) l.append(QVariant::fromValue(e)); return l;}

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
    void criticRatingChanged(float newCriticRating);
    void productionLocationsChanged(QStringList newProductionLocations);

    // Handpicked, important ones
    void runTimeTicksChanged(qint64 newRunTimeTicks);
    void overviewChanged(const QString &newOverview);
    void productionYearChanged(int newProductionYear);
    void indexNumberChanged(int newIndexNumber);
    void indexNumberEndChanged(int newIndexNumberEnd);
    void isFolderChanged(bool newIsFolder);
    void typeChanged(const QString &newType);
    void parentBackdropItemIdChanged();
    void parentBackdropImageTagsChanged();
    void userDataChanged(UserData *newUserData);
    void recursiveItemCountChanged(int newRecursiveItemCount);
    void childCountChanged(int newChildCount);
    void albumArtistChanged(const QString &newAlbumArtist);
    void albumArtistsChanged(NameGuidPair *newAlbumArtists);
    void seriesNameChanged(const QString &newSeriesName);
    void seasonNameChanged(const QString &newSeasonName);
    void mediaStreamsChanged(/*const QList<MediaStream *> &newMediaStreams*/);
    void artistsChanged(const QStringList &newArtists);
    void imageTagsChanged();
    void backdropImageTagsChanged();
    void imageBlurHashesChanged();
    void mediaTypeChanged(const QString &newMediaType);
    void widthChanged(int newWidth);
    void heightChanged(int newHeight);

public slots:
    void onUserDataChanged(const QString &itemId, QSharedPointer<UserData> userData);
protected:
    // Overrides
    QString getDataUrl() const override;
    bool canReload() const override;

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
    std::optional<float> m_criticRating = std::nullopt;
    QStringList m_productionLocations;

    // Handpicked, important ones
    std::optional<qint64> m_runTimeTicks = std::nullopt;
    QString m_overview;
    std::optional<int> m_productionYear = std::nullopt;
    std::optional<int> m_indexNumber = std::nullopt;
    std::optional<int> m_indexNumberEnd = std::nullopt;
    std::optional<bool> m_isFolder = std::nullopt;
    QString m_type;
    QString m_parentBackdropItemId;
    QStringList m_parentBackdropImageTags;
    UserData *m_userData = nullptr;
    std::optional<int> m_recursiveItemCount = std::nullopt;
    std::optional<int> m_childCount = std::nullopt;
    QString m_albumArtist;
    QList<NameGuidPair *> __list__m_albumArtists;
    QVariantList m_albumArtists;
    QString m_seriesName;
    QString m_seasonName;
    QList<MediaStream *> __list__m_mediaStreams;
    QVariantList m_mediaStreams;
    QStringList m_artists;
    QJsonObject m_imageTags;
    QStringList m_backdropImageTags;
    QJsonObject m_imageBlurHashes;
    QString m_mediaType;
    int m_width;
    int m_height;

    template<typename T>
    QQmlListProperty<T> toReadOnlyQmlListProperty(QList<T *> &list) {
        return QQmlListProperty<T>(this, std::addressof(list), &qlist_count, &qlist_at);
    }

    template<typename T>
    static int qlist_count(QQmlListProperty<T> *p) {
        return reinterpret_cast<QList<T *> *>(p->data)->count();
    }

    template<typename T>
    static T *qlist_at(QQmlListProperty<T> *p, int idx) {
        return reinterpret_cast<QList<T *> *>(p->data)->at(idx);
    }
};

void registerSerializableJsonTypes(const char* URI);
}

#endif // JELLYFIN_ITEM_H
