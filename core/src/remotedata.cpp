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

#include "JellyfinQt/remotedata.h"
#include "JellyfinQt/apiclient.h"

namespace Jellyfin {

/*const QRegularExpression JsonSerializable::m_listExpression = QRegularExpression("^QList<\\s*([a-zA-Z0-9]*)\\s*\\*?\\s*>$");
const QRegularExpression JsonSerializable::m_hashExpression = QRegularExpression("^QHash<\\s*([a-zA-Z0-9]*)\\s*\\*?\\s*,\\s*([a-zA-Z0-9]*)\\s*\\*?\\s*>$");
JsonSerializable::JsonSerializable(QObject *parent) : QObject(parent) { }
JsonSerializable::~JsonSerializable() {
    if (parent() == nullptr) {
        qDebug() << "Deleting" << metaObject()->className() << ", parent: nullptr, ownership: " << QQmlEngine::objectOwnership(this);
    } else {
        qDebug() << "Deleting" << metaObject()->className() << ", parent: " << parent()->metaObject()->className()
                 << ", ownership: " << QQmlEngine::objectOwnership(this);
    }
}

void JsonSerializable::deserialize(const QJsonObject &jObj) {
    const QMetaObject *obj = this->metaObject();

    // Loop over each property,
    for (int i = 0; i < obj->propertyCount(); i++) {
        QMetaProperty prop = obj->property(i);
        // Skip properties which are not stored (usually derrived of other properties)
        if (!prop.isStored()) continue;
        if (!prop.isWritable()) continue;

        // Hardcoded exception for the property id, since its special inside QML
        if (QString(prop.name()) == "jellyfinId" && jObj.contains("Id")) {
            QJsonValue val = jObj["Id"];
            prop.write(this, jsonToVariant(prop, val, jObj));
        } else if (jObj.contains(toPascalCase(prop.name()))) {
            QJsonValue val = jObj[toPascalCase(prop.name())];
            prop.write(this, jsonToVariant(prop, val, jObj));
        } else if (QString(prop.name()).startsWith("__list__")) {
            // QML doesn't like it if we expose properties of type QList<SubclassOfQobject *>
            // we need to explicitly cast them to QList<QObject *> or QQmlListProperty, which sucks.
            // That's why we have a special case for properties starting with __list__. This contains
            // the actual QList<SubclassOfQobject *>, so that qml can access the object with its real name.
            QString realName = toPascalCase(prop.name() + 8);
            if (!jObj.contains(realName)) {
                continue;
            }
            QJsonValue val = jObj[realName];
            QMetaProperty realProp = obj->property(obj->indexOfProperty(prop.name() + 8));
            if (!realProp.write(this, jsonToVariant(prop, val, jObj))) {
                qDebug() << "Write to " << prop.name() << "failed";
            }
        }
    }
}

QVariant JsonSerializable::jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root) {
    switch(val.type()) {
    case QJsonValue::Null:
    case QJsonValue::Undefined:
        return QVariant();
    case QJsonValue::Bool:
    case QJsonValue::String:
        return val.toVariant();
    case QJsonValue::Double:
        if (prop.type() == QVariant::LongLong) {
            return static_cast<qint64>(val.toDouble(-1));
        } if (prop.type() == QVariant::Int) {
            return val.toInt();
        } else {
            return val.toDouble();
        }
    case QJsonValue::Array:
        {
            QJsonArray arr = val.toArray();
            QVariantList varArr;
            for (auto it = arr.constBegin(); it < arr.constEnd(); it++) {
                QVariant variant = jsonToVariant(prop, *it, root);
                varArr.append(variant);
            }
            return QVariant(varArr);
        }
    case QJsonValue::Object:
        QJsonObject innerObj = val.toObject();
        if (prop.userType() == QMetaType::QJsonObject) {
            QJsonArray tmp = {innerObj };
            JsonHelper::convertToCamelCase(QJsonValueRef(&tmp, 0));
            return QVariant(innerObj);
        } else {
            return deserializeQObject(innerObj, prop);
        }
    }
    return QVariant();
}

QVariant JsonSerializable::deserializeQObject(const QJsonObject &innerObj, const QMetaProperty &prop) {
    int typeNo = prop.userType();
    const QMetaObject *metaType = QMetaType::metaObjectForType(prop.userType());
    if (metaType == nullptr) {
        // Try to determine if the type is a qlist
        QRegularExpressionMatch listMatch = m_listExpression.match(prop.typeName());
        QRegularExpressionMatch hashMatch = m_hashExpression.match(prop.typeName());
        if (listMatch.hasMatch()) {
            // It is a qList! Now extract the inner type
            // There should be an easier way, shouldn't there?
            QString listType = listMatch.captured(1);
            typeNo = findTypeIdForProperty(listType);
            metaType = QMetaType::metaObjectForType(typeNo);
        } else {
            qDebug() << "No metaObject for " << prop.typeName() << ", " << prop.type() << ", " << prop.userType();
            return QVariant();
        }
    }
    QObject *deserializedInnerObj = metaType->newInstance();
    deserializedInnerObj->setParent(this);
    if (JsonSerializable *ser = dynamic_cast<JsonSerializable *>(deserializedInnerObj)) {
        // qDebug() << "Deserializing user type " << deserializedInnerObj->metaObject()->className();
        ser->deserialize(innerObj);
        return QVariant(typeNo, &ser);
    } else {
        deserializedInnerObj->deleteLater();
        qDebug() << "Object is not a serializable one!";
        return QVariant();
    }
}

int JsonSerializable::findTypeIdForProperty(QString type) {
    // UGLY CODE HERE WE COME
    // We assume the type is either in no namespace (Qt Types) or in the Jellyfin::DTO namespace.
    int typeNo = QMetaType::type(type.toUtf8());
    if (typeNo == QMetaType::UnknownType) {
        typeNo = QMetaType::type(type.prepend("Jellyfin::DTO::").append("*").toUtf8());
        if (typeNo == QMetaType::UnknownType) {
            qDebug() << "Unknown type: " << type;
            return typeNo;
        }
    }
    return typeNo;
}

QJsonObject JsonSerializable::serialize(bool capitalize) const {
    QJsonObject result;
    const QMetaObject *obj = this->metaObject();
    for (int i = 0; i < obj->propertyCount(); i++) {
        QMetaProperty prop = obj->property(i);
        if (QString(prop.name()) == "jellyfinId") {
            result["Id"] = variantToJson(prop.read(this));
        } else {
            result[capitalize ? toPascalCase(prop.name()) : prop.name()] = variantToJson(prop.read(this));
        }
    }
    return result;
}

QJsonValue JsonSerializable::variantToJson(const QVariant var) const {
    switch(var.type()) {
    case QVariant::Invalid:
        return QJsonValue();
    case QVariant::UserType:
        if (var.canConvert<JsonSerializable *>()) {
             JsonSerializable * obj = var.value<JsonSerializable *>();
             return obj->serialize();
        } else {
            qWarning() << "Not serializable: " << var.typeName();
            return QJsonValue();
        }
    case QVariant::Bool:
        return var.toBool();
    case QVariant::List:
    {
        QVariantList list = var.toList();
        QJsonArray arr;
        for (auto it = list.begin(); it < list.end(); it++) {
            arr << variantToJson(*it);
        }
        return arr;
    }
    default:
        if (var.canConvert(QVariant::Double)) {
            return var.toDouble();
        } if (var.canConvert(QVariant::String)) {
            return var.toString();
        } else {
            return QJsonValue();
        }
    }
}

QString JsonSerializable::toPascalCase(QString str) {
    str[0] = str[0].toUpper();
    return str;
}

QString JsonSerializable::fromPascalCase(QString str) {
    str[0] = str[0].toLower();
    return str;
}*/


// RemoteData

bool RemoteDataBase::canReload() const {
    return m_apiClient != nullptr && !m_isParsing;
}

void RemoteDataBase::setStatus(Status newStatus) {
    m_status = newStatus;
    emit statusChanged(newStatus);
    if (newStatus == Ready) emit ready();
}

void RemoteDataBase::setError(QNetworkReply::NetworkError error) {
    m_error = error;
    emit errorChanged(error);
}

void RemoteDataBase::setErrorString(const QString &newErrorString) {
    m_errorString = newErrorString;
    emit errorStringChanged(newErrorString);
}

void RemoteDataBase::setApiClient(ApiClient *newApiClient) {
    m_apiClient = newApiClient;
    emit apiClientChanged(newApiClient);
    if (canReload()) reload();
}

void RemoteDataBase::setExtraFields(const QStringList &extraFields) {
    if (extraFields != m_extraFields) {
        emit extraFieldsChanged(extraFields);
        if (canReload()) reload();
    }
}

void RemoteDataBase::reload() {
    if (!canReload() || m_apiClient == nullptr) {
        setStatus(Uninitialised);
        return;
    } else {
        setStatus(Loading);
    }
    QUrlQuery params;
    if (m_extraFields.length() > 0) {
        params.addQueryItem("fields", m_extraFields.join(","));
    }
    QNetworkReply *rep = m_apiClient->get(getDataUrl() + QStringLiteral("?") + params.toString(QUrl::EncodeReserved));
    QObject::connect(rep, &QNetworkReply::finished, this, [this, rep]() {
        rep->deleteLater();

        QJsonParseError error;
        QString data(rep->readAll());
        data = data.normalized(QString::NormalizationForm_D);
        QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8(), &error);
        if (doc.isNull()) {
            this->setError(QNetworkReply::ProtocolFailure);
            this->setErrorString(error.errorString());
            return;
        }
        if (!doc.isObject()) {
            this->setError(QNetworkReply::ProtocolFailure);
            this->setErrorString(tr("Invalid response from the server: root element is not an object."));
            return;
        }
        this->dataFetched(doc.object());
        this->setStatus(Ready);
    });
    QObject::connect(rep, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error),
            this, [this, rep](QNetworkReply::NetworkError error) {
        this->setError(error);
        this->setErrorString(rep->errorString());
        this->setStatus(Error);
        rep->deleteLater();
    });
}


RemoteItem::RemoteItem(QObject *parent)
    : RemoteData<DTO::BaseItemDto>(parent) { }
RemoteItem::RemoteItem(QString itemId, ApiClient *apiClient, QObject *parent)
    : RemoteData<DTO::BaseItemDto>(parent) {
    m_data = new BaseItemDto(this);
    m_data->setJellyfinId(itemId);
    m_apiClient = apiClient;
    connect(m_data, &BaseItemDto::jellyfinIdChanged, this, &RemoteItem::jellyfinIdChanged);
}

void registerRemoteTypes(const char *uri) {
    qmlRegisterUncreatableType<BaseItemDto>(uri, 1, 0, "JellyfinItem", "Please use RemoteItem instead");
    qmlRegisterType<RemoteItem>(uri, 1, 0, "JellyfinItem");
}

} // NS Jellyfin
