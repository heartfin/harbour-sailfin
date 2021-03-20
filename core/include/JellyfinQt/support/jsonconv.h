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
