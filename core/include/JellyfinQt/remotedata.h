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

#include "apiclient.h"
#include "jsonhelper.h"

#include "DTO/baseitemdto.h"

namespace Jellyfin {
/**
 * @brief Base class for a serializable object.
 *
 * This class will be (de)serialized based on its properties.
 * Note: it must have a constructor without arguments marked with Q_INVOKABLE
 */
/*class JsonSerializable : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE JsonSerializable(QObject *parent);
    virtual ~JsonSerializable();

    void deserialize(const QJsonObject &obj);
    QJsonObject serialize(bool capitalize = true) const;
private:
    QVariant jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root);
    QJsonValue variantToJson(const QVariant var) const;
    QVariant deserializeQObject(const QJsonObject &obj, const QMetaProperty &prop);

    static QString fromPascalCase(QString str);
    static QString toPascalCase(QString st);

    static const QRegularExpression m_listExpression;
    static const QRegularExpression m_hashExpression;
    static int findTypeIdForProperty(QString type);
    QHash<QString, const QMetaType *> m_nameMetatypeMap;
};*/


/**
 * @brief An "interface" for a remote data source
 *
 * This class is basically a base class for JSON data that can be fetched from over the network.
 * Subclasses should reimplement reload and call setStatus to update the QML part of the code
 * appropiatly.
 */
class RemoteDataBase : public QObject, public QQmlParserStatus {
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
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

    explicit RemoteDataBase(QObject *parent = nullptr) : QObject(parent) {}
    RemoteDataBase(ApiClient *apiClient, QObject *parent = nullptr)
        : QObject(parent), m_apiClient(apiClient) {}

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient NOTIFY apiClientChanged STORED false)
    Q_PROPERTY(Status status READ status NOTIFY statusChanged STORED false)
    Q_PROPERTY(QNetworkReply::NetworkError error READ error NOTIFY errorChanged STORED false)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged STORED false)
    Q_PROPERTY(QStringList extraFields MEMBER m_extraFields WRITE setExtraFields NOTIFY extraFieldsChanged STORED false)
    Q_PROPERTY(bool autoReload MEMBER m_autoReload NOTIFY autoReloadChanged)

    Status status() const { return m_status; }
    QNetworkReply::NetworkError error() const { return m_error; }
    QString errorString() const { return m_errorString; }

    void setApiClient(ApiClient *newApiClient);
    void setExtraFields(const QStringList &extraFields);
signals:
    void statusChanged(Status newStatus);
    void apiClientChanged(ApiClient *newApiClient);
    void errorChanged(QNetworkReply::NetworkError newError);
    void errorStringChanged(QString newErrorString);
    void extraFieldsChanged(const QStringList &newExtraFields);
    void autoReloadChanged(bool newAutoReload);
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
    virtual bool canReload() const;

    /**
     * @brief Construct the URL to fetch the data from.
     * @return The URL to load data from.
     */
    virtual QString getDataUrl() const = 0;
    virtual void dataFetched(QJsonObject data) = 0;

    void setStatus(Status newStatus);
    void setError(QNetworkReply::NetworkError error);
    void setErrorString(const QString &newErrorString);

    void classBegin() override {
        m_isParsing = true;
    }

    void componentComplete() override {
        m_isParsing = false;
        if (canReload()) {
            reload();
        }
    }
    ApiClient *m_apiClient = nullptr;
private:
    Status m_status = Uninitialised;
    QNetworkReply::NetworkError m_error = QNetworkReply::NoError;
    QString m_errorString;
    QStringList m_extraFields;
    bool m_autoReload = true;
    bool m_isParsing = false;
};

template <class T>
class RemoteData : public RemoteDataBase {
public:
    RemoteData(QObject *parent = nullptr) : RemoteDataBase(parent) {
        m_data = new T(this);
    }
    RemoteData(ApiClient *apiClient, QObject *parent = nullptr)
        : RemoteDataBase(apiClient, parent) {
        m_data = new T(this);
    }

    T *data() const { return m_data; }
    void setData(T *newData) {
        newData->setParent(this);
        m_data->deleteLater();
        m_data = newData;
        emitDataChanged();
    }
protected:
    T* m_data;
    void dataFetched(QJsonObject data) override {
        m_data->updateFromJSON(data);
    }
    virtual void emitDataChanged() = 0;
};

class RemoteItem : public RemoteData<DTO::BaseItemDto> {
    Q_OBJECT
public:
    RemoteItem(QObject *parent = nullptr);
    RemoteItem(QString id, ApiClient *apiClient, QObject *parent = nullptr);
    Q_PROPERTY(DTO::BaseItemDto *data MEMBER m_data READ data NOTIFY dataChanged)
    Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)

    QString getDataUrl() const override {
        return QString("/Users/") + m_apiClient->userId() + "/Items/" + m_data->jellyfinId();
    }

    bool canReload() const override {
        return RemoteData<DTO::BaseItemDto>::canReload() && !m_data->jellyfinId().isNull();
    }

    QString jellyfinId() const { return m_data->jellyfinId(); }
    void setJellyfinId(QString newId) {
        m_data->setJellyfinId(newId);
        if (canReload()) reload();
    }
signals:
    void dataChanged(DTO::BaseItemDto *newData);
    void jellyfinIdChanged(const QString &newId);
protected:
    void emitDataChanged() override {
        emit dataChanged(m_data);
    }
};

void registerRemoteTypes(const char *uri);
} // NS Jellyfin

#endif // JELLYFIN_DTO_DTO_H
