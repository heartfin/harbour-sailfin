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

#include <JellyfinQt/dto/trickplayoptions.h>

namespace Jellyfin {
namespace DTO {

TrickplayOptions::TrickplayOptions() {}
TrickplayOptions::TrickplayOptions (
		bool enableHwAcceleration, 
		bool enableHwEncoding, 
		bool enableKeyFrameOnlyExtraction, 
		TrickplayScanBehavior scanBehavior, 
		ProcessPriorityClass processPriority, 
		qint32 interval, 
		QList<qint32> widthResolutions, 
		qint32 tileWidth, 
		qint32 tileHeight, 
		qint32 qscale, 
		qint32 jpegQuality, 
		qint32 processThreads 
		) :
	m_enableHwAcceleration(enableHwAcceleration),
	m_enableHwEncoding(enableHwEncoding),
	m_enableKeyFrameOnlyExtraction(enableKeyFrameOnlyExtraction),
	m_scanBehavior(scanBehavior),
	m_processPriority(processPriority),
	m_interval(interval),
	m_widthResolutions(widthResolutions),
	m_tileWidth(tileWidth),
	m_tileHeight(tileHeight),
	m_qscale(qscale),
	m_jpegQuality(jpegQuality),
	m_processThreads(processThreads) { }



TrickplayOptions::TrickplayOptions(const TrickplayOptions &other) :

	m_enableHwAcceleration(other.m_enableHwAcceleration),
	m_enableHwEncoding(other.m_enableHwEncoding),
	m_enableKeyFrameOnlyExtraction(other.m_enableKeyFrameOnlyExtraction),
	m_scanBehavior(other.m_scanBehavior),
	m_processPriority(other.m_processPriority),
	m_interval(other.m_interval),
	m_widthResolutions(other.m_widthResolutions),
	m_tileWidth(other.m_tileWidth),
	m_tileHeight(other.m_tileHeight),
	m_qscale(other.m_qscale),
	m_jpegQuality(other.m_jpegQuality),
	m_processThreads(other.m_processThreads){}


void TrickplayOptions::replaceData(TrickplayOptions &other) {
	m_enableHwAcceleration = other.m_enableHwAcceleration;
	m_enableHwEncoding = other.m_enableHwEncoding;
	m_enableKeyFrameOnlyExtraction = other.m_enableKeyFrameOnlyExtraction;
	m_scanBehavior = other.m_scanBehavior;
	m_processPriority = other.m_processPriority;
	m_interval = other.m_interval;
	m_widthResolutions = other.m_widthResolutions;
	m_tileWidth = other.m_tileWidth;
	m_tileHeight = other.m_tileHeight;
	m_qscale = other.m_qscale;
	m_jpegQuality = other.m_jpegQuality;
	m_processThreads = other.m_processThreads;
}

TrickplayOptions TrickplayOptions::fromJson(QJsonObject source) {
	TrickplayOptions instance;
	instance.setFromJson(source);
	return instance;
}


void TrickplayOptions::setFromJson(QJsonObject source) {
	m_enableHwAcceleration = Jellyfin::Support::fromJsonValue<bool>(source["EnableHwAcceleration"]);
	m_enableHwEncoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableHwEncoding"]);
	m_enableKeyFrameOnlyExtraction = Jellyfin::Support::fromJsonValue<bool>(source["EnableKeyFrameOnlyExtraction"]);
	m_scanBehavior = Jellyfin::Support::fromJsonValue<TrickplayScanBehavior>(source["ScanBehavior"]);
	m_processPriority = Jellyfin::Support::fromJsonValue<ProcessPriorityClass>(source["ProcessPriority"]);
	m_interval = Jellyfin::Support::fromJsonValue<qint32>(source["Interval"]);
	m_widthResolutions = Jellyfin::Support::fromJsonValue<QList<qint32>>(source["WidthResolutions"]);
	m_tileWidth = Jellyfin::Support::fromJsonValue<qint32>(source["TileWidth"]);
	m_tileHeight = Jellyfin::Support::fromJsonValue<qint32>(source["TileHeight"]);
	m_qscale = Jellyfin::Support::fromJsonValue<qint32>(source["Qscale"]);
	m_jpegQuality = Jellyfin::Support::fromJsonValue<qint32>(source["JpegQuality"]);
	m_processThreads = Jellyfin::Support::fromJsonValue<qint32>(source["ProcessThreads"]);

}
	
QJsonObject TrickplayOptions::toJson() const {
	QJsonObject result;
	
	result["EnableHwAcceleration"] = Jellyfin::Support::toJsonValue<bool>(m_enableHwAcceleration);		
	result["EnableHwEncoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableHwEncoding);		
	result["EnableKeyFrameOnlyExtraction"] = Jellyfin::Support::toJsonValue<bool>(m_enableKeyFrameOnlyExtraction);		
	result["ScanBehavior"] = Jellyfin::Support::toJsonValue<TrickplayScanBehavior>(m_scanBehavior);		
	result["ProcessPriority"] = Jellyfin::Support::toJsonValue<ProcessPriorityClass>(m_processPriority);		
	result["Interval"] = Jellyfin::Support::toJsonValue<qint32>(m_interval);		
	result["WidthResolutions"] = Jellyfin::Support::toJsonValue<QList<qint32>>(m_widthResolutions);		
	result["TileWidth"] = Jellyfin::Support::toJsonValue<qint32>(m_tileWidth);		
	result["TileHeight"] = Jellyfin::Support::toJsonValue<qint32>(m_tileHeight);		
	result["Qscale"] = Jellyfin::Support::toJsonValue<qint32>(m_qscale);		
	result["JpegQuality"] = Jellyfin::Support::toJsonValue<qint32>(m_jpegQuality);		
	result["ProcessThreads"] = Jellyfin::Support::toJsonValue<qint32>(m_processThreads);	
	return result;
}

bool TrickplayOptions::enableHwAcceleration() const { return m_enableHwAcceleration; }

void TrickplayOptions::setEnableHwAcceleration(bool newEnableHwAcceleration) {
	m_enableHwAcceleration = newEnableHwAcceleration;
}

bool TrickplayOptions::enableHwEncoding() const { return m_enableHwEncoding; }

void TrickplayOptions::setEnableHwEncoding(bool newEnableHwEncoding) {
	m_enableHwEncoding = newEnableHwEncoding;
}

bool TrickplayOptions::enableKeyFrameOnlyExtraction() const { return m_enableKeyFrameOnlyExtraction; }

void TrickplayOptions::setEnableKeyFrameOnlyExtraction(bool newEnableKeyFrameOnlyExtraction) {
	m_enableKeyFrameOnlyExtraction = newEnableKeyFrameOnlyExtraction;
}

TrickplayScanBehavior TrickplayOptions::scanBehavior() const { return m_scanBehavior; }

void TrickplayOptions::setScanBehavior(TrickplayScanBehavior newScanBehavior) {
	m_scanBehavior = newScanBehavior;
}

ProcessPriorityClass TrickplayOptions::processPriority() const { return m_processPriority; }

void TrickplayOptions::setProcessPriority(ProcessPriorityClass newProcessPriority) {
	m_processPriority = newProcessPriority;
}

qint32 TrickplayOptions::interval() const { return m_interval; }

void TrickplayOptions::setInterval(qint32 newInterval) {
	m_interval = newInterval;
}

QList<qint32> TrickplayOptions::widthResolutions() const { return m_widthResolutions; }

void TrickplayOptions::setWidthResolutions(QList<qint32> newWidthResolutions) {
	m_widthResolutions = newWidthResolutions;
}

qint32 TrickplayOptions::tileWidth() const { return m_tileWidth; }

void TrickplayOptions::setTileWidth(qint32 newTileWidth) {
	m_tileWidth = newTileWidth;
}

qint32 TrickplayOptions::tileHeight() const { return m_tileHeight; }

void TrickplayOptions::setTileHeight(qint32 newTileHeight) {
	m_tileHeight = newTileHeight;
}

qint32 TrickplayOptions::qscale() const { return m_qscale; }

void TrickplayOptions::setQscale(qint32 newQscale) {
	m_qscale = newQscale;
}

qint32 TrickplayOptions::jpegQuality() const { return m_jpegQuality; }

void TrickplayOptions::setJpegQuality(qint32 newJpegQuality) {
	m_jpegQuality = newJpegQuality;
}

qint32 TrickplayOptions::processThreads() const { return m_processThreads; }

void TrickplayOptions::setProcessThreads(qint32 newProcessThreads) {
	m_processThreads = newProcessThreads;
}


} // NS DTO

namespace Support {

using TrickplayOptions = Jellyfin::DTO::TrickplayOptions;

template <>
TrickplayOptions fromJsonValue(const QJsonValue &source, convertType<TrickplayOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TrickplayOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TrickplayOptions &source, convertType<TrickplayOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
