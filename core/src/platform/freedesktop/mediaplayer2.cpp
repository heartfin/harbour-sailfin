/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.mpris.MediaPlayer2.xml -a ../include/JellyfinQt/platform/freedesktop/mediaplayer2.h:../src/platform/freedesktop/mediaplayer2.cpp
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "JellyfinQt/platform/freedesktop/mediaplayer2.h"
#include "JellyfinQt/viewmodel/platformmediacontrol.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

namespace Jellyfin {
namespace Platform {
namespace FreeDesktop {

/*
 * Implementation of adaptor class MediaPlayer2Adaptor
 */

MediaPlayer2Adaptor::MediaPlayer2Adaptor(ViewModel::PlatformMediaControl *parent)
    : QDBusAbstractAdaptor(parent),
    m_mediaControl(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MediaPlayer2Adaptor::~MediaPlayer2Adaptor()
{
    // destructor
}

bool MediaPlayer2Adaptor::canQuit() const
{
    // get the value of property CanQuit
    return m_mediaControl->canQuit();
}

bool MediaPlayer2Adaptor::canRaise() const
{
    // get the value of property CanRaise
    return m_mediaControl->canRaise();
}

bool MediaPlayer2Adaptor::canSetFullscreen() const
{
    // get the value of property CanSetFullscreen
    return qvariant_cast< bool >(parent()->property("CanSetFullscreen"));
}

QString MediaPlayer2Adaptor::desktopEntry() const
{
    // get the value of property DesktopEntry
    return m_mediaControl->desktopFile();
}

bool MediaPlayer2Adaptor::fullscreen() const
{
    // get the value of property Fullscreen
    return qvariant_cast< bool >(parent()->property("Fullscreen"));
}

void MediaPlayer2Adaptor::setFullscreen(bool value)
{
    // set the value of property Fullscreen
    parent()->setProperty("Fullscreen", QVariant::fromValue(value));
}

bool MediaPlayer2Adaptor::hasTrackList() const
{
    // get the value of property HasTrackList
    //return qvariant_cast< bool >(parent()->property("HasTrackList"));
    return false;
}

QString MediaPlayer2Adaptor::identity() const
{
    // get the value of property Identity
    return m_mediaControl->playerName();
}

QStringList MediaPlayer2Adaptor::supportedMimeTypes() const
{
    // get the value of property SupportedMimeTypes
    return qvariant_cast< QStringList >(parent()->property("SupportedMimeTypes"));
}

QStringList MediaPlayer2Adaptor::supportedUriSchemes() const
{
    // get the value of property SupportedUriSchemes
    QStringList supportedUriSchemes;
    supportedUriSchemes << "urn";
    return supportedUriSchemes;
}

void MediaPlayer2Adaptor::Quit()
{
    m_mediaControl->requestQuit();
}

void MediaPlayer2Adaptor::Raise()
{
    m_mediaControl->requestRaise();
}

} // NS FreeDesktop
} // NS Platform
} // NS Jellyfin
