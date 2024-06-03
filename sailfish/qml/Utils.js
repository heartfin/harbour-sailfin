/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

.pragma library

/**
 * Converts miliseconds to a h:mm:ss format
 */
function timeToText(time, showHours) {
    var mShowHours = showHours === undefined ? true : showHours
    if (time < 0) return "??:??:??"
    var hours = Math.floor(time / (60 * 60 * 1000))
    var left = time % (60 * 60 * 1000)
    var minutes = Math.floor(left / (60 * 1000))
    left = time % (60 * 1000)
    var seconds = Math.floor(left / 1000)
    return (hours > 0 ? hours + ":" : "")
            + (minutes < 10 ? "0" : "")
            + minutes + ":" + (seconds < 10 ? "0" : "")+ seconds
}

function msToTicks(ms) {
    return ms * 10000;
}

function ticksToMs(ticks) {
    return ticks / 10000;
}

function ticksToText(ticks, showHours) {
    return timeToText(ticks / 10000, showHours);
}

function propsToQuery(options) {
    var query = "";
    for (var prop in options) {
        if (options.hasOwnProperty(prop)) {
            var value = options[prop];
            if (prop === "maxWidth" || prop === "maxHeight") {
                value = Math.floor(options[prop]);
            }
            query += "&" + prop + "=" + value;
        }
    }
    return query;
}

function randomBackdrop(baseUrl, item) {
    var count = item.backdropImageTags.length;
    if (count === 0) return -1
    return Math.floor(Math.random() * count);
}

function itemBackdropUrl(baseUrl, item, idx, options) {
    var extraQuery = propsToQuery(options)
    if (item.backdropImageTags[idx]) {
        return baseUrl + "/Items/" + item.jellyfinId + "/Images/Backdrop/" + idx + "?tag=" + item.backdropImageTags[idx] + extraQuery;
    } else {
        return baseUrl + "/Items/" + item.parentBackdropItemId + "/Images/Backdrop/" + idx + "?tag=" + item.parentBackdropImageTags[idx] + extraQuery;
    }
}


function itemImageUrl(baseUrl, item, type, options) {
    if (item === null || !item.imageTags[type]) { return "" }
    return itemModelImageUrl(baseUrl, item.jellyfinId, item.imageTags[type], type, options)
}

function itemModelImageUrl(baseUrl, itemId, tag, type, options) {
    if (tag === undefined) return ""
    var extraQuery = propsToQuery(options)
    return baseUrl + "/Items/" + itemId + "/Images/" + type + "?tag=" + tag + extraQuery
}

function usePortraitCover(itemType) {
    return ["Series", "Movie", "tvshows", "movies"].indexOf(itemType) >= 0
}

/**
 * Returns the page url for a certain item type.
 */
function getPageUrl(mediaType, itemType, isFolder) {
    switch (itemType.toLowerCase()) {
    case "series":
        return Qt.resolvedUrl("pages/itemdetails/SeriesPage.qml")
    case "movie":
        return Qt.resolvedUrl("pages/itemdetails/FilmPage.qml")
    case "collection":
    case "photoalbum":
        return Qt.resolvedUrl("pages/itemdetails/CollectionPage.qml")
    case "season":
        return Qt.resolvedUrl("pages/itemdetails/SeasonPage.qml")
    case "episode":
        return Qt.resolvedUrl("pages/itemdetails/EpisodePage.qml")
    case "musicartist":
        return Qt.resolvedUrl("pages/itemdetails/MusicArtistPage.qml")
    case "musicalbum":
    case "playlist":
        return Qt.resolvedUrl("pages/itemdetails/MusicAlbumPage.qml")
    case "photo":
        return Qt.resolvedUrl("pages/itemdetails/PhotoPage.qml")
    case "tvchannel":
        return Qt.resolvedUrl("pages/itemdetails/LiveTvChannelPage.qml")
    case "collectionfolder":
        // TODO: support for other collection folders
        switch(mediaType.toLowerCase()) {
        case "music":
            return Qt.resolvedUrl("pages/itemdetails/MusicLibraryPage.qml")
        }
        // FALLTRHOUGH
    default:
        switch (mediaType ? mediaType.toLowerCase() : isFolder ? "folder" : "") {
        case "livetv":
            return Qt.resolvedUrl("pages/itemdetails/LiveTvChannelsPage.qml")
        case "folder":
            return Qt.resolvedUrl("pages/itemdetails/CollectionPage.qml")
        case "video":
            return Qt.resolvedUrl("pages/itemdetails/VideoPage.qml")
        case "photo":
            return Qt.resolvedUrl("pages/itemdetails/PhotoPage.qml")
        default:
            if (isFolder) return Qt.resolvedUrl("pages/itemdetails/CollectionPage.qml")
            return Qt.resolvedUrl("pages/itemdetails/UnsupportedPage.qml")
        }
    }
}

/**
 * Generates a "nice" color based on a string by "hashing" it.
 */
function colorFromString(string) {
    var hash = 0;
    for (var i = 0; i < string.length; i++) {
        hash += string.charCodeAt(i);
    }
    hash = (hash % 16) / 16;
    return Qt.hsva(hash, 1.0, 1.0, 1.0);
}
