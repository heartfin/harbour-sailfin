/* * Sailfin: a Jellyfin client written using Qt
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
#ifndef JELLYFIN_VIEWMODEL_MEDIASTREAM_H
#define JELLYFIN_VIEWMODEL_MEDIASTREAM_H

#include <QObject>
#include <QScopedPointer>

#include "../dto/mediastream.h"

namespace Jellyfin {
namespace ViewModel {

class MediaStream : public QObject {
    Q_OBJECT
public:
    explicit MediaStream(QSharedPointer<DTO::MediaStream> data, QObject *parent = nullptr);

    Q_PROPERTY(QString codec READ codec NOTIFY codecChanged)
    Q_PROPERTY(QString codecTag READ codecTag NOTIFY codecTagChanged)
    Q_PROPERTY(QString language READ language NOTIFY languageChanged)
    Q_PROPERTY(QString colorRange READ colorRange NOTIFY colorRangeChanged)
    Q_PROPERTY(QString colorSpace READ colorSpace NOTIFY colorSpaceChanged)
    Q_PROPERTY(QString colorTransfer READ colorTransfer NOTIFY colorTransferChanged)
    Q_PROPERTY(QString colorPrimaries READ colorPrimaries NOTIFY colorPrimariesChanged)
    Q_PROPERTY(QString comment READ comment NOTIFY commentChanged);
    Q_PROPERTY(QString timeBase READ timeBase NOTIFY timeBaseChanged);
    Q_PROPERTY(QString title READ title NOTIFY titleChanged);
    Q_PROPERTY(QString videoRange READ videoRange NOTIFY videoRangeChanged);
    Q_PROPERTY(QString localizedUndefined READ localizedUndefined NOTIFY localizedUndefinedChanged);
    Q_PROPERTY(QString localizedDefault READ localizedDefault NOTIFY localizedDefaultChanged);
    Q_PROPERTY(QString localizedForced READ localizedForced NOTIFY localizedForcedChanged);
    Q_PROPERTY(QString displayTitle READ displayTitle NOTIFY displayTitleChanged);
    Q_PROPERTY(QString nalLengthSize READ nalLengthSize NOTIFY nalLengthSizeChanged);
    Q_PROPERTY(bool interlaced READ interlaced NOTIFY interlacedChanged)
    Q_PROPERTY(bool avc READ avc NOTIFY avcChanged)
    Q_PROPERTY(QString channelLayout READ channelLayout NOTIFY channelLayoutChanged)
    Q_PROPERTY(qint32 bitRate READ bitRate NOTIFY bitRateChanged)
    Q_PROPERTY(qint32 bitDepth READ bitDepth NOTIFY bitDepthChanged)
    Q_PROPERTY(qint32 refFrames READ refFrames NOTIFY refFramesChanged)
    Q_PROPERTY(qint32 packetLength READ packetLength NOTIFY packetLengthChanged)
    Q_PROPERTY(qint32 channels READ channels NOTIFY channelsChanged)
    Q_PROPERTY(qint32 sampleRate READ sampleRate NOTIFY sampleRateChanged)
    Q_PROPERTY(bool isDefault READ isDefault NOTIFY isDefaultChanged)
    Q_PROPERTY(bool forced READ forced NOTIFY forcedChanged)
    Q_PROPERTY(qint32 width READ width NOTIFY widthChanged)
    Q_PROPERTY(qint32 height READ height NOTIFY heightChanged)
    Q_PROPERTY(float averageFrameRate READ averageFrameRate NOTIFY averageFrameRateChanged)
    Q_PROPERTY(float realFrameRate READ realFrameRate NOTIFY realFrameRateChanged)
    Q_PROPERTY(QString profile READ profile NOTIFY profileChanged)
    Q_PROPERTY(Jellyfin::DTO::MediaStreamTypeClass::Value type READ type NOTIFY typeChanged)
    Q_PROPERTY(QString aspectRatio READ aspectRatio NOTIFY aspectRatioChanged)
    Q_PROPERTY(qint32 index READ index NOTIFY indexChanged)


    QString codec() const { return m_data->codec(); }
    QString codecTag() const { return m_data->codecTag(); }
    QString language() const { return m_data->language(); }
    QString colorRange() const { return m_data->colorRange(); }
    QString colorSpace() const { return m_data->colorSpace(); }
    QString colorTransfer() const { return m_data->colorTransfer(); }
    QString colorPrimaries() const { return m_data->colorPrimaries(); }
    QString comment() const { return m_data->comment(); }
    QString timeBase() const { return m_data->timeBase(); }
    QString title() const { return m_data->title(); }
    QString videoRange() const { return m_data->videoRange(); }
    QString localizedUndefined() const { return m_data->localizedUndefined(); }
    QString localizedDefault() const { return m_data->localizedDefault(); }
    QString localizedForced() const { return m_data->localizedForced(); }
    QString displayTitle() const { return m_data->displayTitle(); }
    QString nalLengthSize() const { return m_data->nalLengthSize(); }
    bool interlaced() const { return m_data->isInterlaced(); }
    bool avc() const { return m_data->isAVC().value_or(false); }
    QString channelLayout() const { return m_data->channelLayout(); }
    qint32 bitRate() const { return m_data->bitRate().value_or(-1); }
    qint32 bitDepth() const { return m_data->bitDepth().value_or(-1); }
    qint32 refFrames() const { return m_data->refFrames().value_or(-1); }
    qint32 packetLength() const { return m_data->packetLength().value_or(-1); }
    qint32 channels() const { return m_data->channels().value_or(-1); }
    qint32 sampleRate() const { return m_data->sampleRate().value_or(-1); }
    bool isDefault() const { return m_data->isDefault(); }
    bool forced() const { return m_data->isForced(); }
    qint32 width() const { return m_data->width().value_or(-1); }
    qint32 height() const { return m_data->height().value_or(-1); }
    float averageFrameRate() const { return m_data->averageFrameRate().value_or(-1.0); }
    float realFrameRate() const { return m_data->realFrameRate().value_or(-1.0); }
    QString profile() const { return m_data->profile(); }
    DTO::MediaStreamType type() const { return m_data->type(); }
    QString aspectRatio() const { return m_data->aspectRatio(); }
    qint32 index() const { return m_data->index(); }


signals:
    void codecChanged(const QString &newCodec);
    void codecTagChanged(const QString &newCodecTag);
    void languageChanged(const QString &newLanguage);
    void colorRangeChanged(const QString &newColorRange);
    void colorSpaceChanged(const QString &newColorSpace);
    void colorTransferChanged(const QString &newColorTransfer);
    void colorPrimariesChanged(const QString &newColorPrimaries);
    void commentChanged(const QString &newComment);
    void timeBaseChanged(const QString &newTimeBase);
    void titleChanged(const QString &newTitle);
    void videoRangeChanged(const QString &newVideoRanged);
    void localizedUndefinedChanged(const QString &newLocalizedUndefined);
    void localizedDefaultChanged(const QString &newLocalizedDefault);
    void localizedForcedChanged(const QString &newLocalizedForced);
    void displayTitleChanged(const QString &newDisplayTitle);
    void nalLengthSizeChanged(const QString &newNalLengthSize);
    void interlacedChanged(bool newInterlaced);
    void avcChanged(bool newAVC);
    void channelLayoutChanged(const QString &newChannelLayout);
    void bitRateChanged(qint32 newBitRate);
    void bitDepthChanged(qint32 newBitDepth);
    void refFramesChanged(qint32 newRefFrames);
    void packetLengthChanged(qint32 newPacketLength);
    void channelsChanged(qint32 newChannels);
    void sampleRateChanged(qint32 newSampleRate);
    void isDefaultChanged(bool newIsDefault);
    void forcedChanged(bool newForced);
    void heightChanged(qint32 newHeight);
    void widthChanged(qint32 newWidth);
    void averageFrameRateChanged(float newAverageFrameRate);
    void realFrameRateChanged(float newRealFrameRate);
    void profileChanged(const QString &newProfile);
    void typeChanged(const Jellyfin::DTO::MediaStreamTypeClass::Value newType);
    void aspectRatioChanged(const QString &newAspectRatio);
    void indexChanged(qint32 newIndex);

private:
    QSharedPointer<DTO::MediaStream> m_data;
};


} // ViewModel
} // Jellyfin

#endif // JELLYFIN_VIEWMODEL_MEDIASTREAM_H
