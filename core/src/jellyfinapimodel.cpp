/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

#include "JellyfinQt/jellyfinapimodel.h"

namespace Jellyfin {
ApiModel::ApiModel(QString path, bool hasRecordResponse, bool addUserId, QObject *parent)
    : QAbstractListModel (parent),
      m_path(path),
      m_hasRecordResponse(hasRecordResponse),
      m_addUserId(addUserId){
}

void ApiModel::reload() {
    this->setStatus(Loading);
    m_startIndex = 0;

    load(m_array.isEmpty() ? INITIAL_LOAD : RELOAD);
}

void ApiModel::load(LoadType type) {
    qDebug() << (type == RELOAD ? "RELOAD" : type == INITIAL_LOAD ? "INITIAL_LOAD" : "LOAD_MORE");
    if (m_apiClient == nullptr) {
        qWarning() << "Please set the apiClient property before (re)loading";
        return;
    }
    if (m_path.contains("{{user}}")) {
        m_path = m_path.replace("{{user}}", m_apiClient->userId());
    }
    if (m_path.contains("{{show}}") && !m_show.isEmpty()) {
        m_path = m_path.replace("{{show}}", m_show);
    }
    QUrlQuery query;
    if (m_limit >= 0) {
        query.addQueryItem("Limit", QString::number(m_limit));
    } else {
        query.addQueryItem("Limit", QString::number(DEFAULT_LIMIT));
    }
    if (m_startIndex > 0) {
        query.addQueryItem("StartIndex", QString::number(m_startIndex));
    }
    if (!m_parentId.isEmpty()) {
        query.addQueryItem("ParentId", m_parentId);
    }
    if (!m_sortBy.empty()) {
        query.addQueryItem("SortBy", m_sortBy.join(","));
    }
    if (m_sortOrder != Unspecified) {
        query.addQueryItem("SortOrder", m_sortOrder == Ascending ? "Ascending" : "Descending");
    }
    if (!m_imageTypes.empty()) {
        query.addQueryItem("ImageTypes", m_imageTypes.join(","));
    }
    if (!m_includeItemTypes.empty()) {
        query.addQueryItem("IncludeItemTypes", m_includeItemTypes.join(","));
    }
    if (!m_fields.empty()) {
        query.addQueryItem("Fields", m_fields.join(","));
    }
    if (!m_seasonId.isEmpty()) {
        query.addQueryItem("seasonId", m_seasonId);
    }
    if (m_addUserId) {
        query.addQueryItem("userId", m_apiClient->userId());
    }
    if (m_recursive) {
        query.addQueryItem("Recursive", "true");
    }
    if (!m_searchTerm.isEmpty()) {
        query.addQueryItem("searchTerm", m_searchTerm);
    }
    addQueryParameters(query);
    QNetworkReply *rep = m_apiClient->get(m_path, query);
    connect(rep, &QNetworkReply::finished, this, [this, type, rep]() {
        QJsonDocument doc = QJsonDocument::fromJson(rep->readAll());
        QJsonArray items;
        if (!m_hasRecordResponse) {
            if (!doc.isArray()) {
                qWarning() << "Object is not an array!";
                this->setStatus(Error);
                return;
            }
            items = doc.array();
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
            items = obj["Items"].toArray();
            switch(type) {
                case INITIAL_LOAD:
                case RELOAD:
                    break;
                case LOAD_MORE:
                    this->beginInsertRows(QModelIndex(), m_array.size(), m_array.size() + items.size() - 1);
                    // QJsonArray apparently doesn't allow concatenating lists like QList or std::vector
                    for (auto it = items.begin(); it != items.end(); it++) {
                        JsonHelper::convertToCamelCase(*it);
                    }
                    foreach (const QJsonValue &val, items) {
                        m_array.append(val);
                    }
                    this->endInsertRows();
                    break;
            }
        }

        if (type == INITIAL_LOAD) {
            generateFields(items);
        }

        if (type == INITIAL_LOAD || type == RELOAD) {
            for (auto it = items.begin(); it != items.end(); it++){
                JsonHelper::convertToCamelCase(*it);
            }
            setArray(items);
        }

        this->setStatus(Ready);
        rep->deleteLater();
    });
}

void ApiModel::generateFields(const QJsonArray &newData) {
    if (newData.size() == 0) return;
    int i = Qt::UserRole + 1;
    if (!newData[0].isObject()) {
        qWarning() << "Iterator is not an object?";
        return;
    }
    // Walks over the keys in the first record and adds them to the rolenames.
    // This assumes the back-end has the same keys for every record. I could technically
    // go over all records to be really sure, but no-one got time for a O(n) algorithm, so
    // this heuristic hopefully suffices.
    QJsonObject ob = newData[0].toObject();
    for (auto jt = ob.begin(); jt != ob.end(); jt++) {
        QString keyName = jt.key();
        keyName[0] = keyName[0].toLower();
        QByteArray keyArr = keyName.toUtf8();
        if (!m_roles.values().contains(keyArr)) {
            m_roles.insert(i++, keyArr);
        }
    }

}

void ApiModel::setArray(const QJsonArray &newData) {
    this->beginResetModel();
    m_array = newData;
    this->endResetModel();
}

QVariant ApiModel::data(const QModelIndex &index, int role) const {
    // Ignore roles we don't know
    if (role <= Qt::UserRole || role >= Qt::UserRole + m_roles.size()) return QVariant();
    // Ignore invalid indices.
    if (!index.isValid()) return QVariant();


    QJsonObject obj = m_array.at(index.row()).toObject();

    const QString &key = m_roles[role];

    if (obj.contains(key)) {
        return obj[key].toVariant();
    }
    return QVariant();
}

bool ApiModel::canFetchMore(const QModelIndex &parent) const {
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

void ApiModel::fetchMore(const QModelIndex &parent) {
    if (parent.isValid()) return;
    this->setStatus(LoadingMore);
    load(LOAD_MORE);
}

void ApiModel::addQueryParameters(QUrlQuery &query) { Q_UNUSED(query)}




// Itemmodel

ItemModel::ItemModel(QString path, bool hasRecordFields, bool replaceUser, QObject *parent)
    : ApiModel (path, hasRecordFields, replaceUser, parent){
    connect(this, &ApiModel::apiClientChanged, this, [this](ApiClient *newApiClient) {
        connect(newApiClient, &ApiClient::userDataChanged, this, &ItemModel::onUserDataChanged);
    });
}

void ItemModel::onUserDataChanged(const QString &itemId, QSharedPointer<UserData> userData) {
    int i = 0;
    for (QJsonValueRef val: m_array) {
        QJsonObject item = val.toObject();
        if (item.contains("id") && item["id"].toString() == itemId) {
            if (item.contains("userData")) {
                QModelIndex cell = this->index(i);
                item["userData"] = userData->serialize(false);
                val = item;
                this->dataChanged(cell, cell);
            }
        }
        i++;
    }
}

SearchModel::SearchModel(QObject *parent)
    : ItemModel("/Users/{{user}}/Items", true, false, parent) {
    m_diffTracker.fill("");
    m_searchTimeoutTimer.setInterval(m_searchTimeout);
    connect(this, &SearchModel::searchTimeoutChanged, &m_searchTimeoutTimer, &QTimer::setInterval);
    m_searchTimeoutTimer.setSingleShot(true);
    connect(&m_searchTimeoutTimer, &QTimer::timeout, this, &ApiModel::reload);
}

void SearchModel::setArray(const QJsonArray &newData) {
    // Calculate the movement of the search results in the first DIFF_SIZE results
    qDebug() << "Calculating diff";
    int maxLoop = std::min(static_cast<int>(DIFF_SIZE), newData.size());

    // Loop over the first DIFF_SIZE entries of newData to check where they came from.
    for (int i = 0; i < maxLoop; i++) {

        // Loop over all the entries of our difference tracker
        int j;
        for (j = 0; j < static_cast<int>(m_diffTracker.size()); j++) {
            // Stop when we're hitting empty entries
            if (m_diffTracker[static_cast<size_t>(j)].isEmpty()) {
                j = DIFF_SIZE;
                break;
            }

            if (newData[i].toObject()["id"] == m_diffTracker[static_cast<size_t>(j)]) {
                // The old entry is on the same place as the previous entry
                if (i == j) break;
                // Entry[j] has moved to position i
                this->beginMoveRows(QModelIndex(), j, j, QModelIndex(), i);
                m_array.insert(i, newData[i]);
                // If the old position j is greater than the new position i, we need to remove
                // j + 1, since the index has shifted due the insertion we just made.
                m_array.removeAt(j > i ? j + 1 : j);
                qDebug() << j << " -> " << i;
                this->endMoveRows();
                break;
            }

        }

        if (j == static_cast<int>(m_diffTracker.size())) {
            // New item id could not be found in the old item id list.
            // Remove the old items and add the new item
            if (i < m_array.size()) {
                this->beginRemoveRows(QModelIndex(), i, i);
                m_array.removeAt(i);
                this->endRemoveRows();
                qDebug() << i << " replaced";
            } else {
                qDebug() << i << " inserted";
            }
            this->beginInsertRows(QModelIndex(), i, i);
            m_array.insert(i, newData[i]);
            this->endInsertRows();
        }
    }

    // Remove items from the point where we just left until we reach the previous size or the
    // amount of items we keep the difference on. Should only be executed when the amount
    // of new results is smaller than the old amount.
    for (int i = maxLoop; i < static_cast<int>(DIFF_SIZE) && i < m_array.size(); i++) {
        this->beginRemoveRows(QModelIndex(), i, i);
        m_array.removeAt(i);
        this->endRemoveRows();
    }

    // Store the new positions of the items
    for (int i = 0; i < maxLoop; i++) {
        if (!newData[i].isObject() || !newData[i].toObject().contains("id")) continue;
        m_diffTracker[static_cast<size_t>(i)] = newData[i].toObject()["id"].toString();
        qDebug() << i << " changed";
    }
    for (size_t i = static_cast<size_t>(maxLoop); i < DIFF_SIZE; i++) {
        m_diffTracker[i].clear();
        qDebug() << i << " removed";
    }

    // If the amount of data is smaller than the amount of data of which we track their differences in position,
    // we're done hear.
    // if (newData.size() < static_cast<int>(DIFF_SIZE)) return;

    int common = std::max(static_cast<int>(DIFF_SIZE), std::min(newData.size(), m_array.size()));
    for (int i = static_cast<int>(DIFF_SIZE); i < common; i++) {
        m_array.replace(i, newData[i]);
        qDebug() << i << " replaced (tail)";
    }

    emit dataChanged(index(static_cast<int>(DIFF_SIZE)), index(common - 1));

    // Handle extra or fewer items in the area that we do not diff
    if (newData.size() > m_array.size()) {
        this->beginInsertRows(QModelIndex(), common, newData.size() - 1);
        for (int i = common; i < newData.size(); i++) {
            m_array.append(newData[i]);
            qDebug() << i << " appended (tail)";
        }
        this->endInsertRows();
    } else if (newData.size() < m_array.size()) {
        this->beginRemoveRows(QModelIndex(), common, m_array.size() - 1);
        for (int i = common; i < m_array.size(); i++) {
            qDebug() << i << " removed (tail)";
            m_array.removeAt(i);
        }
        this->endRemoveRows();
    }
}

void SearchModel::setSearchTerm(QString searchTerm) {
    if (m_searchTimeoutTimer.isActive()) {
        m_searchTimeoutTimer.stop();
    }
    m_searchTimeoutTimer.start();
    m_searchTerm = searchTerm;
    emit searchTermChanged(searchTerm);
}

PublicUserModel::PublicUserModel(QObject *parent)
    : ApiModel ("/users/public", false, false, parent) { }

UserViewModel::UserViewModel(QObject *parent)
        : ApiModel ("/Users/{{user}}/Views", true, false, parent) {}

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
    qmlRegisterUncreatableType<ApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    qmlRegisterUncreatableType<SortOptions>(URI, 1, 0, "SortOptions", "Is enum");
    qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
    qmlRegisterType<UserViewModel>(URI, 1, 0, "UserViewModel");
    qmlRegisterType<UserItemModel>(URI, 1, 0, "UserItemModel");
    qmlRegisterType<UserItemLatestModel>(URI, 1, 0, "UserItemLatestModel");
    qmlRegisterType<UserItemResumeModel>(URI, 1, 0, "UserItemResumeModel");
    qmlRegisterType<ShowNextUpModel>(URI, 1, 0, "ShowNextUpModel");
    qmlRegisterType<ShowSeasonsModel>(URI, 1, 0, "ShowSeasonsModel");
    qmlRegisterType<ShowEpisodesModel>(URI, 1, 0, "ShowEpisodesModel");
    qmlRegisterType<SearchModel>(URI, 1, 0, "SearchModel");
}
}
