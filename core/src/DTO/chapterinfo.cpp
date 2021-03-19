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

#include <JellyfinQt/DTO/chapterinfo.h>

namespace Jellyfin {
namespace DTO {

ChapterInfo::ChapterInfo(QObject *parent) : QObject(parent) {}

ChapterInfo *ChapterInfo::fromJSON(QJsonObject source, QObject *parent) {
	ChapterInfo *instance = new ChapterInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ChapterInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ChapterInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint64 ChapterInfo::startPositionTicks() const { return m_startPositionTicks; }
void ChapterInfo::setStartPositionTicks(qint64 newStartPositionTicks) {
	m_startPositionTicks = newStartPositionTicks;
	emit startPositionTicksChanged(newStartPositionTicks);
}

QString ChapterInfo::name() const { return m_name; }
void ChapterInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString ChapterInfo::imagePath() const { return m_imagePath; }
void ChapterInfo::setImagePath(QString newImagePath) {
	m_imagePath = newImagePath;
	emit imagePathChanged(newImagePath);
}

QDateTime ChapterInfo::imageDateModified() const { return m_imageDateModified; }
void ChapterInfo::setImageDateModified(QDateTime newImageDateModified) {
	m_imageDateModified = newImageDateModified;
	emit imageDateModifiedChanged(newImageDateModified);
}

QString ChapterInfo::imageTag() const { return m_imageTag; }
void ChapterInfo::setImageTag(QString newImageTag) {
	m_imageTag = newImageTag;
	emit imageTagChanged(newImageTag);
}


} // NS Jellyfin
} // NS DTO
