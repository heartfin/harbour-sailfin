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
#include "serverdiscoverymodel.h"

namespace Jellyfin {
ServerDiscoveryModel::ServerDiscoveryModel(QObject *parent)
    : QAbstractListModel (parent) {
    connect(&m_socket, &QUdpSocket::readyRead, this, &ServerDiscoveryModel::on_datagramsAvailable);
    m_socket.bind(BROADCAST_PORT);
}

QVariant ServerDiscoveryModel::data(const QModelIndex &index, int role) const {
    if (index.row() < 0 || index.row() >= rowCount()) return QVariant();
    size_t row = static_cast<size_t>(index.row());

    switch(role) {
    case ROLE_ADDRESS:
        return m_discoveredServers[row].address;
    case ROLE_ID:
        return m_discoveredServers[row].id;
    case ROLE_NAME:
        return m_discoveredServers[row].name;
    default:
        return QVariant();
    }
}

void ServerDiscoveryModel::refresh() {
    this->beginResetModel();
    this->m_discoveredServers.clear();
    this->endResetModel();

    m_socket.writeDatagram(MAGIC_PACKET, QHostAddress::Broadcast, BROADCAST_PORT);
}

void ServerDiscoveryModel::on_datagramsAvailable() {
    int beginIndex = static_cast<int>(m_discoveredServers.size());

    QByteArray datagram;
    QJsonDocument jsonDocument;
    QJsonParseError jsonParseError;
    QHostAddress replyAddress;
    std::vector<ServerDiscovery> discoveredServers;

    while (m_socket.hasPendingDatagrams()) {
        datagram.resize(static_cast<int>(m_socket.pendingDatagramSize()));
        m_socket.readDatagram(datagram.data(), datagram.size(), &replyAddress);

        jsonDocument = QJsonDocument::fromJson(datagram, &jsonParseError);
        // Check if parsing failed
        if (jsonDocument.isNull()) {
            qDebug() << "Invalid response from " << replyAddress.toString() << ": " << jsonParseError.errorString();
            continue;
        }

        if (jsonDocument.isObject()) {
            QJsonObject rootObject = jsonDocument.object();
            if (rootObject.contains("Name") && rootObject.contains("Address") && rootObject.contains("Id")) {
                // We (assume) we have a correct response! Add it to the back of our temporary vector with discovered servers
                discoveredServers.push_back(ServerDiscovery {
                                                  rootObject["Name"].toString(),
                                                  rootObject["Address"].toString(),
                                                  rootObject["Id"].toString()
                                              });
            } else {
                qDebug() << "Invalid response from " << replyAddress.toString() << ": does not contain Name, Address, or Id field";
            }
        } else {
            qDebug() << "Invalid response from " << replyAddress.toString() << ": root is not an object";
        }
    }

    beginInsertRows(QModelIndex(), beginIndex, beginIndex + static_cast<int>(discoveredServers.size()) - 1);
    m_discoveredServers.insert(m_discoveredServers.end(), discoveredServers.begin(), discoveredServers.end());
    endInsertRows();
};
}
