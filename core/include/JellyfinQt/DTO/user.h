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

#ifndef JELLYFIN_DTO_USER_H
#define JELLYFIN_DTO_USER_H

#include <QObject>
#include <QString>

#include "dto.h"

namespace Jellyfin {
namespace DTO {

class User : public RemoteData {
    Q_OBJECT
public:
    Q_INVOKABLE User(QObject *parent = nullptr);

    Q_PROPERTY(QString userId MEMBER m_userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(QString primaryImageTag MEMBER m_primaryImageTag NOTIFY primaryImageTagChanged)

    void setUserId(const QString &newUserId) {
        this->m_userId = newUserId;
        emit userIdChanged(newUserId);
        reload();
    }
signals:
    void userIdChanged(const QString &newUserId);
    void nameChanged(const QString &newName);
    void primaryImageTagChanged(const QString &newPrimaryImageTag);
protected:
    QString getDataUrl() const override;
    bool canReload() const override;
private:
    QString m_userId;
    QString m_name;
    QString m_primaryImageTag;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USER
