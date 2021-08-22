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
#ifndef JELLYFIN_DTO_DTO
#define JELLYFIN_DTO_DTO

#include <optional>

#include <QFuture>
#include <QFutureWatcher>
#include <QMutex>
#include <QMutexLocker>
#include <QtConcurrent/QtConcurrent>

#include "../support/loader.h"

namespace Jellyfin {
namespace ViewModel {

/**
 * @brief An "interface" for a remote data source
 *
 * This class is basically a base class for JSON data that can be fetched from over the network.
 * Subclasses should reimplement reload and call setStatus to update the QML part of the code
 * appropiatly.
 */
class LoaderBase : public QObject, public QQmlParserStatus {
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

    explicit LoaderBase(QObject *parent = nullptr) : QObject(parent) {}
    LoaderBase(ApiClient *apiClient, QObject *parent = nullptr)
        : QObject(parent), m_apiClient(apiClient) {}

    Q_PROPERTY(ApiClient *apiClient MEMBER m_apiClient WRITE setApiClient NOTIFY apiClientChanged STORED false)
    Q_PROPERTY(Status status READ status NOTIFY statusChanged STORED false)
    Q_PROPERTY(QString errorString READ errorString NOTIFY errorStringChanged STORED false)
    Q_PROPERTY(bool autoReload MEMBER m_autoReload NOTIFY autoReloadChanged)
    Q_PROPERTY(QObject *data READ data NOTIFY dataChanged STORED false)

    Status status() const { return m_status; }
    QString errorString() const { return m_errorString; }

    virtual QObject *data() const { return nullptr; }

    void setApiClient(ApiClient *newApiClient);
    void setExtraFields(const QStringList &extraFields);
signals:
    void statusChanged(Status newStatus);
    void apiClientChanged(ApiClient *newApiClient);
    void errorStringChanged(QString newErrorString);
    void autoReloadChanged(bool newAutoReload);
    void dataChanged();

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
    virtual void reload() {};
protected:
    /**
     * @brief Subclasses should implement this to determine if they can
     * load data from the server.
     *
     * Usage cases include checking if the
     * required properties, such as the item id are set.
     */
    virtual bool canReload() const;

    void setStatus(Status newStatus);
    void setError(QNetworkReply::NetworkError error);
    void setErrorString(const QString &newErrorString);


    void reloadIfNeeded() {
        if (canReload()) {
            reload();
        }
    }
    void classBegin() override {
        m_isParsing = true;
    }

    void componentComplete() override {
        m_isParsing = false;
        reloadIfNeeded();
    }
    ApiClient *m_apiClient = nullptr;
protected:
    // Returns true if this class is instantiated within QML and is still being parsed.
    bool isQmlParsing() const { return m_isParsing; }
    void emitDataChanged();
private:
    Status m_status = Uninitialised;
    QString m_errorString;
    bool m_autoReload = true;
    bool m_isParsing = false;
};

/**
 * Class representing data from a remote source, meant to be instantiated from QML.
 *
 * Subclasses should do the following:
 *  - initialize m_loader with an appropiate loader
 *  - create properties that map to the parameters.
 *  - override canReload()
 */
template <class T, class R, class P>
class Loader : public LoaderBase {
    using RFutureWatcher = QFutureWatcher<std::optional<R>>;
public:
    Loader(Support::Loader<R, P> *loaderImpl, QObject *parent = nullptr)
        : Loader(nullptr, loaderImpl, parent) {}

    Loader(ApiClient *apiClient, Support::Loader<R, P> *loaderImpl, QObject *parent = nullptr)
        : LoaderBase(apiClient, parent),
          m_loader(loaderImpl) {

        m_dataViewModel = new T(this);
        connect(m_loader.data(), &Support::LoaderBase::ready, this, &Loader<T, R, P>::onLoaderReady);
        connect(m_loader.data(), &Support::LoaderBase::error, this, &Loader<T, R, P>::onLoaderError);
    }

    T *dataViewModel() const { return m_dataViewModel; }
    QObject *data() const override { return m_dataViewModel; }

    void reload() override {
        if (m_loader->isRunning()) {
            m_loader->cancel();
        };
        setStatus(Loading);
        m_loader->setApiClient(m_apiClient);
        m_loader->setParameters(m_parameters);
        m_loader->load();
    }
protected:
    T* m_dataViewModel;
    P m_parameters;
    /**
     * @brief Subclasses should initialize this to a loader that actually loads stuff.
     */
    QScopedPointer<Support::Loader<R, P>> m_loader = nullptr;
private:

    /**
     * @brief Updates the data when finished.
     */
    void onLoaderReady() {
        R newData = m_loader->result();
        if (m_dataViewModel->data()->sameAs(newData)) {
            // Replace the data the model holds
            m_dataViewModel->data()->replaceData(newData);
        } else {
            // Replace the model
            using PointerType = typename decltype(m_dataViewModel->data())::Type;
            m_dataViewModel = new T(this, QSharedPointer<PointerType>::create(newData, m_apiClient));
        }
        setStatus(Ready);
        emitDataChanged();
    }

    void onLoaderError(QString message) {
        setStatus(Error);
        setErrorString(message);
    }
};

void registerRemoteTypes(const char *uri);

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_DTO_DTO_H
