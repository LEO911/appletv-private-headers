/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Collection.h"


@interface ML3AlbumArtist : ML3Collection {
}
+ (id)allProperties;	// 0x346e60c5
+ (id)artworkCacheIDProperty;	// 0x346e68ed
+ (id)databaseTable;	// 0x346a8d15
+ (id)defaultOrderingProperties;	// 0x346e6099
+ (id)effectiveAlbumArtistNameForAlbumArtistName:(id)albumArtistName artistName:(id)name seriesName:(id)name3 compilation:(BOOL)compilation;	// 0x346e615d
+ (id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)albumArtistSortName albumArtistName:(id)name artistSortName:(id)name3 artistName:(id)name4 compilation:(BOOL)compilation;	// 0x346e61f1
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x346a9131
+ (void)initialize;	// 0x346a8a91
+ (id)joinClausesForProperty:(id)property;	// 0x346a8c8d
+ (id)predisambiguatedProperties;	// 0x346a8c7d
+ (id)propertiesForGroupingKey;	// 0x346e60d5
+ (id)sectionPropertyForProperty:(id)property;	// 0x346e60a9
+ (id)trackForeignPersistentID;	// 0x346e68d9
- (void)updateRepresentativeItem:(id)item inLibrary:(id)library withArtworkCacheID:(id)artworkCacheID;	// 0x346e6905
- (void)updateTrackValues:(id)values;	// 0x346e62b5
@end
