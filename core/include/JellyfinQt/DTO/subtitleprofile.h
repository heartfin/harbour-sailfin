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

#ifndef JELLYFIN_DTO_SUBTITLEPROFILE_H
#define JELLYFIN_DTO_SUBTITLEPROFILE_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/subtitledeliverymethod.h"

namespace Jellyfin {
namespace DTO {

class SubtitleProfile : public QObject {
	Q_OBJECT
public:
	explicit SubtitleProfile(QObject *parent = nullptr);
	static SubtitleProfile *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString format READ format WRITE setFormat NOTIFY formatChanged)
	Q_PROPERTY(SubtitleDeliveryMethod method READ method WRITE setMethod NOTIFY methodChanged)
	Q_PROPERTY(QString didlMode READ didlMode WRITE setDidlMode NOTIFY didlModeChanged)
	Q_PROPERTY(QString language READ language WRITE setLanguage NOTIFY languageChanged)
	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)

	QString format() const;
	void setFormat(QString newFormat);
	
	SubtitleDeliveryMethod method() const;
	void setMethod(SubtitleDeliveryMethod newMethod);
	
	QString didlMode() const;
	void setDidlMode(QString newDidlMode);
	
	QString language() const;
	void setLanguage(QString newLanguage);
	
	QString container() const;
	void setContainer(QString newContainer);
	
signals:
	void formatChanged(QString newFormat);
	void methodChanged(SubtitleDeliveryMethod newMethod);
	void didlModeChanged(QString newDidlMode);
	void languageChanged(QString newLanguage);
	void containerChanged(QString newContainer);
protected:
	QString m_format;
	SubtitleDeliveryMethod m_method;
	QString m_didlMode;
	QString m_language;
	QString m_container;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SUBTITLEPROFILE_H
