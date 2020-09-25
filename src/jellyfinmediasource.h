#ifndef JELLYFIN_MEDIA_SOURCE_H
#define JELLYFIN_MEDIA_SOURCE_H

#include <QJsonArray>
#include <QJsonObject>
#include <QObject>

#include <QUrlQuery>

#include <QtMultimedia/QMediaPlayer>


#include "jellyfinapiclient.h"

namespace Jellyfin {

class MediaSource : public QObject {
    Q_OBJECT
public:
    explicit MediaSource(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient)
    Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
    Q_PROPERTY(QString streamUrl READ streamUrl NOTIFY streamUrlChanged)
    Q_PROPERTY(bool autoOpen MEMBER m_autoOpen NOTIFY autoOpenChanged)
    Q_PROPERTY(QMediaPlayer *mediaPlayer READ mediaPlayer)
    Q_PROPERTY(bool autoPlay MEMBER m_autoPlay)

    QString itemId() const { return m_itemId; }
    void setItemId(const QString &newItemId);

    QString streamUrl() const { return m_streamUrl; }

    QMediaPlayer *mediaPlayer() { return m_mediaPlayer; }
signals:
    void itemIdChanged(const QString &newItemId);
    void streamUrlChanged(const QString &newStreamUrl);
    void autoOpenChanged(bool autoOpen);

public slots:
    void play();
    void pause();
    void stop();

private:
    ApiClient *m_apiClient = nullptr;
    QMediaPlayer *m_mediaPlayer = nullptr;
    QString m_itemId;
    QString m_streamUrl;
    QString m_playSessionId;
    /**
     * @brief Whether to automatically open the livestream of the item;
     */
    bool m_autoOpen = false;
    bool m_autoPlay = false;

    void fetchStreamUrl();
    void setStreamUrl(const QString &streamUrl);
};

}

#endif // JELLYFIN_MEDIA_SOURCE_H
