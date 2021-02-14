#ifndef JELLYFIN_H
#define JELLYFIN_H

#include <QtQml>

#include "JellyfinQt/jellyfinapiclient.h"
#include "JellyfinQt/jellyfinapimodel.h"
#include "JellyfinQt/jellyfinitem.h"
#include "JellyfinQt/serverdiscoverymodel.h"
#include "JellyfinQt/jellyfinplaybackmanager.h"

namespace Jellyfin {
void registerTypes(const char *uri = "nl.netsoj.chris.Jellyfin");
}

#endif // JELLYFIN_H
