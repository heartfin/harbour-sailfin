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

#ifndef JELLYFIN_DTO_DTO
#define JELLYFIN_DTO_DTO

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QMetaObject>
#include <QMetaProperty>
#include <QNetworkReply>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QVariant>

#include "../apiclient.h"
#include "../jsonhelper.h"

namespace Jellyfin {
namespace DTO {
/**
 * @brief Base class for a serializable object.
 *
 * This class will be (de)serialized based on its properties.
 * Note: it must have a constructor without arguments marked with Q_INVOKABLE
 */
class JsonSerializable : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE JsonSerializable(QObject *parent);

    /**
     * @brief Sets this objects properties based on obj.
     * @param obj The data to load into this object.
     */
    void deserialize(const QJsonObject &obj);
    QJsonObject serialize(bool capitalize = true) const;
private:
    QVariant jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root);
    QJsonValue variantToJson(const QVariant var) const;
    QVariant deserializeQobject(const QJsonObject &obj, const QMetaProperty &prop);

    /**
     * @brief Sets the first letter of the string to lower case (to make it camelCase).
     * @param str The string to modify
     * @return THe modified string
     */
    static QString fromPascalCase(QString str);
    /**
     * @brief Sets the first letter of the string to uper case (to make it PascalCase).
     * @param str The string to modify
     * @return THe modified string
     */
    static QString toPascalCase(QString st);

    static const QRegularExpression m_listExpression;
    /**
     * @brief Qt is doing weird. I'll keep track of the metatypes myself.
     */
    QHash<QString, const QMetaType *> m_nameMetatypeMap;
};


/**
 * @brief An "interface" for a remote data source
 *
 * This class is basically a base class for JSON data that can be fetched from over the network.
 * Subclasses should reimplement reload and call setStatus to update the QML part of the code
 * appropiatly.
 */
class RemoteData : public JsonSerializable {
    Q_OBJECT
public:
    enum Status {
        /// The data is unitialized and not loading either.
        Uninitialised,
        /// The data is being loaded over the network
        Loading,
        /// The data is ready, the properties in this object are up to date.
        Ready,
        /// An error has occurred while loading the data. See error() for more details.
        Error
    };
    Q_ENUM(Status)

    explicit RemoteData(QObject *parent = nullptr);

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient NOTIFY apiClientChanged STORED false)
    Q_PROPERTY(Status status READ status NOTIFY statusChanged STORED false)
    Q_PROPERTY(QNetworkReply::NetworkError error READ error NOTIFY errorChanged STORED false)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged STORED false)

    Status status() const { return m_status; }
    QNetworkReply::NetworkError error() const { return m_error; }
    QString errorString() const { return m_errorString; }

    void setApiClient(ApiClient *newApiClient);
signals:
    void statusChanged(Status newStatus);
    void apiClientChanged(ApiClient *newApiClient);
    void errorChanged(QNetworkReply::NetworkError newError);
    void errorStringChanged(QString newErrorString);
    /**
     * @brief Convenience signal for status == RemoteData.Ready.
     */
    void ready();
public slots:

    /**
     * @brief Overload this method to reimplement the fetching mechanism to
     * populate the RemoteData with data from the server.
     *
     * The default implementation makes a GET request to getDataUrl() and parses the resulting JSON,
     * which should be enough for most cases. Consider overriding getDataUrl() and
     * canRelaod() if possible. Manual overrides need to make sure that
     * they're calling setStatus(Status), setError(QNetworkReply::NetworkError) and
     * setErrorString() to let the QML side know what this thing is up to.
     */
    virtual void reload();
protected:
    /**
     * @brief Subclasses should implement this to determine if they can
     * load data from the server.
     *
     * Usage cases include checking if the
     * required properties, such as the item id are set.
     */
    virtual bool canReload() const = 0;

    /**
     * @brief Construct the URL to fetch the data from.
     * @return The URL to load data from.
     */
    virtual QString getDataUrl() const = 0;

    void setStatus(Status newStatus);
    void setError(QNetworkReply::NetworkError error);
    void setErrorString(const QString &newErrorString);
    ApiClient *m_apiClient = nullptr;
private:
    Status m_status = Uninitialised;
    QNetworkReply::NetworkError m_error = QNetworkReply::NoError;
    QString m_errorString;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_DTO_H
