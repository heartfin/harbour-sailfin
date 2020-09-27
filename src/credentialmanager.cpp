#include "credentialmanager.h"

CredentialsManager * CredentialsManager::newInstance(QObject *parent) {
    return new FallbackCredentialsManager(parent);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
// FallbackCredentialsManager                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
FallbackCredentialsManager::FallbackCredentialsManager(QObject *parent)
    : CredentialsManager (parent) {
    m_settings.beginGroup("Credentials");
}

QString FallbackCredentialsManager::urlToGroupName(const QString &url) const {
    // |'s are not allowed in URLS, but are in group names.
    return QString::number(qHash(url), 16);
}

QString FallbackCredentialsManager::groupNameToUrl(const QString &group) const {
    QString tmp = QString(group);
    return tmp.replace('|', "/");
}

void FallbackCredentialsManager::store(const QString &server, const QString &user, const QString &token) {
    m_settings.setValue(urlToGroupName(server) + "/users/" + user + "/accessToken", token);
    m_settings.setValue(urlToGroupName(server) + "/address", server);
}

void FallbackCredentialsManager::get(const QString &server, const QString &user) const {
    QString result = m_settings.value(urlToGroupName(server) + "/users/" + user + "/accessToken").toString();
    emit CredentialsManager::tokenRetrieved(server, user, result);
}

void FallbackCredentialsManager::remove(const QString &server, const QString &user) {
    m_settings.remove(urlToGroupName(server) + "/users/" + user);

    // Check if only the /address key is left. In this case, the server section should be removed.
    m_settings.beginGroup(urlToGroupName(server));
    int childGroupsCount = m_settings.childGroups().count();
    m_settings.endGroup();
    if (childGroupsCount == 0) {
        m_settings.remove(urlToGroupName(server));
    }
}

void FallbackCredentialsManager::listServers() const {
    QList<QString> keys = m_settings.childGroups();
    qDebug() << "Servers: " << keys;
    for (int i = 0; i < keys.size(); i++) {
        keys[i] = m_settings.value(keys[i] + "/address").toString();
    }
    qDebug() << "Servers: " << keys;

    emit CredentialsManager::serversListed(keys);
}

void FallbackCredentialsManager::listUsers(const QString &server) {
    m_settings.beginGroup(urlToGroupName(server));
    m_settings.beginGroup("users");
    QStringList users = m_settings.childGroups();
    qDebug() << "Users: " << users;
    m_settings.endGroup();
    m_settings.endGroup();
    emit CredentialsManager::usersListed(users);
}
