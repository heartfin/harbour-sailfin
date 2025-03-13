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

#ifndef JELLYFIN_DTO_ENCODINGOPTIONS_H
#define JELLYFIN_DTO_ENCODINGOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/deinterlacemethod.h"
#include "JellyfinQt/dto/downmixstereoalgorithms.h"
#include "JellyfinQt/dto/encoderpreset.h"
#include "JellyfinQt/dto/hardwareaccelerationtype.h"
#include "JellyfinQt/dto/tonemappingalgorithm.h"
#include "JellyfinQt/dto/tonemappingmode.h"
#include "JellyfinQt/dto/tonemappingrange.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class EncodingOptions {
public:
	EncodingOptions(	
		qint32 encodingThreadCount,							
		bool enableFallbackFont,			
		bool enableAudioVbr,			
		double downMixAudioBoost,			
		DownMixStereoAlgorithms downMixStereoAlgorithm,			
		qint32 maxMuxingQueueSize,			
		bool enableThrottling,			
		qint32 throttleDelaySeconds,			
		bool enableSegmentDeletion,			
		qint32 segmentKeepSeconds,			
		HardwareAccelerationType hardwareAccelerationType,											
		bool enableTonemapping,			
		bool enableVppTonemapping,			
		bool enableVideoToolboxTonemapping,			
		TonemappingAlgorithm tonemappingAlgorithm,			
		TonemappingMode tonemappingMode,			
		TonemappingRange tonemappingRange,			
		double tonemappingDesat,			
		double tonemappingPeak,			
		double tonemappingParam,			
		double vppTonemappingBrightness,			
		double vppTonemappingContrast,			
		qint32 h264Crf,			
		qint32 h265Crf,			
		EncoderPreset encoderPreset,			
		bool deinterlaceDoubleRate,			
		DeinterlaceMethod deinterlaceMethod,			
		bool enableDecodingColorDepth10Hevc,			
		bool enableDecodingColorDepth10Vp9,			
		bool enableDecodingColorDepth10HevcRext,			
		bool enableDecodingColorDepth12HevcRext,			
		bool enableEnhancedNvdecDecoder,			
		bool preferSystemNativeHwDecoder,			
		bool enableIntelLowPowerH264HwEncoder,			
		bool enableIntelLowPowerHevcHwEncoder,			
		bool enableHardwareEncoding,			
		bool allowHevcEncoding,			
		bool allowAv1Encoding,			
		bool enableSubtitleExtraction						
	);

	EncodingOptions(const EncodingOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(EncodingOptions &other);
	
	static EncodingOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the thread count used for encoding.
	 */
	qint32 encodingThreadCount() const;
	/**
	* @brief Gets or sets the thread count used for encoding.
	*/
	void setEncodingThreadCount(qint32 newEncodingThreadCount);

	/**
	 * @brief Gets or sets the temporary transcoding path.
	 */
	QString transcodingTempPath() const;
	/**
	* @brief Gets or sets the temporary transcoding path.
	*/
	void setTranscodingTempPath(QString newTranscodingTempPath);
	bool transcodingTempPathNull() const;
	void setTranscodingTempPathNull();

	/**
	 * @brief Gets or sets the path to the fallback font.
	 */
	QString fallbackFontPath() const;
	/**
	* @brief Gets or sets the path to the fallback font.
	*/
	void setFallbackFontPath(QString newFallbackFontPath);
	bool fallbackFontPathNull() const;
	void setFallbackFontPathNull();

	/**
	 * @brief Gets or sets a value indicating whether to use the fallback font.
	 */
	bool enableFallbackFont() const;
	/**
	* @brief Gets or sets a value indicating whether to use the fallback font.
	*/
	void setEnableFallbackFont(bool newEnableFallbackFont);

	/**
	 * @brief Gets or sets a value indicating whether audio VBR is enabled.
	 */
	bool enableAudioVbr() const;
	/**
	* @brief Gets or sets a value indicating whether audio VBR is enabled.
	*/
	void setEnableAudioVbr(bool newEnableAudioVbr);

	/**
	 * @brief Gets or sets the audio boost applied when downmixing audio.
	 */
	double downMixAudioBoost() const;
	/**
	* @brief Gets or sets the audio boost applied when downmixing audio.
	*/
	void setDownMixAudioBoost(double newDownMixAudioBoost);


	DownMixStereoAlgorithms downMixStereoAlgorithm() const;

	void setDownMixStereoAlgorithm(DownMixStereoAlgorithms newDownMixStereoAlgorithm);

	/**
	 * @brief Gets or sets the maximum size of the muxing queue.
	 */
	qint32 maxMuxingQueueSize() const;
	/**
	* @brief Gets or sets the maximum size of the muxing queue.
	*/
	void setMaxMuxingQueueSize(qint32 newMaxMuxingQueueSize);

	/**
	 * @brief Gets or sets a value indicating whether throttling is enabled.
	 */
	bool enableThrottling() const;
	/**
	* @brief Gets or sets a value indicating whether throttling is enabled.
	*/
	void setEnableThrottling(bool newEnableThrottling);

	/**
	 * @brief Gets or sets the delay after which throttling happens.
	 */
	qint32 throttleDelaySeconds() const;
	/**
	* @brief Gets or sets the delay after which throttling happens.
	*/
	void setThrottleDelaySeconds(qint32 newThrottleDelaySeconds);

	/**
	 * @brief Gets or sets a value indicating whether segment deletion is enabled.
	 */
	bool enableSegmentDeletion() const;
	/**
	* @brief Gets or sets a value indicating whether segment deletion is enabled.
	*/
	void setEnableSegmentDeletion(bool newEnableSegmentDeletion);

	/**
	 * @brief Gets or sets seconds for which segments should be kept before being deleted.
	 */
	qint32 segmentKeepSeconds() const;
	/**
	* @brief Gets or sets seconds for which segments should be kept before being deleted.
	*/
	void setSegmentKeepSeconds(qint32 newSegmentKeepSeconds);


	HardwareAccelerationType hardwareAccelerationType() const;

	void setHardwareAccelerationType(HardwareAccelerationType newHardwareAccelerationType);

	/**
	 * @brief Gets or sets the FFmpeg path as set by the user via the UI.
	 */
	QString encoderAppPath() const;
	/**
	* @brief Gets or sets the FFmpeg path as set by the user via the UI.
	*/
	void setEncoderAppPath(QString newEncoderAppPath);
	bool encoderAppPathNull() const;
	void setEncoderAppPathNull();

	/**
	 * @brief Gets or sets the current FFmpeg path being used by the system and displayed on the transcode page.
	 */
	QString encoderAppPathDisplay() const;
	/**
	* @brief Gets or sets the current FFmpeg path being used by the system and displayed on the transcode page.
	*/
	void setEncoderAppPathDisplay(QString newEncoderAppPathDisplay);
	bool encoderAppPathDisplayNull() const;
	void setEncoderAppPathDisplayNull();

	/**
	 * @brief Gets or sets the VA-API device.
	 */
	QString vaapiDevice() const;
	/**
	* @brief Gets or sets the VA-API device.
	*/
	void setVaapiDevice(QString newVaapiDevice);
	bool vaapiDeviceNull() const;
	void setVaapiDeviceNull();

	/**
	 * @brief Gets or sets the QSV device.
	 */
	QString qsvDevice() const;
	/**
	* @brief Gets or sets the QSV device.
	*/
	void setQsvDevice(QString newQsvDevice);
	bool qsvDeviceNull() const;
	void setQsvDeviceNull();

	/**
	 * @brief Gets or sets a value indicating whether tonemapping is enabled.
	 */
	bool enableTonemapping() const;
	/**
	* @brief Gets or sets a value indicating whether tonemapping is enabled.
	*/
	void setEnableTonemapping(bool newEnableTonemapping);

	/**
	 * @brief Gets or sets a value indicating whether VPP tonemapping is enabled.
	 */
	bool enableVppTonemapping() const;
	/**
	* @brief Gets or sets a value indicating whether VPP tonemapping is enabled.
	*/
	void setEnableVppTonemapping(bool newEnableVppTonemapping);

	/**
	 * @brief Gets or sets a value indicating whether videotoolbox tonemapping is enabled.
	 */
	bool enableVideoToolboxTonemapping() const;
	/**
	* @brief Gets or sets a value indicating whether videotoolbox tonemapping is enabled.
	*/
	void setEnableVideoToolboxTonemapping(bool newEnableVideoToolboxTonemapping);


	TonemappingAlgorithm tonemappingAlgorithm() const;

	void setTonemappingAlgorithm(TonemappingAlgorithm newTonemappingAlgorithm);


	TonemappingMode tonemappingMode() const;

	void setTonemappingMode(TonemappingMode newTonemappingMode);


	TonemappingRange tonemappingRange() const;

	void setTonemappingRange(TonemappingRange newTonemappingRange);

	/**
	 * @brief Gets or sets the tone-mapping desaturation.
	 */
	double tonemappingDesat() const;
	/**
	* @brief Gets or sets the tone-mapping desaturation.
	*/
	void setTonemappingDesat(double newTonemappingDesat);

	/**
	 * @brief Gets or sets the tone-mapping peak.
	 */
	double tonemappingPeak() const;
	/**
	* @brief Gets or sets the tone-mapping peak.
	*/
	void setTonemappingPeak(double newTonemappingPeak);

	/**
	 * @brief Gets or sets the tone-mapping parameters.
	 */
	double tonemappingParam() const;
	/**
	* @brief Gets or sets the tone-mapping parameters.
	*/
	void setTonemappingParam(double newTonemappingParam);

	/**
	 * @brief Gets or sets the VPP tone-mapping brightness.
	 */
	double vppTonemappingBrightness() const;
	/**
	* @brief Gets or sets the VPP tone-mapping brightness.
	*/
	void setVppTonemappingBrightness(double newVppTonemappingBrightness);

	/**
	 * @brief Gets or sets the VPP tone-mapping contrast.
	 */
	double vppTonemappingContrast() const;
	/**
	* @brief Gets or sets the VPP tone-mapping contrast.
	*/
	void setVppTonemappingContrast(double newVppTonemappingContrast);

	/**
	 * @brief Gets or sets the H264 CRF.
	 */
	qint32 h264Crf() const;
	/**
	* @brief Gets or sets the H264 CRF.
	*/
	void setH264Crf(qint32 newH264Crf);

	/**
	 * @brief Gets or sets the H265 CRF.
	 */
	qint32 h265Crf() const;
	/**
	* @brief Gets or sets the H265 CRF.
	*/
	void setH265Crf(qint32 newH265Crf);


	EncoderPreset encoderPreset() const;

	void setEncoderPreset(EncoderPreset newEncoderPreset);

	/**
	 * @brief Gets or sets a value indicating whether the framerate is doubled when deinterlacing.
	 */
	bool deinterlaceDoubleRate() const;
	/**
	* @brief Gets or sets a value indicating whether the framerate is doubled when deinterlacing.
	*/
	void setDeinterlaceDoubleRate(bool newDeinterlaceDoubleRate);


	DeinterlaceMethod deinterlaceMethod() const;

	void setDeinterlaceMethod(DeinterlaceMethod newDeinterlaceMethod);

	/**
	 * @brief Gets or sets a value indicating whether 10bit HEVC decoding is enabled.
	 */
	bool enableDecodingColorDepth10Hevc() const;
	/**
	* @brief Gets or sets a value indicating whether 10bit HEVC decoding is enabled.
	*/
	void setEnableDecodingColorDepth10Hevc(bool newEnableDecodingColorDepth10Hevc);

	/**
	 * @brief Gets or sets a value indicating whether 10bit VP9 decoding is enabled.
	 */
	bool enableDecodingColorDepth10Vp9() const;
	/**
	* @brief Gets or sets a value indicating whether 10bit VP9 decoding is enabled.
	*/
	void setEnableDecodingColorDepth10Vp9(bool newEnableDecodingColorDepth10Vp9);

	/**
	 * @brief Gets or sets a value indicating whether 8/10bit HEVC RExt decoding is enabled.
	 */
	bool enableDecodingColorDepth10HevcRext() const;
	/**
	* @brief Gets or sets a value indicating whether 8/10bit HEVC RExt decoding is enabled.
	*/
	void setEnableDecodingColorDepth10HevcRext(bool newEnableDecodingColorDepth10HevcRext);

	/**
	 * @brief Gets or sets a value indicating whether 12bit HEVC RExt decoding is enabled.
	 */
	bool enableDecodingColorDepth12HevcRext() const;
	/**
	* @brief Gets or sets a value indicating whether 12bit HEVC RExt decoding is enabled.
	*/
	void setEnableDecodingColorDepth12HevcRext(bool newEnableDecodingColorDepth12HevcRext);

	/**
	 * @brief Gets or sets a value indicating whether the enhanced NVDEC is enabled.
	 */
	bool enableEnhancedNvdecDecoder() const;
	/**
	* @brief Gets or sets a value indicating whether the enhanced NVDEC is enabled.
	*/
	void setEnableEnhancedNvdecDecoder(bool newEnableEnhancedNvdecDecoder);

	/**
	 * @brief Gets or sets a value indicating whether the system native hardware decoder should be used.
	 */
	bool preferSystemNativeHwDecoder() const;
	/**
	* @brief Gets or sets a value indicating whether the system native hardware decoder should be used.
	*/
	void setPreferSystemNativeHwDecoder(bool newPreferSystemNativeHwDecoder);

	/**
	 * @brief Gets or sets a value indicating whether the Intel H264 low-power hardware encoder should be used.
	 */
	bool enableIntelLowPowerH264HwEncoder() const;
	/**
	* @brief Gets or sets a value indicating whether the Intel H264 low-power hardware encoder should be used.
	*/
	void setEnableIntelLowPowerH264HwEncoder(bool newEnableIntelLowPowerH264HwEncoder);

	/**
	 * @brief Gets or sets a value indicating whether the Intel HEVC low-power hardware encoder should be used.
	 */
	bool enableIntelLowPowerHevcHwEncoder() const;
	/**
	* @brief Gets or sets a value indicating whether the Intel HEVC low-power hardware encoder should be used.
	*/
	void setEnableIntelLowPowerHevcHwEncoder(bool newEnableIntelLowPowerHevcHwEncoder);

	/**
	 * @brief Gets or sets a value indicating whether hardware encoding is enabled.
	 */
	bool enableHardwareEncoding() const;
	/**
	* @brief Gets or sets a value indicating whether hardware encoding is enabled.
	*/
	void setEnableHardwareEncoding(bool newEnableHardwareEncoding);

	/**
	 * @brief Gets or sets a value indicating whether HEVC encoding is enabled.
	 */
	bool allowHevcEncoding() const;
	/**
	* @brief Gets or sets a value indicating whether HEVC encoding is enabled.
	*/
	void setAllowHevcEncoding(bool newAllowHevcEncoding);

	/**
	 * @brief Gets or sets a value indicating whether AV1 encoding is enabled.
	 */
	bool allowAv1Encoding() const;
	/**
	* @brief Gets or sets a value indicating whether AV1 encoding is enabled.
	*/
	void setAllowAv1Encoding(bool newAllowAv1Encoding);

	/**
	 * @brief Gets or sets a value indicating whether subtitle extraction is enabled.
	 */
	bool enableSubtitleExtraction() const;
	/**
	* @brief Gets or sets a value indicating whether subtitle extraction is enabled.
	*/
	void setEnableSubtitleExtraction(bool newEnableSubtitleExtraction);

	/**
	 * @brief Gets or sets the codecs hardware encoding is used for.
	 */
	QStringList hardwareDecodingCodecs() const;
	/**
	* @brief Gets or sets the codecs hardware encoding is used for.
	*/
	void setHardwareDecodingCodecs(QStringList newHardwareDecodingCodecs);
	bool hardwareDecodingCodecsNull() const;
	void setHardwareDecodingCodecsNull();

	/**
	 * @brief Gets or sets the file extensions on-demand metadata based keyframe extraction is enabled for.
	 */
	QStringList allowOnDemandMetadataBasedKeyframeExtractionForExtensions() const;
	/**
	* @brief Gets or sets the file extensions on-demand metadata based keyframe extraction is enabled for.
	*/
	void setAllowOnDemandMetadataBasedKeyframeExtractionForExtensions(QStringList newAllowOnDemandMetadataBasedKeyframeExtractionForExtensions);
	bool allowOnDemandMetadataBasedKeyframeExtractionForExtensionsNull() const;
	void setAllowOnDemandMetadataBasedKeyframeExtractionForExtensionsNull();


protected:
	qint32 m_encodingThreadCount;
	QString m_transcodingTempPath;
	QString m_fallbackFontPath;
	bool m_enableFallbackFont;
	bool m_enableAudioVbr;
	double m_downMixAudioBoost;
	DownMixStereoAlgorithms m_downMixStereoAlgorithm;
	qint32 m_maxMuxingQueueSize;
	bool m_enableThrottling;
	qint32 m_throttleDelaySeconds;
	bool m_enableSegmentDeletion;
	qint32 m_segmentKeepSeconds;
	HardwareAccelerationType m_hardwareAccelerationType;
	QString m_encoderAppPath;
	QString m_encoderAppPathDisplay;
	QString m_vaapiDevice;
	QString m_qsvDevice;
	bool m_enableTonemapping;
	bool m_enableVppTonemapping;
	bool m_enableVideoToolboxTonemapping;
	TonemappingAlgorithm m_tonemappingAlgorithm;
	TonemappingMode m_tonemappingMode;
	TonemappingRange m_tonemappingRange;
	double m_tonemappingDesat;
	double m_tonemappingPeak;
	double m_tonemappingParam;
	double m_vppTonemappingBrightness;
	double m_vppTonemappingContrast;
	qint32 m_h264Crf;
	qint32 m_h265Crf;
	EncoderPreset m_encoderPreset;
	bool m_deinterlaceDoubleRate;
	DeinterlaceMethod m_deinterlaceMethod;
	bool m_enableDecodingColorDepth10Hevc;
	bool m_enableDecodingColorDepth10Vp9;
	bool m_enableDecodingColorDepth10HevcRext;
	bool m_enableDecodingColorDepth12HevcRext;
	bool m_enableEnhancedNvdecDecoder;
	bool m_preferSystemNativeHwDecoder;
	bool m_enableIntelLowPowerH264HwEncoder;
	bool m_enableIntelLowPowerHevcHwEncoder;
	bool m_enableHardwareEncoding;
	bool m_allowHevcEncoding;
	bool m_allowAv1Encoding;
	bool m_enableSubtitleExtraction;
	QStringList m_hardwareDecodingCodecs;
	QStringList m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions;

private:
	// Private constructor which generates an invalid object, for use withing EncodingOptions::fromJson();
	EncodingOptions();
};


} // NS DTO

namespace Support {

using EncodingOptions = Jellyfin::DTO::EncodingOptions;

template <>
EncodingOptions fromJsonValue(const QJsonValue &source, convertType<EncodingOptions>);

template<>
QJsonValue toJsonValue(const EncodingOptions &source, convertType<EncodingOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_ENCODINGOPTIONS_H
