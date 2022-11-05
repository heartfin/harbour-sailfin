/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021-2022 Chris Josten and the Sailfin Contributors.
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
#ifndef JELLYFIN_MODEL_PLAYBACKREPORTER_H
#define JELLYFIN_MODEL_PLAYBACKREPORTER_H

#include <QLoggingCategory>
#include <QObject>
#include <QScopedPointer>

namespace Jellyfin {

class ApiClient;

namespace Model {

Q_DECLARE_LOGGING_CATEGORY(playbackReporter);

class LocalPlaybackManager;

class PlaybackReporterPrivate;
/**
 * @brief Reports the current playback state to the Jellyfin server
 *
 * Set a playbackManager using setPlaybackmanager() and this class
 * will do its job.
 */
class PlaybackReporter : public QObject {
    Q_OBJECT
    Q_DECLARE_PRIVATE(PlaybackReporter);
public:
    explicit PlaybackReporter(QObject *parent = nullptr);

    void setPlaybackManager(LocalPlaybackManager *playbackManager);
private:
    PlaybackReporterPrivate *d_ptr;
};

}
}

#endif //JELLYFIN_MODEL_PLAYBACKREPORTER_H

