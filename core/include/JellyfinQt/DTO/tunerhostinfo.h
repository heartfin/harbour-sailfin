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

#ifndef JELLYFIN_DTO_TUNERHOSTINFO_H
#define JELLYFIN_DTO_TUNERHOSTINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class TunerHostInfo : public QObject {
	Q_OBJECT
public:
	explicit TunerHostInfo(QObject *parent = nullptr);
	static TunerHostInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QString deviceId READ deviceId WRITE setDeviceId NOTIFY deviceIdChanged)
	Q_PROPERTY(QString friendlyName READ friendlyName WRITE setFriendlyName NOTIFY friendlyNameChanged)
	Q_PROPERTY(bool importFavoritesOnly READ importFavoritesOnly WRITE setImportFavoritesOnly NOTIFY importFavoritesOnlyChanged)
	Q_PROPERTY(bool allowHWTranscoding READ allowHWTranscoding WRITE setAllowHWTranscoding NOTIFY allowHWTranscodingChanged)
	Q_PROPERTY(bool enableStreamLooping READ enableStreamLooping WRITE setEnableStreamLooping NOTIFY enableStreamLoopingChanged)
	Q_PROPERTY(QString source READ source WRITE setSource NOTIFY sourceChanged)
	Q_PROPERTY(qint32 tunerCount READ tunerCount WRITE setTunerCount NOTIFY tunerCountChanged)
	Q_PROPERTY(QString userAgent READ userAgent WRITE setUserAgent NOTIFY userAgentChanged)

	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString url() const;
	void setUrl(QString newUrl);
	
	QString type() const;
	void setType(QString newType);
	
	QString deviceId() const;
	void setDeviceId(QString newDeviceId);
	
	QString friendlyName() const;
	void setFriendlyName(QString newFriendlyName);
	
	bool importFavoritesOnly() const;
	void setImportFavoritesOnly(bool newImportFavoritesOnly);
	
	bool allowHWTranscoding() const;
	void setAllowHWTranscoding(bool newAllowHWTranscoding);
	
	bool enableStreamLooping() const;
	void setEnableStreamLooping(bool newEnableStreamLooping);
	
	QString source() const;
	void setSource(QString newSource);
	
	qint32 tunerCount() const;
	void setTunerCount(qint32 newTunerCount);
	
	QString userAgent() const;
	void setUserAgent(QString newUserAgent);
	
signals:
	void jellyfinIdChanged(QString newJellyfinId);
	void urlChanged(QString newUrl);
	void typeChanged(QString newType);
	void deviceIdChanged(QString newDeviceId);
	void friendlyNameChanged(QString newFriendlyName);
	void importFavoritesOnlyChanged(bool newImportFavoritesOnly);
	void allowHWTranscodingChanged(bool newAllowHWTranscoding);
	void enableStreamLoopingChanged(bool newEnableStreamLooping);
	void sourceChanged(QString newSource);
	void tunerCountChanged(qint32 newTunerCount);
	void userAgentChanged(QString newUserAgent);
protected:
	QString m_jellyfinId;
	QString m_url;
	QString m_type;
	QString m_deviceId;
	QString m_friendlyName;
	bool m_importFavoritesOnly;
	bool m_allowHWTranscoding;
	bool m_enableStreamLooping;
	QString m_source;
	qint32 m_tunerCount;
	QString m_userAgent;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TUNERHOSTINFO_H
