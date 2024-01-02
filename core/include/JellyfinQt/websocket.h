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
#ifndef JELLYFIN_WEBSOCKET_H
#define JELLYFIN_WEBSOCKET_H

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QDebug>
#include <QObject>
#include <QtGlobal>
#include <QTimer>
#include <QUuid>

#include <QtWebSockets/QWebSocket>

#include "apiclient.h"

Q_DECLARE_LOGGING_CATEGORY(jellyfinWebSocket);

namespace Jellyfin {
class ApiClient;


namespace DTO {
    class UserItemDataDto;
    using UserData = UserItemDataDto;
}
/**
 * @brief Keeps a connection with the Jellyfin server to receive real time updates.
 *
 * This class will parse these messages and send them to ApiClient, which will emit signals for
 * the interested classes.
 */
class WebSocket : public QObject {
    Q_OBJECT
public:
    /**
     * @brief WebSocket creates a webSocket for a Jellyfin server to handle real time updates.
     * @param client The client to create the socket for.
     *
     * The socket will automatically set the ApiClient to its parent.
     */
    explicit WebSocket(ApiClient *client);
    enum MessageType {
        /**
         * @brief Server to client: instruct client to send periodical KeepAlive messages
         */
        ForceKeepAlive,
        /**
         * @brief Client to server: keep the connection alive
         */
        KeepAlive,
        /**
         * @brief Server to client: user data for an item has changed.
         */
        UserDataChanged,
        /**
         * @brief Client to server: Subscribe to playback update sessions.
         */
        SessionsStart,
        /**
         * @brief Client to server: unsubscribe from playback session updates
         */
        SessionsStop,
        /**
         * @brief Server to client: session information has changed
         */
        Sessions
    };
    Q_PROPERTY(QAbstractSocket::SocketState state READ state NOTIFY stateChanged)
    Q_ENUM(MessageType)

    QAbstractSocket::SocketState state() const {
        return m_webSocket.state();
    }
public slots:
    void open();
    void subscribeToSessionInfo();
    void unsubscribeToSessionInfo();
private slots:
    void textMessageReceived(const QString &message);
    void onConnected();
    void onDisconnected();

    void sendKeepAlive();
    void onWebsocketStateChanged(QAbstractSocket::SocketState newState) { emit stateChanged(newState); }
signals:
    void commandReceived(QString command, QVariantMap args);
    void stateChanged(QAbstractSocket::SocketState newState);

protected:
    ApiClient *m_apiClient;
    QWebSocket m_webSocket;

    QTimer m_keepAliveTimer;
    QTimer m_retryTimer;
    int m_reconnectAttempt = 0;
    int m_sessionInfoSubscribeCount = 0;


    void setupKeepAlive(int data);
    void sendMessage(MessageType type, QJsonValue data = QJsonValue());
    QString generateMessageId();
};
}

#endif // JELLYFIN_WEBSOCKET_H
