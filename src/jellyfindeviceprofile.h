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
