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

#ifndef JELLYFIN_DTO_CHANNELFEATURES_H
#define JELLYFIN_DTO_CHANNELFEATURES_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/channelitemsortfield.h"
#include "JellyfinQt/dto/channelmediacontenttype.h"
#include "JellyfinQt/dto/channelmediatype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ChannelFeatures {
public:
	ChannelFeatures(					
		bool canSearch,													
		bool supportsSortOrderToggle,			
		bool supportsLatestMedia,			
		bool canFilter,			
		bool supportsContentDownloading		
	);

	ChannelFeatures(const ChannelFeatures &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ChannelFeatures &other);
	
	static ChannelFeatures fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance can search.
	 */
	bool canSearch() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can search.
	*/
	void setCanSearch(bool newCanSearch);

	/**
	 * @brief Gets or sets the media types.
	 */
	QList<ChannelMediaType> mediaTypes() const;
	/**
	* @brief Gets or sets the media types.
	*/
	void setMediaTypes(QList<ChannelMediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();

	/**
	 * @brief Gets or sets the content types.
	 */
	QList<ChannelMediaContentType> contentTypes() const;
	/**
	* @brief Gets or sets the content types.
	*/
	void setContentTypes(QList<ChannelMediaContentType> newContentTypes);
	bool contentTypesNull() const;
	void setContentTypesNull();

	/**
	 * @brief Represents the maximum number of records the channel allows retrieving at a time.
	 */
	std::optional<qint32> maxPageSize() const;
	/**
	* @brief Represents the maximum number of records the channel allows retrieving at a time.
	*/
	void setMaxPageSize(std::optional<qint32> newMaxPageSize);
	bool maxPageSizeNull() const;
	void setMaxPageSizeNull();

	/**
	 * @brief Gets or sets the automatic refresh levels.
	 */
	std::optional<qint32> autoRefreshLevels() const;
	/**
	* @brief Gets or sets the automatic refresh levels.
	*/
	void setAutoRefreshLevels(std::optional<qint32> newAutoRefreshLevels);
	bool autoRefreshLevelsNull() const;
	void setAutoRefreshLevelsNull();

	/**
	 * @brief Gets or sets the default sort orders.
	 */
	QList<ChannelItemSortField> defaultSortFields() const;
	/**
	* @brief Gets or sets the default sort orders.
	*/
	void setDefaultSortFields(QList<ChannelItemSortField> newDefaultSortFields);
	bool defaultSortFieldsNull() const;
	void setDefaultSortFieldsNull();

	/**
	 * @brief Indicates if a sort ascending/descending toggle is supported or not.
	 */
	bool supportsSortOrderToggle() const;
	/**
	* @brief Indicates if a sort ascending/descending toggle is supported or not.
	*/
	void setSupportsSortOrderToggle(bool newSupportsSortOrderToggle);

	/**
	 * @brief Gets or sets a value indicating whether [supports latest media].
	 */
	bool supportsLatestMedia() const;
	/**
	* @brief Gets or sets a value indicating whether [supports latest media].
	*/
	void setSupportsLatestMedia(bool newSupportsLatestMedia);

	/**
	 * @brief Gets or sets a value indicating whether this instance can filter.
	 */
	bool canFilter() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can filter.
	*/
	void setCanFilter(bool newCanFilter);

	/**
	 * @brief Gets or sets a value indicating whether [supports content downloading].
	 */
	bool supportsContentDownloading() const;
	/**
	* @brief Gets or sets a value indicating whether [supports content downloading].
	*/
	void setSupportsContentDownloading(bool newSupportsContentDownloading);


protected:
	QString m_name;
	QString m_jellyfinId;
	bool m_canSearch;
	QList<ChannelMediaType> m_mediaTypes;
	QList<ChannelMediaContentType> m_contentTypes;
	std::optional<qint32> m_maxPageSize = std::nullopt;
	std::optional<qint32> m_autoRefreshLevels = std::nullopt;
	QList<ChannelItemSortField> m_defaultSortFields;
	bool m_supportsSortOrderToggle;
	bool m_supportsLatestMedia;
	bool m_canFilter;
	bool m_supportsContentDownloading;

private:
	// Private constructor which generates an invalid object, for use withing ChannelFeatures::fromJson();
	ChannelFeatures();
};


} // NS DTO

namespace Support {

using ChannelFeatures = Jellyfin::DTO::ChannelFeatures;

template <>
ChannelFeatures fromJsonValue(const QJsonValue &source, convertType<ChannelFeatures>);

template<>
QJsonValue toJsonValue(const ChannelFeatures &source, convertType<ChannelFeatures>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CHANNELFEATURES_H
