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
#ifndef JELLYFIN_VIEWMODEL_SETTINGS_H
#define JELLYFIN_VIEWMODEL_SETTINGS_H

#include <QObject>
#include <QString>

#include "JellyfinQt/qobjectsettingswrapper.h"

namespace Jellyfin {

class ApiClient;

namespace ViewModel {


class Settings : public QObjectSettingsWrapper {
    Q_OBJECT
    Q_PROPERTY(bool allowTranscoding READ allowTranscoding WRITE setAllowTranscoding NOTIFY allowTranscodingChanged)
    Q_PROPERTY(int maxBitRate READ maxBitRate WRITE setMaxBitRate NOTIFY maxBitRateChanged)
public:
    explicit Settings(ApiClient *apiClient);
    virtual ~Settings();

    bool allowTranscoding() const;
    void setAllowTranscoding(bool allowTranscoding);

    int maxBitRate() const;
    void setMaxBitRate(int newMaxBitRate);
signals:
    void allowTranscodingChanged(bool newAllowTranscoding);
    void maxBitRateChanged(int newMaxBitRate);
private:
    bool m_allowTranscoding = true;
    int m_maxBitRate = 5000000;
};


} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_SETTINGS_H
