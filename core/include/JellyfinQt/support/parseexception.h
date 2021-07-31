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
#ifndef JELLYFIN_SUPPORT_PARSEEXCEPTION_H
#define JELLYFIN_SUPPORT_PARSEEXCEPTION_H

#include <QException>
#include <QString>

namespace Jellyfin {
namespace Support {

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

} // NS Support
} // NS Jellyfin

#endif // JELLYFIN_SUPPORT_PARSEEXCEPTION_H
