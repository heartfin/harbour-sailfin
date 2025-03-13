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
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#include <JellyfinQt/dto/trickplayinfo.h>

namespace Jellyfin {
namespace DTO {

TrickplayInfo::TrickplayInfo() {}
TrickplayInfo::TrickplayInfo (
		qint32 width, 
		qint32 height, 
		qint32 tileWidth, 
		qint32 tileHeight, 
		qint32 thumbnailCount, 
		qint32 interval, 
		qint32 bandwidth 
		) :
	m_width(width),
	m_height(height),
	m_tileWidth(tileWidth),
	m_tileHeight(tileHeight),
	m_thumbnailCount(thumbnailCount),
	m_interval(interval),
	m_bandwidth(bandwidth) { }



TrickplayInfo::TrickplayInfo(const TrickplayInfo &other) :

	m_width(other.m_width),
	m_height(other.m_height),
	m_tileWidth(other.m_tileWidth),
	m_tileHeight(other.m_tileHeight),
	m_thumbnailCount(other.m_thumbnailCount),
	m_interval(other.m_interval),
	m_bandwidth(other.m_bandwidth){}


void TrickplayInfo::replaceData(TrickplayInfo &other) {
	m_width = other.m_width;
	m_height = other.m_height;
	m_tileWidth = other.m_tileWidth;
	m_tileHeight = other.m_tileHeight;
	m_thumbnailCount = other.m_thumbnailCount;
	m_interval = other.m_interval;
	m_bandwidth = other.m_bandwidth;
}

TrickplayInfo TrickplayInfo::fromJson(QJsonObject source) {
	TrickplayInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TrickplayInfo::setFromJson(QJsonObject source) {
	m_width = Jellyfin::Support::fromJsonValue<qint32>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<qint32>(source["Height"]);
	m_tileWidth = Jellyfin::Support::fromJsonValue<qint32>(source["TileWidth"]);
	m_tileHeight = Jellyfin::Support::fromJsonValue<qint32>(source["TileHeight"]);
	m_thumbnailCount = Jellyfin::Support::fromJsonValue<qint32>(source["ThumbnailCount"]);
	m_interval = Jellyfin::Support::fromJsonValue<qint32>(source["Interval"]);
	m_bandwidth = Jellyfin::Support::fromJsonValue<qint32>(source["Bandwidth"]);

}
	
QJsonObject TrickplayInfo::toJson() const {
	QJsonObject result;
	
	result["Width"] = Jellyfin::Support::toJsonValue<qint32>(m_width);		
	result["Height"] = Jellyfin::Support::toJsonValue<qint32>(m_height);		
	result["TileWidth"] = Jellyfin::Support::toJsonValue<qint32>(m_tileWidth);		
	result["TileHeight"] = Jellyfin::Support::toJsonValue<qint32>(m_tileHeight);		
	result["ThumbnailCount"] = Jellyfin::Support::toJsonValue<qint32>(m_thumbnailCount);		
	result["Interval"] = Jellyfin::Support::toJsonValue<qint32>(m_interval);		
	result["Bandwidth"] = Jellyfin::Support::toJsonValue<qint32>(m_bandwidth);	
	return result;
}

qint32 TrickplayInfo::width() const { return m_width; }

void TrickplayInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
}

qint32 TrickplayInfo::height() const { return m_height; }

void TrickplayInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
}

qint32 TrickplayInfo::tileWidth() const { return m_tileWidth; }

void TrickplayInfo::setTileWidth(qint32 newTileWidth) {
	m_tileWidth = newTileWidth;
}

qint32 TrickplayInfo::tileHeight() const { return m_tileHeight; }

void TrickplayInfo::setTileHeight(qint32 newTileHeight) {
	m_tileHeight = newTileHeight;
}

qint32 TrickplayInfo::thumbnailCount() const { return m_thumbnailCount; }

void TrickplayInfo::setThumbnailCount(qint32 newThumbnailCount) {
	m_thumbnailCount = newThumbnailCount;
}

qint32 TrickplayInfo::interval() const { return m_interval; }

void TrickplayInfo::setInterval(qint32 newInterval) {
	m_interval = newInterval;
}

qint32 TrickplayInfo::bandwidth() const { return m_bandwidth; }

void TrickplayInfo::setBandwidth(qint32 newBandwidth) {
	m_bandwidth = newBandwidth;
}


} // NS DTO

namespace Support {

using TrickplayInfo = Jellyfin::DTO::TrickplayInfo;

template <>
TrickplayInfo fromJsonValue(const QJsonValue &source, convertType<TrickplayInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TrickplayInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TrickplayInfo &source, convertType<TrickplayInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
