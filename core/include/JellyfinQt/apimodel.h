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
#include "viewmodel/modelstatus.h"

namespace Jellyfin {

/*
 * A brief description of this file:
 *
 * The reason why all of this is this complex is because Qt MOC's lack of support for template classes
 * with Q_OBJECT. To work around this, "base classes", such as BaseModelLoader, are created which contain
 * all functionallity required by Q_OBJECT. This class is extended by the templated class, which in turn
 * is extended once more, so it can be registered for the QML engine.
 *
 * The loading of the data has beens separated from the QAbstractModels into ViewModel::Loaders
 * to allow for loading over the network, loading from the cache and so on, without the QAbstractModel
 * knowing anything about how it's done, except for the parameters it can pass to the loader and the result.
 *
 */

class BaseModelLoader : public QObject, public QQmlParserStatus  {
    Q_INTERFACES(QQmlParserStatus)
    Q_OBJECT
public:
    explicit BaseModelLoader(QObject *parent = nullptr);
    Q_PROPERTY(ApiClient *apiClient READ apiClient WRITE setApiClient NOTIFY apiClientChanged)
    Q_PROPERTY(Jellyfin::ViewModel::ModelStatusClass::Value status READ status NOTIFY statusChanged)
    Q_PROPERTY(int limit READ limit WRITE setLimit NOTIFY limitChanged)
    Q_PROPERTY(bool autoReload READ autoReload WRITE setAutoReload NOTIFY autoReloadChanged)

    ApiClient *apiClient() const { return m_apiClient; }
    void setApiClient(ApiClient *newApiClient);

    int limit() const { return m_limit; }
    void setLimit(int newLimit);
    bool autoReload() const { return m_autoReload; }
    void setAutoReload(bool newAutoReload);

    ViewModel::ModelStatus status() const { return m_status; }

    /**
     * @brief Clears and reloads the model
     */
    Q_INVOKABLE virtual void reload() {};

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

    /**
     * @brief Emitted when the model should clear itself
     */
    void modelShouldClear();
    /**
     * Emitted when new items are loaded.
     */
    void itemsLoaded();
    void reloadWanted();

protected slots:
    virtual void futureReady() = 0;

protected:
    // Is this object being parsed by the QML engine
    bool m_isBeingParsed = false;
    ApiClient *m_apiClient = nullptr;
    bool m_autoReload = true;
    bool m_needsAuthentication = true;

    // Query/record controlling properties
    int m_limit = -1;
    int m_startIndex = 0;
    int m_totalRecordCount = 0;
    const int DEFAULT_LIMIT = 100;
    void emitModelShouldClear() { emit modelShouldClear(); }
    void emitItemsLoaded() { emit itemsLoaded(); }

    ViewModel::ModelStatus m_status = ViewModel::ModelStatus::Uninitialised;
    void setStatus(ViewModel::ModelStatus newStatus) {
        if (this->m_status != newStatus) {
            this->m_status = newStatus;
            emit this->statusChanged();
            if (this->m_status == ViewModel::ModelStatus::Ready) {
                emit ready();
            }
        }
    }
    /**
     * @brief Determines if this model is able to reload.
     *
     * The default implementation checks if the user is authenticated,
     * and the model is not reloading. If overriding this method, please
     * call this method as well in determining if the model should be reloadable.
     *
     * @return True if the model can reload, false otherwise.
     */
    virtual bool canReload() const;
};

/**
 * Base model loader that only has one template parameter,
 * so it can be used within the ApiModel.
 */
template <class T>
class ModelLoader : public BaseModelLoader {
public:
    ModelLoader(QObject *parent = nullptr)
        : BaseModelLoader(parent) {
    }

    void reload() override {
        if (!canReload()) {
            qDebug() << "Cannot yet reload ApiModel: canReload() returned false.";
            return;
        }
        m_startIndex = 0;
        m_totalRecordCount = -1;
        emitModelShouldClear();
        loadMore(0, m_limit, ViewModel::ModelStatus::Loading);
    }

    void loadMore() {
        if (!canReload()) {
            qDebug() << "Cannot yet reload ApiModel: canReload() returned false.";
            return;
        }
        loadMore(m_startIndex, m_limit, ViewModel::ModelStatus::LoadingMore);
    }

    virtual bool canLoadMore() const {
        return m_totalRecordCount == -1 || m_startIndex < m_totalRecordCount;
    }

    /**
     * @brief Holds the result. Moves it result to the caller and therefore can be only called once
     * when the itemsLoaded is emitted.
     * @return pair containing the items loaded and the integer containing the starting offset. A starting
     * offset of -1 means an error has occurred.
     */
    std::pair<QList<T>, int> &&result() { return std::move(m_result); }
protected:
    /**
     * @brief Loads data from the given offset with a maximum count of limit.
     * The itemsLoaded() signal is emitted when new data is ready. Call
     * getLoadedItems to retrieve the loaded items.
     *
     * @param offset The offset to start loading items from
     * @param limit The maximum amount of items to load.
     * @param suggestedStatus The suggested status this model should take on if it is able to load (more).
     *        Either LOADING or LOAD_MORE.
     */
    virtual void loadMore(int offset, int limit, ViewModel::ModelStatus suggestedStatus) = 0;
    void updatePosition(int startIndex, int totalRecordCount) {
        m_startIndex = startIndex;
        m_totalRecordCount = totalRecordCount;
    }
    std::pair<QList<T>, int> m_result;
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

/**
 * @return True if able to set the startIndex, false otherwise.
 */
template <class P>
bool setRequestStartIndex(P &parameters, int startIndex) {
    Q_UNUSED(parameters)
    Q_UNUSED(startIndex)
    Q_UNIMPLEMENTED();
    return false;
}

/**
 * Template for implementing a loader for the given type, response and parameters using Jellyfin::Support:Loaders.
 *
 * @tparam T type of which this loader should load a list of
 * @tparam D type of the DTO which can be converted into T using T(const D&, ApiClient*);
 * @tparam R type of the deserialized loader response
 * @tparam P type of the deserialized loader request parameters
 */
template <class T, class D,  class R, class P>
class LoaderModelLoader : public ModelLoader<T> {
public:
    explicit LoaderModelLoader(Support::Loader<R, P> *loader, QObject *parent = nullptr)
        : ModelLoader<T>(parent), m_loader(QScopedPointer<Support::Loader<R, P>>(loader)) {
        QObject::connect(&m_futureWatcher, &QFutureWatcher<QList<T>>::finished, this, &BaseModelLoader::futureReady);
    }
protected:
    void loadMore(int offset, int limit, ViewModel::ModelStatus suggestedModelStatus) override {
        // This method should only be callable on one thread.
        // If futureWatcher's future is running, this method should not be called again.
        if (m_futureWatcher.isRunning()) return;
        // Set an invalid result.
        this->m_result = { QList<T>(), -1 };

        if (!setRequestStartIndex<P>(this->m_parameters, offset)
                && suggestedModelStatus == ViewModel::ModelStatus::LoadingMore) {
            // This loader's parameters does not setting a starting index,
            // meaning loadMore is not supported.
            return;
        }
        if (limit > 0) {
                setRequestLimit<P>(this->m_parameters, limit);
        }
        this->setStatus(suggestedModelStatus);

        // We never want to set this while the loader is running, hence the Mutex and setting it here
        // instead when Loader::setApiClient is called.
        this->m_loader->setApiClient(this->m_apiClient);
        this->m_loader->setParameters(this->m_parameters);
        this->m_loader->prepareLoad();
        QFuture<std::optional<R>> future = QtConcurrent::run(this->m_loader.data(), &Support::Loader<R, P>::load);
        this->m_futureWatcher.setFuture(future);
    }

    QScopedPointer<Support::Loader<R, P>> m_loader;
    QMutex m_mutex;
    P m_parameters;
    QFutureWatcher<std::optional<R>> m_futureWatcher;

    void futureReady() override {
        R result;
        try {
            std::optional<R> optResult = m_futureWatcher.result();
            if (!optResult.has_value()) {
                this->setStatus(ViewModel::ModelStatus::Error);
                qWarning() << "ModelLoader returned with empty optional";
                return;
            }
            result = optResult.value();
        } catch (Support::LoadException e) {
            qWarning() << "Exception while loading: " << e.what();
            this->setStatus(ViewModel::ModelStatus::Error);
            return;
        }


        QList<D> records = extractRecords<D, R>(result);
        int totalRecordCount = extractTotalRecordCount<R>(result);
        qDebug() << "Total record count: " << totalRecordCount << ", records in request: " << records.size();
        // If totalRecordCount < 0, it is not supported for this endpoint
        if (totalRecordCount < 0) {
            totalRecordCount = records.size();
        }
        QList<T> models;
        models.reserve(records.size());

        // Convert the DTOs into models
        for (int i = 0; i < records.size(); i++) {
            models.append(T(records[i], m_loader->apiClient()));
        }
        this->setStatus(ViewModel::ModelStatus::Ready);
        this->m_result = { models, this->m_startIndex};
        this->m_startIndex += totalRecordCount;
        this->emitItemsLoaded();
    }

};

class BaseApiModel : public QAbstractListModel {
    Q_OBJECT
public:
    BaseApiModel(QObject *parent = nullptr)
        : QAbstractListModel (parent) {}

    Q_PROPERTY(BaseModelLoader *loader READ loader WRITE setLoader NOTIFY loaderChanged)

    virtual BaseModelLoader *loader() const = 0;
    virtual void setLoader(BaseModelLoader *newLoader) {
        connect(newLoader, &BaseModelLoader::reloadWanted, this, &BaseApiModel::reload);
        connect(newLoader, &BaseModelLoader::modelShouldClear, this, &BaseApiModel::clear);
        connect(newLoader, &BaseModelLoader::itemsLoaded, this, &BaseApiModel::loadingFinished);
        emit loaderChanged();
    };
    void disconnectOldLoader(BaseModelLoader *oldLoader) {
        if (oldLoader != nullptr) {
            // Disconnect all signals
            disconnect(oldLoader, nullptr, this, nullptr);
        }
    }
public slots:
    virtual void reload() = 0;
    virtual void clear() = 0;
protected slots:
    virtual void loadingFinished() = 0;
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
    }

    // Standard QAbstractItemModel overrides
    int rowCount(const QModelIndex &index) const override {
        if (!index.isValid()) return m_array.size();
        return 0;
    }

    // QList-like API
    const T& at(int index) { return m_array.at(index); }
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
        this->beginInsertRows(QModelIndex(), index, index + objects.size() - 1);
        m_array.append(objects);
        this->endInsertRows();
    };

    QList<T> mid(int pos, int length = -1) {
        return m_array.mid(pos, length);
    }

    void removeAt(int index) {
        Q_ASSERT(index < size());
        this->beginRemoveRows(QModelIndex(), index, index);
        m_array.removeAt(index);
        this->endRemoveRows();
    }

    void removeUntilEnd(int from) {
        this->beginRemoveRows(QModelIndex(), from , m_array.size());
        while (m_array.size() != from) {
            m_array.removeLast();
        }
        this->endRemoveRows();
    }

    void removeOne(T &object) {
        int idx = m_array.indexOf(object);
        if (idx >= 0) {
            removeAt(idx);
        }
    }

    void clear() override {
        this->beginResetModel();
        m_array.clear();
        this->endResetModel();
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
            m_loader->loadMore();
        }
    }

    BaseModelLoader *loader() const override {
        return m_loader;
    }

    void setLoader(BaseModelLoader *newLoader) {
        ModelLoader<T> *castedLoader = dynamic_cast<ModelLoader<T> *>(newLoader);
        if (castedLoader != nullptr) {
            // Hacky way to emit a signal
            BaseApiModel::setLoader(newLoader);
            BaseApiModel::disconnectOldLoader(m_loader);
            m_loader = castedLoader;
        } else {
            qWarning() << "Somehow set a BaseModelLoader on ApiModel instead of a ModelLoader<T>";
        }
    }

    void reload() override {
        if (m_loader != nullptr) {
            m_loader->reload();
        }
    }

protected:
    // Model-specific properties.
    QList<T> m_array;
    ModelLoader<T> *m_loader = nullptr;

    void loadingFinished() override {
        Q_ASSERT(m_loader != nullptr);
        std::pair<QList<T>, int> result = m_loader->result();
        qDebug() << "Results loaded: index: " << result.second << ", count: " << result.first.size();
        if (result.second == -1) {
            clear();
        } else if (result.second == m_array.size()) {
            append(result.first);
        } else if (result.second < m_array.size()){
            removeUntilEnd(result.second);
            append(result.first);
        } else {
            // result.second > m_array.size()
            qWarning() << "Retrieved data from loader at position bigger than size()";
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
