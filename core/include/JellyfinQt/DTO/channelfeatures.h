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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/channelitemsortfield.h"
#include "JellyfinQt/DTO/channelmediacontenttype.h"
#include "JellyfinQt/DTO/channelmediatype.h"

namespace Jellyfin {
namespace DTO {

class ChannelFeatures : public QObject {
	Q_OBJECT
public:
	explicit ChannelFeatures(QObject *parent = nullptr);
	static ChannelFeatures *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the identifier.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance can search.
	 */
	Q_PROPERTY(bool canSearch READ canSearch WRITE setCanSearch NOTIFY canSearchChanged)
	/**
	 * @brief Gets or sets the media types.
	 */
	Q_PROPERTY(QList<ChannelMediaType> mediaTypes READ mediaTypes WRITE setMediaTypes NOTIFY mediaTypesChanged)
	/**
	 * @brief Gets or sets the content types.
	 */
	Q_PROPERTY(QList<ChannelMediaContentType> contentTypes READ contentTypes WRITE setContentTypes NOTIFY contentTypesChanged)
	/**
	 * @brief Represents the maximum number of records the channel allows retrieving at a time.
	 */
	Q_PROPERTY(qint32 maxPageSize READ maxPageSize WRITE setMaxPageSize NOTIFY maxPageSizeChanged)
	/**
	 * @brief Gets or sets the automatic refresh levels.
	 */
	Q_PROPERTY(qint32 autoRefreshLevels READ autoRefreshLevels WRITE setAutoRefreshLevels NOTIFY autoRefreshLevelsChanged)
	/**
	 * @brief Gets or sets the default sort orders.
	 */
	Q_PROPERTY(QList<ChannelItemSortField> defaultSortFields READ defaultSortFields WRITE setDefaultSortFields NOTIFY defaultSortFieldsChanged)
	/**
	 * @brief Indicates if a sort ascending/descending toggle is supported or not.
	 */
	Q_PROPERTY(bool supportsSortOrderToggle READ supportsSortOrderToggle WRITE setSupportsSortOrderToggle NOTIFY supportsSortOrderToggleChanged)
	/**
	 * @brief Gets or sets a value indicating whether [supports latest media].
	 */
	Q_PROPERTY(bool supportsLatestMedia READ supportsLatestMedia WRITE setSupportsLatestMedia NOTIFY supportsLatestMediaChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance can filter.
	 */
	Q_PROPERTY(bool canFilter READ canFilter WRITE setCanFilter NOTIFY canFilterChanged)
	/**
	 * @brief Gets or sets a value indicating whether [supports content downloading].
	 */
	Q_PROPERTY(bool supportsContentDownloading READ supportsContentDownloading WRITE setSupportsContentDownloading NOTIFY supportsContentDownloadingChanged)

	QString name() const;
	void setName(QString newName);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	bool canSearch() const;
	void setCanSearch(bool newCanSearch);
	
	QList<ChannelMediaType> mediaTypes() const;
	void setMediaTypes(QList<ChannelMediaType> newMediaTypes);
	
	QList<ChannelMediaContentType> contentTypes() const;
	void setContentTypes(QList<ChannelMediaContentType> newContentTypes);
	
	qint32 maxPageSize() const;
	void setMaxPageSize(qint32 newMaxPageSize);
	
	qint32 autoRefreshLevels() const;
	void setAutoRefreshLevels(qint32 newAutoRefreshLevels);
	
	QList<ChannelItemSortField> defaultSortFields() const;
	void setDefaultSortFields(QList<ChannelItemSortField> newDefaultSortFields);
	
	bool supportsSortOrderToggle() const;
	void setSupportsSortOrderToggle(bool newSupportsSortOrderToggle);
	
	bool supportsLatestMedia() const;
	void setSupportsLatestMedia(bool newSupportsLatestMedia);
	
	bool canFilter() const;
	void setCanFilter(bool newCanFilter);
	
	bool supportsContentDownloading() const;
	void setSupportsContentDownloading(bool newSupportsContentDownloading);
	
signals:
	void nameChanged(QString newName);
	void jellyfinIdChanged(QString newJellyfinId);
	void canSearchChanged(bool newCanSearch);
	void mediaTypesChanged(QList<ChannelMediaType> newMediaTypes);
	void contentTypesChanged(QList<ChannelMediaContentType> newContentTypes);
	void maxPageSizeChanged(qint32 newMaxPageSize);
	void autoRefreshLevelsChanged(qint32 newAutoRefreshLevels);
	void defaultSortFieldsChanged(QList<ChannelItemSortField> newDefaultSortFields);
	void supportsSortOrderToggleChanged(bool newSupportsSortOrderToggle);
	void supportsLatestMediaChanged(bool newSupportsLatestMedia);
	void canFilterChanged(bool newCanFilter);
	void supportsContentDownloadingChanged(bool newSupportsContentDownloading);
protected:
	QString m_name;
	QString m_jellyfinId;
	bool m_canSearch;
	QList<ChannelMediaType> m_mediaTypes;
	QList<ChannelMediaContentType> m_contentTypes;
	qint32 m_maxPageSize;
	qint32 m_autoRefreshLevels;
	QList<ChannelItemSortField> m_defaultSortFields;
	bool m_supportsSortOrderToggle;
	bool m_supportsLatestMedia;
	bool m_canFilter;
	bool m_supportsContentDownloading;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CHANNELFEATURES_H
