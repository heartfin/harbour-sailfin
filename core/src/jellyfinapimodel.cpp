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

#include "jellyfinapimodel.h"

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
    load(RELOAD);
}

void ApiModel::load(LoadType type) {
    qDebug() << (type == RELOAD ? "RELOAD" : "LOAD_MORE");
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
    addQueryParameters(query);
    QNetworkReply *rep = m_apiClient->get(m_path, query);
    connect(rep, &QNetworkReply::finished, this, [this, type, rep]() {
        QJsonDocument doc = QJsonDocument::fromJson(rep->readAll());
        if (!m_hasRecordResponse) {
            if (!doc.isArray()) {
                qWarning() << "Object is not an array!";
                this->setStatus(Error);
                return;
            }
            this->m_array = doc.array();
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
                    this->m_array = items;
                    break;
                case LOAD_MORE:
                    this->beginInsertRows(QModelIndex(), m_array.size(), m_array.size() + items.size() - 1);
                    // QJsonArray apparently doesn't allow concatenating lists like QList or std::vector
                    foreach (const QJsonValue &val, items) {
                        m_array.append(val);
                    }
                    this->endInsertRows();
                    break;
            }
        }
        if (type == RELOAD) {
            generateFields();
        }
        this->setStatus(Ready);
        rep->deleteLater();
    });
}

void ApiModel::generateFields() {
    if (m_array.size() == 0) return;
    this->beginResetModel();
    int i = Qt::UserRole + 1;
    if (!m_array[0].isObject()) {
        qWarning() << "Iterator is not an object?";
        return;
    }
    // Walks over the keys in the first record and adds them to the rolenames.
    // This assumes the back-end has the same keys for every record. I could technically
    // go over all records to be really sure, but no-one got time for a O(n²) algorithm, so
    // this heuristic hopefully suffices.
    QJsonObject ob = m_array[0].toObject();
    for (auto jt = ob.begin(); jt != ob.end(); jt++) {
        QString keyName = jt.key();
        keyName[0] = keyName[0].toLower();
        QByteArray keyArr = keyName.toUtf8();
        if (!m_roles.values().contains(keyArr)) {
            m_roles.insert(i++, keyArr);
            //qDebug() << m_path << " adding " << keyName << " as " << ( i - 1);
        }
    }
    this->endResetModel();
}

QVariant ApiModel::data(const QModelIndex &index, int role) const {
    // Ignore roles we don't know
    if (role <= Qt::UserRole || role >= Qt::UserRole + m_roles.size()) return QVariant();
    // Ignore invalid indices.
    if (!index.isValid()) return QVariant();


    QJsonObject obj = m_array.at(index.row()).toObject();

    QString key = m_roles[role];
    key[0] = key[0].toUpper();
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


void registerModels(const char *URI) {
    qmlRegisterUncreatableType<ApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    qmlRegisterUncreatableType<SortOptions>(URI, 1, 0, "SortOptions", "Is enum");
    qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
    qmlRegisterType<UserViewModel>(URI, 1, 0, "UserViewModel");
    qmlRegisterType<UserItemModel>(URI, 1, 0, "UserItemModel");
    qmlRegisterType<UserItemLatestModel>(URI, 1, 0, "UserItemLatestModel");
    qmlRegisterType<UserItemResumeModel>(URI, 1, 0, "UserItemResumeModel");
    qmlRegisterType<ShowSeasonsModel>(URI, 1, 0, "ShowSeasonsModel");
    qmlRegisterType<ShowEpisodesModel>(URI, 1, 0, "ShowEpisodesModel");
}
}
