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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TunerHostInfo {
public:
	TunerHostInfo(											
		bool importFavoritesOnly,			
		bool allowHWTranscoding,			
		bool allowFmp4TranscodingContainer,			
		bool allowStreamSharing,			
		qint32 fallbackMaxStreamingBitrate,			
		bool enableStreamLooping,					
		qint32 tunerCount,					
		bool ignoreDts		
	);

	TunerHostInfo(const TunerHostInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TunerHostInfo &other);
	
	static TunerHostInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();


	QString url() const;

	void setUrl(QString newUrl);
	bool urlNull() const;
	void setUrlNull();


	QString type() const;

	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();


	QString deviceId() const;

	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();


	QString friendlyName() const;

	void setFriendlyName(QString newFriendlyName);
	bool friendlyNameNull() const;
	void setFriendlyNameNull();


	bool importFavoritesOnly() const;

	void setImportFavoritesOnly(bool newImportFavoritesOnly);


	bool allowHWTranscoding() const;

	void setAllowHWTranscoding(bool newAllowHWTranscoding);


	bool allowFmp4TranscodingContainer() const;

	void setAllowFmp4TranscodingContainer(bool newAllowFmp4TranscodingContainer);


	bool allowStreamSharing() const;

	void setAllowStreamSharing(bool newAllowStreamSharing);


	qint32 fallbackMaxStreamingBitrate() const;

	void setFallbackMaxStreamingBitrate(qint32 newFallbackMaxStreamingBitrate);


	bool enableStreamLooping() const;

	void setEnableStreamLooping(bool newEnableStreamLooping);


	QString source() const;

	void setSource(QString newSource);
	bool sourceNull() const;
	void setSourceNull();


	qint32 tunerCount() const;

	void setTunerCount(qint32 newTunerCount);


	QString userAgent() const;

	void setUserAgent(QString newUserAgent);
	bool userAgentNull() const;
	void setUserAgentNull();


	bool ignoreDts() const;

	void setIgnoreDts(bool newIgnoreDts);


protected:
	QString m_jellyfinId;
	QString m_url;
	QString m_type;
	QString m_deviceId;
	QString m_friendlyName;
	bool m_importFavoritesOnly;
	bool m_allowHWTranscoding;
	bool m_allowFmp4TranscodingContainer;
	bool m_allowStreamSharing;
	qint32 m_fallbackMaxStreamingBitrate;
	bool m_enableStreamLooping;
	QString m_source;
	qint32 m_tunerCount;
	QString m_userAgent;
	bool m_ignoreDts;

private:
	// Private constructor which generates an invalid object, for use withing TunerHostInfo::fromJson();
	TunerHostInfo();
};


} // NS DTO

namespace Support {

using TunerHostInfo = Jellyfin::DTO::TunerHostInfo;

template <>
TunerHostInfo fromJsonValue(const QJsonValue &source, convertType<TunerHostInfo>);

template<>
QJsonValue toJsonValue(const TunerHostInfo &source, convertType<TunerHostInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TUNERHOSTINFO_H
