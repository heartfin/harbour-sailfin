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

#include <exception>
#include <stdexcept>

#include <QtGlobal>
#include <QDateTime>
#include <QJsonArray>
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
class ParseException : public std::runtime_error {
public:
    explicit ParseException(const char *message)
        : std::runtime_error(message) {}
};

/**
 * Template for converting types from JSON into their respective type.
 */
template <typename T>
T fromJsonValue(const QJsonValue &source) {
    Q_UNUSED(source)
    Q_ASSERT_X(false, "fromJsonValue<T>", "fromJsonValue called with unimplemented type");
}

template <typename T>
QJsonValue toJsonValue(const T &source) {
    Q_UNUSED(source)
    Q_ASSERT_X(false, "toJsonValue<T>", "toJsonValue called with unimplemented type");
}

// QList
template <typename T>
QList<T> fromJsonValue(const QJsonArray &source) {
    QList<T> result;
    result.reserve(source.size());
    for (auto it = source.cbegin(); it != source.cend(); it++) {
        result.append(fromJsonValue<T>(*it));
    }
    return result;
}

template <typename T>
QJsonValue toJsonValue(const QList<T> &source) {
    QJsonArray result;
    for (auto it = source.cbegin(); it != source.cend(); it++) {
        result.push_back(*it);
    }
    return result;
}

}
}

#endif // JSONCONV_H
