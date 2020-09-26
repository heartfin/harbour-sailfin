#include "jellyfinapimodel.h"

namespace Jellyfin {
ApiModel::ApiModel(QString path, QString subfield, bool addUserId, QObject *parent)
    : QAbstractListModel (parent),
      m_path(path),
      m_subfield(subfield),
      m_addUserId(addUserId){
}

void ApiModel::reload() {
    this->setStatus(Loading);
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
    }
    if (!m_parentId.isEmpty()) {
        query.addQueryItem("ParentId", m_parentId);
    }
    if (!m_sortBy.empty()) {
        query.addQueryItem("SortBy", m_sortBy.join(","));
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
    QNetworkReply *rep = m_apiClient->get(m_path, query);
    connect(rep, &QNetworkReply::finished, this, [this, rep]() {
        QJsonDocument doc = QJsonDocument::fromJson(rep->readAll());
        if (m_subfield.trimmed().isEmpty()) {
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
            if (!obj.contains(m_subfield)) {
                qWarning() << "Object doesn't contain required subfield!";
                this->setStatus(Error);
                return;
            }
            if (!obj[m_subfield].isArray()) {
                qWarning() << "Object's subfield is not an array!";
                this->setStatus(Error);
                return;
            }
            this->m_array = obj[m_subfield].toArray();
        }
        generateFields();
        this->setStatus(Ready);
        rep->deleteLater();
    });
}

void ApiModel::generateFields() {
    if (m_array.size() == 0) return;
    this->beginResetModel();
    m_roles.clear();
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

void registerModels(const char *URI) {
    qmlRegisterUncreatableType<ApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    qmlRegisterUncreatableType<SortOrder>(URI, 1, 0, "SortOrder", "Is enum");
    qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
    qmlRegisterType<UserViewModel>(URI, 1, 0, "UserViewModel");
    qmlRegisterType<UserItemModel>(URI, 1, 0, "UserItemModel");
    qmlRegisterType<UserItemLatestModel>(URI, 1, 0, "UserItemLatestModel");
    qmlRegisterType<ShowSeasonsModel>(URI, 1, 0, "ShowSeasonsModel");
    qmlRegisterType<ShowEpisodesModel>(URI, 1, 0, "ShowEpisodesModel");
}
}
