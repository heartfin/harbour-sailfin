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

#ifndef JELLYFIN_ITEM_H
#define JELLYFIN_ITEM_H

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

#include <QDateTime>
#include <QDebug>
#include <QList>
#include <QObject>

#include <optional>

#include <cmath>

#include "dto.h"
#include "mediastream.h"
#include "namedguidpair.h"
#include "userdata.h"

namespace Jellyfin {
class ApiClient;
namespace DTO {

class Item : public RemoteData {
    Q_OBJECT
public:
    Q_INVOKABLE explicit Item(QObject *parent = nullptr);
    Item(QString itemId, ApiClient *apiClient, QObject *parent = nullptr);

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
    Q_PROPERTY(int parentIndexNumber READ parentIndexNumber WRITE setParentIndexNumber NOTIFY parentIndexNumberChanged)
    Q_PROPERTY(bool isFolder READ isFolder WRITE setIsFolder NOTIFY isFolderChanged)
    Q_PROPERTY(QString parentID MEMBER m_parentId READ parentId NOTIFY parentIdChanged)
    Q_PROPERTY(QString type MEMBER m_type NOTIFY typeChanged)
    Q_PROPERTY(QString parentBackdropItemId MEMBER m_parentBackdropItemId NOTIFY parentBackdropItemIdChanged)
    Q_PROPERTY(QStringList parentBackdropImageTags MEMBER m_parentBackdropImageTags NOTIFY parentBackdropImageTagsChanged)
    Q_PROPERTY(UserData *userData READ userData WRITE setUserData NOTIFY userDataChanged)
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
    int parentIndexNumber() const { return m_parentIndexNumber.value_or(-1); }
    void setParentIndexNumber(int newParentIndexNumber) { m_parentIndexNumber= std::optional<int>(newParentIndexNumber); emit parentIndexNumberChanged(newParentIndexNumber); }
    bool isFolder() const { return m_isFolder.value_or(false); }
    void setIsFolder(bool newIsFolder) { m_isFolder = newIsFolder; emit isFolderChanged(newIsFolder); }
    QString parentId() const { return m_parentId; }
    UserData *userData() const { return m_userData; }
    void setUserData(UserData *newUserData) {
        if (m_userData != nullptr) {
            m_userData->deleteLater();
        }
        m_userData = newUserData;
        emit userDataChanged(newUserData);
    }
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
    void parentIdChanged(const QString &newParentId);
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
    void onUserDataChanged(const QString &itemId, UserData *userData);
protected:
    // Overrides
    QString getDataUrl() const override;
    bool canReload() const override;

    QString m_id = QStringLiteral("");
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
    std::optional<int> m_parentIndexNumber = std::nullopt;
    std::optional<bool> m_isFolder = std::nullopt;
    QString m_parentId;
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
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_ITEM_H
