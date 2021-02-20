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

    Q_PROPERTY(QString jellyfinId MEMBER m_jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(QString primaryImageTag MEMBER m_primaryImageTag NOTIFY primaryImageTagChanged)
    Q_PROPERTY(bool hasPassword MEMBER m_hasPassword NOTIFY hasPasswordChanged)
    Q_PROPERTY(bool hasConfiguredPassword MEMBER m_hasConfiguredPassword NOTIFY hasConfiguredPasswordChanged)
    Q_PROPERTY(bool hasConfiguredEasyPassword MEMBER m_hasConfiguredEasyPassword NOTIFY hasConfiguredEasyPasswordChanged)

    void setJellyfinId(const QString &newJellyfinId) {
        if (m_jellyfinId != newJellyfinId) {
            this->m_jellyfinId = newJellyfinId;
            emit jellyfinIdChanged(newJellyfinId);
            reload();
        }
    }
signals:
    void nameChanged(const QString &newName);
    void jellyfinIdChanged(const QString &newJellyfinId);
    void primaryImageTagChanged(const QString &newPrimaryImageTag);
    void hasPasswordChanged(bool newHasPasswordChanged);
    void hasConfiguredPasswordChanged(bool newHasConfiguredPasswordChanged);
    void hasConfiguredEasyPasswordChanged(bool newHasConfiguredEasyPasswordChanged);

protected:
    QString getDataUrl() const override;
    bool canReload() const override;
private:
    QString m_name;
    QString m_jellyfinId;
    QString m_primaryImageTag;
    bool m_hasPassword;
    bool m_hasConfiguredPassword;
    bool m_hasConfiguredEasyPassword;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USER
