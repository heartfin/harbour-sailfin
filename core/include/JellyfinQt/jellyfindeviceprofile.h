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

#ifndef JELLYFIN_DEVICE_PROFILE_H
#define JELLYFIN_DEVICE_PROFILE_H

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QMap>
#include <QString>
#include <QSysInfo>

#include <QtMultimedia/QMediaPlayer>

namespace Jellyfin {
namespace DeviceProfile {
    QJsonObject generateProfile();
    // Transport
    bool supportsHls();

    // Bitrate
    int maxStreamingBitrate();

    // Video codecs
    bool canPlayH264();
    bool canPlayH265();

    // Audio codecs
    bool canPlayAc3();
    bool supportsMp3VideoAudio();
}
}

#endif // JELLYFIN_DEVICE_PROFILE_H
