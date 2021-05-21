#ifndef JELLYFIN_MODEL_PLAYLIST_H
#define JELLYFIN_MODEL_PLAYLIST_H

#include <QSharedPointer>
#include <QString>
#include <QUrl>
#include <QVector>


namespace Jellyfin {
namespace Model {

// Forward declaration
class Item;

class Playlist {
public:
    explicit Playlist();

    /// Start loading data for the next item.
    void preloadNext();


private:
    /// Extra data about each itemId that this playlist manages
    struct ExtendedItem {
        QSharedPointer<Item> item;
        /// The url from which this item can be streamed.
        QUrl url;
        /// Playsession that should be reported to Jellyfin's server.
        QString playSession;
        /// Text to be shown when an error occurred while fetching playback information.
        QString errorText;
    };

    QVector<ExtendedItem> list;
};

}
}

#endif // JELLYFIN_MODEL_PLAYLIST_H
