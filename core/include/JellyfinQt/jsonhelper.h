#ifndef JSON_SERIALIZER_H
#define JSON_SERIALIZER_H


#include <QList>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValueRef>
#include <QString>

namespace Jellyfin {

namespace JsonHelper {
    void convertToCamelCase(QJsonValueRef val);
    QString convertToCamelCaseHelper(const QString &str);
};

}

#endif // JSONSERIALIZER_H
