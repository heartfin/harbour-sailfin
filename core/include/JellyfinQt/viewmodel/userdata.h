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
#ifndef JELLYFIN_VIEWMODEL_USERDATA_H
#define JELLYFIN_VIEWMODEL_USERDATA_H

#include <QDateTime>
#include <QObject>
#include <QSharedPointer>

#include "../dto/useritemdatadto.h"

namespace Jellyfin {
namespace ViewModel{

class UserData : public QObject {
    Q_OBJECT
public:
    explicit UserData(QObject* parent = nullptr);
    explicit UserData(QSharedPointer<DTO::UserItemDataDto> data, QObject* parent = nullptr);

    void setData(QSharedPointer<DTO::UserItemDataDto> data);

    Q_PROPERTY(double rating READ rating NOTIFY ratingChanged)
    Q_PROPERTY(double playedPercentage READ playedPercentage NOTIFY playedPercentageChanged)
    Q_PROPERTY(int unplayedItemCount READ unplayedItemCount NOTIFY unplayedItemCountChanged)
    Q_PROPERTY(qint64 playbackPositionTicks READ playbackPositionTicks NOTIFY playbackPositionTicksChanged);
    Q_PROPERTY(int playCount READ playCount NOTIFY playCountChanged)
    Q_PROPERTY(bool favorite READ favorite NOTIFY favoriteChanged)
    Q_PROPERTY(bool m_likes READ likes NOTIFY likesChanged)
    Q_PROPERTY(QDateTime lastPlayedDate READ lastPlayedDate NOTIFY lastPlayedDateChanged)
    Q_PROPERTY(bool played READ played NOTIFY playedChanged)
    Q_PROPERTY(QString key READ key NOTIFY keyChanged)

    double rating() const { return m_data->rating().value_or(0); }
    double playedPercentage() const { return m_data->playedPercentage().value_or(0); }
    int unplayedItemCount() const { return m_data->unplayedItemCount().value_or(0); }
    qint64 playbackPositionTicks() const { return m_data->playbackPositionTicks(); }
    int playCount() const { return m_data->playCount(); }
    bool favorite() const { return m_data->isFavorite(); }
    bool likes() const { return m_data->likes().value_or(false); }
    QDateTime lastPlayedDate() const { return m_data->lastPlayedDate(); }
    bool played() const { return m_data->played(); }
    QString key() const { return m_data->key(); }

signals:
    void ratingChanged(double newRating);
    void playedPercentageChanged(double newPlayedPercentage);
    void unplayedItemCountChanged(int newUnplayedItemCount);
    void playbackPositionTicksChanged(qint64 newPlaybackPositionTicks);
    void playCountChanged(int newPlayCount);
    void favoriteChanged(bool newFavorite);
    void likesChanged(bool newLikes);
    void lastPlayedDateChanged(QDateTime newLastPlayedDate);
    void playedChanged(bool newPLayed);
    void keyChanged(QString newKey);

private:
    QSharedPointer<DTO::UserItemDataDto> m_data;
};


} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_USERDATA_H
