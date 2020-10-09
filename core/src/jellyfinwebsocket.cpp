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
#include "jellyfinwebsocket.h"

namespace Jellyfin {
WebSocket::WebSocket(ApiClient *client)
    : QObject (client), m_apiClient(client){
    connect(&m_webSocket, &QWebSocket::connected, this, &WebSocket::onConnected);
    connect(&m_webSocket, &QWebSocket::disconnected, this, &WebSocket::onDisconnected);
    connect(&m_webSocket, static_cast<void (QWebSocket::*)(QAbstractSocket::SocketError)>(&QWebSocket::error),
            this, [this](QAbstractSocket::SocketError error) {
        Q_UNUSED(error)
        qDebug() << "Connection error: " <<  m_webSocket.errorString();
    });
}

void WebSocket::open() {
    QUrlQuery query;
    query.addQueryItem("api_key", m_apiClient->token());
    query.addQueryItem("deviceId", m_apiClient->m_deviceId);
    QUrl connectionUrl(m_apiClient->baseUrl());
    connectionUrl.setScheme(connectionUrl.scheme() == "http" ? "ws" : "wss");
    connectionUrl.setPath("/socket");
    connectionUrl.setQuery(query);
    m_webSocket.open(connectionUrl);
    qDebug() << "Opening WebSocket connection to " << m_webSocket.requestUrl();
}

void WebSocket::onConnected() {
    connect(&m_webSocket, &QWebSocket::textMessageReceived, this, &WebSocket::textMessageReceived);
}

void WebSocket::onDisconnected() {
    disconnect(&m_webSocket, &QWebSocket::textMessageReceived, this, &WebSocket::textMessageReceived);
    m_keepAliveTimer.stop();
}

void WebSocket::textMessageReceived(const QString &message) {
    QJsonDocument doc = QJsonDocument::fromJson(message.toUtf8());
    if (doc.isNull() || !doc.isObject()) {
        qWarning() << "Malformed message received over WebSocket: parse error or root not an object.";
        return;
    }
    QJsonObject messageRoot = doc.object();
    if (!messageRoot.contains("MessageType") || !messageRoot.contains("Data")) {
        qWarning() << "Malformed message received over WebSocket: no MessageType and Data set.";
        return;
    }

    // Convert the type so we can use it in our enums.
    QString messageTypeStr = messageRoot["MessageType"].toString();
    bool ok;
    MessageType messageType = static_cast<MessageType>(QMetaEnum::fromType<WebSocket::MessageType>().keyToValue(messageTypeStr.toLatin1(), &ok));
    if (!ok) {
        qWarning() << "Unknown message arrived: " << messageTypeStr;
        if (messageRoot.contains("Data")) {
            qDebug() << "with data: " << QJsonDocument(messageRoot["Data"].toObject()).toJson();
        }
        return;
    }

    QJsonValue data = messageRoot["Data"];
    qDebug() << "Received message: " << messageTypeStr;

    switch (messageType) {
    case ForceKeepAlive:
        setupKeepAlive(data.toInt(-1));
        break;
    case KeepAlive:
        //TODO: do something?
        break;
    case UserDataChanged: {
        QJsonObject data2 = data.toObject();
        if (data2["UserId"] != m_apiClient->userId()) {
            qDebug() << "Received UserDataCHanged for other user";
            break;
        }
        QJsonArray userDataList = data2["UserDataList"].toArray();
        for (QJsonValue val: userDataList) {
            QSharedPointer<UserData> userData(new UserData, &QObject::deleteLater);
            userData->deserialize(val.toObject());
            m_apiClient->onUserDataChanged(userData->itemId(), userData);
        }

    }
        break;
    }

}

void WebSocket::sendKeepAlive() {
    sendMessage(KeepAlive);
}

void WebSocket::setupKeepAlive(int data) {
    // Data is timeout in seconds, we want to send a keepalive at half the timeout
    m_keepAliveTimer.setInterval(data * 500);
    m_keepAliveTimer.setSingleShot(false);
    connect(&m_keepAliveTimer, &QTimer::timeout, this, &WebSocket::sendKeepAlive);
    m_keepAliveTimer.start();
    sendKeepAlive();
}

QString WebSocket::generateMessageId() {
    return QUuid::createUuid().toString();
}

void WebSocket::sendMessage(MessageType type, QJsonValue data) {
    QJsonObject root;
    root["MessageType"] = QVariant::fromValue(type).toString();
    root["Data"] = data;
    QString message = QJsonDocument(root).toJson(QJsonDocument::Compact);
    m_webSocket.sendTextMessage(message);
    qDebug() << "Sent message: " << message;
}
}
