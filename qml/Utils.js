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
    return ["Series", "Movie"].indexOf(itemType) >= 0
}
