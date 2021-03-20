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

#ifndef JELLYFIN_MODEL_ITEM_H
#define JELLYFIN_MODEL_ITEM_H

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

#include <QDateTime>
#include <QDebug>
#include <QList>
#include <QObject>
#include <QSharedPointer>
#include <QUuid>

#include <optional>

#include <cmath>

/*#include "dto.h"
#include "mediastream.h"
#include "namedguidpair.h"
#include "userdata.h"*/

#include "../DTO/baseitemdto.h"

namespace Jellyfin{

namespace Model {

class Item : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE explicit Item(QObject *parent = nullptr);

    Q_PROPERTY(QUuid jellyfinId READ jellyfinId NOTIFY jellyfinIdChanged)

    // Based on https://github.com/jellyfin/jellyfin/blob/907695dec7fda152d0e17c1197637bc0e17c9928/MediaBrowser.Model/Dto/BaseItemDto.cs
    // I copy, pasted and replaced. I feel like a Go programmer implementing generic containers.
    // If this were D, I would've writed a compile-time C# parser to parse that source code at compile time, extract
    // the properties and generate a class based on that.
    // Doing that in C++ would be more difficult and I dislike qmake. Does it even support running programs at compile time?
    // But here I am, using ctrl-C++

    // Please keep the order of the properties the same as in the file linked above.
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(QString originalTitle READ originalTitle NOTIFY originalTitleChanged)
    Q_PROPERTY(QString serverId READ serverId NOTIFY serverIdChanged)
    Q_PROPERTY(QString etag READ etag NOTIFY etagChanged)
    Q_PROPERTY(QString sourceType READ sourceType NOTIFY sourceTypeChanged)
    Q_PROPERTY(QString playlistItemId READ playlistItemId NOTIFY playlistItemIdChanged)
    Q_PROPERTY(QDateTime dateCreated READ dateCreated NOTIFY dateCreatedChanged)
    Q_PROPERTY(QDateTime dateLastMediaAdded READ dateLastMediaAdded NOTIFY dateLastMediaAddedChanged)
    Q_PROPERTY(QString extraType READ extraType NOTIFY extraTypeChanged)
    Q_PROPERTY(int airsBeforeSeasonNumber READ airsBeforeSeasonNumber NOTIFY airsBeforeSeasonNumberChanged)
    Q_PROPERTY(int airsAfterSeasonNumber READ airsAfterSeasonNumber NOTIFY airsAfterSeasonNumberChanged)
    Q_PROPERTY(int airsBeforeEpisodeNumber READ airsBeforeEpisodeNumber NOTIFY airsBeforeEpisodeNumberChanged)
    /*Q_PROPERTY(bool canDelete READ canDelete NOTIFY canDeleteChanged)
    Q_PROPERTY(bool canDownload READ canDownload NOTIFY canDownloadChanged)
    Q_PROPERTY(bool hasSubtitles READ hasSubtitles NOTIFY hasSubtitlesChanged)
    Q_PROPERTY(QString preferredMetadataLanguage READ preferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)
    Q_PROPERTY(QString preferredMetadataCountryCode READ preferredMetadataCountryCode NOTIFY preferredMetadataCountryCodeChanged)
    Q_PROPERTY(bool supportsSync READ supportsSync NOTIFY supportsSyncChanged)
    Q_PROPERTY(QString container READ container NOTIFY containerChanged)
    Q_PROPERTY(QString sortName READ sortName NOTIFY sortNameChanged)
    Q_PROPERTY(QString forcedSortName READ forcedSortName NOTIFY forcedSortNameChanged)
    //SKIP: Video3DFormat
    Q_PROPERTY(QDateTime premiereData READ premiereDate NOTIFY premiereDateChanged)
    //SKIP: ExternalUrls
    //SKIP: MediaSources
    Q_PROPERTY(float criticRating READ criticRating NOTIFY criticRatingChanged)
    Q_PROPERTY(QStringList productionLocations READ productionLocations NOTIFY productionLocationsChanged)

    // Handpicked, important ones
    Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks NOTIFY runTimeTicksChanged)
    Q_PROPERTY(QString overview READ overview NOTIFY overviewChanged)
    Q_PROPERTY(int productionYear READ productionYear NOTIFY productionYearChanged)
    Q_PROPERTY(int indexNumber READ indexNumber NOTIFY indexNumberChanged)
    Q_PROPERTY(int indexNumberEnd READ indexNumberEnd NOTIFY indexNumberEndChanged)
    Q_PROPERTY(bool isFolder READ isFolder NOTIFY isFolderChanged)
    Q_PROPERTY(QString type READ type NOTIFY typeChanged)
    Q_PROPERTY(QString parentBackdropItemId READ parentBackdropItemId NOTIFY parentBackdropItemIdChanged)
    Q_PROPERTY(QStringList parentBackdropImageTags READ parentBackdropImageTags NOTIFY parentBackdropImageTagsChanged)
    Q_PROPERTY(UserData *userData READ userData NOTIFY userDataChanged)
    Q_PROPERTY(int recursiveItemCount READ recursiveItemCount NOTIFY recursiveItemCountChanged)
    Q_PROPERTY(int childCount READ childCount NOTIFY childCountChanged)
    Q_PROPERTY(QString albumArtist READ albumArtist NOTIFY albumArtistChanged)
    Q_PROPERTY(QVariantList albumArtists READ albumArtists NOTIFY albumArtistsChanged)
    Q_PROPERTY(QString seriesName READ seriesName NOTIFY seriesNameChanged)
    Q_PROPERTY(QString seasonName READ seasonName NOTIFY seasonNameChanged)
    Q_PROPERTY(QList<MediaStream *> __list__mediaStreams MEMBER __list__m_mediaStreams NOTIFY mediaStreamsChanged)
    Q_PROPERTY(QVariantList mediaStreams READ mediaStreams NOTIFY mediaStreamsChanged STORED false)
    Q_PROPERTY(QStringList artists READ artists NOTIFY artistsChanged)
    // Why is this a QJsonObject? Well, because I couldn't be bothered to implement the deserialisations of
    // a QHash at the moment.
    Q_PROPERTY(QJsonObject imageTags READ imageTags NOTIFY imageTagsChanged)
    Q_PROPERTY(QStringList backdropImageTags READ backdropImageTags NOTIFY backdropImageTagsChanged)
    Q_PROPERTY(QJsonObject imageBlurHashes READ imageBlurHashes NOTIFY imageBlurHashesChanged)
    Q_PROPERTY(QString mediaType READ mediaType READ mediaType NOTIFY mediaTypeChanged)
    Q_PROPERTY(int width READ width NOTIFY widthChanged)
    Q_PROPERTY(int height READ height NOTIFY heightChanged)*/

    QUuid jellyfinId() const { return m_data->jellyfinId(); }
    QString name() const { return m_data->name(); }
    QString originalTitle() const { return m_data->originalTitle(); }
    QString serverId() const { return m_data->serverId(); }
    QString etag() const { return m_data->etag(); }
    QString sourceType() const { return m_data->sourceType(); }
    QString playlistItemId() const { return m_data->playlistItemId(); }
    QDateTime dateCreated() const { return m_data->dateCreated(); }
    QDateTime dateLastMediaAdded() const { return m_data->dateLastMediaAdded(); }
    QString extraType() const { return m_data->extraType(); }
    int airsBeforeSeasonNumber() const { return m_data->airsBeforeSeasonNumber(); }
    int airsAfterSeasonNumber() const { return m_data->airsAfterSeasonNumber(); }
    int airsBeforeEpisodeNumber() const { return m_data->airsBeforeEpisodeNumber(); }

    QSharedPointer<Jellyfin::DTO::BaseItemDto> data() const { return m_data; }
signals:
    void jellyfinIdChanged(const QUuid &newId);
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
    //void userDataChanged(UserData *newUserData);
    void recursiveItemCountChanged(int newRecursiveItemCount);
    void childCountChanged(int newChildCount);
    void albumArtistChanged(const QString &newAlbumArtist);
    //void albumArtistsChanged(NameGuidPair *newAlbumArtists);
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
protected:
    QSharedPointer<Jellyfin::DTO::BaseItemDto> m_data;
};

} // NS Model
} // NS Jellyfin

#endif // JELLYFIN_MODEL_ITEM_H
