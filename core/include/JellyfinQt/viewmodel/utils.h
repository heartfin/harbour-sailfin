/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2022 Chris Josten and the Sailfin Contributors.
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
#ifndef JELLYFIN_VIEWMODEL_UTILS_H
#define JELLYFIN_VIEWMODEL_UTILS_H

#include <QObject>
#include <QSharedPointer>
#include <QVariant>

/**
 * \brief Wraps a data object in a QObject.
 *
 * This class is made for use in the ViewModel namespace, since many
 * objects follow the pattern of having a constructor with a QSharedPointer<DTO::SomeItem>
 * and a parent.
 *
 * The QObject wrapper class W must have a accessible constructor which takes only a QSharedPointer<D>
 * as argument.
 *
 * \tparam W The QObject wrapper class
 * \tparam D The DTO class
 * \param data The data to wrap in a QObject
 * \param parent The QObject to set as the parent of the newly created type.
 */
template<typename W, typename D>
W *wrapQObject(D data, QObject *parent) {
    return new W(QSharedPointer<D>::create(data), parent);
}

/**
 * \brief Wraps a list of DTO items in a QVariantList of QObject's
 * \see wrapQObject()
 * \param begin The begin iterator of the list of DTO items
 * \param end The end iterator of the list of DTO items
 * \param parent The QObject to set as the parent of the QObjects in the newly created list.
 */
template<typename W, typename D, typename It>
QVariantList wrapQVariantList(It begin, It end, QObject *parent) {
    QVariantList result;
    for (It it = begin; it != end; it++) {
        result.append(QVariant::fromValue(wrapQObject<W, D>(*it, parent)));
    }
    return result;
}

/**
 * \brief Wraps a list of DTO items in a QObjectList.
 * \see wrapQObject()
 * \param begin The begin iterator of the list of DTO items
 * \param end The end iterator of the list of DTO items
 * \param parent The QObject to set as the parent of the QObjects in the newly created list.
 */
template<typename W, typename D, typename It>
QObjectList wrapQObjectList(It begin, It end, QObject *parent) {
    QObjectList result;
    for (It it = begin; it != end; it++) {
        result.append(wrapQObject<W, D>(*it, parent));
    }
    return result;
}

#endif // JELLYFIN_VIEWMODEL_UTILS_H
