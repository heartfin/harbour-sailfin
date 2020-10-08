#include "jellyfinitem.h"

namespace Jellyfin {
const QRegularExpression JsonSerializable::m_listExpression = QRegularExpression("^QList<\\s*([a-zA-Z0-9]*)\\s*\\*?\\s*>$");
JsonSerializable::JsonSerializable(QObject *parent) : QObject(parent) {
}

void JsonSerializable::deserialize(const QJsonObject &jObj) {
    const QMetaObject *obj = this->metaObject();

    // Loop over each property,
    for (int i = 0; i < obj->propertyCount(); i++) {
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
        } else if (QString(prop.name()).startsWith("__list__")) {
            // QML doesn't like it if we expose properties of type QList<SubclassOfQobject *>
            // we need to explicitly cast them to QList<QObject *> or QQmlListProperty, which sucks.
            // That's why we have a special case for properties starting with __list__. This contains
            // the actual QList<SubclassOfQobject *>, so that qml can access the object with its real name.
            QString realName = toPascalCase(prop.name() + 8);
            if (!jObj.contains(realName)) {
                qDebug() << "Ignoring " << realName << " - " << prop.name();
                continue;
            }
            QJsonValue val = jObj[realName];
            qDebug() << realName << " - " << prop.name() << ": " << val;
            QMetaProperty realProp = obj->property(obj->indexOfProperty(prop.name() + 8));
            if (!realProp.write(this, jsonToVariant(prop, val, jObj))) {
                qDebug() << "Write to " << prop.name() << "failed";
            };
        } else {
            qDebug() << "Ignored " << prop.name() << " while deserializing";
        }
    }
}

QVariant JsonSerializable::jsonToVariant(QMetaProperty prop, const QJsonValue &val, const QJsonObject &root) {
    switch(val.type()) {
    case QJsonValue::Null:
    case QJsonValue::Undefined:
        return QVariant();
    case QJsonValue::Bool:
    case QJsonValue::Double:
    case QJsonValue::String:
        return val.toVariant();
    case QJsonValue::Array:
        {
            QJsonArray arr = val.toArray();
            QVariantList varArr;
            for (auto it = arr.constBegin(); it < arr.constEnd(); it++) {
                QVariant variant = jsonToVariant(prop, *it, root);
                qDebug() << variant;
                varArr.append(variant);
            }
            qDebug() << prop.name() << ": " << varArr.count();
            return QVariant(varArr);
        }
    case QJsonValue::Object:
        QJsonObject innerObj = val.toObject();
        int typeNo = prop.userType();
        const QMetaObject *metaType = QMetaType::metaObjectForType(prop.userType());
        if (metaType == nullptr) {
            // Try to determine if the type is a qlist
            QRegularExpressionMatch match = m_listExpression.match(prop.typeName());
            if (match.hasMatch()) {
                // It is a qList! Now extract the inner type
                // There should be an easier way, shouldn't there?
                QString listType = match.captured(1).prepend("Jellyfin::").append("*");
                // UGLY CODE HERE WE COME
                typeNo = QMetaType::type(listType.toUtf8());
                if (typeNo == QMetaType::UnknownType) {
                    qDebug() << "Unknown type: " << listType;
                    return QVariant();
                }
                metaType = QMetaType::metaObjectForType(typeNo);
            } else {
                qDebug() << "No metaObject for " << prop.typeName() << ", " << prop.type() << ", " << prop.userType();
                return QVariant();
            }
        }
        QObject *deserializedInnerObj = metaType->newInstance();
        deserializedInnerObj->setParent(this);
        if (JsonSerializable *ser = dynamic_cast<JsonSerializable *>(deserializedInnerObj)) {
            qDebug() << "Deserializing user type " << deserializedInnerObj->metaObject()->className();
            ser->deserialize(innerObj);
            return QVariant(typeNo, &ser);
        } else {
            deserializedInnerObj->deleteLater();
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
    str[0] = str[0].toUpper();
    return str;
}

QString JsonSerializable::fromPascalCase(QString str) {
    str[0] = str[0].toLower();
    return str;
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

// MediaStream
MediaStream::MediaStream(QObject *parent) : JsonSerializable (parent) {}
MediaStream::MediaStream(const MediaStream &other)
    : JsonSerializable (other.parent()),
      m_codec(other.m_codec),
      m_codecTag(other.m_codecTag),
      m_language(other.m_language),
      m_displayTitle(other.m_displayTitle),
      m_type(other.m_type),
      m_index(other.m_index){
}
bool MediaStream::operator==(const MediaStream &other) {
    // displayTitle is explicitly left out, since it's generated based on other properties
    // in the Jellyfin source code.
    return m_codec == other.m_codec && m_codecTag == other.m_codecTag
            && m_language == other.m_language && m_type == other.m_type
            && m_index == other.m_index;
}

// Item

Item::Item(QObject *parent) : RemoteData(parent) {}


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
    qmlRegisterType<MediaStream>(URI, 1, 0, "MediaStream");
    qmlRegisterType<Item>(URI, 1, 0, "JellyfinItem");
}
}
