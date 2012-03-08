/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface GeniusMixArtworkCache : NSObject {
@private
	NSData *_data;	// 4 = 0x4
	CGImageRef _artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;	// G=0x33c28741; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x33c285e9; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x33c28691; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x33c282a1
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size artworkData:(void *)data length:(unsigned)length;	// 0x33c281b1
- (id)init;	// 0x33c28525
// declared property getter: - (CGImageRef)artworkImage;	// 0x33c28741
// declared property getter: - (unsigned)coverCount;	// 0x33c285e9
// declared property getter: - (CGSize)coverSize;	// 0x33c28691
- (void)dealloc;	// 0x33c28585
- (BOOL)writeToFile:(id)file;	// 0x33c28279
@end
