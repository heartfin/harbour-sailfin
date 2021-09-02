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
#ifndef JELLYFIN_QOBJECTSETTINGSWRAPPER_H
#define JELLYFIN_QOBJECTSETTINGSWRAPPER_H


#if USE_MLITE
#include <MDConfGroup>
namespace Jellyfin {
using QObjectSettingsWrapper = MDConfGroup;
} // NS Jellyfin
#else

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

#include <QMetaType>
#include <QObject>
#include <QScopedPointer>
#include <QVariant>

namespace Jellyfin {
class QObjectSettingsWrapperPrivate;

/**
 * @brief Almost-API reimplementation of https://github.com/sailfishos/mlite/blob/master/src/mdconfgroup.h
 * that uses QSettings as a backend.
 */
class QObjectSettingsWrapper : public QObject {
    Q_OBJECT
    Q_DECLARE_PRIVATE(QObjectSettingsWrapper)
    Q_PROPERTY(bool synchronous READ isSynchronous WRITE setSynchronous NOTIFY synchronousChanged);
    Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged);
    Q_PROPERTY(Jellyfin::QObjectSettingsWrapper *scope READ scope WRITE setScope NOTIFY scopeChanged);
public:
    enum BindOption {
        DontBindProperties,
        BindProperties
    };

    explicit QObjectSettingsWrapper(QObject *parent = nullptr, BindOption option = DontBindProperties);
    explicit QObjectSettingsWrapper(const QString &path, QObject *parent = nullptr, BindOption option = DontBindProperties);
    virtual ~QObjectSettingsWrapper();

    bool isSynchronous() const;
    void setSynchronous(bool synchronous);

    QString path() const;
    void setPath(const QString &path);

    QObjectSettingsWrapper *scope() const;
    void setScope(QObjectSettingsWrapper *scope);

    Q_INVOKABLE QVariant value(const QString &key,
                               const QVariant &defaultValue = QVariant(),
                               int typeHint = QMetaType::UnknownType) const;
    Q_INVOKABLE void setValue(const QString &key, const QVariant &value);
signals:
    void synchronousChanged();
    void pathChanged();
    void scopeChanged();
public slots:
    void sync();
    void clear();
protected:
    void resolveMetaObject(int propertyOffset = -1);
private slots:
    void propertyChanged();
private:
    QScopedPointer<QObjectSettingsWrapperPrivate> d_ptr;
};

} // NS Jellyfin
#endif

#endif // JELLYFIN_QOBJECTSETTINGSWRAPPER_H
