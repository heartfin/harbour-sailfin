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

#include "jsonconvimpl.h"
#include "parseexception.h"

namespace Jellyfin {
namespace Support {

extern template int fromJsonValue<int>(const QJsonValue &source, convertType<int>);
extern template qint64 fromJsonValue<qint64>(const QJsonValue &source, convertType<qint64>);
extern template bool fromJsonValue<bool>(const QJsonValue &source, convertType<bool>);
extern template QString fromJsonValue<QString>(const QJsonValue &source, convertType<QString>);
extern template QStringList fromJsonValue<QStringList>(const QJsonValue &source, convertType<QStringList>);
extern template QJsonObject fromJsonValue<QJsonObject>(const QJsonValue &source, convertType<QJsonObject>);
extern template double fromJsonValue<double>(const QJsonValue &source, convertType<double>);
extern template float fromJsonValue<float>(const QJsonValue &source, convertType<float>);
extern template QDateTime fromJsonValue<QDateTime>(const QJsonValue &source, convertType<QDateTime>);
extern template QVariant fromJsonValue<QVariant>(const QJsonValue &source, convertType<QVariant>);
extern template QUuid fromJsonValue<QUuid>(const QJsonValue &source, convertType<QUuid>);

extern template QJsonValue toJsonValue<int>(const int &source, convertType<int>);
extern template QJsonValue toJsonValue<qint64>(const qint64 &source, convertType<qint64>);
extern template QJsonValue toJsonValue<bool>(const bool &source, convertType<bool>);
extern template QJsonValue toJsonValue<QString>(const QString &source, convertType<QString>);
extern template QJsonValue toJsonValue<QStringList>(const QStringList &source, convertType<QStringList>);
extern template QJsonValue toJsonValue<QJsonObject>(const QJsonObject &source, convertType<QJsonObject>);
extern template QJsonValue toJsonValue<double>(const double &source, convertType<double>);
extern template QJsonValue toJsonValue<float>(const float &source, convertType<float>);
extern template QJsonValue toJsonValue<QDateTime>(const QDateTime &source, convertType<QDateTime>);
extern template QJsonValue toJsonValue<QVariant>(const QVariant &source, convertType<QVariant>);
extern template QJsonValue toJsonValue<QUuid>(const QUuid &source, convertType<QUuid>);


extern template QString toString(const QUuid &source, convertType<QUuid>);
extern template QString toString(const qint32 &source, convertType<qint32>);
extern template QString toString(const qint64 &source, convertType<qint64>);
extern template QString toString(const float &source, convertType<float>);
extern template QString toString(const double &source, convertType<double>);
extern template QString toString(const bool &source, convertType<bool>);
extern template QString toString(const QString &source, convertType<QString>);

} // NS Support
} // NS Jellyfin

#endif // JSONCONV_H
