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

#ifndef JELLYFIN_DTO_USERDATA
#define JELLYFIN_DTO_USERDATA

#include <QObject>
#include <QSharedPointer>
#include <QString>

#include "dto.h"

namespace Jellyfin {
namespace DTO {

class UserData : public JsonSerializable {
    Q_OBJECT
public:
    Q_INVOKABLE explicit UserData(QObject *parent = nullptr);

    Q_PROPERTY(double playedPercentage READ playedPercentage WRITE setPlayedPercentage RESET resetPlayedPercentage NOTIFY playedPercentageChanged)
    Q_PROPERTY(qint64 playbackPositionTicks READ playbackPositionTicks WRITE setPlaybackPositionTicks NOTIFY playbackPositionTicksChanged)
    Q_PROPERTY(bool isFavorite READ isFavorite WRITE setIsFavorite NOTIFY isFavoriteChanged)
    Q_PROPERTY(bool likes READ likes WRITE setLikes RESET resetLikes NOTIFY likesChanged)
    Q_PROPERTY(bool played READ played WRITE setPlayed NOTIFY playedChanged)
    Q_PROPERTY(QString itemId READ itemId MEMBER m_itemId)

    double playedPercentage() const { return m_playedPercentage.value_or(0.0); }
    void setPlayedPercentage(double newPlayedPercentage) { m_playedPercentage = newPlayedPercentage; emit playedPercentageChanged(newPlayedPercentage); }
    void resetPlayedPercentage() { m_playedPercentage = std::nullopt; emit playedPercentageChanged(0.0); updateOnServer(); }

    qint64 playbackPositionTicks() const { return m_playbackPositionTicks; }
    void setPlaybackPositionTicks(qint64 newPlaybackPositionTicks) { m_playbackPositionTicks = newPlaybackPositionTicks; emit playbackPositionTicksChanged(newPlaybackPositionTicks); }

    bool played() const { return m_played; }
    void setPlayed(bool newPlayed) { m_played = newPlayed; emit playedChanged(newPlayed); updateOnServer(); }

    bool likes() const { return m_likes.value_or(false); }
    void setLikes(bool newLikes) { m_likes = newLikes; emit likesChanged(newLikes); }
    void resetLikes() { m_likes = std::nullopt; emit likesChanged(false); updateOnServer(); }

    bool isFavorite() const { return m_isFavorite; }
    void setIsFavorite(bool newIsFavorite) { m_isFavorite = newIsFavorite; emit isFavoriteChanged(newIsFavorite); updateOnServer(); }

    const QString &itemId() const { return m_itemId; }
signals:
    void playedPercentageChanged(double newPlayedPercentage);
    void playbackPositionTicksChanged(qint64 playbackPositionTicks);
    void isFavoriteChanged(bool newIsFavorite);
    void likesChanged(bool newLikes);
    void playedChanged(bool newPlayed);
public slots:
    void updateOnServer();
    void onUpdated(UserData *other);
private:
    std::optional<double> m_playedPercentage =  std::nullopt;
    qint64 m_playbackPositionTicks = 0;
    bool m_isFavorite = false;
    std::optional<bool> m_likes = std::nullopt;
    bool m_played;
    QString m_itemId;
};

}
}

#endif // JELLYFIN_DTO_USERDATA
