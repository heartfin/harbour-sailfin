#include "jellyfinapimodel.h"

namespace Jellyfin {
ApiModel::ApiModel(QString path, QString subfield, QObject *parent)
    : QAbstractListModel (parent),
      m_path(path),
      m_subfield(subfield) {
}

void ApiModel::reload() {
    this->setStatus(Loading);
    if (m_apiClient == nullptr) {
        qWarning() << "Please set the apiClient property before (re)loading";
        return;
    }
    if (m_path.contains(":user")) {
        qDebug() << "Path contains :user, replacing with" << m_apiClient->userId();
        m_path = m_path.replace(":user", m_apiClient->userId());
    }
    QUrlQuery query;
    if (m_limit >= 0) {
        query.addQueryItem("Limit", QString::number(m_limit));
    }
    if (!m_parentId.isEmpty()) {
        query.addQueryItem("ParentId", m_parentId);
    }
    if (m_sortBy.empty()) {
        query.addQueryItem("SortBy", enumListToString(m_sortBy));
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
            qDebug() << m_path << " adding " << keyName << " as " << ( i - 1);
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
}
}
