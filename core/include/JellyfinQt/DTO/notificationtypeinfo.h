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

#ifndef JELLYFIN_DTO_NOTIFICATIONTYPEINFO_H
#define JELLYFIN_DTO_NOTIFICATIONTYPEINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class NotificationTypeInfo : public QObject {
	Q_OBJECT
public:
	explicit NotificationTypeInfo(QObject *parent = nullptr);
	static NotificationTypeInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(bool enabled READ enabled WRITE setEnabled NOTIFY enabledChanged)
	Q_PROPERTY(QString category READ category WRITE setCategory NOTIFY categoryChanged)
	Q_PROPERTY(bool isBasedOnUserEvent READ isBasedOnUserEvent WRITE setIsBasedOnUserEvent NOTIFY isBasedOnUserEventChanged)

	QString type() const;
	void setType(QString newType);
	
	QString name() const;
	void setName(QString newName);
	
	bool enabled() const;
	void setEnabled(bool newEnabled);
	
	QString category() const;
	void setCategory(QString newCategory);
	
	bool isBasedOnUserEvent() const;
	void setIsBasedOnUserEvent(bool newIsBasedOnUserEvent);
	
signals:
	void typeChanged(QString newType);
	void nameChanged(QString newName);
	void enabledChanged(bool newEnabled);
	void categoryChanged(QString newCategory);
	void isBasedOnUserEventChanged(bool newIsBasedOnUserEvent);
protected:
	QString m_type;
	QString m_name;
	bool m_enabled;
	QString m_category;
	bool m_isBasedOnUserEvent;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_NOTIFICATIONTYPEINFO_H
