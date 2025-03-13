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

#ifndef JELLYFIN_DTO_TRICKPLAYOPTIONS_H
#define JELLYFIN_DTO_TRICKPLAYOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/processpriorityclass.h"
#include "JellyfinQt/dto/trickplayscanbehavior.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TrickplayOptions {
public:
	TrickplayOptions(	
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
	);

	TrickplayOptions(const TrickplayOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TrickplayOptions &other);
	
	static TrickplayOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets a value indicating whether or not to use HW acceleration.
	 */
	bool enableHwAcceleration() const;
	/**
	* @brief Gets or sets a value indicating whether or not to use HW acceleration.
	*/
	void setEnableHwAcceleration(bool newEnableHwAcceleration);

	/**
	 * @brief Gets or sets a value indicating whether or not to use HW accelerated MJPEG encoding.
	 */
	bool enableHwEncoding() const;
	/**
	* @brief Gets or sets a value indicating whether or not to use HW accelerated MJPEG encoding.
	*/
	void setEnableHwEncoding(bool newEnableHwEncoding);

	/**
	 * @brief Gets or sets a value indicating whether to only extract key frames.
Significantly faster, but is not compatible with all decoders and/or video files.
	 */
	bool enableKeyFrameOnlyExtraction() const;
	/**
	* @brief Gets or sets a value indicating whether to only extract key frames.
Significantly faster, but is not compatible with all decoders and/or video files.
	*/
	void setEnableKeyFrameOnlyExtraction(bool newEnableKeyFrameOnlyExtraction);


	TrickplayScanBehavior scanBehavior() const;

	void setScanBehavior(TrickplayScanBehavior newScanBehavior);


	ProcessPriorityClass processPriority() const;

	void setProcessPriority(ProcessPriorityClass newProcessPriority);

	/**
	 * @brief Gets or sets the interval, in ms, between each new trickplay image.
	 */
	qint32 interval() const;
	/**
	* @brief Gets or sets the interval, in ms, between each new trickplay image.
	*/
	void setInterval(qint32 newInterval);

	/**
	 * @brief Gets or sets the target width resolutions, in px, to generates preview images for.
	 */
	QList<qint32> widthResolutions() const;
	/**
	* @brief Gets or sets the target width resolutions, in px, to generates preview images for.
	*/
	void setWidthResolutions(QList<qint32> newWidthResolutions);

	/**
	 * @brief Gets or sets number of tile images to allow in X dimension.
	 */
	qint32 tileWidth() const;
	/**
	* @brief Gets or sets number of tile images to allow in X dimension.
	*/
	void setTileWidth(qint32 newTileWidth);

	/**
	 * @brief Gets or sets number of tile images to allow in Y dimension.
	 */
	qint32 tileHeight() const;
	/**
	* @brief Gets or sets number of tile images to allow in Y dimension.
	*/
	void setTileHeight(qint32 newTileHeight);

	/**
	 * @brief Gets or sets the ffmpeg output quality level.
	 */
	qint32 qscale() const;
	/**
	* @brief Gets or sets the ffmpeg output quality level.
	*/
	void setQscale(qint32 newQscale);

	/**
	 * @brief Gets or sets the jpeg quality to use for image tiles.
	 */
	qint32 jpegQuality() const;
	/**
	* @brief Gets or sets the jpeg quality to use for image tiles.
	*/
	void setJpegQuality(qint32 newJpegQuality);

	/**
	 * @brief Gets or sets the number of threads to be used by ffmpeg.
	 */
	qint32 processThreads() const;
	/**
	* @brief Gets or sets the number of threads to be used by ffmpeg.
	*/
	void setProcessThreads(qint32 newProcessThreads);


protected:
	bool m_enableHwAcceleration;
	bool m_enableHwEncoding;
	bool m_enableKeyFrameOnlyExtraction;
	TrickplayScanBehavior m_scanBehavior;
	ProcessPriorityClass m_processPriority;
	qint32 m_interval;
	QList<qint32> m_widthResolutions;
	qint32 m_tileWidth;
	qint32 m_tileHeight;
	qint32 m_qscale;
	qint32 m_jpegQuality;
	qint32 m_processThreads;

private:
	// Private constructor which generates an invalid object, for use withing TrickplayOptions::fromJson();
	TrickplayOptions();
};


} // NS DTO

namespace Support {

using TrickplayOptions = Jellyfin::DTO::TrickplayOptions;

template <>
TrickplayOptions fromJsonValue(const QJsonValue &source, convertType<TrickplayOptions>);

template<>
QJsonValue toJsonValue(const TrickplayOptions &source, convertType<TrickplayOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TRICKPLAYOPTIONS_H
