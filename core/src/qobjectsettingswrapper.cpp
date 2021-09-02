/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/***************************************************************************
** Copyright (C) 2014 Jolla Mobile <andrew.den.exter@jollamobile.com>
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/


#include "JellyfinQt/qobjectsettingswrapper.h"

#ifndef USE_MLITE
#include <QDebug>
#include <QMetaProperty>
#include <QMetaObject>
#include <QSettings>

namespace Jellyfin {
class QObjectSettingsWrapperPrivate {
    Q_DECLARE_PUBLIC(QObjectSettingsWrapper);
public:
    explicit QObjectSettingsWrapperPrivate(QObjectSettingsWrapper *parent);
    virtual ~QObjectSettingsWrapperPrivate() {}
    void readValue(const QMetaProperty &prop);
    void resolveProperties(QByteArray path);

    QSettings m_settings;
    int propertyOffset = -1;
    int notifyIndex = -1;
    QString path;
    QByteArray absolutePath;
    QObjectSettingsWrapper *scope = nullptr;
    QObjectSettingsWrapper *q_ptr = nullptr;
    QList<QObjectSettingsWrapper *> children;
};

QObjectSettingsWrapper::QObjectSettingsWrapper(QObject *parent,
                                               BindOption bindOption)
    : QObject(parent),
      d_ptr(new QObjectSettingsWrapperPrivate(this)){

    if (bindOption == DontBindProperties)
        resolveMetaObject(metaObject()->propertyCount());
}

QObjectSettingsWrapper::QObjectSettingsWrapper(const QString &path,
                                               QObject *parent,
                                               BindOption bindOption)
    : QObject(parent),
      d_ptr(new QObjectSettingsWrapperPrivate(this)){

    d_ptr->path = path;

    if (bindOption == DontBindProperties)
        resolveMetaObject(metaObject()->propertyCount());
}

QObjectSettingsWrapper::~QObjectSettingsWrapper() {}

bool QObjectSettingsWrapper::isSynchronous() const {
    return true;
}

void QObjectSettingsWrapper::setSynchronous(bool synchronous) {
    Q_UNUSED(synchronous)
    // NOOP
}

void QObjectSettingsWrapper::setPath(const QString &path) {
    Q_D(QObjectSettingsWrapper);
    if (d->path != path) {
        const bool isAbsolute = d->path.startsWith("/");
        d->path = path;
        emit pathChanged();

        // If the new path is absolute connect to the changed signal and read the initial values,
        // if it's relative and the parent scope is valid just read the initial values.
        if (d->path.isEmpty() ||d->propertyOffset < 0) {
            // No path or the object is not yet resolved, so don't do any of the following things.
        } else if (isAbsolute) {
            d->resolveProperties(QByteArray());
        } else if (d->scope && !d->scope->d_func()->absolutePath.isEmpty()) {
            d->resolveProperties(d->scope->d_func()->absolutePath);
        }
    }
}

QString QObjectSettingsWrapper::path() const {
    Q_D(const QObjectSettingsWrapper);
    return d_ptr->m_settings.group();
}

QObjectSettingsWrapper *QObjectSettingsWrapper::scope() const {
    Q_D(const QObjectSettingsWrapper);
    return d->scope;
}

void QObjectSettingsWrapper::setScope(QObjectSettingsWrapper *scope) {
    Q_D(QObjectSettingsWrapper);
    const bool isAbsolute = d->path.startsWith("/");
    if (d->scope) {
        d->scope->d_func()->children.removeAll(this);
    }
    d->scope = scope;

    if (d->scope) {
        d->scope->d_func()->children.append(this);

        // If the path is relative and the new scope is valid read the initial values.
        if (!d->path.isEmpty() && !isAbsolute && !d->scope->d_func()->absolutePath.isEmpty()) {
            d->resolveProperties(d->scope->d_func()->absolutePath);
        }
    }

    emit scopeChanged();
}

QVariant QObjectSettingsWrapper::value(const QString &key, const QVariant &defaultValue, int typeHint) const {
    Q_UNUSED(typeHint)
    Q_D(const QObjectSettingsWrapper);
    const QByteArray absoluteKey = !key.startsWith(QLatin1Char('/'))
                ? d->absolutePath + key.toUtf8()
                : key.toUtf8();
    QVariant value = d->m_settings.value(absoluteKey, defaultValue);
    return value.isValid() ? value : defaultValue;
}

void QObjectSettingsWrapper::setValue(const QString &key, const QVariant &value) {
    Q_D(QObjectSettingsWrapper);
    if (d->absolutePath.isEmpty() || key.isEmpty()) return;

    const QByteArray absoluteKey = !key.startsWith(QLatin1Char('/'))
                ? d->absolutePath + key.toUtf8()
                : key.toUtf8();
    d->m_settings.setValue(absoluteKey, value);
}

void QObjectSettingsWrapper::sync() {
    // NOOP
}

void QObjectSettingsWrapper::clear() {
    Q_D(QObjectSettingsWrapper);
    d->m_settings.clear();
}


void QObjectSettingsWrapper::resolveMetaObject(int propertyOffset) {
    Q_D(QObjectSettingsWrapper);
    qDebug() << "Resolving meta object";

    if (d->propertyOffset >= 0) return;

    const int propertyChangedIndex = staticMetaObject.indexOfMethod("propertyChanged()");
    Q_ASSERT(propertyChangedIndex != -1);

    const QMetaObject * const metaObject = this->metaObject();

    if (propertyOffset < 0) {
        propertyOffset = staticMetaObject.propertyCount();
    }
    d->propertyOffset = propertyOffset;
    qDebug() << "Property offset: " << propertyOffset << ", total properties: " << metaObject->propertyCount();

    for (int i = propertyOffset; i < metaObject->propertyCount(); i++) {
        const QMetaProperty prop = metaObject->property(i);
        qDebug() << "Encountered prop " << prop.name();
        if (prop.hasNotifySignal()) {
            QMetaObject::connect(this,
                                 prop.notifySignalIndex(),
                                 this,
                                 propertyChangedIndex,
                                 Qt::UniqueConnection);
        }
    }

    if (d->path.startsWith("/")) {
        d->resolveProperties("");
    } else if (d->scope && !d->path.isEmpty() && !d->scope->d_func()->absolutePath.isEmpty()) {
        d->resolveProperties(d->scope->d_func()->absolutePath);
    }
}

void QObjectSettingsWrapper::propertyChanged() {
    Q_D(QObjectSettingsWrapper);

    const int notifyIndex = senderSignalIndex();
    if (notifyIndex == d->notifyIndex) return;

    const QMetaObject * const metaObject = this->metaObject();

    for (int i = d->propertyOffset; i < metaObject->propertyCount(); i++) {
        const QMetaProperty prop = metaObject->property(i);
        if (prop.notifySignalIndex() == notifyIndex) {
            qDebug() << "Property changed, name: " << prop.name();
            d->m_settings.setValue(d->absolutePath + prop.name(), prop.read(this));
            break;
        }
    }
}

// Private

QObjectSettingsWrapperPrivate::QObjectSettingsWrapperPrivate(QObjectSettingsWrapper *parent)
    : q_ptr(parent),
      m_settings(QSettings(parent)) {

}

void QObjectSettingsWrapperPrivate::resolveProperties(QByteArray scopePath) {
    absolutePath = scopePath + path.toUtf8() + '/';
    Q_Q(QObjectSettingsWrapper);

    const QMetaObject * const metaObject = q->metaObject();
    for (int i = propertyOffset; i < metaObject->propertyCount(); i++) {
        readValue(metaObject->property(i));
    }
}

void QObjectSettingsWrapperPrivate::readValue(const QMetaProperty &prop) {
    Q_Q(QObjectSettingsWrapper);
    const QVariant value = m_settings.value(absolutePath + prop.name(), prop.type());
    if (value.isValid()) {
        notifyIndex = prop.notifySignalIndex();
        prop.write(q, value);
        notifyIndex = -1;
    }
}

} // NS Jellyfin

#endif

