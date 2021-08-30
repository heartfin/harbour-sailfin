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

#include "JellyfinQt/viewmodel/platformmediacontrol.h"
#include "JellyfinQt/platform/freedesktop/mediaplayer2.h"
#include "JellyfinQt/platform/freedesktop/mediaplayer2player.h"

#include <QDebug>
#include <QString>
#include <QtDBus/QtDBus>

namespace Jellyfin {
namespace ViewModel {

using Platform::FreeDesktop::MediaPlayer2Adaptor;
using Platform::FreeDesktop::PlayerAdaptor;

class PlatformMediaControlPrivate {
public:
    PlatformMediaControlPrivate(PlatformMediaControl *parent);
    void setupConnection();
private:
    PlatformMediaControl *q_ptr;
    Q_DECLARE_PUBLIC(PlatformMediaControl)

    MediaPlayer2Adaptor *m_mainAdaptor;
    PlayerAdaptor *m_playerAdaptor;
    QDBusConnection m_connection;
public slots:
    // MPRIS Player methods
    void Quit();

};

PlatformMediaControl::PlatformMediaControl(QObject *parent)
    : QObject(parent) {
    d_ptr = new PlatformMediaControlPrivate(this);
}

void PlatformMediaControl::setup() {
    Q_D(PlatformMediaControl);
    d->setupConnection();
}

PlatformMediaControlPrivate::PlatformMediaControlPrivate(PlatformMediaControl *parent)
    : q_ptr(parent),
      m_mainAdaptor(new MediaPlayer2Adaptor(parent)),
      m_playerAdaptor(new PlayerAdaptor(parent)),
      m_connection(QDBusConnection::sessionBus()) {

}

void PlatformMediaControlPrivate::setupConnection() {
    Q_Q(PlatformMediaControl);
    if(!m_connection.registerObject(QStringLiteral("/org/mpris/MediaPlayer2"), q)) {
        qWarning() << "MediaPlayer2 dbus object not registered: " << m_connection.lastError();
    }
    if (!m_connection.registerService(QStringLiteral("org.mpris.MediaPlayer2.sailfin.instance").append(QString::number(QCoreApplication::applicationPid())))) {
        qWarning() << "Could not aqcuire DBus name: " << m_connection.lastError();
    }
}

void PlatformMediaControlPrivate::Quit() {
    Q_Q(PlatformMediaControl);
    q->requestQuit();
}



}
}
