pragma Singleton
import QtQuick 2.12
import nl.netsoj.chris.Jellyfin 1.0 as J

J.ApiClient {
    appName: "Sailfin QtQuick"
    supportedCommands: [J.GeneralCommandType.Play, J.GeneralCommandType.DisplayContent, J.GeneralCommandType.DisplayMessage]
}
