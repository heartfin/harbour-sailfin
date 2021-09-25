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

#include <JellyfinQt/dto/imageoption.h>

namespace Jellyfin {
namespace DTO {

ImageOption::ImageOption() {}
ImageOption::ImageOption (
		ImageType type, 
		qint32 limit, 
		qint32 minWidth 
		) :
	m_type(type),
	m_limit(limit),
	m_minWidth(minWidth) { }



ImageOption::ImageOption(const ImageOption &other) :

	m_type(other.m_type),
	m_limit(other.m_limit),
	m_minWidth(other.m_minWidth){}


void ImageOption::replaceData(ImageOption &other) {
	m_type = other.m_type;
	m_limit = other.m_limit;
	m_minWidth = other.m_minWidth;
}

ImageOption ImageOption::fromJson(QJsonObject source) {
	ImageOption instance;
	instance.setFromJson(source);
	return instance;
}


void ImageOption::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<ImageType>(source["Type"]);
	m_limit = Jellyfin::Support::fromJsonValue<qint32>(source["Limit"]);
	m_minWidth = Jellyfin::Support::fromJsonValue<qint32>(source["MinWidth"]);

}
	
QJsonObject ImageOption::toJson() const {
	QJsonObject result;
	
	result["Type"] = Jellyfin::Support::toJsonValue<ImageType>(m_type);		
	result["Limit"] = Jellyfin::Support::toJsonValue<qint32>(m_limit);		
	result["MinWidth"] = Jellyfin::Support::toJsonValue<qint32>(m_minWidth);	
	return result;
}

ImageType ImageOption::type() const { return m_type; }

void ImageOption::setType(ImageType newType) {
	m_type = newType;
}

qint32 ImageOption::limit() const { return m_limit; }

void ImageOption::setLimit(qint32 newLimit) {
	m_limit = newLimit;
}

qint32 ImageOption::minWidth() const { return m_minWidth; }

void ImageOption::setMinWidth(qint32 newMinWidth) {
	m_minWidth = newMinWidth;
}


} // NS DTO

namespace Support {

using ImageOption = Jellyfin::DTO::ImageOption;

template <>
ImageOption fromJsonValue(const QJsonValue &source, convertType<ImageOption>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ImageOption::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ImageOption &source, convertType<ImageOption>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
