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
#include <typeinfo>

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

Q_DECLARE_LOGGING_CATEGORY(jellyfinApiModel)

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
protected:
    // Is this object being parsed by the QML engine
    bool m_isBeingParsed = false;
    ApiClient *m_apiClient = nullptr;
    bool m_autoReload = true;
    bool m_needsAuthentication = true;
    bool m_manualLimitSet = false;

    // Query/record controlling properties
    int m_limit = -1;
    int m_startIndex = 0;
    int m_totalRecordCount = 0;
    bool m_explicitLimitSet = false;
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
            return;
        }
        m_startIndex = 0;
        m_totalRecordCount = -1;
        emitModelShouldClear();
        loadMore(ViewModel::ModelStatus::Loading);
    }

    void loadMore() {
        if (!canReload()) {
            return;
        }
        loadMore(ViewModel::ModelStatus::LoadingMore);
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
    std::pair<QList<T*>, int> &&result() { return std::move(m_result); }
protected:
    /**
     * @brief Loads data from the given offset with a maximum count of limit.
     * The itemsLoaded() signal is emitted when new data is ready. Call
     * getLoadedItems to retrieve the loaded items.
     *
     * @param suggestedStatus The suggested status this model should take on if it is able to load (more).
     *        Either LOADING or LOAD_MORE.
     */
    virtual void loadMore(ViewModel::ModelStatus suggestedStatus) = 0;
    std::pair<QList<T*>, int> m_result;
};

/**
 * Template to extract records from the given result.
 */
template <class T, class R>
QList<T> extractRecords(const R &result) {
    Q_UNUSED(result)
    qDebug() << "extractRecords not implemented for type " << typeid(R).name();
    return QList<T>();
}

template <class R>
int extractTotalRecordCount(const R &result) {
    Q_UNUSED(result)
    qDebug() << "extractTotalRecourdCount not implemented for type " << typeid(R).name();
    return -1;
}
template <class P>
void setRequestLimit(P &parameters, int limit) {
    Q_UNUSED(parameters)
    Q_UNUSED(limit)
    qDebug() << "setRequestLimit not implemented for type " << typeid(P).name();
}

/**
 * @return True if able to set the startIndex, false otherwise.
 */
template <class P>
bool setRequestStartIndex(P &parameters, int startIndex) {
    Q_UNUSED(parameters)
    Q_UNUSED(startIndex)
    qDebug() << "setRequestStartIndex not implemented for type " << typeid(P).name();
    return false;
}

#ifndef JELLYFIN_APIMODEL_CPP
extern template bool setRequestStartIndex(Loader::GetUserViewsParams &params, int startIndex);
extern template void setRequestLimit(Loader::GetUserViewsParams &params, int limit);
extern template QList<DTO::BaseItemDto> extractRecords(const DTO::BaseItemDtoQueryResult &result);
extern template int extractTotalRecordCount(const DTO::BaseItemDtoQueryResult &result);
extern template QList<DTO::BaseItemDto> extractRecords(const QList<DTO::BaseItemDto> &result);
extern template int extractTotalRecordCount(const QList<DTO::BaseItemDto> &result);
extern template void setRequestLimit(Loader::GetLatestMediaParams &params, int limit);
extern template bool setRequestStartIndex(Loader::GetLatestMediaParams &params, int offset);
extern template void setRequestLimit(Loader::GetItemsByUserIdParams &params, int limit);
extern template bool setRequestStartIndex(Loader::GetItemsByUserIdParams &params, int offset);
extern template void setRequestLimit(Loader::GetResumeItemsParams &params, int limit);
extern template bool setRequestStartIndex(Loader::GetResumeItemsParams &params, int offset);

extern template QList<DTO::UserDto> extractRecords(const QList<DTO::UserDto> &result);
extern template int extractTotalRecordCount(const QList<DTO::UserDto> &result);
#endif

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
        this->connect(m_loader.data(), &Support::Loader<R, P>::ready, this, &LoaderModelLoader<T, D, R, P>::loaderReady);
        this->connect(m_loader.data(), &Support::Loader<R, P>::error, this, &LoaderModelLoader<T, D, R, P>::loaderError);
    }
protected:
    void loadMore(ViewModel::ModelStatus suggestedModelStatus) override {
        // This method should only be callable on one thread.
        // If futureWatcher's future is running, this method should not be called again.
        if (m_loader->isRunning()) {
            m_loader->cancel();
        }
        // Set an invalid result.
        this->m_result = { QList<T*>(), -1 };

        if (!setRequestStartIndex<P>(this->m_parameters, this->m_startIndex)
                && suggestedModelStatus == ViewModel::ModelStatus::LoadingMore) {
            // This loader's parameters does not setting a starting index,
            // meaning loadMore is not supported.
            return;
        }
        setRequestStartIndex<P>(this->m_parameters, this->m_startIndex);

        if (suggestedModelStatus == ViewModel::ModelStatus::LoadingMore && this->m_explicitLimitSet) {
            // If an explicit limit is set, we should load no more
            return;
        }

        qCDebug(jellyfinApiModel) << "Explicit limit set: " << this->m_explicitLimitSet << ", " << this->m_limit;
        if (this->m_explicitLimitSet) {
            setRequestLimit<P>(this->m_parameters, this->m_limit);
        } else {
            setRequestLimit<P>(this->m_parameters, this->DEFAULT_LIMIT);
        }
        this->setStatus(suggestedModelStatus);

        // We never want to set this while the loader is running, hence the Mutex and setting it here
        // instead when Loader::setApiClient is called.
        this->m_loader->setApiClient(this->m_apiClient);
        this->m_loader->setParameters(this->m_parameters);
        this->m_loader->load();
    }

    QScopedPointer<Support::Loader<R, P>> m_loader;
    P m_parameters;

    void loaderReady() {
        try {
            R result = m_loader->result();
            QList<D> records = extractRecords<D, R>(result);
            int totalRecordCount = extractTotalRecordCount<R>(result);
            qDebug() << "Total record count: " << totalRecordCount << ", records in request: " << records.size();
            // If totalRecordCount < 0, it is not supported for this endpoint
            if (totalRecordCount < 0) {
                totalRecordCount = records.size();
            }
            QList<T*> models;
            models.reserve(records.size());

            // Convert the DTOs into models
            for (int i = 0; i < records.size(); i++) {
                models.append(new T(records[i], m_loader->apiClient()));
            }
            this->setStatus(ViewModel::ModelStatus::Ready);
            this->m_result = { models, this->m_startIndex};
            this->m_startIndex += records.size();
            this->m_totalRecordCount = totalRecordCount;
            this->emitItemsLoaded();

        } catch(QException &e) {
            qWarning() << "Error while loading data: " << e.what();
            this->setStatus(ViewModel::ModelStatus::Error);
        }
    }

    void loaderError(QString error) {
        Q_UNUSED(error)
        this->setStatus(ViewModel::ModelStatus::Error);
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
 * @brief Abstract model for displaying collections.
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
    QSharedPointer<T> at(int index) const { return m_array.at(index); }
    /**
     * @return the amount of objects in this model.
     */
    int size() const {
        return m_array.size();
    }

    void insert(int index, QSharedPointer<T> object) {
        Q_ASSERT(index >= 0 && index <= size());
        this->beginInsertRows(QModelIndex(), index, index);
        m_array.insert(index, object);
        this->endInsertRows();
    }

    void append(QSharedPointer<T> object) { insert(size(), object); }
    //void append(T &object) { insert(size(), object); }
    void append(QList<QSharedPointer<T>> &objects) {
        int index = size();
        this->beginInsertRows(QModelIndex(), index, index + objects.size() - 1);
        m_array.append(objects);
        this->endInsertRows();
    };

    QList<T*> mid(int pos, int length = -1) {
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

    void removeOne(QSharedPointer<T> object) {
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
    QList<QSharedPointer<T>> m_array;
    ModelLoader<T> *m_loader = nullptr;

    void loadingFinished() override {
        Q_ASSERT(m_loader != nullptr);
        std::pair<QList<T*>, int> result = m_loader->result();
        qDebug() << "Results loaded: index: " << result.second << ", count: " << result.first.size();
        if (result.second == -1) {
            clear();
        } else if (result.second == m_array.size()) {
            m_array.reserve(m_array.size() + result.second);
            for (auto it = result.first.begin(); it != result.first.end(); it++) {
                append(QSharedPointer<T>(*it));
            }
        } else if (result.second < m_array.size()){
            removeUntilEnd(result.second);
            m_array.reserve(m_array.size() + result.second);
            for (auto it = result.first.begin(); it != result.first.end(); it++) {
                append(QSharedPointer<T>(*it));
            }
        } else {
            // result.second > m_array.size()
            qWarning() << "Retrieved data from loader at position bigger than size()";
        }
    }
private:
    QMetaObject::Connection m_futureWatcherConnection;
};

}
#endif //JELLYFIN_API_MODEL
