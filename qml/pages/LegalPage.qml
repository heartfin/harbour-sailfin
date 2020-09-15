import QtQuick 2.6
import QtQuick.XmlListModel 2.0
import Sailfish.Silica 1.0

import "../components"

Page {
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            XmlListModel {
                id: licencesModel
                source: Qt.resolvedUrl("../3rdparty.xml")
                query: "/includes/include"
                XmlRole { name: "name"; query: "name/string()" }
                XmlRole { name: "type"; query: "type/string()" }
                XmlRole { name: "url"; query: "url/string()" }
                XmlRole { name: "copyright"; query: "license/copyright/string()" }
                XmlRole { name: "licenseUrl"; query: "license/text/string()" }
                XmlRole { name: "licenseType"; query: "license/type/string()" }
            }

            PageHeader {
                title: qsTr("Legal")
            }

            PlainLabel {
                text: qsTr("The Sailfin application contains some code from other projects. Without them, Sailfin would " +
                           "not be possible!")
            }

            Repeater {
                model: licencesModel
                Column {
                    width: parent.width
                    SectionHeader {
                        text: name
                    }

                    PlainLabel {
                        color: Theme.secondaryHighlightColor
                        text: {
                            switch(type) {
                            case "SNIPPET":
                                return qsTr("This program contains small snippets of code taken from <a href=\"%1\">%2</a>, which " +
                                        "is licensed under the %3 license:")
                                    .arg(model.url).arg(model.name).arg(model.licenseType);
                            }
                        }
                    }

                    Item {
                        width: 1
                        height: Theme.paddingLarge
                    }

                    SilicaFlickable {
                        anchors {
                            left: parent.left
                            right: parent.right
                            leftMargin: Theme.horizontalPageMargin
                            rightMargin: Theme.horizontalPageMargin
                        }
                        height: licenseLabel.contentHeight
                        contentWidth: licenseLabel.contentWidth
                        clip: true

                        Label {
                            id: licenseLabel
                            color: Theme.secondaryHighlightColor
                            font.family: "monospace"
                            font.pixelSize: Theme.fontSizeExtraSmall
                            wrapMode: Text.NoWrap

                            Component.onCompleted: {
                                var xhr = new XMLHttpRequest;
                                xhr.open("GET", Qt.resolvedUrl("../" + model.licenseUrl)); // set Method and File
                                console.log(Qt.resolvedUrl("../" + model.licenseUrl))
                                xhr.onreadystatechange = function () {
                                    if (xhr.readyState === XMLHttpRequest.DONE){ // if request_status == DONE
                                        var response = model.copyright + "\n\n" + xhr.responseText;
                                        console.log(response);
                                        licenseLabel.text = response
                                    }
                                }
                                xhr.send(); // begin the request
                            }
                        }
                        HorizontalScrollDecorator {}
                    }
                }
            }

            VerticalScrollDecorator {}
        }
    }
}
