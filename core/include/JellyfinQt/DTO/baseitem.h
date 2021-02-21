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

#ifndef JELLYFIN_DTO_BASEITEM_H
#define JELLYFIN_DTO_BASEITEM_H

#include <QDateTime>
#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class MediaUrl;

class BaseItem : public QObject {
	Q_OBJECT
public:
	explicit BaseItem(QObject *parent = nullptr);
	static BaseItem *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(qint64 size READ size WRITE setSize NOTIFY sizeChanged)
	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)
	Q_PROPERTY(QDateTime dateLastSaved READ dateLastSaved WRITE setDateLastSaved NOTIFY dateLastSavedChanged)
	/**
	 * @brief Gets or sets the remote trailers.
	 */
	Q_PROPERTY(QList<MediaUrl *> remoteTrailers READ remoteTrailers WRITE setRemoteTrailers NOTIFY remoteTrailersChanged)
	Q_PROPERTY(bool isHD READ isHD WRITE setIsHD NOTIFY isHDChanged)
	Q_PROPERTY(bool isShortcut READ isShortcut WRITE setIsShortcut NOTIFY isShortcutChanged)
	Q_PROPERTY(QString shortcutPath READ shortcutPath WRITE setShortcutPath NOTIFY shortcutPathChanged)
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	Q_PROPERTY(QStringList extraIds READ extraIds WRITE setExtraIds NOTIFY extraIdsChanged)
	Q_PROPERTY(bool supportsExternalTransfer READ supportsExternalTransfer WRITE setSupportsExternalTransfer NOTIFY supportsExternalTransferChanged)

	qint64 size() const;
	void setSize(qint64 newSize);
	
	QString container() const;
	void setContainer(QString newContainer);
	
	QDateTime dateLastSaved() const;
	void setDateLastSaved(QDateTime newDateLastSaved);
	
	QList<MediaUrl *> remoteTrailers() const;
	void setRemoteTrailers(QList<MediaUrl *> newRemoteTrailers);
	
	bool isHD() const;
	void setIsHD(bool newIsHD);
	
	bool isShortcut() const;
	void setIsShortcut(bool newIsShortcut);
	
	QString shortcutPath() const;
	void setShortcutPath(QString newShortcutPath);
	
	qint32 width() const;
	void setWidth(qint32 newWidth);
	
	qint32 height() const;
	void setHeight(qint32 newHeight);
	
	QStringList extraIds() const;
	void setExtraIds(QStringList newExtraIds);
	
	bool supportsExternalTransfer() const;
	void setSupportsExternalTransfer(bool newSupportsExternalTransfer);
	
signals:
	void sizeChanged(qint64 newSize);
	void containerChanged(QString newContainer);
	void dateLastSavedChanged(QDateTime newDateLastSaved);
	void remoteTrailersChanged(QList<MediaUrl *> newRemoteTrailers);
	void isHDChanged(bool newIsHD);
	void isShortcutChanged(bool newIsShortcut);
	void shortcutPathChanged(QString newShortcutPath);
	void widthChanged(qint32 newWidth);
	void heightChanged(qint32 newHeight);
	void extraIdsChanged(QStringList newExtraIds);
	void supportsExternalTransferChanged(bool newSupportsExternalTransfer);
protected:
	qint64 m_size;
	QString m_container;
	QDateTime m_dateLastSaved;
	QList<MediaUrl *> m_remoteTrailers;
	bool m_isHD;
	bool m_isShortcut;
	QString m_shortcutPath;
	qint32 m_width;
	qint32 m_height;
	QStringList m_extraIds;
	bool m_supportsExternalTransfer;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_BASEITEM_H
