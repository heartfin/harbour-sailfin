#include "jsonhelper.h"

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
            obj.remove(key);
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
