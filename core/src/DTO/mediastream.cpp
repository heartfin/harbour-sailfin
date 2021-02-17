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
#include "JellyfinQt/DTO/mediastream.h"

namespace Jellyfin {
namespace DTO {

MediaStream::MediaStream(QObject *parent) : JsonSerializable (parent) {}
MediaStream::MediaStream(const MediaStream &other)
    : JsonSerializable (other.parent()),
      m_codec(other.m_codec),
      m_codecTag(other.m_codecTag),
      m_language(other.m_language),
      m_displayTitle(other.m_displayTitle),
      m_type(other.m_type),
      m_index(other.m_index){
}
bool MediaStream::operator==(const MediaStream &other) {
    // displayTitle is explicitly left out, since it's generated based on other properties
    // in the Jellyfin source code.
    return m_codec == other.m_codec && m_codecTag == other.m_codecTag
            && m_language == other.m_language && m_type == other.m_type
            && m_index == other.m_index;
}

} // NS DTO
} // NS Jellyfin
