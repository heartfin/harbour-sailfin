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

#include <JellyfinQt/DTO/baseitem.h>

namespace Jellyfin {
namespace DTO {

BaseItem::BaseItem(QObject *parent) : QObject(parent) {}

BaseItem *BaseItem::fromJSON(QJsonObject source, QObject *parent) {
	BaseItem *instance = new BaseItem(parent);
	instance->updateFromJSON(source);
	return instance;
}

void BaseItem::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject BaseItem::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint64 BaseItem::size() const { return m_size; }
void BaseItem::setSize(qint64 newSize) {
	m_size = newSize;
	emit sizeChanged(newSize);
}

QString BaseItem::container() const { return m_container; }
void BaseItem::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

QDateTime BaseItem::dateLastSaved() const { return m_dateLastSaved; }
void BaseItem::setDateLastSaved(QDateTime newDateLastSaved) {
	m_dateLastSaved = newDateLastSaved;
	emit dateLastSavedChanged(newDateLastSaved);
}

QList<MediaUrl *> BaseItem::remoteTrailers() const { return m_remoteTrailers; }
void BaseItem::setRemoteTrailers(QList<MediaUrl *> newRemoteTrailers) {
	m_remoteTrailers = newRemoteTrailers;
	emit remoteTrailersChanged(newRemoteTrailers);
}

bool BaseItem::isHD() const { return m_isHD; }
void BaseItem::setIsHD(bool newIsHD) {
	m_isHD = newIsHD;
	emit isHDChanged(newIsHD);
}

bool BaseItem::isShortcut() const { return m_isShortcut; }
void BaseItem::setIsShortcut(bool newIsShortcut) {
	m_isShortcut = newIsShortcut;
	emit isShortcutChanged(newIsShortcut);
}

QString BaseItem::shortcutPath() const { return m_shortcutPath; }
void BaseItem::setShortcutPath(QString newShortcutPath) {
	m_shortcutPath = newShortcutPath;
	emit shortcutPathChanged(newShortcutPath);
}

qint32 BaseItem::width() const { return m_width; }
void BaseItem::setWidth(qint32 newWidth) {
	m_width = newWidth;
	emit widthChanged(newWidth);
}

qint32 BaseItem::height() const { return m_height; }
void BaseItem::setHeight(qint32 newHeight) {
	m_height = newHeight;
	emit heightChanged(newHeight);
}

QStringList BaseItem::extraIds() const { return m_extraIds; }
void BaseItem::setExtraIds(QStringList newExtraIds) {
	m_extraIds = newExtraIds;
	emit extraIdsChanged(newExtraIds);
}

bool BaseItem::supportsExternalTransfer() const { return m_supportsExternalTransfer; }
void BaseItem::setSupportsExternalTransfer(bool newSupportsExternalTransfer) {
	m_supportsExternalTransfer = newSupportsExternalTransfer;
	emit supportsExternalTransferChanged(newSupportsExternalTransfer);
}


} // NS Jellyfin
} // NS DTO
