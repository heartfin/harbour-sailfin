import QtQuick 2.6

Column {
    id: notifList
    ListModel {
        id: notificationModel
        ListElement {
            title: "Test notification"
            text: "Foo bar\n2000"
            timeout: 10000
        }
    }

    Repeater {
        model: notificationModel
        Notification {
            id: notify
            title: model.title
            content: model.text
            width: notifList.width

            Timer {
                id: timer
                interval: model.timeout
                onTriggered: notificationModel.remove(index, 1)
            }
            Component.onCompleted: timer.start()
        }
    }

    add: Transition {
        NumberAnimation { targets: ViewTransition.targetItems; properties: "opacity"; from: 0.0; to: 1.0; }
    }
    move: Transition {
        NumberAnimation {
            targets: ViewTransition.targetItems;
            properties: "x";
        }
        NumberAnimation {
            targets: ViewTransition.targetItems;
            properties: "y";
        }
    }

    function addNotification(title, text, timeout) {
        var realTimeout = Number(timeout) >= 0 ? Number(timeout) : 5000
        notificationModel.append({"title": title, "text": text, "timeout": realTimeout});
    }
}
