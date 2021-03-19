/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef CREDENTIALS_MANAGER_H
#define CREDENTIALS_MANAGER_H

#include <QDebug>
#include <QHash>
#include <QObject>
#include <QSettings>
#include <QString>

/**
 * @brief The CredentialsManager class stores credentials for users.
 *
 * You can get an instance using ::instance(), which may depend on the platform being
 * used. Since the implementation may be asynchronous, the methods won't return anything,
 * they emit a corresponding signal instead.
 */
class CredentialsManager : public QObject {
    Q_OBJECT
public:
    /**
     * @brief Stores a token
     * @param server The server to store the token for
     * @param user The user to store the token for.
     * @param token The token to store.
     */
    virtual void store(const QString &server, const QString &user, const QString &token) {
        Q_UNUSED(server)
        Q_UNUSED(user)
        Q_UNUSED(token)
        Q_UNIMPLEMENTED();
    }
    /**
     * @brief Retrieves a stored token. Emits tokenRetrieved when the token is retrieved.
     * @param server The serverId to retrieve the token from.
     * @param user The user to retrieve the token for
     */
    virtual void get(const QString &server, const QString &user) const {
        Q_UNUSED(server)
        Q_UNUSED(user)
        Q_UNIMPLEMENTED();
    }

    /**
     * @brief removes a token
     * @param server
     * @param user
     */
    virtual void remove(const QString &server, const QString &user) {
        Q_UNUSED(server)
        Q_UNUSED(user)
        Q_UNIMPLEMENTED();
    }

    /**
     * @brief Gives the list of servers that have a user stored with a token.
     */
    virtual void listServers() const { Q_UNIMPLEMENTED(); }

    /**
     * @brief List the users with a token on a server
     * @param server
     */
    virtual void listUsers(const QString &server) {
        Q_UNUSED(server)
        Q_UNIMPLEMENTED();
    }

    /**
     * @brief Retrieves an implementation which can store this token.
     * @param The parent to set the implementations QObject parent to
     *
     * This method is always guaranteed to return an instance.
     * @return An implementation of this interface (may vary acrros platform).
     */
    static CredentialsManager *newInstance(QObject *parent = nullptr);

    /**
     * @return if the implementation of this interface stores the token in a secure place.
     */
    virtual bool isSecure() const { return false; }

signals:
    void tokenRetrieved(const QString &server, const QString &user, const QString &token) const;
    void serversListed(const QStringList &servers) const;
    void usersListed(const QStringList &users) const;

protected:
    explicit CredentialsManager(QObject *parent = nullptr) : QObject (parent) {}
};

/**
 * @brief Implementation of CredentialsManager that stores credentials in plain-text
 */
class FallbackCredentialsManager : public CredentialsManager {
    Q_OBJECT
public:
    FallbackCredentialsManager(QObject *parent = nullptr);
    void store(const QString &server, const QString &user, const QString &token) override;
    void get(const QString &server, const QString &user) const override;
    void remove(const QString &server, const QString &user) override;
    void listServers() const override;
    void listUsers(const QString &server) override;
    bool isSecure() const override { return false; }

private:
    QString urlToGroupName(const QString &url) const;
    QString groupNameToUrl(const QString &group) const;
    QSettings m_settings;
};

#endif // CREDENTIAL_MANAGER_H
