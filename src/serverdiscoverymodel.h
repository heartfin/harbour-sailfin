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

    QUdpSocket m_socket;
    std::vector<ServerDiscovery> m_discoveredServers;
};

#endif //SERVER_DISCOVERY_MODEL_H
