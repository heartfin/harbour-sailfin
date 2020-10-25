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

#include "JellyfinQt/jellyfinplaybackmanager.h"

namespace Jellyfin {

PlaybackManager::PlaybackManager(QObject *parent)
    : QObject(parent) {
    m_updateTimer.setInterval(10000); // 10 seconds
    m_updateTimer.setSingleShot(false);
    connect(&m_updateTimer, &QTimer::timeout, this, &PlaybackManager::updatePlaybackInfo);
}

void PlaybackManager::fetchStreamUrl() {
    QUrlQuery params;
    params.addQueryItem("UserId", m_apiClient->userId());
    params.addQueryItem("StartTimeTicks", QString::number(m_position));
    params.addQueryItem("IsPlayback", "true");
    params.addQueryItem("AutoOpenLiveStream", this->m_autoOpen ? "true" : "false");
    params.addQueryItem("MediaSourceId", this->m_itemId);
    params.addQueryItem("SubtitleStreamIndex", QString::number(m_subtitleIndex));
    params.addQueryItem("AudioStreamIndex", QString::number(m_audioIndex));

    QJsonObject root;
    root["DeviceProfile"] = m_apiClient->playbackDeviceProfile();

    QNetworkReply *rep = m_apiClient->post("/Items/" + this->m_itemId + "/PlaybackInfo", QJsonDocument(root), params);
    connect(rep, &QNetworkReply::finished, this, [this, rep]() {
        QJsonObject root = QJsonDocument::fromJson(rep->readAll()).object();
        this->m_playSessionId = root["PlaySessionId"].toString();
        qDebug() << "Session id: " << this->m_playSessionId;

        if (this->m_autoOpen) {
            QJsonArray mediaSources = root["MediaSources"].toArray();
            //FIXME: relies on the fact that the returned transcode url always has a query!
            this->m_streamUrl = this->m_apiClient->baseUrl()
                    + mediaSources[0].toObject()["TranscodingUrl"].toString();

            this->m_playMethod = Transcode;
            emit this->streamUrlChanged(this->m_streamUrl);
            qDebug() << "Found stream url: " << this->m_streamUrl;
        }

        rep->deleteLater();
    });
}

void PlaybackManager::setItemId(const QString &newItemId) {
    if (m_apiClient == nullptr) {
        qWarning() << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }

    this->m_itemId = newItemId;
    // Deinitialize the streamUrl
    setStreamUrl("");
    if (!newItemId.isEmpty()) {
        fetchStreamUrl();
    }
}

void PlaybackManager::setStreamUrl(const QString &streamUrl) {
    this->m_streamUrl = streamUrl;
    emit streamUrlChanged(streamUrl);
}

void PlaybackManager::setPosition(qint64 position) {
    if (position == 0 && m_position != 0) {
        // Save the old position when stop gets called. The QMediaPlayer will try to set
        // position to 0 when stopped, but we don't want to report that to Jellyfin. We
        // want the old position.
        m_stopPosition = m_position;
    }
    m_position = position;
    emit positionChanged(position);
}

void PlaybackManager::setState(QMediaPlayer::State newState) {
    if (m_state == newState) return;
    if (m_state == QMediaPlayer::StoppedState) {
        // We're transitioning from stopped to either playing or paused.
        // Set up the recurring timer
        m_updateTimer.start();
        postPlaybackInfo(Started);
    } else if (newState == QMediaPlayer::StoppedState) {
        // We've stopped playing the media. Post a stop signal.
        m_updateTimer.stop();
        postPlaybackInfo(Stopped);
    } else {
        postPlaybackInfo(Progress);
    }


    m_state = newState;
    emit this->stateChanged(newState);
}

void PlaybackManager::updatePlaybackInfo() {
    postPlaybackInfo(Progress);
}

void PlaybackManager::postPlaybackInfo(PlaybackInfoType type) {
    QJsonObject root;

    root["ItemId"] = m_itemId;
    root["SessionId"] = m_playSessionId;

    switch(type) {
    case Started: // FALLTHROUGH
    case Progress:

        root["IsPaused"] = m_state != QMediaPlayer::PlayingState;
        root["IsMuted"] = false;

        root["AudioStreamIndex"] = m_audioIndex;
        root["SubtitleStreamIndex"] = m_subtitleIndex;

        root["PlayMethod"] = QVariant::fromValue(m_playMethod).toString();
        root["PositionTicks"] = m_position;
        break;
    case Stopped:
        root["PositionTicks"] = m_stopPosition;
        break;
    }

    QString path;
    switch (type) {
    case Started:
        path = "/Sessions/Playing";
        break;
    case Progress:
        path = "/Sessions/Playing/Progress";
        break;
    case Stopped:
        path = "/Sessions/Playing/Stopped";
        break;
    }

    QNetworkReply *rep = m_apiClient->post(path, QJsonDocument(root));
    connect(rep, &QNetworkReply::finished, this, [rep](){
        rep->deleteLater();
    });
    m_apiClient->setDefaultErrorHandler(rep);
}

}
