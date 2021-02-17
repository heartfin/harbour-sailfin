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

#ifndef SERVER_DISCOVERY_MODEL_H
#define SERVER_DISCOVERY_MODEL_H

#include <vector>

#include <QAbstractListModel>
#include <QHash>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

#include <QHostAddress>
#include <QUdpSocket>

namespace Jellyfin {
struct ServerDiscovery {
    QString name;
    QString address;
    QString id;
};

/**
 * @brief Discovers nearby Jellyfin servers and puts them in this list.
 */
class ServerDiscoveryModel : public QAbstractListModel {
    Q_OBJECT
public:
    enum Roles {
        ROLE_NAME = Qt::UserRole + 1,
        ROLE_ADDRESS,
        ROLE_ID
    };
    explicit ServerDiscoveryModel(QObject *parent = nullptr);

    QHash<int, QByteArray> roleNames() const override {
        return {
            {ROLE_NAME, "name"},
            {ROLE_ADDRESS, "address"},
            {ROLE_ID, "id"}
        };
    }

    int rowCount(const QModelIndex &parent = QModelIndex()) const override {
        if (parent.isValid()) return 0;
        return static_cast<int>(m_discoveredServers.size());
    }

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
public slots:
    /**
     * @brief Refreshes the model and searches for new servers
     */
    void refresh();
private slots:
    void on_datagramsAvailable();
private:
    const QByteArray MAGIC_PACKET = "who is JellyfinServer?";
    const quint16 BROADCAST_PORT = 7359;

    std::vector<ServerDiscovery> m_discoveredServers;
    QUdpSocket m_socket;
};
}
#endif //SERVER_DISCOVERY_MODEL_H
