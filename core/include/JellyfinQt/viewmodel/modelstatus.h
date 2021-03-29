/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
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
#ifndef JELLYFIN_VIEWMODEL_MODELSTATUS_H
#define JELLYFIN_VIEWMODEL_MODELSTATUS_H

#include <QtGlobal>
#include <QObject>
#include <QTimer>

namespace Jellyfin {
namespace ViewModel {

class ModelStatusClass {
    Q_GADGET
public:
    enum Value {
        Uninitialised,
        Loading,
        Ready,
        Error,
        LoadingMore
    };
    Q_ENUM(Value)
private:
    explicit ModelStatusClass();
};

using ModelStatus = ModelStatusClass::Value;


class ModelStatusTest : public QObject {
    Q_OBJECT
public:
    explicit ModelStatusTest(QObject *parent = nullptr) : QObject(parent) {
        m_timer.setInterval(500);
        connect(&m_timer, &QTimer::timeout, this, &ModelStatusTest::rotateStatus);
        m_timer.setSingleShot(false);
        m_timer.start();
    }
    Q_PROPERTY(ModelStatus status READ status WRITE setStatus NOTIFY statusChanged)

    ModelStatus status() const { return m_status; }

    void setStatus(ModelStatus newStatus) {
        m_status = newStatus;
        emit statusChanged();
    }
signals:
    void statusChanged();
private slots:
    void rotateStatus() {
        setStatus(static_cast<ModelStatus>((m_status + 1) % ModelStatus::LoadingMore));
    }
private:
    ModelStatus m_status = ModelStatus::Uninitialised;
    QTimer m_timer;
};

}
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_MODELSTATUS_H
