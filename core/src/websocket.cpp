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

#include "JellyfinQt/websocket.h"

#include <JellyfinQt/dto/generalcommand.h>
#include <JellyfinQt/dto/generalcommandtype.h>
#include <JellyfinQt/dto/playstaterequest.h>
#include <JellyfinQt/dto/sessioninfodto.h>
#include <JellyfinQt/dto/useritemdatadto.h>

Q_LOGGING_CATEGORY(jellyfinWebSocket, "jellyfin.websocket");

namespace Jellyfin {

WebSocket::WebSocket(ApiClient *client)
    : QObject (client), m_apiClient(client){
    connect(&m_webSocket, &QWebSocket::connected, this, &WebSocket::onConnected);
    connect(&m_webSocket, &QWebSocket::disconnected, this, &WebSocket::onDisconnected);
    connect(&m_webSocket, static_cast<void (QWebSocket::*)(QAbstractSocket::SocketError)>(&QWebSocket::error),
            this, [this](QAbstractSocket::SocketError error) {
        Q_UNUSED(error)
        qCDebug(jellyfinWebSocket) << "Connection error: " <<  m_webSocket.errorString();
    });
    connect(&m_webSocket, &QWebSocket::stateChanged, this, &WebSocket::onWebsocketStateChanged);
    connect(&m_keepAliveTimer, &QTimer::timeout, this, &WebSocket::sendKeepAlive);
    connect(&m_retryTimer, &QTimer::timeout, this, &WebSocket::open);
    connect(client, &ApiClient::authenticatedChanged, this, [this](bool isAuthenticated) {
        if (isAuthenticated) {
            this->m_reconnectAttempt = 0;
            // https://github.com/heartfin/harbour-sailfin/issues/16
            // Opening a websocket just afther the authentication may cause the application to freeze
            // Therefore, we delay the initialisation :)
            QTimer::singleShot(5'000, this, &WebSocket::open);
        }
    });
}

void WebSocket::open() {
    QUrlQuery query;
    query.addQueryItem("api_key", m_apiClient->token());
    query.addQueryItem("deviceId", m_apiClient->deviceId());
    QUrl connectionUrl(m_apiClient->baseUrl());
    connectionUrl.setScheme(connectionUrl.scheme() == "http" ? "ws" : "wss");
    connectionUrl.setPath("/socket");
    connectionUrl.setQuery(query);
    m_webSocket.open(connectionUrl);
    m_reconnectAttempt++;
    qCDebug(jellyfinWebSocket) << "Opening WebSocket connection to " << m_webSocket.requestUrl() << ", connect attempt " << m_reconnectAttempt;
}

void WebSocket::subscribeToSessionInfo() {
    if (m_sessionInfoSubscribeCount++ == 0) {
        // First argument: initial delay in milliseconds
        // Second argument: periodic update interval in milliseconds
        // Reference: https://github.com/jellyfin/jellyfin/blob/f3c57e6a0ae015dc51cf548a0380d1bed33959c2/MediaBrowser.Controller/Net/BasePeriodicWebSocketListener.cs#L99
        sendMessage(MessageType::SessionsStart, QJsonValue(QStringLiteral("0,5000")));
    }
}

void WebSocket::unsubscribeToSessionInfo() {
    if (--m_sessionInfoSubscribeCount == 0) {
        sendMessage(MessageType::SessionsStop);
    }
}

void WebSocket::onConnected() {
    connect(&m_webSocket, &QWebSocket::textMessageReceived, this, &WebSocket::textMessageReceived);
    m_reconnectAttempt = 0;
}

void WebSocket::onDisconnected() {
    disconnect(&m_webSocket, &QWebSocket::textMessageReceived, this, &WebSocket::textMessageReceived);
    m_keepAliveTimer.stop();
    if (m_reconnectAttempt <= 3) {
        // 500, 2500, 12500
        m_retryTimer.setInterval(100 * static_cast<int>(std::pow(5., m_reconnectAttempt)));
    }
}

void WebSocket::textMessageReceived(const QString &message) {
    QJsonDocument doc = QJsonDocument::fromJson(message.toUtf8());
    if (doc.isNull() || !doc.isObject()) {
        qCWarning(jellyfinWebSocket()) << "Malformed message received over WebSocket: parse error or root not an object.";
        return;
    }
    QJsonObject messageRoot = doc.object();
    if (!messageRoot.contains("MessageType")) {
        qCWarning(jellyfinWebSocket) << "Malformed message received over WebSocket: no MessageType set.";
        return;
    }

    // Convert the type so we can use it in our enums.
    QString messageType = messageRoot["MessageType"].toString();
    qCDebug(jellyfinWebSocket) << "Message received: " << messageType;
    QJsonValue data = messageRoot["Data"];
    if (messageType == QStringLiteral("ForceKeepAlive")) {
        setupKeepAlive(data.toInt());
    } else if (messageType == QStringLiteral("GeneralCommand")) {
        try {
        DTO::GeneralCommand command = DTO::GeneralCommand::fromJson(data.toObject());

        // TODO: move command handling out of here
        switch(command.name()) {
        case DTO::GeneralCommandType::DisplayMessage:
        {
            QString header = command.arguments()["Header"].toString("Message from server");
            QString text = command.arguments()["Text"].toString("<Empty message>");
            int timeout = command.arguments()["TimeoutMs"].toInt(-1);
            emit m_apiClient->eventbus()->displayMessage(header, text, timeout);
        }
            break;
        default:
            qCDebug(jellyfinWebSocket) << "Unhandled command: " << data;
            break;
        }

        } catch(QException &e) {
            qCWarning(jellyfinWebSocket()) << "Error while deserializing command: " << e.what();
        }
    } else if (messageType == QStringLiteral("Playstate")) {
        try {
            DTO::PlaystateRequest request = PlaystateRequest::fromJson(data.toObject());
            emit m_apiClient->eventbus()->playstateCommandReceived(request);
        } catch (QException &e) {
            qCWarning(jellyfinWebSocket) << "Error while deserialzing PlaystateRequest " << e.what();
        }
    } else if(messageType == QStringLiteral("UserDataChanged")) {
        QString userId = data.toObject()["UserId"].toString();
        if (userId != m_apiClient->userId()) {
            qCDebug(jellyfinWebSocket) << "Received UserDataCHanged for other user";
        } else {
            try {
                QList<DTO::UserItemDataDto> userDataList = Support::fromJsonValue<QList<DTO::UserItemDataDto>>(data.toObject()["UserDataList"]);
                for (auto it = userDataList.cbegin(); it != userDataList.cend(); it++) {
                    emit m_apiClient->eventbus()->itemUserDataUpdated(it->itemId(), *it);
                }
            } catch (QException *e) {
                qCWarning(jellyfinWebSocket) << "Unparseable UserData list received: " << e->what();
            }
        }
    } else if (messageType == QStringLiteral("Sessions")) {
        try {
            QList<DTO::SessionInfoDto> sessionInfoList = Support::fromJsonValue<QList<DTO::SessionInfoDto>>(data);
            for (auto it = sessionInfoList.cbegin(); it != sessionInfoList.cend(); it++) {
                emit m_apiClient->eventbus()->sessionInfoUpdated(it->jellyfinId(), *it);
            }
        } catch(QException *e) {
            qCWarning(jellyfinWebSocket) << "Unparseable SessionInfo list received: " << e->what();
        }
    } else {
        qCDebug(jellyfinWebSocket) << "Unhandled message: " << messageType;
    }
}

void WebSocket::sendKeepAlive() {
    sendMessage(KeepAlive);
}

void WebSocket::setupKeepAlive(int data) {
    // Data is timeout in seconds, we want to send a keepalive at half the timeout
    m_keepAliveTimer.setInterval(data * 500);
    m_keepAliveTimer.setSingleShot(false);
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
    qCDebug(jellyfinWebSocket) << "Sent message: " << message;
}
}
