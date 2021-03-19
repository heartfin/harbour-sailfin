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
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#ifndef JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H
#define JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class LibraryOptionInfoDto;
class LibraryOptionInfoDto;
class LibraryOptionInfoDto;
class LibraryTypeOptionsDto;

class LibraryOptionsResultDto : public QObject {
	Q_OBJECT
public:
	explicit LibraryOptionsResultDto(QObject *parent = nullptr);
	static LibraryOptionsResultDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the metadata savers.
	 */
	Q_PROPERTY(QList<LibraryOptionInfoDto *> metadataSavers READ metadataSavers WRITE setMetadataSavers NOTIFY metadataSaversChanged)
	/**
	 * @brief Gets or sets the metadata readers.
	 */
	Q_PROPERTY(QList<LibraryOptionInfoDto *> metadataReaders READ metadataReaders WRITE setMetadataReaders NOTIFY metadataReadersChanged)
	/**
	 * @brief Gets or sets the subtitle fetchers.
	 */
	Q_PROPERTY(QList<LibraryOptionInfoDto *> subtitleFetchers READ subtitleFetchers WRITE setSubtitleFetchers NOTIFY subtitleFetchersChanged)
	/**
	 * @brief Gets or sets the type options.
	 */
	Q_PROPERTY(QList<LibraryTypeOptionsDto *> typeOptions READ typeOptions WRITE setTypeOptions NOTIFY typeOptionsChanged)

	QList<LibraryOptionInfoDto *> metadataSavers() const;
	void setMetadataSavers(QList<LibraryOptionInfoDto *> newMetadataSavers);
	
	QList<LibraryOptionInfoDto *> metadataReaders() const;
	void setMetadataReaders(QList<LibraryOptionInfoDto *> newMetadataReaders);
	
	QList<LibraryOptionInfoDto *> subtitleFetchers() const;
	void setSubtitleFetchers(QList<LibraryOptionInfoDto *> newSubtitleFetchers);
	
	QList<LibraryTypeOptionsDto *> typeOptions() const;
	void setTypeOptions(QList<LibraryTypeOptionsDto *> newTypeOptions);
	
signals:
	void metadataSaversChanged(QList<LibraryOptionInfoDto *> newMetadataSavers);
	void metadataReadersChanged(QList<LibraryOptionInfoDto *> newMetadataReaders);
	void subtitleFetchersChanged(QList<LibraryOptionInfoDto *> newSubtitleFetchers);
	void typeOptionsChanged(QList<LibraryTypeOptionsDto *> newTypeOptions);
protected:
	QList<LibraryOptionInfoDto *> m_metadataSavers;
	QList<LibraryOptionInfoDto *> m_metadataReaders;
	QList<LibraryOptionInfoDto *> m_subtitleFetchers;
	QList<LibraryTypeOptionsDto *> m_typeOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYOPTIONSRESULTDTO_H
