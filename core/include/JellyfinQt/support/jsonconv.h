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
    QString sourceString = source.toString();
    if (sourceString.size() != 32) throw new ParseException("Error while trying to parse JSON value as QUid: invalid length");
    // Convert xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       (length: 32)
    //      to {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} (length: 38)
    QString qtParseableString;
    qtParseableString.reserve(38);
    qtParseableString +=  QStringLiteral("{")
            + sourceString.mid(0, 8)
            + QStringLiteral("-")
            + sourceString.mid(8, 4)
            + QStringLiteral("-")
            + sourceString.mid(12, 4)
            + QStringLiteral("-")
            + sourceString.mid(16, 4)
            + QStringLiteral("-")
            + sourceString.mid(20, 12)
            + QStringLiteral("}");

    return QUuid(qtParseableString);
}

template <>
QJsonValue toJsonValue(const QUuid &source) {
    QString str = source.toString();
    // Convert {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx} (length: 38)
    //      to xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       (lenght: 32)
    return QJsonValue(str.mid(1, 8) + str.mid(10, 4) + str.mid(15, 4) + str.mid(20, 4) + str.mid(25 + 12));
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
