/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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
#include "JellyfinQt/jsonhelper.h"

namespace Jellyfin {
namespace JsonHelper {

void convertToCamelCase(QJsonValueRef val) {
    switch(val.type()) {
    case QJsonValue::Object: {
        QJsonObject obj = val.toObject();
        for(const QString &key: obj.keys()) {
            QJsonValueRef ref = obj[key];
            convertToCamelCase(ref);
            obj[convertToCamelCaseHelper(key)] = ref;
            if (key[0].isLower() || !key[0].isLetter()) {
                obj[key] = ref;
            } else {
                obj[convertToCamelCaseHelper(key)] = ref;
                obj.remove(key);
            }
        }
        val = obj;
        break;
    }
    case QJsonValue::Array: {
        QJsonArray arr = val.toArray();
        for (auto it = arr.begin(); it != arr.end(); it++) {
            convertToCamelCase(*it);
        }
        val = arr;
        break;
    }
    default:
        break;
    }
}
void convertToCamelCase(QJsonValue &val) {
    switch(val.type()) {
    case QJsonValue::Object: {
        QJsonObject obj = val.toObject();
        for(const QString &key: obj.keys()) {
            QJsonValueRef ref = obj[key];
            convertToCamelCase(ref);
            obj[convertToCamelCaseHelper(key)] = ref;
            if (key[0].isLower() || !key[0].isLetter()) {
                obj[key] = ref;
            } else {
                obj[convertToCamelCaseHelper(key)] = ref;
                obj.remove(key);
            }
        }
        val = obj;
        break;
    }
    case QJsonValue::Array: {
        QJsonArray arr = val.toArray();
        for (auto it = arr.begin(); it != arr.end(); it++) {
            convertToCamelCase(*it);
        }
        val = arr;
        break;
    }
    default:
        break;
    }
}


QString convertToCamelCaseHelper(const QString &str) {
    QString res(str);
    res[0] = res[0].toLower();
    return res;
}

} // NS JsonHelper
} // NS Jellyfin
