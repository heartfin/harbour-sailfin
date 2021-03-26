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
#ifndef JELLYFIN_VIEWMODEL_PROPERTYHELPER
#define JELLYFIN_VIEWMODEL_PROPERTYHELPER

// Jellyfin Forward Read/Write Property
#define JF_FWD_RW_PROP(type, propName, propSetName, obj) \
    public: \
        Q_PROPERTY(type propName READ propName WRITE set##propSetName NOTIFY propName##Changed) \
        type propName() const { return obj.propName(); } \
        void set##propSetName(type newValue) { \
            obj.set##propSetName( newValue ); \
            emit propName##Changed(); \
        } \
    Q_SIGNALS: \
        void propName##Changed();

// Jellyfin Forward Read Property
#define JF_FWD_R_PROP(type, propName, propSetName, obj) \
    public: \
        Q_PROPERTY(type propName READ propName NOTIFY propName##Changed) \
        type propName() const { return obj.propName(); } \
    signals: \
        void propName##Changed(type newValue);
#endif // JELLYFIN_VIEWMODEL_PROPERTYHELPER
