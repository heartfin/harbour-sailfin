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
#include "JellyfinQt/DTO/userdata.h"

namespace Jellyfin {
namespace DTO {

UserData::UserData(QObject *parent) : JsonSerializable (parent) {}

void UserData::updateOnServer() {
    //TODO: implement
}

void UserData::onUpdated(QSharedPointer<UserData> other) {
    // The reason I'm not using setLikes and similar is that they don't work with std::nullopt,
    // since QML does not like it.
    // THe other reason is that the setLikes method will send a post request to the server, to update the contents
    // we don't want that to happen, obviously, since the application could end in an infinite loop.
    if (this->m_playedPercentage != other->m_playedPercentage) {
        this->m_playedPercentage = other->m_playedPercentage;
        emit playedPercentageChanged(playedPercentage());
    }
    if (m_playbackPositionTicks!= other->m_playbackPositionTicks) {
        this->m_playbackPositionTicks = other->m_playbackPositionTicks;
        emit playbackPositionTicksChanged(this->m_playbackPositionTicks);
    }
    if (m_isFavorite != other->m_isFavorite) {
        this->m_isFavorite = other->m_isFavorite;
        emit isFavoriteChanged(this->m_isFavorite);
    }
    if (this->m_likes != other->m_likes) {
        this->m_likes = other->m_likes;
        emit likesChanged(likes());
    }
    if (this->m_played != other->m_played) {
        this->m_played = other->m_played;
        emit playedChanged(this->m_played);
    }
}

} // NS DTO
} // NS Jellyfin
