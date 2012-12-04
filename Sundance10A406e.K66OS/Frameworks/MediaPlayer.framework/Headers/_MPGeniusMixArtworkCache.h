/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSData;

@interface _MPGeniusMixArtworkCache : NSObject {
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x35d2b09d; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x35d2b231; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x35d2b2d9; 
@property(readonly, assign, nonatomic) unsigned long long entityArtworkCacheHash;	// G=0x35d2b39d; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x35d2aded
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size entityArtworkCacheHash:(unsigned long long)hash artworkData:(void *)data length:(unsigned)length;	// 0x35d2acf9
- (id)init;	// 0x35d2ac35
// declared property getter: - (CGImageRef)artworkImage;	// 0x35d2b09d
// declared property getter: - (unsigned)coverCount;	// 0x35d2b231
// declared property getter: - (CGSize)coverSize;	// 0x35d2b2d9
- (void)dealloc;	// 0x35d2ac95
// declared property getter: - (unsigned long long)entityArtworkCacheHash;	// 0x35d2b39d
- (BOOL)writeToFile:(id)file;	// 0x35d2b449
@end
