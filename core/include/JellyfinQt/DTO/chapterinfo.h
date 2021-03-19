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

#ifndef JELLYFIN_DTO_CHAPTERINFO_H
#define JELLYFIN_DTO_CHAPTERINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class ChapterInfo : public QObject {
	Q_OBJECT
public:
	explicit ChapterInfo(QObject *parent = nullptr);
	static ChapterInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the start position ticks.
	 */
	Q_PROPERTY(qint64 startPositionTicks READ startPositionTicks WRITE setStartPositionTicks NOTIFY startPositionTicksChanged)
	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the image path.
	 */
	Q_PROPERTY(QString imagePath READ imagePath WRITE setImagePath NOTIFY imagePathChanged)
	Q_PROPERTY(QDateTime imageDateModified READ imageDateModified WRITE setImageDateModified NOTIFY imageDateModifiedChanged)
	Q_PROPERTY(QString imageTag READ imageTag WRITE setImageTag NOTIFY imageTagChanged)

	qint64 startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks);
	
	QString name() const;
	void setName(QString newName);
	
	QString imagePath() const;
	void setImagePath(QString newImagePath);
	
	QDateTime imageDateModified() const;
	void setImageDateModified(QDateTime newImageDateModified);
	
	QString imageTag() const;
	void setImageTag(QString newImageTag);
	
signals:
	void startPositionTicksChanged(qint64 newStartPositionTicks);
	void nameChanged(QString newName);
	void imagePathChanged(QString newImagePath);
	void imageDateModifiedChanged(QDateTime newImageDateModified);
	void imageTagChanged(QString newImageTag);
protected:
	qint64 m_startPositionTicks;
	QString m_name;
	QString m_imagePath;
	QDateTime m_imageDateModified;
	QString m_imageTag;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CHAPTERINFO_H
