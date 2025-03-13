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

#include <JellyfinQt/dto/encodingoptions.h>

namespace Jellyfin {
namespace DTO {

EncodingOptions::EncodingOptions() {}
EncodingOptions::EncodingOptions (
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
		) :
	m_encodingThreadCount(encodingThreadCount),
	m_enableFallbackFont(enableFallbackFont),
	m_enableAudioVbr(enableAudioVbr),
	m_downMixAudioBoost(downMixAudioBoost),
	m_downMixStereoAlgorithm(downMixStereoAlgorithm),
	m_maxMuxingQueueSize(maxMuxingQueueSize),
	m_enableThrottling(enableThrottling),
	m_throttleDelaySeconds(throttleDelaySeconds),
	m_enableSegmentDeletion(enableSegmentDeletion),
	m_segmentKeepSeconds(segmentKeepSeconds),
	m_hardwareAccelerationType(hardwareAccelerationType),
	m_enableTonemapping(enableTonemapping),
	m_enableVppTonemapping(enableVppTonemapping),
	m_enableVideoToolboxTonemapping(enableVideoToolboxTonemapping),
	m_tonemappingAlgorithm(tonemappingAlgorithm),
	m_tonemappingMode(tonemappingMode),
	m_tonemappingRange(tonemappingRange),
	m_tonemappingDesat(tonemappingDesat),
	m_tonemappingPeak(tonemappingPeak),
	m_tonemappingParam(tonemappingParam),
	m_vppTonemappingBrightness(vppTonemappingBrightness),
	m_vppTonemappingContrast(vppTonemappingContrast),
	m_h264Crf(h264Crf),
	m_h265Crf(h265Crf),
	m_encoderPreset(encoderPreset),
	m_deinterlaceDoubleRate(deinterlaceDoubleRate),
	m_deinterlaceMethod(deinterlaceMethod),
	m_enableDecodingColorDepth10Hevc(enableDecodingColorDepth10Hevc),
	m_enableDecodingColorDepth10Vp9(enableDecodingColorDepth10Vp9),
	m_enableDecodingColorDepth10HevcRext(enableDecodingColorDepth10HevcRext),
	m_enableDecodingColorDepth12HevcRext(enableDecodingColorDepth12HevcRext),
	m_enableEnhancedNvdecDecoder(enableEnhancedNvdecDecoder),
	m_preferSystemNativeHwDecoder(preferSystemNativeHwDecoder),
	m_enableIntelLowPowerH264HwEncoder(enableIntelLowPowerH264HwEncoder),
	m_enableIntelLowPowerHevcHwEncoder(enableIntelLowPowerHevcHwEncoder),
	m_enableHardwareEncoding(enableHardwareEncoding),
	m_allowHevcEncoding(allowHevcEncoding),
	m_allowAv1Encoding(allowAv1Encoding),
	m_enableSubtitleExtraction(enableSubtitleExtraction) { }



EncodingOptions::EncodingOptions(const EncodingOptions &other) :

	m_encodingThreadCount(other.m_encodingThreadCount),
	m_transcodingTempPath(other.m_transcodingTempPath),
	m_fallbackFontPath(other.m_fallbackFontPath),
	m_enableFallbackFont(other.m_enableFallbackFont),
	m_enableAudioVbr(other.m_enableAudioVbr),
	m_downMixAudioBoost(other.m_downMixAudioBoost),
	m_downMixStereoAlgorithm(other.m_downMixStereoAlgorithm),
	m_maxMuxingQueueSize(other.m_maxMuxingQueueSize),
	m_enableThrottling(other.m_enableThrottling),
	m_throttleDelaySeconds(other.m_throttleDelaySeconds),
	m_enableSegmentDeletion(other.m_enableSegmentDeletion),
	m_segmentKeepSeconds(other.m_segmentKeepSeconds),
	m_hardwareAccelerationType(other.m_hardwareAccelerationType),
	m_encoderAppPath(other.m_encoderAppPath),
	m_encoderAppPathDisplay(other.m_encoderAppPathDisplay),
	m_vaapiDevice(other.m_vaapiDevice),
	m_qsvDevice(other.m_qsvDevice),
	m_enableTonemapping(other.m_enableTonemapping),
	m_enableVppTonemapping(other.m_enableVppTonemapping),
	m_enableVideoToolboxTonemapping(other.m_enableVideoToolboxTonemapping),
	m_tonemappingAlgorithm(other.m_tonemappingAlgorithm),
	m_tonemappingMode(other.m_tonemappingMode),
	m_tonemappingRange(other.m_tonemappingRange),
	m_tonemappingDesat(other.m_tonemappingDesat),
	m_tonemappingPeak(other.m_tonemappingPeak),
	m_tonemappingParam(other.m_tonemappingParam),
	m_vppTonemappingBrightness(other.m_vppTonemappingBrightness),
	m_vppTonemappingContrast(other.m_vppTonemappingContrast),
	m_h264Crf(other.m_h264Crf),
	m_h265Crf(other.m_h265Crf),
	m_encoderPreset(other.m_encoderPreset),
	m_deinterlaceDoubleRate(other.m_deinterlaceDoubleRate),
	m_deinterlaceMethod(other.m_deinterlaceMethod),
	m_enableDecodingColorDepth10Hevc(other.m_enableDecodingColorDepth10Hevc),
	m_enableDecodingColorDepth10Vp9(other.m_enableDecodingColorDepth10Vp9),
	m_enableDecodingColorDepth10HevcRext(other.m_enableDecodingColorDepth10HevcRext),
	m_enableDecodingColorDepth12HevcRext(other.m_enableDecodingColorDepth12HevcRext),
	m_enableEnhancedNvdecDecoder(other.m_enableEnhancedNvdecDecoder),
	m_preferSystemNativeHwDecoder(other.m_preferSystemNativeHwDecoder),
	m_enableIntelLowPowerH264HwEncoder(other.m_enableIntelLowPowerH264HwEncoder),
	m_enableIntelLowPowerHevcHwEncoder(other.m_enableIntelLowPowerHevcHwEncoder),
	m_enableHardwareEncoding(other.m_enableHardwareEncoding),
	m_allowHevcEncoding(other.m_allowHevcEncoding),
	m_allowAv1Encoding(other.m_allowAv1Encoding),
	m_enableSubtitleExtraction(other.m_enableSubtitleExtraction),
	m_hardwareDecodingCodecs(other.m_hardwareDecodingCodecs),
	m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions(other.m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions){}


void EncodingOptions::replaceData(EncodingOptions &other) {
	m_encodingThreadCount = other.m_encodingThreadCount;
	m_transcodingTempPath = other.m_transcodingTempPath;
	m_fallbackFontPath = other.m_fallbackFontPath;
	m_enableFallbackFont = other.m_enableFallbackFont;
	m_enableAudioVbr = other.m_enableAudioVbr;
	m_downMixAudioBoost = other.m_downMixAudioBoost;
	m_downMixStereoAlgorithm = other.m_downMixStereoAlgorithm;
	m_maxMuxingQueueSize = other.m_maxMuxingQueueSize;
	m_enableThrottling = other.m_enableThrottling;
	m_throttleDelaySeconds = other.m_throttleDelaySeconds;
	m_enableSegmentDeletion = other.m_enableSegmentDeletion;
	m_segmentKeepSeconds = other.m_segmentKeepSeconds;
	m_hardwareAccelerationType = other.m_hardwareAccelerationType;
	m_encoderAppPath = other.m_encoderAppPath;
	m_encoderAppPathDisplay = other.m_encoderAppPathDisplay;
	m_vaapiDevice = other.m_vaapiDevice;
	m_qsvDevice = other.m_qsvDevice;
	m_enableTonemapping = other.m_enableTonemapping;
	m_enableVppTonemapping = other.m_enableVppTonemapping;
	m_enableVideoToolboxTonemapping = other.m_enableVideoToolboxTonemapping;
	m_tonemappingAlgorithm = other.m_tonemappingAlgorithm;
	m_tonemappingMode = other.m_tonemappingMode;
	m_tonemappingRange = other.m_tonemappingRange;
	m_tonemappingDesat = other.m_tonemappingDesat;
	m_tonemappingPeak = other.m_tonemappingPeak;
	m_tonemappingParam = other.m_tonemappingParam;
	m_vppTonemappingBrightness = other.m_vppTonemappingBrightness;
	m_vppTonemappingContrast = other.m_vppTonemappingContrast;
	m_h264Crf = other.m_h264Crf;
	m_h265Crf = other.m_h265Crf;
	m_encoderPreset = other.m_encoderPreset;
	m_deinterlaceDoubleRate = other.m_deinterlaceDoubleRate;
	m_deinterlaceMethod = other.m_deinterlaceMethod;
	m_enableDecodingColorDepth10Hevc = other.m_enableDecodingColorDepth10Hevc;
	m_enableDecodingColorDepth10Vp9 = other.m_enableDecodingColorDepth10Vp9;
	m_enableDecodingColorDepth10HevcRext = other.m_enableDecodingColorDepth10HevcRext;
	m_enableDecodingColorDepth12HevcRext = other.m_enableDecodingColorDepth12HevcRext;
	m_enableEnhancedNvdecDecoder = other.m_enableEnhancedNvdecDecoder;
	m_preferSystemNativeHwDecoder = other.m_preferSystemNativeHwDecoder;
	m_enableIntelLowPowerH264HwEncoder = other.m_enableIntelLowPowerH264HwEncoder;
	m_enableIntelLowPowerHevcHwEncoder = other.m_enableIntelLowPowerHevcHwEncoder;
	m_enableHardwareEncoding = other.m_enableHardwareEncoding;
	m_allowHevcEncoding = other.m_allowHevcEncoding;
	m_allowAv1Encoding = other.m_allowAv1Encoding;
	m_enableSubtitleExtraction = other.m_enableSubtitleExtraction;
	m_hardwareDecodingCodecs = other.m_hardwareDecodingCodecs;
	m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions = other.m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions;
}

EncodingOptions EncodingOptions::fromJson(QJsonObject source) {
	EncodingOptions instance;
	instance.setFromJson(source);
	return instance;
}


void EncodingOptions::setFromJson(QJsonObject source) {
	m_encodingThreadCount = Jellyfin::Support::fromJsonValue<qint32>(source["EncodingThreadCount"]);
	m_transcodingTempPath = Jellyfin::Support::fromJsonValue<QString>(source["TranscodingTempPath"]);
	m_fallbackFontPath = Jellyfin::Support::fromJsonValue<QString>(source["FallbackFontPath"]);
	m_enableFallbackFont = Jellyfin::Support::fromJsonValue<bool>(source["EnableFallbackFont"]);
	m_enableAudioVbr = Jellyfin::Support::fromJsonValue<bool>(source["EnableAudioVbr"]);
	m_downMixAudioBoost = Jellyfin::Support::fromJsonValue<double>(source["DownMixAudioBoost"]);
	m_downMixStereoAlgorithm = Jellyfin::Support::fromJsonValue<DownMixStereoAlgorithms>(source["DownMixStereoAlgorithm"]);
	m_maxMuxingQueueSize = Jellyfin::Support::fromJsonValue<qint32>(source["MaxMuxingQueueSize"]);
	m_enableThrottling = Jellyfin::Support::fromJsonValue<bool>(source["EnableThrottling"]);
	m_throttleDelaySeconds = Jellyfin::Support::fromJsonValue<qint32>(source["ThrottleDelaySeconds"]);
	m_enableSegmentDeletion = Jellyfin::Support::fromJsonValue<bool>(source["EnableSegmentDeletion"]);
	m_segmentKeepSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["SegmentKeepSeconds"]);
	m_hardwareAccelerationType = Jellyfin::Support::fromJsonValue<HardwareAccelerationType>(source["HardwareAccelerationType"]);
	m_encoderAppPath = Jellyfin::Support::fromJsonValue<QString>(source["EncoderAppPath"]);
	m_encoderAppPathDisplay = Jellyfin::Support::fromJsonValue<QString>(source["EncoderAppPathDisplay"]);
	m_vaapiDevice = Jellyfin::Support::fromJsonValue<QString>(source["VaapiDevice"]);
	m_qsvDevice = Jellyfin::Support::fromJsonValue<QString>(source["QsvDevice"]);
	m_enableTonemapping = Jellyfin::Support::fromJsonValue<bool>(source["EnableTonemapping"]);
	m_enableVppTonemapping = Jellyfin::Support::fromJsonValue<bool>(source["EnableVppTonemapping"]);
	m_enableVideoToolboxTonemapping = Jellyfin::Support::fromJsonValue<bool>(source["EnableVideoToolboxTonemapping"]);
	m_tonemappingAlgorithm = Jellyfin::Support::fromJsonValue<TonemappingAlgorithm>(source["TonemappingAlgorithm"]);
	m_tonemappingMode = Jellyfin::Support::fromJsonValue<TonemappingMode>(source["TonemappingMode"]);
	m_tonemappingRange = Jellyfin::Support::fromJsonValue<TonemappingRange>(source["TonemappingRange"]);
	m_tonemappingDesat = Jellyfin::Support::fromJsonValue<double>(source["TonemappingDesat"]);
	m_tonemappingPeak = Jellyfin::Support::fromJsonValue<double>(source["TonemappingPeak"]);
	m_tonemappingParam = Jellyfin::Support::fromJsonValue<double>(source["TonemappingParam"]);
	m_vppTonemappingBrightness = Jellyfin::Support::fromJsonValue<double>(source["VppTonemappingBrightness"]);
	m_vppTonemappingContrast = Jellyfin::Support::fromJsonValue<double>(source["VppTonemappingContrast"]);
	m_h264Crf = Jellyfin::Support::fromJsonValue<qint32>(source["H264Crf"]);
	m_h265Crf = Jellyfin::Support::fromJsonValue<qint32>(source["H265Crf"]);
	m_encoderPreset = Jellyfin::Support::fromJsonValue<EncoderPreset>(source["EncoderPreset"]);
	m_deinterlaceDoubleRate = Jellyfin::Support::fromJsonValue<bool>(source["DeinterlaceDoubleRate"]);
	m_deinterlaceMethod = Jellyfin::Support::fromJsonValue<DeinterlaceMethod>(source["DeinterlaceMethod"]);
	m_enableDecodingColorDepth10Hevc = Jellyfin::Support::fromJsonValue<bool>(source["EnableDecodingColorDepth10Hevc"]);
	m_enableDecodingColorDepth10Vp9 = Jellyfin::Support::fromJsonValue<bool>(source["EnableDecodingColorDepth10Vp9"]);
	m_enableDecodingColorDepth10HevcRext = Jellyfin::Support::fromJsonValue<bool>(source["EnableDecodingColorDepth10HevcRext"]);
	m_enableDecodingColorDepth12HevcRext = Jellyfin::Support::fromJsonValue<bool>(source["EnableDecodingColorDepth12HevcRext"]);
	m_enableEnhancedNvdecDecoder = Jellyfin::Support::fromJsonValue<bool>(source["EnableEnhancedNvdecDecoder"]);
	m_preferSystemNativeHwDecoder = Jellyfin::Support::fromJsonValue<bool>(source["PreferSystemNativeHwDecoder"]);
	m_enableIntelLowPowerH264HwEncoder = Jellyfin::Support::fromJsonValue<bool>(source["EnableIntelLowPowerH264HwEncoder"]);
	m_enableIntelLowPowerHevcHwEncoder = Jellyfin::Support::fromJsonValue<bool>(source["EnableIntelLowPowerHevcHwEncoder"]);
	m_enableHardwareEncoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableHardwareEncoding"]);
	m_allowHevcEncoding = Jellyfin::Support::fromJsonValue<bool>(source["AllowHevcEncoding"]);
	m_allowAv1Encoding = Jellyfin::Support::fromJsonValue<bool>(source["AllowAv1Encoding"]);
	m_enableSubtitleExtraction = Jellyfin::Support::fromJsonValue<bool>(source["EnableSubtitleExtraction"]);
	m_hardwareDecodingCodecs = Jellyfin::Support::fromJsonValue<QStringList>(source["HardwareDecodingCodecs"]);
	m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions = Jellyfin::Support::fromJsonValue<QStringList>(source["AllowOnDemandMetadataBasedKeyframeExtractionForExtensions"]);

}
	
QJsonObject EncodingOptions::toJson() const {
	QJsonObject result;
	
	result["EncodingThreadCount"] = Jellyfin::Support::toJsonValue<qint32>(m_encodingThreadCount);		
	
	if (!(m_transcodingTempPath.isNull())) {
		result["TranscodingTempPath"] = Jellyfin::Support::toJsonValue<QString>(m_transcodingTempPath);
	}
			
	
	if (!(m_fallbackFontPath.isNull())) {
		result["FallbackFontPath"] = Jellyfin::Support::toJsonValue<QString>(m_fallbackFontPath);
	}
			
	result["EnableFallbackFont"] = Jellyfin::Support::toJsonValue<bool>(m_enableFallbackFont);		
	result["EnableAudioVbr"] = Jellyfin::Support::toJsonValue<bool>(m_enableAudioVbr);		
	result["DownMixAudioBoost"] = Jellyfin::Support::toJsonValue<double>(m_downMixAudioBoost);		
	result["DownMixStereoAlgorithm"] = Jellyfin::Support::toJsonValue<DownMixStereoAlgorithms>(m_downMixStereoAlgorithm);		
	result["MaxMuxingQueueSize"] = Jellyfin::Support::toJsonValue<qint32>(m_maxMuxingQueueSize);		
	result["EnableThrottling"] = Jellyfin::Support::toJsonValue<bool>(m_enableThrottling);		
	result["ThrottleDelaySeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_throttleDelaySeconds);		
	result["EnableSegmentDeletion"] = Jellyfin::Support::toJsonValue<bool>(m_enableSegmentDeletion);		
	result["SegmentKeepSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_segmentKeepSeconds);		
	result["HardwareAccelerationType"] = Jellyfin::Support::toJsonValue<HardwareAccelerationType>(m_hardwareAccelerationType);		
	
	if (!(m_encoderAppPath.isNull())) {
		result["EncoderAppPath"] = Jellyfin::Support::toJsonValue<QString>(m_encoderAppPath);
	}
			
	
	if (!(m_encoderAppPathDisplay.isNull())) {
		result["EncoderAppPathDisplay"] = Jellyfin::Support::toJsonValue<QString>(m_encoderAppPathDisplay);
	}
			
	
	if (!(m_vaapiDevice.isNull())) {
		result["VaapiDevice"] = Jellyfin::Support::toJsonValue<QString>(m_vaapiDevice);
	}
			
	
	if (!(m_qsvDevice.isNull())) {
		result["QsvDevice"] = Jellyfin::Support::toJsonValue<QString>(m_qsvDevice);
	}
			
	result["EnableTonemapping"] = Jellyfin::Support::toJsonValue<bool>(m_enableTonemapping);		
	result["EnableVppTonemapping"] = Jellyfin::Support::toJsonValue<bool>(m_enableVppTonemapping);		
	result["EnableVideoToolboxTonemapping"] = Jellyfin::Support::toJsonValue<bool>(m_enableVideoToolboxTonemapping);		
	result["TonemappingAlgorithm"] = Jellyfin::Support::toJsonValue<TonemappingAlgorithm>(m_tonemappingAlgorithm);		
	result["TonemappingMode"] = Jellyfin::Support::toJsonValue<TonemappingMode>(m_tonemappingMode);		
	result["TonemappingRange"] = Jellyfin::Support::toJsonValue<TonemappingRange>(m_tonemappingRange);		
	result["TonemappingDesat"] = Jellyfin::Support::toJsonValue<double>(m_tonemappingDesat);		
	result["TonemappingPeak"] = Jellyfin::Support::toJsonValue<double>(m_tonemappingPeak);		
	result["TonemappingParam"] = Jellyfin::Support::toJsonValue<double>(m_tonemappingParam);		
	result["VppTonemappingBrightness"] = Jellyfin::Support::toJsonValue<double>(m_vppTonemappingBrightness);		
	result["VppTonemappingContrast"] = Jellyfin::Support::toJsonValue<double>(m_vppTonemappingContrast);		
	result["H264Crf"] = Jellyfin::Support::toJsonValue<qint32>(m_h264Crf);		
	result["H265Crf"] = Jellyfin::Support::toJsonValue<qint32>(m_h265Crf);		
	result["EncoderPreset"] = Jellyfin::Support::toJsonValue<EncoderPreset>(m_encoderPreset);		
	result["DeinterlaceDoubleRate"] = Jellyfin::Support::toJsonValue<bool>(m_deinterlaceDoubleRate);		
	result["DeinterlaceMethod"] = Jellyfin::Support::toJsonValue<DeinterlaceMethod>(m_deinterlaceMethod);		
	result["EnableDecodingColorDepth10Hevc"] = Jellyfin::Support::toJsonValue<bool>(m_enableDecodingColorDepth10Hevc);		
	result["EnableDecodingColorDepth10Vp9"] = Jellyfin::Support::toJsonValue<bool>(m_enableDecodingColorDepth10Vp9);		
	result["EnableDecodingColorDepth10HevcRext"] = Jellyfin::Support::toJsonValue<bool>(m_enableDecodingColorDepth10HevcRext);		
	result["EnableDecodingColorDepth12HevcRext"] = Jellyfin::Support::toJsonValue<bool>(m_enableDecodingColorDepth12HevcRext);		
	result["EnableEnhancedNvdecDecoder"] = Jellyfin::Support::toJsonValue<bool>(m_enableEnhancedNvdecDecoder);		
	result["PreferSystemNativeHwDecoder"] = Jellyfin::Support::toJsonValue<bool>(m_preferSystemNativeHwDecoder);		
	result["EnableIntelLowPowerH264HwEncoder"] = Jellyfin::Support::toJsonValue<bool>(m_enableIntelLowPowerH264HwEncoder);		
	result["EnableIntelLowPowerHevcHwEncoder"] = Jellyfin::Support::toJsonValue<bool>(m_enableIntelLowPowerHevcHwEncoder);		
	result["EnableHardwareEncoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableHardwareEncoding);		
	result["AllowHevcEncoding"] = Jellyfin::Support::toJsonValue<bool>(m_allowHevcEncoding);		
	result["AllowAv1Encoding"] = Jellyfin::Support::toJsonValue<bool>(m_allowAv1Encoding);		
	result["EnableSubtitleExtraction"] = Jellyfin::Support::toJsonValue<bool>(m_enableSubtitleExtraction);		
	
	if (!(m_hardwareDecodingCodecs.size() == 0)) {
		result["HardwareDecodingCodecs"] = Jellyfin::Support::toJsonValue<QStringList>(m_hardwareDecodingCodecs);
	}
			
	
	if (!(m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions.size() == 0)) {
		result["AllowOnDemandMetadataBasedKeyframeExtractionForExtensions"] = Jellyfin::Support::toJsonValue<QStringList>(m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions);
	}
		
	return result;
}

qint32 EncodingOptions::encodingThreadCount() const { return m_encodingThreadCount; }

void EncodingOptions::setEncodingThreadCount(qint32 newEncodingThreadCount) {
	m_encodingThreadCount = newEncodingThreadCount;
}

QString EncodingOptions::transcodingTempPath() const { return m_transcodingTempPath; }

void EncodingOptions::setTranscodingTempPath(QString newTranscodingTempPath) {
	m_transcodingTempPath = newTranscodingTempPath;
}
bool EncodingOptions::transcodingTempPathNull() const {
	return m_transcodingTempPath.isNull();
}

void EncodingOptions::setTranscodingTempPathNull() {
	m_transcodingTempPath.clear();

}
QString EncodingOptions::fallbackFontPath() const { return m_fallbackFontPath; }

void EncodingOptions::setFallbackFontPath(QString newFallbackFontPath) {
	m_fallbackFontPath = newFallbackFontPath;
}
bool EncodingOptions::fallbackFontPathNull() const {
	return m_fallbackFontPath.isNull();
}

void EncodingOptions::setFallbackFontPathNull() {
	m_fallbackFontPath.clear();

}
bool EncodingOptions::enableFallbackFont() const { return m_enableFallbackFont; }

void EncodingOptions::setEnableFallbackFont(bool newEnableFallbackFont) {
	m_enableFallbackFont = newEnableFallbackFont;
}

bool EncodingOptions::enableAudioVbr() const { return m_enableAudioVbr; }

void EncodingOptions::setEnableAudioVbr(bool newEnableAudioVbr) {
	m_enableAudioVbr = newEnableAudioVbr;
}

double EncodingOptions::downMixAudioBoost() const { return m_downMixAudioBoost; }

void EncodingOptions::setDownMixAudioBoost(double newDownMixAudioBoost) {
	m_downMixAudioBoost = newDownMixAudioBoost;
}

DownMixStereoAlgorithms EncodingOptions::downMixStereoAlgorithm() const { return m_downMixStereoAlgorithm; }

void EncodingOptions::setDownMixStereoAlgorithm(DownMixStereoAlgorithms newDownMixStereoAlgorithm) {
	m_downMixStereoAlgorithm = newDownMixStereoAlgorithm;
}

qint32 EncodingOptions::maxMuxingQueueSize() const { return m_maxMuxingQueueSize; }

void EncodingOptions::setMaxMuxingQueueSize(qint32 newMaxMuxingQueueSize) {
	m_maxMuxingQueueSize = newMaxMuxingQueueSize;
}

bool EncodingOptions::enableThrottling() const { return m_enableThrottling; }

void EncodingOptions::setEnableThrottling(bool newEnableThrottling) {
	m_enableThrottling = newEnableThrottling;
}

qint32 EncodingOptions::throttleDelaySeconds() const { return m_throttleDelaySeconds; }

void EncodingOptions::setThrottleDelaySeconds(qint32 newThrottleDelaySeconds) {
	m_throttleDelaySeconds = newThrottleDelaySeconds;
}

bool EncodingOptions::enableSegmentDeletion() const { return m_enableSegmentDeletion; }

void EncodingOptions::setEnableSegmentDeletion(bool newEnableSegmentDeletion) {
	m_enableSegmentDeletion = newEnableSegmentDeletion;
}

qint32 EncodingOptions::segmentKeepSeconds() const { return m_segmentKeepSeconds; }

void EncodingOptions::setSegmentKeepSeconds(qint32 newSegmentKeepSeconds) {
	m_segmentKeepSeconds = newSegmentKeepSeconds;
}

HardwareAccelerationType EncodingOptions::hardwareAccelerationType() const { return m_hardwareAccelerationType; }

void EncodingOptions::setHardwareAccelerationType(HardwareAccelerationType newHardwareAccelerationType) {
	m_hardwareAccelerationType = newHardwareAccelerationType;
}

QString EncodingOptions::encoderAppPath() const { return m_encoderAppPath; }

void EncodingOptions::setEncoderAppPath(QString newEncoderAppPath) {
	m_encoderAppPath = newEncoderAppPath;
}
bool EncodingOptions::encoderAppPathNull() const {
	return m_encoderAppPath.isNull();
}

void EncodingOptions::setEncoderAppPathNull() {
	m_encoderAppPath.clear();

}
QString EncodingOptions::encoderAppPathDisplay() const { return m_encoderAppPathDisplay; }

void EncodingOptions::setEncoderAppPathDisplay(QString newEncoderAppPathDisplay) {
	m_encoderAppPathDisplay = newEncoderAppPathDisplay;
}
bool EncodingOptions::encoderAppPathDisplayNull() const {
	return m_encoderAppPathDisplay.isNull();
}

void EncodingOptions::setEncoderAppPathDisplayNull() {
	m_encoderAppPathDisplay.clear();

}
QString EncodingOptions::vaapiDevice() const { return m_vaapiDevice; }

void EncodingOptions::setVaapiDevice(QString newVaapiDevice) {
	m_vaapiDevice = newVaapiDevice;
}
bool EncodingOptions::vaapiDeviceNull() const {
	return m_vaapiDevice.isNull();
}

void EncodingOptions::setVaapiDeviceNull() {
	m_vaapiDevice.clear();

}
QString EncodingOptions::qsvDevice() const { return m_qsvDevice; }

void EncodingOptions::setQsvDevice(QString newQsvDevice) {
	m_qsvDevice = newQsvDevice;
}
bool EncodingOptions::qsvDeviceNull() const {
	return m_qsvDevice.isNull();
}

void EncodingOptions::setQsvDeviceNull() {
	m_qsvDevice.clear();

}
bool EncodingOptions::enableTonemapping() const { return m_enableTonemapping; }

void EncodingOptions::setEnableTonemapping(bool newEnableTonemapping) {
	m_enableTonemapping = newEnableTonemapping;
}

bool EncodingOptions::enableVppTonemapping() const { return m_enableVppTonemapping; }

void EncodingOptions::setEnableVppTonemapping(bool newEnableVppTonemapping) {
	m_enableVppTonemapping = newEnableVppTonemapping;
}

bool EncodingOptions::enableVideoToolboxTonemapping() const { return m_enableVideoToolboxTonemapping; }

void EncodingOptions::setEnableVideoToolboxTonemapping(bool newEnableVideoToolboxTonemapping) {
	m_enableVideoToolboxTonemapping = newEnableVideoToolboxTonemapping;
}

TonemappingAlgorithm EncodingOptions::tonemappingAlgorithm() const { return m_tonemappingAlgorithm; }

void EncodingOptions::setTonemappingAlgorithm(TonemappingAlgorithm newTonemappingAlgorithm) {
	m_tonemappingAlgorithm = newTonemappingAlgorithm;
}

TonemappingMode EncodingOptions::tonemappingMode() const { return m_tonemappingMode; }

void EncodingOptions::setTonemappingMode(TonemappingMode newTonemappingMode) {
	m_tonemappingMode = newTonemappingMode;
}

TonemappingRange EncodingOptions::tonemappingRange() const { return m_tonemappingRange; }

void EncodingOptions::setTonemappingRange(TonemappingRange newTonemappingRange) {
	m_tonemappingRange = newTonemappingRange;
}

double EncodingOptions::tonemappingDesat() const { return m_tonemappingDesat; }

void EncodingOptions::setTonemappingDesat(double newTonemappingDesat) {
	m_tonemappingDesat = newTonemappingDesat;
}

double EncodingOptions::tonemappingPeak() const { return m_tonemappingPeak; }

void EncodingOptions::setTonemappingPeak(double newTonemappingPeak) {
	m_tonemappingPeak = newTonemappingPeak;
}

double EncodingOptions::tonemappingParam() const { return m_tonemappingParam; }

void EncodingOptions::setTonemappingParam(double newTonemappingParam) {
	m_tonemappingParam = newTonemappingParam;
}

double EncodingOptions::vppTonemappingBrightness() const { return m_vppTonemappingBrightness; }

void EncodingOptions::setVppTonemappingBrightness(double newVppTonemappingBrightness) {
	m_vppTonemappingBrightness = newVppTonemappingBrightness;
}

double EncodingOptions::vppTonemappingContrast() const { return m_vppTonemappingContrast; }

void EncodingOptions::setVppTonemappingContrast(double newVppTonemappingContrast) {
	m_vppTonemappingContrast = newVppTonemappingContrast;
}

qint32 EncodingOptions::h264Crf() const { return m_h264Crf; }

void EncodingOptions::setH264Crf(qint32 newH264Crf) {
	m_h264Crf = newH264Crf;
}

qint32 EncodingOptions::h265Crf() const { return m_h265Crf; }

void EncodingOptions::setH265Crf(qint32 newH265Crf) {
	m_h265Crf = newH265Crf;
}

EncoderPreset EncodingOptions::encoderPreset() const { return m_encoderPreset; }

void EncodingOptions::setEncoderPreset(EncoderPreset newEncoderPreset) {
	m_encoderPreset = newEncoderPreset;
}

bool EncodingOptions::deinterlaceDoubleRate() const { return m_deinterlaceDoubleRate; }

void EncodingOptions::setDeinterlaceDoubleRate(bool newDeinterlaceDoubleRate) {
	m_deinterlaceDoubleRate = newDeinterlaceDoubleRate;
}

DeinterlaceMethod EncodingOptions::deinterlaceMethod() const { return m_deinterlaceMethod; }

void EncodingOptions::setDeinterlaceMethod(DeinterlaceMethod newDeinterlaceMethod) {
	m_deinterlaceMethod = newDeinterlaceMethod;
}

bool EncodingOptions::enableDecodingColorDepth10Hevc() const { return m_enableDecodingColorDepth10Hevc; }

void EncodingOptions::setEnableDecodingColorDepth10Hevc(bool newEnableDecodingColorDepth10Hevc) {
	m_enableDecodingColorDepth10Hevc = newEnableDecodingColorDepth10Hevc;
}

bool EncodingOptions::enableDecodingColorDepth10Vp9() const { return m_enableDecodingColorDepth10Vp9; }

void EncodingOptions::setEnableDecodingColorDepth10Vp9(bool newEnableDecodingColorDepth10Vp9) {
	m_enableDecodingColorDepth10Vp9 = newEnableDecodingColorDepth10Vp9;
}

bool EncodingOptions::enableDecodingColorDepth10HevcRext() const { return m_enableDecodingColorDepth10HevcRext; }

void EncodingOptions::setEnableDecodingColorDepth10HevcRext(bool newEnableDecodingColorDepth10HevcRext) {
	m_enableDecodingColorDepth10HevcRext = newEnableDecodingColorDepth10HevcRext;
}

bool EncodingOptions::enableDecodingColorDepth12HevcRext() const { return m_enableDecodingColorDepth12HevcRext; }

void EncodingOptions::setEnableDecodingColorDepth12HevcRext(bool newEnableDecodingColorDepth12HevcRext) {
	m_enableDecodingColorDepth12HevcRext = newEnableDecodingColorDepth12HevcRext;
}

bool EncodingOptions::enableEnhancedNvdecDecoder() const { return m_enableEnhancedNvdecDecoder; }

void EncodingOptions::setEnableEnhancedNvdecDecoder(bool newEnableEnhancedNvdecDecoder) {
	m_enableEnhancedNvdecDecoder = newEnableEnhancedNvdecDecoder;
}

bool EncodingOptions::preferSystemNativeHwDecoder() const { return m_preferSystemNativeHwDecoder; }

void EncodingOptions::setPreferSystemNativeHwDecoder(bool newPreferSystemNativeHwDecoder) {
	m_preferSystemNativeHwDecoder = newPreferSystemNativeHwDecoder;
}

bool EncodingOptions::enableIntelLowPowerH264HwEncoder() const { return m_enableIntelLowPowerH264HwEncoder; }

void EncodingOptions::setEnableIntelLowPowerH264HwEncoder(bool newEnableIntelLowPowerH264HwEncoder) {
	m_enableIntelLowPowerH264HwEncoder = newEnableIntelLowPowerH264HwEncoder;
}

bool EncodingOptions::enableIntelLowPowerHevcHwEncoder() const { return m_enableIntelLowPowerHevcHwEncoder; }

void EncodingOptions::setEnableIntelLowPowerHevcHwEncoder(bool newEnableIntelLowPowerHevcHwEncoder) {
	m_enableIntelLowPowerHevcHwEncoder = newEnableIntelLowPowerHevcHwEncoder;
}

bool EncodingOptions::enableHardwareEncoding() const { return m_enableHardwareEncoding; }

void EncodingOptions::setEnableHardwareEncoding(bool newEnableHardwareEncoding) {
	m_enableHardwareEncoding = newEnableHardwareEncoding;
}

bool EncodingOptions::allowHevcEncoding() const { return m_allowHevcEncoding; }

void EncodingOptions::setAllowHevcEncoding(bool newAllowHevcEncoding) {
	m_allowHevcEncoding = newAllowHevcEncoding;
}

bool EncodingOptions::allowAv1Encoding() const { return m_allowAv1Encoding; }

void EncodingOptions::setAllowAv1Encoding(bool newAllowAv1Encoding) {
	m_allowAv1Encoding = newAllowAv1Encoding;
}

bool EncodingOptions::enableSubtitleExtraction() const { return m_enableSubtitleExtraction; }

void EncodingOptions::setEnableSubtitleExtraction(bool newEnableSubtitleExtraction) {
	m_enableSubtitleExtraction = newEnableSubtitleExtraction;
}

QStringList EncodingOptions::hardwareDecodingCodecs() const { return m_hardwareDecodingCodecs; }

void EncodingOptions::setHardwareDecodingCodecs(QStringList newHardwareDecodingCodecs) {
	m_hardwareDecodingCodecs = newHardwareDecodingCodecs;
}
bool EncodingOptions::hardwareDecodingCodecsNull() const {
	return m_hardwareDecodingCodecs.size() == 0;
}

void EncodingOptions::setHardwareDecodingCodecsNull() {
	m_hardwareDecodingCodecs.clear();

}
QStringList EncodingOptions::allowOnDemandMetadataBasedKeyframeExtractionForExtensions() const { return m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions; }

void EncodingOptions::setAllowOnDemandMetadataBasedKeyframeExtractionForExtensions(QStringList newAllowOnDemandMetadataBasedKeyframeExtractionForExtensions) {
	m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions = newAllowOnDemandMetadataBasedKeyframeExtractionForExtensions;
}
bool EncodingOptions::allowOnDemandMetadataBasedKeyframeExtractionForExtensionsNull() const {
	return m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions.size() == 0;
}

void EncodingOptions::setAllowOnDemandMetadataBasedKeyframeExtractionForExtensionsNull() {
	m_allowOnDemandMetadataBasedKeyframeExtractionForExtensions.clear();

}

} // NS DTO

namespace Support {

using EncodingOptions = Jellyfin::DTO::EncodingOptions;

template <>
EncodingOptions fromJsonValue(const QJsonValue &source, convertType<EncodingOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return EncodingOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const EncodingOptions &source, convertType<EncodingOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin
