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

#ifndef JELLYFIN_API_MODEL
#define JELLYFIN_API_MODEL

#include <optional>

#include <QAbstractListModel>
#include <QFlags>
#include <QFuture>
#include <QFutureWatcher>
#include <QMetaEnum>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QtConcurrent/QtConcurrent>
#include <QtQml>
#include <QQmlParserStatus>
#include <QVariant>

#include "apiclient.h"
#include "jsonhelper.h"

#include "dto/baseitemdto.h"
#include "dto/userdto.h"
#include "dto/useritemdatadto.h"
#include "dto/baseitemdtoqueryresult.h"
#include "loader/requesttypes.h"
#include "support/loader.h"

namespace Jellyfin {

/**
 * Pageable response, which support offset and record parameters. The result
 * should contain a field with the total item count, returned item count and an array
 * containing the results.
 */
struct PageableResponse;

class ModelStatusClass {
    Q_GADGET
public:
    enum ModelStatus {
        Uninitialised,
        Loading,
        Ready,
        Error,
        LoadingMore
    };
    Q_ENUM(ModelStatus)
private:
    ModelStatusClass() {}
};

using ModelStatus = ModelStatusClass::ModelStatus;

class BaseModelLoader : public QObject, public QQmlParserStatus  {
    Q_INTERFACES(QQmlParserStatus)
    Q_OBJECT
public:
    explicit BaseModelLoader(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient READ apiClient WRITE setApiClient NOTIFY apiClientChanged)
    Q_PROPERTY(ModelStatus status READ status NOTIFY statusChanged)
    Q_PROPERTY(int limit READ limit WRITE setLimit NOTIFY limitChanged)
    Q_PROPERTY(bool autoReload READ autoReload WRITE setAutoReload NOTIFY autoReloadChanged)

    ApiClient *apiClient() const { return m_apiClient; }
    void setApiClient(ApiClient *newApiClient);

    int limit() const { return m_limit; }
    void setLimit(int newLimit);
    bool autoReload() const { return m_autoReload; }
    void setAutoReload(bool newAutoReload);

    ModelStatus status() const { return m_status; }

    // QQmlParserStatus interface
    virtual void classBegin() override;
    virtual void componentComplete() override;

    void autoReloadIfNeeded();
signals:
    void ready();
    void apiClientChanged(ApiClient *newApiClient);
    void statusChanged();
    void limitChanged(int newLimit);
    void autoReloadChanged(bool newAutoReload);

    void reloadWanted();

protected:
    // Is this object being parsed by the QML engine
    bool m_isBeingParsed = false;
    ApiClient *m_apiClient = nullptr;
    bool m_autoReload = true;

    // Query/record controlling properties
    int m_limit = -1;
    int m_startIndex = 0;
    int m_totalRecordCount = 0;
    const int DEFAULT_LIMIT = 100;

    ModelStatus m_status = ModelStatus::Uninitialised;
    void setStatus(ModelStatus newStatus) {
        if (this->m_status != newStatus) {
            this->m_status = newStatus;
            emit this->statusChanged();
            if (this->m_status == ModelStatus::Ready) {
                emit ready();
            }
        }
    }
};

/**
 * Base model loader that only has one template parameter,
 * so it can be used within the ApiModel.
 */
template <class T>
class ModelLoader : public BaseModelLoader {
public:
    ModelLoader(QObject *parent = nullptr)
        : BaseModelLoader(parent) {}

    QList<T> reload() {
        m_startIndex = 0;
        m_totalRecordCount = -1;
        return loadMore();
    }

    QList<T> loadMore() {
        if (m_startIndex == 0) {
            this->setStatus(ModelStatus::Loading);
        } else {
            this->setStatus(ModelStatus::LoadingMore);
        }
        std::pair<QList<T>, int> result;
        try {
            result = loadMore(m_startIndex, m_limit);
        } catch(Support::LoadException &e) {
            qWarning() << "Exception while loading in ModelLoader: " << e.what();
            return QList<T>();
        }
        m_startIndex += result.first.size();
        m_totalRecordCount = result.second;
        return result.first;
    }

    virtual bool canLoadMore() const {
        return m_totalRecordCount == -1 || m_startIndex < m_totalRecordCount;
    }
protected:
    virtual std::pair<QList<T>, int> loadMore(int offset, int limit) = 0;
};

/**
 * Template to extract records from the given result.
 */
template <class T, class R>
QList<T> extractRecords(const R &result) {
    Q_UNUSED(result)
    Q_UNIMPLEMENTED();
    return QList<T>();
}

template <class R>
int extractTotalRecordCount(const R &result) {
    Q_UNUSED(result)
    Q_UNIMPLEMENTED();
    return -1;
}
template <class R>
void setRequestLimit(R &parameters, int limit) {
    Q_UNUSED(parameters)
    Q_UNUSED(limit)
    Q_UNIMPLEMENTED();
}

template <class P>
void setRequestStartIndex(P &parameters, int startIndex) {
    Q_UNUSED(parameters)
    Q_UNUSED(startIndex)
    Q_UNIMPLEMENTED();
}

/**
 * Template for implementing a loader for the given type, response and parameters
 * @tparam T type of which this loader should load a list of
 * @tparam D type of the DTO which can be converted into T using T(const D&, ApiClient*);
 * @tparam R type of the deserialized loader response
 * @tparam P type of the deserialized loader request parameters
 */
template <class T, class D,  class R, class P>
class LoaderModelLoader : public ModelLoader<T> {
public:
    explicit LoaderModelLoader(Support::Loader<R, P> loader, QObject *parent = nullptr)
        : ModelLoader<T>(parent), m_loader(loader) { }
protected:
    std::pair<QList<T>, int> loadMore(int offset, int limit) override {
        QMutexLocker(&this->m_mutex);
        // We never want to set this while the loader is running, hence the Mutex and setting it here
        // instead when Loader::setApiClient is called.
        this->m_loader.setApiClient(this->m_apiClient);
        try {
            setRequestStartIndex<P>(this->m_parameters, offset);
            setRequestLimit(this->m_parameters, limit);
            R result;
            try {
                std::optional<R> optResult = m_loader.load(this->m_parameters);
                if (!optResult.has_value()) {
                    this->setStatus(ModelStatus::Error);
                    return {QList<T>(), -1};
                }
                result = optResult.value();
            } catch (Support::LoadException e) {
                this->setStatus(ModelStatus::Error);
                return {QList<T>(), -1};
            }

            QList<D> records = extractRecords<D, R>(result);
            int totalRecordCount = extractTotalRecordCount<R>(result);
            // If totalRecordCount < 0, it is not supported for this endpoint
            if (totalRecordCount < 0) {
                totalRecordCount = records.size();
            }
            QList<T> models;
            models.reserve(records.size());

            // Convert the DTOs into models
            for (int i = 0; i < records.size(); i++) {
                models[i] = T(records[i], m_loader.apiClient());
            }
            this->setStatus(ModelStatus::Ready);
            return { models, totalRecordCount};
        }  catch (Support::LoadException e) {
            //this->setErrorString(QString(e.what()));
            this->setStatus(ModelStatus::Error);
            return {QList<T>(), -1};
        }
    }
    Support::Loader<R, P> m_loader;
    QMutex m_mutex;
    P m_parameters;
};

class BaseApiModel : public QAbstractListModel {
    Q_OBJECT
public:
    BaseApiModel(QObject *parent = nullptr)
        : QAbstractListModel (parent) {}

    Q_PROPERTY(BaseModelLoader *loader READ loader WRITE setLoader NOTIFY loaderChanged)

    virtual BaseModelLoader *loader() const = 0;
    virtual void setLoader(BaseModelLoader *newLoader) {
        Q_UNUSED(newLoader);
        connect(newLoader, &BaseModelLoader::reloadWanted, this, &BaseApiModel::reload);
        emit loaderChanged();
    };
public slots:
    virtual void reload();
signals:
    void loaderChanged();
};

/**
 * @brief Abstract model for displaying a REST JSON collection. Role names will be based on the fields encountered in the
 * first record.
 *
 * To create a new model, extend this class and create an QObject-parent constructor.
 * Call the right super constructor with the right values, depending which path should be queried and
 * how the result should be interpreted.
 *
 * Register the model in QML and create an instance. Don't forget to set the apiClient attribute or else
 * the model you've created will be useless!
 *
 * Rolenames are based on the fields in the first object within the array of results, with the first letter
 * lowercased, to accomodate for QML style guidelines. (This ain't C# here).
 *
 * If a call to /cats/new results in
 * @code{.json}
 * [
 *   {"Name": "meow", "Id": 432},
 *   {"Name": "miew", "Id": 323}
 * ]
 * @endcode
 * The model will have roleNames for "name" and "id".
 *
 * @tparam T The class of the result.
 * @tparam R The class returned by the loader.
 * @tparam P The class with the request parameters for the loader.
 *
 */
template <class T>
class ApiModel : public BaseApiModel {
public:
    /**
     * @brief Creates a new basemodel
     * @param path The path (relative to the baseUrl of JellyfinApiClient) to make the call to.
     * @param subfield Leave empty if the root of the result is the array with results. Otherwise, set to the key name in the
     * root object which contains the data.
     * @param parent Parent (Standard QObject stuff)
     *
     * If the response looks something like this:
     * @code{.json}
     * [{...}, {...}, {...}]
     * @endcode
     *
     * or
     * @code{.json}
     * {...}
     * @endcode
     * responseHasRecords should be false
     *
     * If the response looks something like this:
     * @code{.json}
     * {
     *   "Offset": 0,
     *   "Count": 20,
     *   "Items": [{...}, {...}, {...}, ..., {...}]
     * }
     * @endcode
     * responseHasRecords should be true
     */
    explicit ApiModel(QObject *parent = nullptr)
        : BaseApiModel(parent) {
        m_futureWatcherConnection = connect(&m_futureWatcher, &QFutureWatcher<QList<T>>::finished,
                                            [&](){ futureFinished(); });
    }

    // Standard QAbstractItemModel overrides
    int rowCount(const QModelIndex &index) const override {
        if (!index.isValid()) return m_array.size();
        return 0;
    }

    // QList-like API
    T& at(int index) { return m_array.at(index); }
    /**
     * @return the amount of objects in this model.
     */
    int size() {
        return m_array.size();
    }

    void insert(int index, T &object) {
        Q_ASSERT(index >= 0 && index <= size());
        this->beginInsertRows(QModelIndex(), index, index);
        m_array.insert(index, object);
        this->endInsertRows();
    }

    void append(T &object) { insert(size(), object); }
    void append(QList<T> &objects) {
        int index = size();
        this->beginInsertRows(QModelIndex(), index, index + objects.size());
        m_array.append(objects);
        this->endInsertRows();
    };

    void removeAt(int index) {
        this->beginRemoveRows(QModelIndex(), index, index);
        m_array.removeAt(index);
        this->endRemoveRows();
    }

    void removeOne(T &object) {
        int idx = m_array.indexOf(object);
        if (idx >= 0) {
            removeAt(idx);
        }
    }

    // From AbstractListModel, gets implemented in ApiModel<T>
    //virtual QHash<int, QByteArray> roleNames() const override = 0;
    /*virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override = 0;*/
    virtual bool canFetchMore(const QModelIndex &parent) const override {
        if (parent.isValid()) return false;
        if (m_loader == nullptr) return false;
        return m_loader->canLoadMore();
    }
    virtual void fetchMore(const QModelIndex &parent) override {
        if (parent.isValid()) return;
        if (m_loader != nullptr) {
            QFuture<QList<T>> result = QtConcurrent::run(m_loader, &ModelLoader<T>::loadMore);
            m_futureWatcher.setFuture(result);
        }
    }

    BaseModelLoader *loader() const override {
        return m_loader;
    }

    void setLoader(BaseModelLoader *newLoader) {
        ModelLoader<T> *castedLoader = dynamic_cast<ModelLoader<T> *>(newLoader);
        if (castedLoader != nullptr) {
            m_loader = castedLoader;
            // Hacky way to emit a signal
            BaseApiModel::setLoader(newLoader);
        } else {
            qWarning() << "Somehow set a BaseModelLoader on ApiModel instead of a ModelLoader<T>";
        }
    }

    void reload() override {
        if (m_loader != nullptr) {
            QFuture<QList<T>> result = QtConcurrent::run(m_loader, &ModelLoader<T>::reload);
            m_futureWatcher.setFuture(result);
        }
    }

protected:
    // Model-specific properties.
    QList<T> m_array;
    ModelLoader<T> *m_loader;
    QFutureWatcher<QList<T>> m_futureWatcher;

    void futureFinished() {
        try {
            QList<T> result = m_futureWatcher.result();
            append(result);
        } catch (QUnhandledException &e) {
            qWarning() << "Unhandled exception while waiting for a future: " << e.what();
        }
    }
private:
    QMetaObject::Connection m_futureWatcherConnection;
};


/**
 * @brief List of the public users on the server.
 */
/*class PublicUserModel : public ApiModel<QJsonValue> {
public:
    explicit PublicUserModel (QObject *parent = nullptr);
};*/



//template<>
//void ApiModel<Item>::apiClientChanged();




void registerModels(const char *URI);

}
#endif //JELLYFIN_API_MODEL
