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
function timeToText(time) {
    if (time < 0) return "??:??:??"
    var hours = Math.floor(time / (60 * 60 * 1000))
    var left = time % (60 * 60 * 1000)
    var minutes = Math.floor(left / (60 * 1000))
    left = time % (60 * 1000)
    var seconds = Math.floor(left / 1000)

    return hours + ":" + (minutes < 10 ? "0" : "") + minutes + ":" + (seconds < 10 ? "0" : "")+ seconds
}

function ticksToText(ticks) {
    return timeToText(ticks / 10000);
}

function itemImageUrl(baseUrl, item, type, options) {
    if (!item.ImageTags[type]) { return "" }
    return itemModelImageUrl(baseUrl, item.Id, item.ImageTags[type], type, options)
}

function itemModelImageUrl(baseUrl, itemId, tag, type, options) {
    if (tag == undefined) return ""
    var extraQuery = "";
    for (var prop in options) {
        if (options.hasOwnProperty(prop)) {
            extraQuery += "&" + prop + "=" + options[prop];
        }
    }
    return baseUrl + "/Items/" + itemId + "/Images/" + type + "?tag=" + tag + extraQuery
}

function usePortraitCover(itemType) {
    return ["Series", "Movie", "tvshows", "movies"].indexOf(itemType) >= 0
}

/**
 * Returns the page url for a certain item type.
 */
function getPageUrl(mediaType, itemType) {
    switch (itemType.toLowerCase()) {
    case "series":
        return Qt.resolvedUrl("pages/itemdetails/SeriesPage.qml")
    case "movie":
        return Qt.resolvedUrl("pages/itemdetails/FilmPage.qml")
    case "collection":
        return Qt.resolvedUrl("pages/itemdetails/CollectionPage.qml")
    case "season":
        return Qt.resolvedUrl("pages/itemdetails/SeasonPage.qml")
    case "episode":
        return Qt.resolvedUrl("pages/itemdetails/EpisodePage.qml")
    default:
        switch (mediaType ? mediaType.toLowerCase() : "folder") {
        case "folder":
            return Qt.resolvedUrl("pages/itemdetails/CollectionPage.qml")
        case "video":
            return Qt.resolvedUrl("pages/itemdetails/VideoPage.qml")
        default:
            return Qt.resolvedUrl("pages/itemdetails/UnsupportedPage.qml")
        }
    }
}
