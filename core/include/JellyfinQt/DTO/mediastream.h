/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef JELLYFIN_DTO_MEDIASTREAM_H
#define JELLYFIN_DTO_MEDIASTREAM_H

#include <QDebug>
#include <QObject>
#include <QString>

#include "dto.h"

namespace Jellyfin {
namespace DTO {

class MediaStream : public JsonSerializable {
    Q_OBJECT
public:
    Q_INVOKABLE explicit MediaStream(QObject *parent = nullptr);
    MediaStream(const MediaStream &other);
    bool operator==(const MediaStream &other);
    virtual ~MediaStream() { qDebug() << "MediaStream destroyed"; }

    enum MediaStreamType {
        Undefined,
        Audio,
        Video,
        Subtitle,
        EmbeddedImage
    };
    Q_ENUM(MediaStreamType)

    Q_PROPERTY(QString codec MEMBER m_codec NOTIFY codecChanged)
    Q_PROPERTY(QString codecTag MEMBER m_codecTag NOTIFY codecTagChanged)
    Q_PROPERTY(QString language MEMBER m_language NOTIFY languageChanged)
    Q_PROPERTY(QString displayTitle MEMBER m_displayTitle NOTIFY displayTitleChanged)
    Q_PROPERTY(MediaStreamType type MEMBER m_type NOTIFY typeChanged)
    Q_PROPERTY(int index MEMBER m_index NOTIFY indexChanged)
signals:
    void codecChanged(const QString &newCodec);
    void codecTagChanged(const QString &newCodecTag);
    void languageChanged(const QString &newLanguage);
    void displayTitleChanged(const QString &newDisplayTitle);
    void typeChanged(MediaStreamType newType);
    void indexChanged(int newIndex);
private:
    QString m_codec;
    QString m_codecTag;
    QString m_language;
    QString m_displayTitle;
    MediaStreamType m_type = Undefined;
    int m_index = -1;
};

}
}

#endif // JELLYFIN_DTO_MEDIASTREAM_H
