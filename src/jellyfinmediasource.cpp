#include "jellyfinmediasource.h"

namespace Jellyfin {

MediaSource::MediaSource(QObject *parent)
    : QObject(parent),
    m_mediaPlayer(new QMediaPlayer(this)){

}

void MediaSource::fetchStreamUrl() {
    QUrlQuery params;
    params.addQueryItem("UserId", m_apiClient->userId());
    params.addQueryItem("StartTimeTicks", "0");
    params.addQueryItem("IsPlayback", "true");
    params.addQueryItem("AutoOpenLiveStream", this->m_autoOpen ? "true" : "false");
    params.addQueryItem("MediaSourceId", this->m_itemId);
    params.addQueryItem("SubtitleStreamIndex", "-1");
    params.addQueryItem("AudioStreamIndex", "0");

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


            emit this->streamUrlChanged(this->m_streamUrl);
            qDebug() << "Found stream url: " << this->m_streamUrl;
            /*QNetworkRequest req;
            req.setUrl(this->m_streamUrl);
            m_apiClient->addTokenHeader(req);
            m_mediaPlayer->setMedia(QMediaContent(req));
            if (m_autoPlay) m_mediaPlayer->play();*/
        }

        rep->deleteLater();
    });
}

void MediaSource::setItemId(const QString &newItemId) {
    if (m_apiClient == nullptr) {
        qWarning() << "apiClient is not set on this MediaSource instance! Aborting.";
        return;
    }
    if (m_mediaPlayer == nullptr) {
        qWarning() << "mediaPlayer is not set on this MediaSource instance! Aborting.";
        return;
    }
    this->m_itemId = newItemId;
    // Deinitialize the streamUrl
    setStreamUrl("");
    if (!newItemId.isEmpty()) {
        fetchStreamUrl();
    }
}

void MediaSource::setStreamUrl(const QString &streamUrl) {
    this->m_streamUrl = streamUrl;
    emit streamUrlChanged(streamUrl);
}

void MediaSource::play() {
    this->m_mediaPlayer->play();
}

void MediaSource::pause() {
    this->m_mediaPlayer->pause();
}

void MediaSource::stop() {
    this->m_mediaPlayer->stop();
}

}
