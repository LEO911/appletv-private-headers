/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSData, NSArray, MLMovieProperties, MLContentRating, NSString;

@interface MLTrackImport : NSObject <NSCopying> {
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x354925ed; S=0x35492601; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x35492611; S=0x35492625; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x35492635; S=0x35492645; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x35492655; S=0x35492669; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x35491d39; S=0x35491f35; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x35491dc1; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x35491ded; S=0x35491f7d; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x35491e4d; S=0x35492021; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x35492679; S=0x35492689; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x35492699; S=0x354926a9; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x35491ac5
- (id)init;	// 0x35491a79
- (void).cxx_destruct;	// 0x354926b9
- (void)_addSortStrings;	// 0x354924fd
// declared property getter: - (id)artworkData;	// 0x354925ed
// declared property getter: - (id)assetFilePath;	// 0x35492611
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x35492635
// declared property getter: - (id)chapters;	// 0x35492655
// declared property getter: - (id)contentRating;	// 0x35491d39
- (id)copyEntityProperties;	// 0x354921f5
- (id)copyWithZone:(NSZone *)zone;	// 0x35491c29
// declared property getter: - (id)entityProperties;	// 0x35491dc1
// declared property getter: - (unsigned long)mediaType;	// 0x35491ded
// declared property getter: - (id)movieProperties;	// 0x35491e4d
- (void)normalizeEntityProperties;	// 0x35492215
// declared property setter: - (void)setArtworkData:(id)data;	// 0x35492601
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x35492625
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x35492645
// declared property setter: - (void)setChapters:(id)chapters;	// 0x35492669
// declared property setter: - (void)setContentRating:(id)rating;	// 0x35491f35
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x35491f7d
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x35492021
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x35492689
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x354926a9
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x35492119
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x35492679
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x35492699
- (id)valueForEntityProperty:(id)entityProperty;	// 0x354921d5
@end
