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
#ifndef JELLYFIN_VIEWMODEL_MODELSTATUS_H
#define JELLYFIN_VIEWMODEL_MODELSTATUS_H

#include <QtGlobal>
#include <QObject>
#include <QTimer>

namespace Jellyfin {
namespace ViewModel {

class ModelStatusClass {
    Q_GADGET
public:
    enum Value {
        Uninitialised,
        Loading,
        Ready,
        Error,
        LoadingMore
    };
    Q_ENUM(Value)
private:
    explicit ModelStatusClass();
};

using ModelStatus = ModelStatusClass::Value;
}
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_MODELSTATUS_H
