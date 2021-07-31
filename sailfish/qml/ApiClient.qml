pragma Singleton
import QtQuick 2.6
import nl.netsoj.chris.Jellyfin 1.0 as J

J.ApiClient {
    supportedCommands: [J.GeneralCommandType.Play, J.GeneralCommandType.DisplayContent, J.GeneralCommandType.DisplayMessage]
}
