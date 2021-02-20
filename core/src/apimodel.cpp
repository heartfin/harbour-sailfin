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

#include "JellyfinQt/apimodel.h"

#include "JellyfinQt/DTO/item.h"
#include "JellyfinQt/DTO/userdata.h"
#include "JellyfinQt/DTO/user.h"

namespace Jellyfin {

// BaseApiModel

BaseApiModel::BaseApiModel(QString path, bool hasRecordResponse, bool addUserId, QObject *parent)
    : QAbstractListModel(parent),
      m_path(path),
      m_hasRecordResponse(hasRecordResponse),
      m_addUserId(addUserId) {

}

void BaseApiModel::setApiClient(ApiClient *apiClient) {
    m_apiClient = apiClient;
    emit apiClientChanged(m_apiClient);
}

void BaseApiModel::setLimit(int newLimit) {
    m_limit = newLimit;
    emit limitChanged(newLimit);
    if (m_apiClient != nullptr && !m_isBeingParsed) {
        load(LOAD_MORE);
    }
}

void BaseApiModel::reload() {
    this->setStatus(Loading);
    m_startIndex = 0;
    load(RELOAD);
}


void BaseApiModel::load(LoadType type) {
    qDebug() << (type == RELOAD ? "RELOAD" : "LOAD_MORE");
    if (m_apiClient == nullptr) {
        qWarning() << "Please set the apiClient property before (re)loading";
        return;
    }

    QString path(m_path);
    replacePathPlaceholders(path);
    QUrlQuery query;
    addQueryParameters(query);

    QNetworkReply *rep = m_apiClient->get(path, query);
    connect(rep, &QNetworkReply::finished, this, [this, type, rep]() {
        qDebug() << rep->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() << ": " << rep->request().url();
        QJsonDocument doc = QJsonDocument::fromJson(rep->readAll());
        if (doc.isNull()) {
            qWarning() << "JSON parse error";
            this->setStatus(Error);
        }
        if (!m_hasRecordResponse) {
            if (!doc.isArray()) {
                qWarning() << "Object is not an array!";
                this->setStatus(Error);
                return;
            }
            QJsonArray items = doc.array();
            setModelData(items);
        } else {
            if (!doc.isObject()) {
                qWarning() << "Object is not an object!";
                this->setStatus(Error);
                return;
            }
            QJsonObject obj = doc.object();
            if (!obj.contains("Items")) {
                qWarning() << "Object doesn't contain items!";
                this->setStatus(Error);
                return;
            }
            if (m_limit < 0) {
                //                                                              Javascript is beautiful
                if (obj.contains("TotalRecordCount") && obj["TotalRecordCount"].isDouble()) {
                    m_totalRecordCount = obj["TotalRecordCount"].toInt();
                    m_startIndex += DEFAULT_LIMIT;
                } else {
                    qWarning() << "Record-response does not have a total record count";
                    this->setStatus(Error);
                    return;
                }
            }
            if (!obj["Items"].isArray()) {
                qWarning() << "Items is not an array!";
                this->setStatus(Error);
                return;
            }
            QJsonArray items = obj["Items"].toArray();
            switch(type) {
                case RELOAD:
                    setModelData(items);
                    break;
                case LOAD_MORE:
                    appendModelData(items);
                    break;
            }
        }
        this->setStatus(Ready);
        rep->deleteLater();
    });
}

void BaseApiModel::addQueryParameters(QUrlQuery &query) {
    if (m_limit >= 0) {
        query.addQueryItem("Limit", QString::number(m_limit));
    } else {
        query.addQueryItem("Limit", QString::number(DEFAULT_LIMIT));
    }
    if (m_startIndex > 0) {
        query.addQueryItem("StartIndex", QString::number(m_startIndex));
    }
    if (!m_sortBy.empty()) {
        query.addQueryItem("SortBy", m_sortBy.join(","));
    }
    if (m_sortOrder != Unspecified) {
        query.addQueryItem("SortOrder", m_sortOrder == Ascending ? "Ascending" : "Descending");
    }
    if (!m_fields.empty()) {
        query.addQueryItem("Fields", m_fields.join(","));
    }
    if (m_addUserId) {
        query.addQueryItem("userId", m_apiClient->userId());
    }
}

void BaseApiModel::replacePathPlaceholders(QString &path) {
    if (path.contains("{{user}}")) {
        path = path.replace("{{user}}", m_apiClient->userId());
    }
}

void BaseApiModel::classBegin() {
    m_isBeingParsed = true;
}

void BaseApiModel::componentComplete() {
    m_isBeingParsed = false;
}

// ApiModel
template <class T>
ApiModel<T>::ApiModel(QString path, bool hasRecordResponse, bool addUserId, QObject *parent)
    : BaseApiModel(path, hasRecordResponse, addUserId, parent) {
    // If based on QObject, we know our role names before the first request
    generateFields();
}

template <>
ApiModel<QJsonValue>::ApiModel(QString path, bool hasRecordResponse, bool addUserId, QObject *parent)
    : BaseApiModel(path, hasRecordResponse, addUserId, parent) {
    // But we only know our role names after our first request.
}


template <class T>
T *ApiModel<T>::deserializeResult(QJsonValueRef source) {
    T *result = new T(static_cast<BaseApiModel *>(this));
    result->deserialize(source.toObject());
    return result;
}

template <>
QJsonValue *ApiModel<QJsonValue>::deserializeResult(QJsonValueRef source) {
    QJsonValue *result = new QJsonValue(source);
    JsonHelper::convertToCamelCase(*result);
    return result;
}

template <class T>
void ApiModel<T>::generateFields() {
    const QMetaObject *obj = &T::staticMetaObject;
    m_roles[Qt::UserRole + 1] = "qtObject";
    for (int i = 0; i < obj->propertyCount(); i++) {
        QMetaProperty property = obj->property(i);
        m_roles.insert(Qt::UserRole + 2 + i, property.name());
    }
}

template <>
void ApiModel<QJsonValue>::generateFields() {
    // We can only generate field names if there is a first item. Redefining role names later leads to
    // unexpected results, so prevent it as well.
    if (m_array.size() == 0 || m_roles.size() > 0) return;
    int i = Qt::UserRole + 1;
    if (!m_array[0]->isObject()) {
        qWarning() << "Iterator is not an object?";
        return;
    }
    // Walks over the keys in the first record and adds them to the rolenames.
    // This assumes the back-end has the same keys for every record. I could technically
    // go over all records to be really sure, but no-one got time for a O(n) algorithm, so
    // this heuristic hopefully suffices.
    QJsonObject ob = m_array[0]->toObject();
    for (auto jt = ob.begin(); jt != ob.end(); jt++) {
        QString keyName = jt.key();
        keyName[0] = keyName[0].toLower();
        QByteArray keyArr = keyName.toUtf8();
        if (!m_roles.values().contains(keyArr)) {
            m_roles.insert(i++, keyArr);
        }
    }
}

template <class T>
void ApiModel<T>::setModelData(QJsonArray &data) {
    this->beginResetModel();
    for (T* value : m_array) {
        value->deleteLater();
    }
    m_array.clear();
    for(QJsonValueRef value : data) {
        m_array.append(deserializeResult(value));
    }
    this->endResetModel();
}

template <>
void ApiModel<QJsonValue>::setModelData(QJsonArray &data) {
    generateFields();
    this->beginResetModel();
    for (QJsonValue* value : m_array) {
        delete value;
    }
    m_array.clear();
    for(QJsonValueRef value : data) {
        m_array.append(deserializeResult(value));
    }
    this->endResetModel();
}

template <class T>
void ApiModel<T>::appendModelData(QJsonArray &data) {
    this->beginInsertRows(QModelIndex(), m_array.size(), m_array.size() + data.size() - 1);
    // QJsonArray apparently doesn't allow concatenating lists like QList or std::vector
    for (auto it = data.begin(); it != data.end(); it++) {
        JsonHelper::convertToCamelCase(*it);
    }
    for(QJsonValueRef val : data) {
        m_array.append(deserializeResult(val));
    }
    this->endInsertRows();
}

template <class T>
QVariant ApiModel<T>::data(const QModelIndex &index, int role) const {
    // Ignore roles we don't know
    if (role <= Qt::UserRole || role >= Qt::UserRole + m_roles.size()) return QVariant();
    // Ignore invalid indices.
    if (!index.isValid()) return QVariant();


    T* obj = m_array.at(index.row());
    // m_roleNames[role] == "qtObject"
    if (role == Qt::UserRole + 1) {
        return QVariant::fromValue(obj);
    }

    const QString &key = m_roles[role];

    if (role - Qt::UserRole - 2 < obj->metaObject()->propertyCount() ) {
        return obj->property(key.toLocal8Bit());
    }
    return QVariant();
}
template <>
QVariant ApiModel<QJsonValue>::data(const QModelIndex &index, int role) const {
    // Ignore roles we don't know
    if (role <= Qt::UserRole || role >= Qt::UserRole + m_roles.size()) return QVariant();
    // Ignore invalid indices.
    if (!index.isValid()) return QVariant();


    QJsonObject obj = m_array.at(index.row())->toObject();

    const QString &key = m_roles[role];

    if (obj.contains(key)) {
        return obj[key].toVariant();
    }
    return QVariant();
}


template <class T>
bool ApiModel<T>::canFetchMore(const QModelIndex &parent) const {
    if (parent.isValid()) return false;
    switch(m_status) {
        case Uninitialised:
        case Loading:
        case LoadingMore:
            return false;
        default:
            break;
    }

    if (m_limit < 0) {
        return m_startIndex <= m_totalRecordCount;
    } else {
        return false;
    }
}

template <class T>
void ApiModel<T>::fetchMore(const QModelIndex &parent) {
    if (parent.isValid()) return;
    this->setStatus(LoadingMore);
    load(LOAD_MORE);
}

template <class T>
void ApiModel<T>::addQueryParameters(QUrlQuery &query) {
    BaseApiModel::addQueryParameters(query);
}

template <class T>
void ApiModel<T>::replacePathPlaceholders(QString &path) {
    BaseApiModel::replacePathPlaceholders(path);
}

template <class T>
void ApiModel<T>::insert(int index, T* object) {
    Q_ASSERT(index >=0 && index <= size());
    this->beginInsertRows(QModelIndex(), index, index);
    m_array.insert(index, object);
    this->endInsertRows();
}

template <class T>
void ApiModel<T>::removeAt(int index) {
    this->beginRemoveRows(QModelIndex(), index, index);
    m_array.removeAt(index);
    this->endRemoveRows();
}

template <class T>
void ApiModel<T>::removeOne(T* object) {
    int idx = m_array.indexOf(object);
    if (idx >= 0) {
        removeAt(idx);
    }
}

// Itemmodel
ItemModel::ItemModel(QString path, bool hasRecordFields, bool replaceUser, QObject *parent)
    : ApiModel (path, hasRecordFields, replaceUser, parent){
    QObject::connect(this, &BaseApiModel::apiClientChanged, static_cast<BaseApiModel *>(this), [this](ApiClient *newApiClient) {
        QObject::connect(newApiClient, &ApiClient::userDataChanged, this, &ItemModel::onUserDataChanged);
    });
}

void ItemModel::onUserDataChanged(const QString &itemId, DTO::UserData *userData) {
    int i = 0;
    for (Item *val: m_array) {
        if (val->userData() != nullptr && val->jellyfinId() == itemId) {
            QModelIndex cell = this->index(i);
            val->userData()->onUpdated(userData);
            this->dataChanged(cell, cell);
        }
        i++;
    }
}

void ItemModel::addQueryParameters(QUrlQuery &query) {
    ApiModel<Item>::addQueryParameters(query);
    if (!m_parentId.isEmpty()) {
        query.addQueryItem("ParentId", m_parentId);
    }
    if (!m_imageTypes.empty()) {
        query.addQueryItem("ImageTypes", m_imageTypes.join(","));
    }
    if (!m_includeItemTypes.empty()) {
        query.addQueryItem("IncludeItemTypes", m_includeItemTypes.join(","));
    }
    if (!m_seasonId.isEmpty()) {
        query.addQueryItem("seasonId", m_seasonId);
    }
    if (m_recursive) {
        query.addQueryItem("Recursive", "true");
    }
}

void ItemModel::replacePathPlaceholders(QString &path) {
    ApiModel::replacePathPlaceholders(path);
    if (path.contains("{{show}}") && !m_show.isEmpty()) {
        path = m_path.replace("{{show}}", m_show);
    }
}

PublicUserModel::PublicUserModel(QObject *parent)
    : ApiModel ("/users/public", false, false, parent) { }

UserViewModel::UserViewModel(QObject *parent)
        : ItemModel ("/Users/{{user}}/Views", true, false, parent) {}

UserItemModel::UserItemModel(QObject *parent)
        : ItemModel ("/Users/{{user}}/Items", true, false, parent) {}

UserItemResumeModel::UserItemResumeModel(QObject *parent)
        : ItemModel ("/Users/{{user}}/Items/Resume", true, false, parent) {}

UserItemLatestModel::UserItemLatestModel(QObject *parent)
        : ItemModel ("/Users/{{user}}/Items/Latest", false, false, parent) {}

ShowNextUpModel::ShowNextUpModel(QObject *parent)
        : ItemModel("/Shows/NextUp", true, true, parent) {}

ShowSeasonsModel::ShowSeasonsModel(QObject *parent)
        : ItemModel ("/Shows/{{show}}/Seasons", true, true, parent) {}

ShowEpisodesModel::ShowEpisodesModel(QObject *parent)
        : ItemModel ("/Shows/{{show}}/Episodes", true, true, parent) {}

void registerModels(const char *URI) {
    qmlRegisterUncreatableType<BaseApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    qmlRegisterUncreatableType<SortOptions>(URI, 1, 0, "SortOptions", "Is enum");
    qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
    qmlRegisterType<UserViewModel>(URI, 1, 0, "UserViewModel");
    qmlRegisterType<UserItemModel>(URI, 1, 0, "UserItemModel");
    qmlRegisterType<UserItemLatestModel>(URI, 1, 0, "UserItemLatestModel");
    qmlRegisterType<UserItemResumeModel>(URI, 1, 0, "UserItemResumeModel");
    qmlRegisterType<ShowNextUpModel>(URI, 1, 0, "ShowNextUpModel");
    qmlRegisterType<ShowSeasonsModel>(URI, 1, 0, "ShowSeasonsModel");
    qmlRegisterType<ShowEpisodesModel>(URI, 1, 0, "ShowEpisodesModel");
}
}
