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

#include <JellyfinQt/dto/recommendationtype.h>

namespace Jellyfin {
namespace DTO {

RecommendationTypeClass::RecommendationTypeClass() {}

} // NS DTO

namespace Support {

using RecommendationType = Jellyfin::DTO::RecommendationType;

template <>
RecommendationType fromJsonValue(const QJsonValue &source, convertType<RecommendationType>) {
	if (!source.isString()) return RecommendationType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("SimilarToRecentlyPlayed")) {
		return RecommendationType::SimilarToRecentlyPlayed;
	}
	if (str == QStringLiteral("SimilarToLikedItem")) {
		return RecommendationType::SimilarToLikedItem;
	}
	if (str == QStringLiteral("HasDirectorFromRecentlyPlayed")) {
		return RecommendationType::HasDirectorFromRecentlyPlayed;
	}
	if (str == QStringLiteral("HasActorFromRecentlyPlayed")) {
		return RecommendationType::HasActorFromRecentlyPlayed;
	}
	if (str == QStringLiteral("HasLikedDirector")) {
		return RecommendationType::HasLikedDirector;
	}
	if (str == QStringLiteral("HasLikedActor")) {
		return RecommendationType::HasLikedActor;
	}
	
	return RecommendationType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const RecommendationType &source, convertType<RecommendationType>) {
	switch(source) {
	case RecommendationType::SimilarToRecentlyPlayed:
		return QStringLiteral("SimilarToRecentlyPlayed");
	case RecommendationType::SimilarToLikedItem:
		return QStringLiteral("SimilarToLikedItem");
	case RecommendationType::HasDirectorFromRecentlyPlayed:
		return QStringLiteral("HasDirectorFromRecentlyPlayed");
	case RecommendationType::HasActorFromRecentlyPlayed:
		return QStringLiteral("HasActorFromRecentlyPlayed");
	case RecommendationType::HasLikedDirector:
		return QStringLiteral("HasLikedDirector");
	case RecommendationType::HasLikedActor:
		return QStringLiteral("HasLikedActor");

	case RecommendationType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin
