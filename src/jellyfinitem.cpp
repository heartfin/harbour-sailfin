#include "jellyfinitem.h"

namespace Jellyfin {
JsonSerializable::JsonSerializable(QObject *parent) : QObject(parent) {}

void JsonSerializable::deserialize(const QJsonObject &jObj, QObject *to) {
    if (to == nullptr) to = this;
    const QMetaObject *obj = to->metaObject();
    qDebug() << "Inside class: " << QString(obj->className());

    for (auto it = jObj.constBegin(); it != jObj.constEnd(); it++) {

        // Hardcoded exception for the property id, since its special inside QML
        if (it.key() == "Id") {
            to->setProperty("jellyfinId", jsonToVariant(
                                  obj->property(obj->indexOfProperty("jellyfinId")), it.value(), jObj));
        } else {
            const char *propName = fromPascalCase(it.key()).normalized(QString::NormalizationForm_D).toLatin1();
            int propIndex = obj->indexOfProperty(propName);
            if (propIndex >= 0) {
                qDebug() << "Setting property " << QString(propName) << "(" << it.key() << ")";
                // We have this property! Set it.
                QMetaProperty prop = obj->property(propIndex);
                prop.write(to, jsonToVariant(prop, it.value(), jObj));
            } else {
                qDebug() << "Setting custom property " << QString(propName) << "(" << it.key() << ")";
                QJsonValue val = it.value();
                if (val.isObject()) {
                    // Create a new QObject with its properties.
                    QObject *newObj = new QObject(to);
                    deserialize(val.toObject(), newObj);
                    to->setProperty(propName, QVariant::fromValue(newObj));
                } else if (val.isArray()) {
                    to->setProperty(propName, val.toArray().toVariantList());
                } else {
                    to->setProperty(propName, val.toVariant());
                }
            }
        }
    }
    qDebug() << "Leaving class: " << QString(obj->className());

    // Loop over each property,
    /*for (int i = 0; i < obj->propertyCount(); i++) {
        QMetaProperty prop = obj->property(i);
        // Skip properties which are not stored (usually derrived of other properties)
        if (!prop.isStored()) continue;
        if (!prop.isWritable()) continue;

        qDebug() << toPascalCase(prop.name());
        // Hardcoded exception for the property id, since its special inside QML
        if (QString(prop.name()) == "jellyfinId" && jObj.contains("Id")) {
            QJsonValue val = jObj["Id"];
            prop.write(this, jsonToVariant(prop, val, jObj));
        } else if (jObj.contains(toPascalCase(prop.name()))) {
            QJsonValue val = jObj[toPascalCase(prop.name())];
            prop.write(this, jsonToVariant(prop, val, jObj));
        } else {
            qDebug() << "Ignored " << prop.name() << " while deserializing";
        }
    }*/
}

QVariant JsonSerializable::jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root) const {
    switch(val.type()) {
    case QJsonValue::Null:
    case QJsonValue::Undefined:
        return QVariant();
    case QJsonValue::Bool:
    case QJsonValue::Double:
    case QJsonValue::String:
        return val.toVariant();
    case QJsonValue::Array:
        if (prop.type() == QVariant::List) {
            QJsonArray arr = val.toArray();
            QVariantList varArr;
            for (auto it = arr.begin(); it < arr.end(); it++) {
                varArr << jsonToVariant(prop, *it, root);
            }
            return QVariant(varArr);
        } else {
            qDebug() << prop.name() << " is not a " << prop.typeName();
            return QVariant();
        }
    case QJsonValue::Object:
        QJsonObject innerObj = val.toObject();
        QObject *deserializedInnerObj = QMetaType::metaObjectForType(prop.userType())->newInstance();
        if (JsonSerializable *ser = dynamic_cast<JsonSerializable *>(deserializedInnerObj)) {
            qDebug() << "Deserializing user type " << deserializedInnerObj->metaObject()->className();
            ser->deserialize(innerObj);
            return QVariant::fromValue(ser);
        } else {
            qDebug() << "Object is not a serializable one!";
            return QVariant();
        }
    }
    return QVariant();
}

QJsonObject JsonSerializable::serialize() const {
    QJsonObject result;
    const QMetaObject *obj = this->metaObject();
    for (int i = 0; i < obj->propertyCount(); i++) {
        QMetaProperty prop = obj->property(i);
        if (QString(prop.name()) == "jellyfinId") {
            result["Id"] = variantToJson(prop.read(this));
        } else {
            result[toPascalCase(prop.name())] = variantToJson(prop.read(this));
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
    QString copy(str);
    copy[0] = copy[0].toUpper();
    return copy;
}

QString JsonSerializable::fromPascalCase(QString str) {
    QString copy(str);
    copy[0] = copy[0].toLower();
    return copy;
}


// RemoteData
RemoteData::RemoteData(QObject *parent) : JsonSerializable (parent) {}

void RemoteData::setStatus(Status newStatus) {
    m_status = newStatus;
    emit statusChanged(newStatus);
}

void RemoteData::setError(QNetworkReply::NetworkError error) {
    m_error = error;
    emit errorChanged(error);
}

void RemoteData::setErrorString(const QString &newErrorString) {
    m_errorString = newErrorString;
    emit errorStringChanged(newErrorString);
}

void RemoteData::setApiClient(ApiClient *newApiClient) {
    m_apiClient = newApiClient;
    emit apiClientChanged(newApiClient);
    reload();
}

// Item

Item::Item(QObject *parent) : RemoteData(parent) {
}


void Item::setJellyfinId(QString newId) {
    m_id = newId.trimmed();
    if (m_id != newId) {
        emit jellyfinIdChanged(m_id);
        reload();
    }
}

void Item::reload() {
    if (m_id.isEmpty() || m_apiClient == nullptr) {
        setStatus(Uninitialised);
        return;
    } else {
        setStatus(Loading);
    }
    QNetworkReply *rep = m_apiClient->get("/Users/" + m_apiClient->userId() + "/Items/" + m_id);
    connect(rep, &QNetworkReply::finished, this, [this, rep]() {
        rep->deleteLater();

        QJsonParseError error;
        QJsonDocument doc = QJsonDocument::fromJson(rep->readAll(), &error);
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
        this->deserialize(doc.object());
        this->setStatus(Ready);
    });
    connect(rep, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error),
            this, [this, rep](QNetworkReply::NetworkError error) {
        rep->deleteLater();
        this->setError(error);
        this->setErrorString(rep->errorString());
        this->setStatus(Error);
    });
}

void registerSerializableJsonTypes(const char* URI) {
    qmlRegisterType<Item>(URI, 1, 0, "JellyfinItem");
}
}
