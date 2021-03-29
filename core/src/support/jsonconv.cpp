/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include "JellyfinQt/support/jsonconv.h"

#include <QDebug>

namespace Jellyfin {
namespace Support {

const char * ParseException::what() const noexcept {
    return m_message.c_str();
}

QException *ParseException::clone() const {
    return new ParseException(*this);
}

void ParseException::raise() const {
    throw *this;
}

QString uuidToString(const QUuid &source) {
    QString str = source.toString();
    // Convert {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} (length: 38)
    //      to xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       (lenght: 32)
    return QString(str.mid(1, 8) + str.mid(10, 4) + str.mid(15, 4) + str.mid(20, 4) + str.mid(25 + 12));
}
QUuid stringToUuid(const QString &source) {
    if (source.size() != 32) throw ParseException("Error while trying to parse JSON value as QUid: invalid length");
    // Convert xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       (length: 32)
    //      to {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} (length: 38)
    QString qtParseableString;
    qtParseableString.reserve(38);
    qtParseableString +=  QStringLiteral("{")
            + source.mid(0, 8)
            + QStringLiteral("-")
            + source.mid(8, 4)
            + QStringLiteral("-")
            + source.mid(12, 4)
            + QStringLiteral("-")
            + source.mid(16, 4)
            + QStringLiteral("-")
            + source.mid(20, 12)
            + QStringLiteral("}");
    return QUuid(qtParseableString);
}

// Trivial converters for built-in classes and simple types

// int
template <>
int fromJsonValue<int>(const QJsonValue &source, convertType<int>) {
    if (!source.isDouble()) throw ParseException("Error while trying to parse JSON value as integer: not an integer");
    return source.toInt();
}

template <>
QJsonValue toJsonValue<int>(const int &source, convertType<int>) {
    return QJsonValue(source);
}

// "long"
template <>
qint64 fromJsonValue<qint64>(const QJsonValue &source, convertType<qint64>) {
    if (!source.isDouble()) throw ParseException("Error while trying to parse JSON value as integer: not an integer");
    return static_cast<qint64>(source.toDouble());
}

template <>
QJsonValue toJsonValue<qint64>(const qint64 &source, convertType<qint64>) {
    return QJsonValue(static_cast<qint64>(source));
}

// bool
template <>
bool fromJsonValue<bool>(const QJsonValue &source, convertType<bool>) {
    if (!source.isBool()) throw ParseException("Error while trying to parse JSON value as boolean: not a boolean");
    return source.toBool();
}

template <>
QJsonValue toJsonValue<bool>(const bool &source, convertType<bool>) {
    return QJsonValue(source);
}

// QString
template <>
QString fromJsonValue<QString>(const QJsonValue &source, convertType<QString>) {
    if (source.isNull()) {
        return QString();
    }
    if (!source.isString()) {
        throw ParseException(QStringLiteral("Error while trying to parse JSON value %1 as string: not a string").arg(source.type()));
    }
    return source.toString();
}

template <>
QJsonValue toJsonValue<QString>(const QString &source, convertType<QString>) {
    return QJsonValue(source);
}

// QStringList
template <>
QStringList fromJsonValue<QStringList>(const QJsonValue &source, convertType<QStringList>) {
    switch(source.type()) {
    case QJsonValue::Array: {
        QJsonArray arr = source.toArray();
        QStringList result;
        result.reserve(arr.size());
        for(int i = 0; i < arr.size(); i++) {
            result.append(fromJsonValue<QString>(arr.at(i)));
        }
        return result;
    }
    case QJsonValue::Null:
        return QStringList();
    default:
        throw ParseException(QStringLiteral("Error while trying to parse JSON value %1 as stringlist: not a list of strings").arg(source.type()));
    }
}


template <>
QJsonValue toJsonValue<QStringList>(const QStringList &source, convertType<QStringList>) {
    QJsonArray result;
    for (int i = 0; i < source.size(); i++) {
        result.append(source[i]);
    }
    return result;
}

// QJsonObject
template <>
QJsonObject fromJsonValue<QJsonObject>(const QJsonValue &source, convertType<QJsonObject>) {
    switch(source.type()) {
    case QJsonValue::Null:
        return QJsonObject();
    case QJsonValue::Object:
        return source.toObject();
    default:
        throw ParseException("Error parsing JSON value as object: not an object");
    }
}

template <>
QJsonValue toJsonValue<QJsonObject>(const QJsonObject &source, convertType<QJsonObject>) {
    return QJsonValue(source);
}

// Double
template <>
double fromJsonValue<double>(const QJsonValue &source, convertType<double>) {
    if (!source.isDouble()) throw ParseException("Error parsing JSON value as double: not a double");
    return source.toDouble();
}

template <>
QJsonValue toJsonValue<double>(const double &source, convertType<double>) {
    return QJsonValue(source);
}

// Float
template <>
float fromJsonValue<float>(const QJsonValue &source, convertType<float>) {
    if (!source.isDouble()) throw ParseException("Error parsing JSON value as float: not a double");
    return static_cast<float>(source.toDouble());
}

template <>
QJsonValue toJsonValue<float>(const float &source, convertType<float>) {
    return QJsonValue(static_cast<double>(source));
}

// QDateTime
template <>
QDateTime fromJsonValue<QDateTime>(const QJsonValue &source, convertType<QDateTime>) {
    switch (source.type()) {
    case QJsonValue::Null:
        return QDateTime();
    case QJsonValue::String:
        return QDateTime::fromString(source.toString(), Qt::ISODateWithMs);
    default:
        throw ParseException("Error while trying to parse JSON value as DateTime: not a string");
    }
}

template <>
QJsonValue toJsonValue<QDateTime>(const QDateTime &source, convertType<QDateTime>) {
    return QJsonValue(source.toString(Qt::ISODateWithMs));
}

// QUuid
template <>
QUuid fromJsonValue<QUuid>(const QJsonValue &source, convertType<QUuid>) {
    if (!source.isString()) {
        qCritical() << "JSON Value " << source << "is not a string";
        throw ParseException(QStringLiteral("Error while trying to parse JSON value as QUuid: not a string"));
    }
    return stringToUuid(source.toString());
}

template <>
QJsonValue toJsonValue<QUuid>(const QUuid &source, convertType<QUuid>) {
    return uuidToString(source);
}

// String types
template <>
QString toString(const QUuid &source, convertType<QUuid>) {
    return uuidToString(source);
}

template <>
QString toString(const qint32 &source, convertType<qint32>) {
    return QString::number(source);
}

template <>
QString toString(const qint64 &source, convertType<qint64>) {
    return QString::number(source);
}

template <>
QString toString(const float &source, convertType<float>) {
    return QString::number(source);
}

template <>
QString toString(const double &source, convertType<double>) {
    return QString::number(source);
}

template <>
QString toString(const bool &source, convertType<bool>) {
    return source ? QStringLiteral("true") : QStringLiteral("false");
}

template <>
QString toString(const QString &source, convertType<QString>) {
    return source;
}

} // NS Support
} // NS Jellyfin
