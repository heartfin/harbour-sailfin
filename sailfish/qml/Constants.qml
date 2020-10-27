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

pragma Singleton

import QtQuick 2.6
import Sailfish.Silica 1.0

QtObject {
    readonly property real libraryDelegateWidth: {
        switch(Screen.sizeCategory) {
        case Screen.Small:
        case Screen.Medium:
            return Screen.width / 3
        case Screen.Large:
            return Screen.width / 5
        case Screen.ExtraLarge:
            return Screen.width / 7
        }
    }
    readonly property real libraryDelegateHeight: {
        switch(Screen.sizeCategory) {
        case Screen.Small:
        case Screen.Medium:
            return Screen.width / 3
        case Screen.Large:
            return Screen.width / 5
        case Screen.ExtraLarge:
            return Screen.width / 7
        }
    }

    readonly property real libraryDelegatePosterHeight: libraryDelegateHeight * 1.6667

    readonly property real libraryProgressHeight: Theme.paddingMedium

    readonly property real horizontalVideoAspectRatio: 1.66666 //itemData.PrimaryImageAspectRatio
}
