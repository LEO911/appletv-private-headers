/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MPMediaQuery, NSArray, NSString, MPMediaPlaylist;

@interface MPGeniusMix : NSObject <NSCoding> {
@private
	MPMediaPlaylist *_playlist;	// 4 = 0x4
	MPMediaQuery *_seedTracksQuery;	// 8 = 0x8
	NSArray *_representativeArtists;	// 12 = 0xc
	NSMutableArray *_representativeImageItems;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31ddb725; 
@property(readonly, assign, nonatomic) MPMediaPlaylist *playlist;	// G=0x31ddb269; @synthesize=_playlist
@property(readonly, assign, nonatomic) NSArray *representativeArtists;	// G=0x31ddb5c1; 
@property(readonly, assign, nonatomic) MPMediaQuery *seedTracksQuery;	// G=0x31ddb681; 
+ (id)artworkCacheDirectoryPath;	// 0x31ddc331
+ (id)artworkImageForMediaItem:(id)mediaItem;	// 0x31ddb569
- (id)initWithCoder:(id)coder;	// 0x31ddbdb5
- (id)initWithMPMediaPlaylist:(id)mpmediaPlaylist;	// 0x31ddb9a9
- (id)_cacheDirectoryPath;	// 0x31ddc285
- (id)_cachedRepresentativeImagePath;	// 0x31ddb511
- (CGImageRef)_newCGImageForArtworkData:(id)artworkData artworkInfo:(MLArtworkInstanceInfo *)info;	// 0x31ddbf45
- (unsigned)countOfRepresentativeImagesWithMaxCount:(unsigned)maxCount;	// 0x31ddba31
- (void)dealloc;	// 0x31ddb929
- (id)description;	// 0x31ddb7b5
- (void)encodeWithCoder:(id)coder;	// 0x31ddb751
- (unsigned)hash;	// 0x31ddb841
- (BOOL)isEqual:(id)equal;	// 0x31ddb87d
// declared property getter: - (id)name;	// 0x31ddb725
// declared property getter: - (id)playlist;	// 0x31ddb269
// declared property getter: - (id)representativeArtists;	// 0x31ddb5c1
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count;	// 0x31ddb53d
- (CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count cacheOnly:(BOOL)only;	// 0x31ddc565
// declared property getter: - (id)seedTracksQuery;	// 0x31ddb681
@end

