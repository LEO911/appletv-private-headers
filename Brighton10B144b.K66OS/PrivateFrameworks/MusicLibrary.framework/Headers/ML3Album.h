/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Collection.h"


@interface ML3Album : ML3Collection {
}
+ (id)allProperties;	// 0x346d4199
+ (id)artworkCacheIDProperty;	// 0x346d48bd
+ (id)databaseTable;	// 0x346af495
+ (id)defaultOrderingProperties;	// 0x346d4189
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x346af4ad
+ (void)initialize;	// 0x346af169
+ (id)joinClausesForProperty:(id)property;	// 0x346af40d
+ (id)predisambiguatedProperties;	// 0x346af3fd
+ (id)propertiesForGroupingKey;	// 0x346d41a9
+ (int)revisionTrackingCode;	// 0x346d4185
+ (id)trackForeignPersistentID;	// 0x346d48a9
- (void)updateRepresentativeItem:(id)item inLibrary:(id)library withArtworkCacheID:(id)artworkCacheID;	// 0x346d48d5
- (void)updateTrackValues:(id)values;	// 0x346d4231
@end
