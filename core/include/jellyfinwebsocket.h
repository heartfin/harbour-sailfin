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

#include "jellyfinapiclient.h"

namespace Jellyfin {
class ApiClient;
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
        ForceKeepAlive,
        KeepAlive
    };
    Q_ENUM(MessageType)
public slots:
    void open();
private slots:
    void textMessageReceived(const QString &message);
    void onConnected();
    void onDisconnected();

    void sendKeepAlive();
signals:
    void commandReceived(QString arts, QVariantMap args);

protected:
    ApiClient *m_apiClient;
    QWebSocket m_webSocket;

    QTimer m_keepAliveTimer;


    void setupKeepAlive(int data);
    void sendMessage(MessageType type, QJsonValue data = QJsonValue());
    QString generateMessageId();
};
}

#endif // JELLYFIN_WEBSOCKET_H
