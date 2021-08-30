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
#ifndef JELLYFIN_VIEWMODEL_PLATFORMMEDIACONTROL_H
#define JELLYFIN_VIEWMODEL_PLATFORMMEDIACONTROL_H

#include <QObject>
#include <QQmlParserStatus>
#include <QScopedPointer>

namespace Jellyfin {
namespace ViewModel {

class PlatformMediaControlPrivate;
class PlaybackManager;

/**
 * @brief Exposes media control and information to the OS. Uses MPRIS on FreeDesktop-enabled systems.
 */
class PlatformMediaControl : public QObject, public QQmlParserStatus {
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
public:
    explicit PlatformMediaControl(QObject *parent = nullptr);

    Q_PROPERTY(Jellyfin::ViewModel::PlaybackManager *playbackManager READ playbackManager WRITE setPlaybackManager NOTIFY playbackManagerChanged)
    /**
     * Whether the operating system can request the media player to quit. If set,
     * the quitRequested signal may be emitted and the application should quit.
     */
    Q_PROPERTY(bool canQuit READ canQuit WRITE setCanQuit NOTIFY canQuitChanged)
    Q_PROPERTY(bool canRaise READ canRaise WRITE setCanRaise NOTIFY canRaiseChanged)
    Q_PROPERTY(QString playerName READ playerName WRITE setPlayerName NOTIFY playerNameChanged)
    Q_PROPERTY(QString desktopFile READ playerName WRITE setPlayerName NOTIFY playerNameChanged)

    PlaybackManager *playbackManager() const { return m_playbackManager; };

    void setPlaybackManager(PlaybackManager *newPlaybackManager) {
        m_playbackManager = newPlaybackManager;
        emit playbackManagerChanged(newPlaybackManager);
    };

    bool canQuit() const { return m_canQuit; };
    void setCanQuit(bool newCanQuit) {
        m_canQuit = newCanQuit;
        emit canQuitChanged(newCanQuit);
    }

    void requestQuit() {
        emit quitRequested();
    }

    bool canRaise() const { return m_canRaise; };
    void setCanRaise(bool newCanRaise) {
        m_canRaise = newCanRaise;
        emit canRaiseChanged(newCanRaise);
    }

    void requestRaise() {
        emit raiseRequested();
    };;

    QString playerName() const { return m_playerName; }
    void setPlayerName(QString newPlayerName) {
        m_playerName = newPlayerName;
        emit playerNameChanged(newPlayerName);
    }

    QString desktopFile() const { return m_desktopFile; }
    void setDesktopFile(QString newDesktopFile) {
        m_desktopFile = newDesktopFile;
        emit desktopFileChanged(newDesktopFile);
    }

    void classBegin() override {
        m_isParsing = true;
    }
    void componentComplete() override {
        m_isParsing = false;
        setup();
    }



signals:
    void playbackManagerChanged(PlaybackManager *newPlaybackManager);
    void canQuitChanged(bool newCanQuit);
    void canRaiseChanged(bool newCanRaise);
    void playerNameChanged(QString newPlayerName);
    void desktopFileChanged(QString newDesktopFile);

    void quitRequested();
    void raiseRequested();

private:
    Q_DECLARE_PRIVATE(PlatformMediaControl)
    PlatformMediaControlPrivate* d_ptr;
    void setup();
    bool m_isParsing = false;

    PlaybackManager *m_playbackManager = nullptr;
    bool m_canQuit = false;
    bool m_canRaise = false;
    QString m_playerName = QStringLiteral("JellyfinQt");
    QString m_desktopFile = QStringLiteral("sailfin");
};


} // NS ViewModel
} // NS Jellyfin

#endif // PLATFORMMEDIACONTROL_H
