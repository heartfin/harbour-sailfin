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
#ifndef JELLYFIN_SUPPORT_JSONCONVIMPL_H
#define JELLYFIN_SUPPORT_JSONCONVIMPL_H

#include <QtGlobal>
#include <QDateTime>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QUuid>
#include <QVariant>

#include <optional>

namespace Jellyfin {
namespace Support {

// Helper functions
//QString uuidToString(const QUuid &source);
//QUuid stringToUuid(const QString &source);


// https://www.fluentcpp.com/2017/08/15/function-templates-partial-specialization-cpp/
template <typename T>
struct convertType{};

/**
 * Template for converting types from JSON into their respective type.
 */
template <typename T>
T fromJsonValue(const QJsonValue &source, convertType<T>) {
    Q_UNUSED(source)
    Q_ASSERT_X(false, "fromJsonValue<T>", "fromJsonValue called with unimplemented type");
}

/**
 * Template for converting types from their type to JSON.
 */
template <typename T>
QJsonValue toJsonValue(const T &source, convertType<T>) {
    Q_UNUSED(source)
    std::string msg = "toJsonValue called with unimplemented type ";
    msg += typeid (T).name();
    Q_ASSERT_X(false, "toJsonValue<T>", msg.c_str());
    return QJsonValue();
}

template<typename T>
T fromJsonValue(const QJsonValue &source) {
    return fromJsonValue(source, convertType<T>{});
}


template<typename T>
QJsonValue toJsonValue(const T &source) {
    return toJsonValue(source, convertType<T>{});
}

// QList
template <typename T>
QList<T> fromJsonValue(const QJsonValue &source, convertType<QList<T>>) {
    QList<T> result;
    QJsonArray arr = source.toArray();
    result.reserve(arr.size());
    for (auto it = arr.constBegin(); it != arr.constEnd(); it++) {
        result.append(fromJsonValue<T>(*it));
    }
    return result;
}

template <typename T>
QJsonValue toJsonValue(const QList<T> &source, convertType<QList<T>>) {
    QJsonArray result;
    for (auto it = source.cbegin(); it != source.cend(); it++) {
        result.push_back(toJsonValue<T>(*it));
    }
    return result;
}

// Optional

template <typename T>
std::optional<T> fromJsonValue(const QJsonValue &source, convertType<std::optional<T>>) {
    if (source.isNull()) {
        return std::nullopt;
    } else {
        return fromJsonValue<T>(source, convertType<T>{});
    }
}

template <typename T>
QJsonValue toJsonValue(const std::optional<T> &source, convertType<std::optional<T>>) {
    if (source.has_value()) {
        return toJsonValue<T>(source.value(), convertType<T>{});
    } else {
        // Null
        return QJsonValue();
    }
}

// QSharedPointer
template <typename T>
QSharedPointer<T> fromJsonValue(const QJsonValue &source, convertType<QSharedPointer<T>>) {
    if (source.isNull()) {
        return QSharedPointer<T>();
    }
    return QSharedPointer<T>::create(fromJsonValue<T>(source));
}

template <typename T>
QJsonValue toJsonValue(const QSharedPointer<T> &source, convertType<QSharedPointer<T>>) {
    if (source.isNull()) {
        return QJsonValue();
    }
    return toJsonValue<T>(*source);
}


/**
 * Templates for string conversion.
 */


template <typename T>
QString toString(const T &source) {
    return toString(source, convertType<T>{});
}

template <typename T>
QString toString(const T &source, convertType<T>) {
    QJsonValue val = toJsonValue(source);
    const QJsonDocument::JsonFormat format = QJsonDocument::Compact;
    switch(val.type()) {
    case QJsonValue::Array:
        return QJsonDocument(val.toArray()).toJson(format);
    case QJsonValue::Object:
        return QJsonDocument(val.toObject()).toJson(format);
    case QJsonValue::String:
        return val.toString();
    case QJsonValue::Null:
    default:
        return QString();
    }
}

template <typename T>
QString toString(const std::optional<T> &source, convertType<std::optional<T>>) {
    if (source.has_value()) {
        return toString<T>(source.value(), convertType<T>{});
    } else {
        return QString();
    }
}

template <typename T>
QString toString(const QList<T> &source, convertType<QList<T>>) {
    QStringList tmp;
    tmp.reserve(source.size());
    for (auto it = source.cbegin(); it != source.cend(); it++) {
        tmp.append(toString<T>(*it, convertType<T>{}));
    }
    return tmp.join(',');
}

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_JSONCONVIMPL_H
