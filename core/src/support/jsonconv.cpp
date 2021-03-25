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

namespace Jellyfin {
namespace Support {


QString uuidToString(const QUuid &source) {
    QString str = source.toString();
    // Convert {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} (length: 38)
    //      to xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       (lenght: 32)
    return QString(str.mid(1, 8) + str.mid(10, 4) + str.mid(15, 4) + str.mid(20, 4) + str.mid(25 + 12));
}
QUuid stringToUuid(const QString &source) {
    if (source.size() != 32) throw new ParseException("Error while trying to parse JSON value as QUid: invalid length");
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
int fromJsonValue(const QJsonValue &source) {
    if (!source.isDouble()) throw new ParseException("Error while trying to parse JSON value as integer: not an integer");
    return source.toInt();
}

template <>
QJsonValue toJsonValue(const int &source) {
    return QJsonValue(source);
}

// bool
template <>
bool fromJsonValue(const QJsonValue &source) {
    if (!source.isBool()) throw new ParseException("Error while trying to parse JSON value as boolean: not a boolean");
    return source.toBool();
}

template <>
QJsonValue toJsonValue(const bool &source) {
    return QJsonValue(source);
}

// QString
template <>
QString fromJsonValue(const QJsonValue &source) {
    if (!source.isString()) throw new ParseException("Error while trying to parse JSON value as string: not a string");
    return source.toString();
}

template <>
QJsonValue toJsonValue(const QString &source) {
    return QJsonValue(source);
}

// Double
template <>
double fromJsonValue(const QJsonValue &source) {
    if (!source.isDouble()) throw new ParseException("Error while trying to parse JSON value as integer: not a double");
    return source.toDouble();
}

template <>
QJsonValue toJsonValue(const double &source) {
    return QJsonValue(source);
}

// QDateTime
template <>
QDateTime fromJsonValue(const QJsonValue &source) {
    if (!source.isString()) throw new ParseException("Error while trying to parse JSON value as DateTime: not a string");
    return QDateTime::fromString(source.toString(), Qt::ISODateWithMs);
}

template <>
QJsonValue toJsonValue(const QDateTime &source) {
    return QJsonValue(source.toString(Qt::ISODateWithMs));
}

// QUuid
template <>
QUuid fromJsonValue(const QJsonValue &source) {
    if (!source.isString()) throw new ParseException("Error while trying to parse JSON value as QUuid: not a string");
    return stringToUuid(source.toString());
}

template <>
QJsonValue toJsonValue(const QUuid &source) {
    return uuidToString(source);
}

// String types
template <>
QString toString(const QUuid &source) {
    return uuidToString(source);
}

template <>
QString toString(const qint32 &source) {
    return QString::number(source);
}

template <>
QString toString(const qint64 &source) {
    return QString::number(source);
}

template <>
QString toString(const bool &source) {
    return source ? QStringLiteral("true") : QStringLiteral("false");
}

template <>
QString toString(const QString &source) {
    return source;
}

} // NS Support
} // NS Jellyfin
