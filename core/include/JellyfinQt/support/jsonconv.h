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
#ifndef JELLYFIN_SUPPORT_JSONCONV_H
#define JELLYFIN_SUPPORT_JSONCONV_H

#include <QException>

#include <QtGlobal>
#include <QDateTime>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QUuid>

namespace Jellyfin {
namespace Support {

// Helper functions
QString uuidToString(const QUuid &source);
QUuid stringToUuid(const QString &source);

/**
 * @brief Thrown when JSON cannot be parsed.
 */
class ParseException : public QException {
public:
    explicit ParseException(const QString &message)
          : m_message(message.toStdString()) {}

    /*explicit ParseException(const ParseException &other)
          : m_message(other.m_message) {}*/

    virtual const char *what() const noexcept override;

    virtual QException *clone() const override;
    virtual void raise() const override;
private:
    std::string m_message;
};

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
    for (auto it = arr.cbegin(); it != arr.cend(); it++) {
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
QString toString(const T &source, convertType<T>) {
    return toJsonValue(source).toString();
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
QString toString(const T &source) {
    return toString(source, convertType<T>{});
}


} // NS Support
} // NS Jellyfin

#endif // JSONCONV_H
