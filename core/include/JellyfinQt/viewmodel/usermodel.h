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
#ifndef JELLYFIN_VIEWMODEL_USERMODEL_H
#define JELLYFIN_VIEWMODEL_USERMODEL_H

#include <QAbstractListModel>
#include <QByteArray>
#include <QHash>

#include "../loader/http/getpublicusers.h"
#include "../loader/requesttypes.h"
#include "../model/user.h"
#include "../apimodel.h"
#include "propertyhelper.h"


namespace Jellyfin {
namespace ViewModel {

// Jellyfin Forward Read/Write Property
#define FWDPROP(type, propName, propSetName) JF_FWD_RW_PROP(type, propName, propSetName, this->m_parameters)

class UserModel : public ApiModel<Model::User> {
    Q_OBJECT
public:
    enum RoleNames {
        userId = Qt::UserRole + 1,
        name,
        hasPassword,
        primaryImageTag,
    };

    explicit UserModel (QObject *parent = nullptr);

    virtual QHash<int, QByteArray> roleNames() const override {
        return {
            { RoleNames::userId,                    "userId"                    },
            { RoleNames::name,                      "name"                      },
            { RoleNames::hasPassword,               "hasPassword"               },
            { RoleNames::primaryImageTag,           "primaryImageTag"           },
        };
    }
    QVariant data(const QModelIndex &index, int role) const override;
};

using PublicUsersLoaderBase = LoaderModelLoader<Model::User, DTO::UserDto, QList<DTO::UserDto>, Jellyfin::Loader::GetPublicUsersParams>;
class PublicUsersLoader : public PublicUsersLoaderBase {
    Q_OBJECT
public:
    explicit PublicUsersLoader(QObject *parent = nullptr);
    bool canReload() const override;
};

#undef FWDPROP

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_USERMODEL_H
