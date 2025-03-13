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

#include <JellyfinQt/dto/baseitemkind.h>

namespace Jellyfin {
namespace DTO {

BaseItemKindClass::BaseItemKindClass() {}

} // NS DTO

namespace Support {

using BaseItemKind = Jellyfin::DTO::BaseItemKind;

template <>
BaseItemKind fromJsonValue(const QJsonValue &source, convertType<BaseItemKind>) {
	if (!source.isString()) return BaseItemKind::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("AggregateFolder")) {
		return BaseItemKind::AggregateFolder;
	}
	if (str == QStringLiteral("Audio")) {
		return BaseItemKind::Audio;
	}
	if (str == QStringLiteral("AudioBook")) {
		return BaseItemKind::AudioBook;
	}
	if (str == QStringLiteral("BasePluginFolder")) {
		return BaseItemKind::BasePluginFolder;
	}
	if (str == QStringLiteral("Book")) {
		return BaseItemKind::Book;
	}
	if (str == QStringLiteral("BoxSet")) {
		return BaseItemKind::BoxSet;
	}
	if (str == QStringLiteral("Channel")) {
		return BaseItemKind::Channel;
	}
	if (str == QStringLiteral("ChannelFolderItem")) {
		return BaseItemKind::ChannelFolderItem;
	}
	if (str == QStringLiteral("CollectionFolder")) {
		return BaseItemKind::CollectionFolder;
	}
	if (str == QStringLiteral("Episode")) {
		return BaseItemKind::Episode;
	}
	if (str == QStringLiteral("Folder")) {
		return BaseItemKind::Folder;
	}
	if (str == QStringLiteral("Genre")) {
		return BaseItemKind::Genre;
	}
	if (str == QStringLiteral("ManualPlaylistsFolder")) {
		return BaseItemKind::ManualPlaylistsFolder;
	}
	if (str == QStringLiteral("Movie")) {
		return BaseItemKind::Movie;
	}
	if (str == QStringLiteral("LiveTvChannel")) {
		return BaseItemKind::LiveTvChannel;
	}
	if (str == QStringLiteral("LiveTvProgram")) {
		return BaseItemKind::LiveTvProgram;
	}
	if (str == QStringLiteral("MusicAlbum")) {
		return BaseItemKind::MusicAlbum;
	}
	if (str == QStringLiteral("MusicArtist")) {
		return BaseItemKind::MusicArtist;
	}
	if (str == QStringLiteral("MusicGenre")) {
		return BaseItemKind::MusicGenre;
	}
	if (str == QStringLiteral("MusicVideo")) {
		return BaseItemKind::MusicVideo;
	}
	if (str == QStringLiteral("Person")) {
		return BaseItemKind::Person;
	}
	if (str == QStringLiteral("Photo")) {
		return BaseItemKind::Photo;
	}
	if (str == QStringLiteral("PhotoAlbum")) {
		return BaseItemKind::PhotoAlbum;
	}
	if (str == QStringLiteral("Playlist")) {
		return BaseItemKind::Playlist;
	}
	if (str == QStringLiteral("PlaylistsFolder")) {
		return BaseItemKind::PlaylistsFolder;
	}
	if (str == QStringLiteral("Program")) {
		return BaseItemKind::Program;
	}
	if (str == QStringLiteral("Recording")) {
		return BaseItemKind::Recording;
	}
	if (str == QStringLiteral("Season")) {
		return BaseItemKind::Season;
	}
	if (str == QStringLiteral("Series")) {
		return BaseItemKind::Series;
	}
	if (str == QStringLiteral("Studio")) {
		return BaseItemKind::Studio;
	}
	if (str == QStringLiteral("Trailer")) {
		return BaseItemKind::Trailer;
	}
	if (str == QStringLiteral("TvChannel")) {
		return BaseItemKind::TvChannel;
	}
	if (str == QStringLiteral("TvProgram")) {
		return BaseItemKind::TvProgram;
	}
	if (str == QStringLiteral("UserRootFolder")) {
		return BaseItemKind::UserRootFolder;
	}
	if (str == QStringLiteral("UserView")) {
		return BaseItemKind::UserView;
	}
	if (str == QStringLiteral("Video")) {
		return BaseItemKind::Video;
	}
	if (str == QStringLiteral("Year")) {
		return BaseItemKind::Year;
	}
	
	return BaseItemKind::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const BaseItemKind &source, convertType<BaseItemKind>) {
	switch(source) {
	case BaseItemKind::AggregateFolder:
		return QStringLiteral("AggregateFolder");
	case BaseItemKind::Audio:
		return QStringLiteral("Audio");
	case BaseItemKind::AudioBook:
		return QStringLiteral("AudioBook");
	case BaseItemKind::BasePluginFolder:
		return QStringLiteral("BasePluginFolder");
	case BaseItemKind::Book:
		return QStringLiteral("Book");
	case BaseItemKind::BoxSet:
		return QStringLiteral("BoxSet");
	case BaseItemKind::Channel:
		return QStringLiteral("Channel");
	case BaseItemKind::ChannelFolderItem:
		return QStringLiteral("ChannelFolderItem");
	case BaseItemKind::CollectionFolder:
		return QStringLiteral("CollectionFolder");
	case BaseItemKind::Episode:
		return QStringLiteral("Episode");
	case BaseItemKind::Folder:
		return QStringLiteral("Folder");
	case BaseItemKind::Genre:
		return QStringLiteral("Genre");
	case BaseItemKind::ManualPlaylistsFolder:
		return QStringLiteral("ManualPlaylistsFolder");
	case BaseItemKind::Movie:
		return QStringLiteral("Movie");
	case BaseItemKind::LiveTvChannel:
		return QStringLiteral("LiveTvChannel");
	case BaseItemKind::LiveTvProgram:
		return QStringLiteral("LiveTvProgram");
	case BaseItemKind::MusicAlbum:
		return QStringLiteral("MusicAlbum");
	case BaseItemKind::MusicArtist:
		return QStringLiteral("MusicArtist");
	case BaseItemKind::MusicGenre:
		return QStringLiteral("MusicGenre");
	case BaseItemKind::MusicVideo:
		return QStringLiteral("MusicVideo");
	case BaseItemKind::Person:
		return QStringLiteral("Person");
	case BaseItemKind::Photo:
		return QStringLiteral("Photo");
	case BaseItemKind::PhotoAlbum:
		return QStringLiteral("PhotoAlbum");
	case BaseItemKind::Playlist:
		return QStringLiteral("Playlist");
	case BaseItemKind::PlaylistsFolder:
		return QStringLiteral("PlaylistsFolder");
	case BaseItemKind::Program:
		return QStringLiteral("Program");
	case BaseItemKind::Recording:
		return QStringLiteral("Recording");
	case BaseItemKind::Season:
		return QStringLiteral("Season");
	case BaseItemKind::Series:
		return QStringLiteral("Series");
	case BaseItemKind::Studio:
		return QStringLiteral("Studio");
	case BaseItemKind::Trailer:
		return QStringLiteral("Trailer");
	case BaseItemKind::TvChannel:
		return QStringLiteral("TvChannel");
	case BaseItemKind::TvProgram:
		return QStringLiteral("TvProgram");
	case BaseItemKind::UserRootFolder:
		return QStringLiteral("UserRootFolder");
	case BaseItemKind::UserView:
		return QStringLiteral("UserView");
	case BaseItemKind::Video:
		return QStringLiteral("Video");
	case BaseItemKind::Year:
		return QStringLiteral("Year");

	case BaseItemKind::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
