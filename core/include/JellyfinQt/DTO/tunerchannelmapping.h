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

#ifndef JELLYFIN_DTO_TUNERCHANNELMAPPING_H
#define JELLYFIN_DTO_TUNERCHANNELMAPPING_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class TunerChannelMapping : public QObject {
	Q_OBJECT
public:
	explicit TunerChannelMapping(QObject *parent = nullptr);
	static TunerChannelMapping *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(QString providerChannelName READ providerChannelName WRITE setProviderChannelName NOTIFY providerChannelNameChanged)
	Q_PROPERTY(QString providerChannelId READ providerChannelId WRITE setProviderChannelId NOTIFY providerChannelIdChanged)
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)

	QString name() const;
	void setName(QString newName);
	
	QString providerChannelName() const;
	void setProviderChannelName(QString newProviderChannelName);
	
	QString providerChannelId() const;
	void setProviderChannelId(QString newProviderChannelId);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
signals:
	void nameChanged(QString newName);
	void providerChannelNameChanged(QString newProviderChannelName);
	void providerChannelIdChanged(QString newProviderChannelId);
	void jellyfinIdChanged(QString newJellyfinId);
protected:
	QString m_name;
	QString m_providerChannelName;
	QString m_providerChannelId;
	QString m_jellyfinId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TUNERCHANNELMAPPING_H
