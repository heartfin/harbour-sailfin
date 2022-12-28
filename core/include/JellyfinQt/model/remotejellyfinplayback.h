/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2023 Chris Josten and the Sailfin Contributors.
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
#ifndef JELLYFIN_MODEL_REMOTEJELLYFINPLAYBACK_H
#define JELLYFIN_MODEL_REMOTEJELLYFINPLAYBACK_H

#include <JellyfinQt/dto/generalcommandtype.h>
#include <JellyfinQt/model/playbackmanager.h>

#include <QJsonObject>
#include <QSharedPointer>

namespace Jellyfin {

class ApiClient;

namespace Model {

class RemoteJellyfinPlayback : public PlaybackManager {
public:
    RemoteJellyfinPlayback(ApiClient &apiClient, QObject *parent = nullptr);


    // PlaybackManager
    void swap(PlaybackManager &other) override;
    PlayerState playbackState() const override;
    MediaStatus mediaStatus() const override;
    bool hasNext() const override;
    bool hasPrevious() const override;
    PlaybackManagerError error() const override;
    const QString &errorString() const override;
    qint64 position() const override;
    qint64 duration() const override;
    bool seekable() const override;
    bool hasAudio() const override;
    bool hasVideo() const override;
    void playItem(QSharedPointer<Item> item) override;
    void playItemInList(const QList<QSharedPointer<Item> > &items, int index) override;

public slots:
    void pause() override;
    void play() override;
    void playItemId(const QString &id) override;
    void previous() override;
    void next() override;
    void goTo(int index) override;
    void stop() override;
    void seek(qint64 pos) override;
private:
    void sendGeneralCommand(DTO::GeneralCommandType command, QJsonObject arguments = QJsonObject());
    ApiClient &m_apiClient;
};


} // NS Model
} // NS Jellyfin


#endif // JELLYFIN_MODEL_REMOTEJELLYFINPLAYBACK_H
