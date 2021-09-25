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

#include <JellyfinQt/dto/baseitem.h>

namespace Jellyfin {
namespace DTO {

BaseItem::BaseItem() {}
BaseItem::BaseItem (
		QDateTime dateLastSaved, 
		bool isHD, 
		bool isShortcut, 
		qint32 width, 
		qint32 height, 
		bool supportsExternalTransfer 
		) :
	m_dateLastSaved(dateLastSaved),
	m_isHD(isHD),
	m_isShortcut(isShortcut),
	m_width(width),
	m_height(height),
	m_supportsExternalTransfer(supportsExternalTransfer) { }



BaseItem::BaseItem(const BaseItem &other) :

	m_size(other.m_size),
	m_container(other.m_container),
	m_dateLastSaved(other.m_dateLastSaved),
	m_remoteTrailers(other.m_remoteTrailers),
	m_isHD(other.m_isHD),
	m_isShortcut(other.m_isShortcut),
	m_shortcutPath(other.m_shortcutPath),
	m_width(other.m_width),
	m_height(other.m_height),
	m_extraIds(other.m_extraIds),
	m_supportsExternalTransfer(other.m_supportsExternalTransfer){}


void BaseItem::replaceData(BaseItem &other) {
	m_size = other.m_size;
	m_container = other.m_container;
	m_dateLastSaved = other.m_dateLastSaved;
	m_remoteTrailers = other.m_remoteTrailers;
	m_isHD = other.m_isHD;
	m_isShortcut = other.m_isShortcut;
	m_shortcutPath = other.m_shortcutPath;
	m_width = other.m_width;
	m_height = other.m_height;
	m_extraIds = other.m_extraIds;
	m_supportsExternalTransfer = other.m_supportsExternalTransfer;
}

BaseItem BaseItem::fromJson(QJsonObject source) {
	BaseItem instance;
	instance.setFromJson(source);
	return instance;
}


void BaseItem::setFromJson(QJsonObject source) {
	m_size = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["Size"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_dateLastSaved = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastSaved"]);
	m_remoteTrailers = Jellyfin::Support::fromJsonValue<QList<MediaUrl>>(source["RemoteTrailers"]);
	m_isHD = Jellyfin::Support::fromJsonValue<bool>(source["IsHD"]);
	m_isShortcut = Jellyfin::Support::fromJsonValue<bool>(source["IsShortcut"]);
	m_shortcutPath = Jellyfin::Support::fromJsonValue<QString>(source["ShortcutPath"]);
	m_width = Jellyfin::Support::fromJsonValue<qint32>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<qint32>(source["Height"]);
	m_extraIds = Jellyfin::Support::fromJsonValue<QStringList>(source["ExtraIds"]);
	m_supportsExternalTransfer = Jellyfin::Support::fromJsonValue<bool>(source["SupportsExternalTransfer"]);

}
	
QJsonObject BaseItem::toJson() const {
	QJsonObject result;
	
	
	if (!(!m_size.has_value())) {
		result["Size"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_size);
	}
			
	
	if (!(m_container.isNull())) {
		result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	}
			
	result["DateLastSaved"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastSaved);		
	
	if (!(m_remoteTrailers.size() == 0)) {
		result["RemoteTrailers"] = Jellyfin::Support::toJsonValue<QList<MediaUrl>>(m_remoteTrailers);
	}
			
	result["IsHD"] = Jellyfin::Support::toJsonValue<bool>(m_isHD);		
	result["IsShortcut"] = Jellyfin::Support::toJsonValue<bool>(m_isShortcut);		
	
	if (!(m_shortcutPath.isNull())) {
		result["ShortcutPath"] = Jellyfin::Support::toJsonValue<QString>(m_shortcutPath);
	}
			
	result["Width"] = Jellyfin::Support::toJsonValue<qint32>(m_width);		
	result["Height"] = Jellyfin::Support::toJsonValue<qint32>(m_height);		
	
	if (!(m_extraIds.size() == 0)) {
		result["ExtraIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_extraIds);
	}
			
	result["SupportsExternalTransfer"] = Jellyfin::Support::toJsonValue<bool>(m_supportsExternalTransfer);	
	return result;
}

std::optional<qint64> BaseItem::size() const { return m_size; }

void BaseItem::setSize(std::optional<qint64> newSize) {
	m_size = newSize;
}
bool BaseItem::sizeNull() const {
	return !m_size.has_value();
}

void BaseItem::setSizeNull() {
	m_size = std::nullopt;

}
QString BaseItem::container() const { return m_container; }

void BaseItem::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool BaseItem::containerNull() const {
	return m_container.isNull();
}

void BaseItem::setContainerNull() {
	m_container.clear();

}
QDateTime BaseItem::dateLastSaved() const { return m_dateLastSaved; }

void BaseItem::setDateLastSaved(QDateTime newDateLastSaved) {
	m_dateLastSaved = newDateLastSaved;
}

QList<MediaUrl> BaseItem::remoteTrailers() const { return m_remoteTrailers; }

void BaseItem::setRemoteTrailers(QList<MediaUrl> newRemoteTrailers) {
	m_remoteTrailers = newRemoteTrailers;
}
bool BaseItem::remoteTrailersNull() const {
	return m_remoteTrailers.size() == 0;
}

void BaseItem::setRemoteTrailersNull() {
	m_remoteTrailers.clear();

}
bool BaseItem::isHD() const { return m_isHD; }

void BaseItem::setIsHD(bool newIsHD) {
	m_isHD = newIsHD;
}

bool BaseItem::isShortcut() const { return m_isShortcut; }

void BaseItem::setIsShortcut(bool newIsShortcut) {
	m_isShortcut = newIsShortcut;
}

QString BaseItem::shortcutPath() const { return m_shortcutPath; }

void BaseItem::setShortcutPath(QString newShortcutPath) {
	m_shortcutPath = newShortcutPath;
}
bool BaseItem::shortcutPathNull() const {
	return m_shortcutPath.isNull();
}

void BaseItem::setShortcutPathNull() {
	m_shortcutPath.clear();

}
qint32 BaseItem::width() const { return m_width; }

void BaseItem::setWidth(qint32 newWidth) {
	m_width = newWidth;
}

qint32 BaseItem::height() const { return m_height; }

void BaseItem::setHeight(qint32 newHeight) {
	m_height = newHeight;
}

QStringList BaseItem::extraIds() const { return m_extraIds; }

void BaseItem::setExtraIds(QStringList newExtraIds) {
	m_extraIds = newExtraIds;
}
bool BaseItem::extraIdsNull() const {
	return m_extraIds.size() == 0;
}

void BaseItem::setExtraIdsNull() {
	m_extraIds.clear();

}
bool BaseItem::supportsExternalTransfer() const { return m_supportsExternalTransfer; }

void BaseItem::setSupportsExternalTransfer(bool newSupportsExternalTransfer) {
	m_supportsExternalTransfer = newSupportsExternalTransfer;
}


} // NS DTO

namespace Support {

using BaseItem = Jellyfin::DTO::BaseItem;

template <>
BaseItem fromJsonValue(const QJsonValue &source, convertType<BaseItem>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BaseItem::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BaseItem &source, convertType<BaseItem>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
