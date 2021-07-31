import QtQuick 2.6
import nl.netsoj.chris.Jellyfin 1.0 as J

// Due QTBUG-10822, declarartions such as `property J.Item foo` are not possible.
// Since J.Item clashses with the QtQuick item type, this is a workaround until
// Sailfish OS upgrades to a Qt > 5.8. Maybe in 2023?
J.Item {

}
