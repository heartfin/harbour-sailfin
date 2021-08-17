/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef JELLYFIN_VIEWMODEL_USER_H
#define JELLYFIN_VIEWMODEL_USER_H

#include <QObject>
#include <QSharedPointer>
#include <QString>

#include "../loader/http/getitem.h"
#include "../loader/requesttypes.h"
#include "../model/user.h"
#include "loader.h"

namespace Jellyfin {

namespace ViewModel {

class User : public QObject {
    Q_OBJECT
public:
    explicit User(QObject *parent = nullptr, QSharedPointer<Model::User> data = QSharedPointer<Model::User>::create());

    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(QString serverId READ serverId NOTIFY serverIdChanged)
    Q_PROPERTY(QString serverName READ serverName NOTIFY serverNameChanged)
    Q_PROPERTY(QString userId READ userId NOTIFY userIdChanged)
    Q_PROPERTY(QString primaryImageTag READ primaryImageTag NOTIFY primaryImageTagChanged)
    Q_PROPERTY(bool hasPassword READ hasPassword NOTIFY hasPasswordChanged)
    Q_PROPERTY(bool hasConfiguredPassword READ hasConfiguredPassword NOTIFY hasConfiguredPasswordChanged)
    Q_PROPERTY(bool hasConfiguredEasyPassword READ hasConfiguredEasyPassword NOTIFY hasConfiguredEasyPasswordChanged)

    QString name() const { return m_data->name(); }
    QString serverId() const { return m_data->serverId(); }
    QString serverName() const { return m_data->serverName(); }
    QString userId() const { return m_data->jellyfinId(); }
    QString primaryImageTag() const { return m_data->primaryImageTag(); }
    bool hasPassword() const { return m_data->hasPassword(); }
    bool hasConfiguredPassword() const { return m_data->hasConfiguredPassword(); }
    bool hasConfiguredEasyPassword() const { return m_data->hasConfiguredEasyPassword(); }

    QSharedPointer<Model::User> data() const { return m_data; }
    void setData(QSharedPointer<Model::User> newData);

signals:
    void nameChanged(QString newName);
    void serverIdChanged(QString newServerId);
    void serverNameChanged(QString newServerName);
    void userIdChanged(QString newUserId);
    void primaryImageTagChanged(QString newPrimaryImageTag);
    void hasPasswordChanged(bool newHasPassword);
    void hasConfiguredPasswordChanged(bool newHasConfiguredPassword);
    void hasConfiguredEasyPasswordChanged(bool newHasConfiguredEasyPasswordChanged);

private:
    QSharedPointer<Model::User> m_data;

};

using UserLoaderBase = Loader<ViewModel::User, DTO::UserDto, Jellyfin::Loader::GetUserByIdParams>;
class UserLoader : public UserLoaderBase {
    Q_OBJECT
public:
    explicit UserLoader(QObject *parent = nullptr);
    Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)

    QString userId() const { return m_parameters.userId(); }
    void setUserId(QString newUserId);
    virtual bool canReload() const override;

signals:
    void userIdChanged(const QString &newUserId) const;
};

}
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_USER_H
