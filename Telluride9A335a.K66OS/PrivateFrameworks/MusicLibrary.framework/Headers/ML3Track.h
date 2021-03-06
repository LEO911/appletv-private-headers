/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Track : ML3Entity {
}
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x309992fd
+ (BOOL)_clearLocationFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3099abe1
+ (BOOL)_deleteAssetAtPath:(id)path;	// 0x3099aeb5
+ (void)_enumeratePathsToDeleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x3099af19
+ (id)_flattenedChapterDataWithImportChapters:(id)importChapters library:(id)library trackPersistentID:(long long)anId;	// 0x309ae685
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x309834f5
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x309992cd
+ (id)albumsDefaultOrderingProperties;	// 0x3097d7fd
+ (id)allProperties;	// 0x30999341
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x309992ad
+ (id)artistsDefaultOrderingProperties;	// 0x309992bd
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x3099a045
+ (id)composersDefaultOrderingProperties;	// 0x309992dd
+ (id)containerQueryWithContainer:(id)container;	// 0x309a6bd1
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x309a6c29
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x3097e819
+ (id)databaseTable;	// 0x3097a89d
+ (id)defaultOrderingProperties;	// 0x3097aa45
+ (BOOL)deleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3099942d
+ (id)extraTablesToDelete;	// 0x30999351
+ (id)extraTablesToInsert;	// 0x30999361
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)syncInfoDictionaries trackPersistentID:(long long)anId;	// 0x309aecad
+ (id)foreignColumnForProperty:(id)property;	// 0x30982fc9
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x30982f89
+ (id)genresDefaultOrderingProperties;	// 0x30983315
+ (void)initialize;	// 0x30978109
+ (id)joinClauseForProperty:(id)property;	// 0x3097a849
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x309830ad
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;	// 0x309a5f31
+ (id)persistentIDColumnForTable:(id)table;	// 0x30983009
+ (id)podcastsDefaultOrderingProperties;	// 0x3099929d
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x309992ed
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x30999af1
+ (id)predisambiguatedProperties;	// 0x3097a839
+ (int)revisionTrackingCode;	// 0x30983025
+ (id)sectionPropertyForProperty:(id)property;	// 0x3097b2a5
+ (id)subselectPropertyForProperty:(id)property;	// 0x3099930d
+ (id)subselectStatementForProperty:(id)property;	// 0x3097b2c1
+ (BOOL)trackValueAreInTheCloud:(id)theCloud;	// 0x3099a6f1
+ (BOOL)trackWithPersistentID:(long long)persistentID existsInLibrary:(id)library;	// 0x30999989
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3099a0f1
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count deletedFileSize:(long long *)size;	// 0x3099a115
+ (id)unsettableProperties;	// 0x30982f79
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x30999f51
- (id)absoluteFilePath;	// 0x309993a1
- (id)artworkCacheIDAtPlaybackTime:(double)playbackTime;	// 0x3097db31
- (id)chapterTOC;	// 0x30982209
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x3099a97d
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x309ae565
- (void)populateChapterDataByImportingFromAsset;	// 0x309af1fd
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x309aefb5
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x309afda9
- (void)updateCollectionCloudStatus;	// 0x3099aa89
- (BOOL)updateIntegrity;	// 0x3099a789
@end

