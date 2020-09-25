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
