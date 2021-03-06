/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemArtwork.h"
#import "NSCoding.h"

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding> {
	unsigned long long _itemPersistentID;	// 12 = 0xc
	MPMediaLibrary *_library;	// 20 = 0x14
	CGRect _bounds;	// 24 = 0x18
	CGRect _cropRect;	// 40 = 0x28
}
@property(readonly, assign) CGRect bounds;	// G=0x36d0d9bd; converted property
- (id)initWithCoder:(id)coder;	// 0x36d0dae5
- (id)_initWithItem:(id)item;	// 0x36d0c199
- (id)albumImageDataWithSize:(CGSize)size;	// 0x36d0cbf9
- (id)albumImageWithFormat:(int)format;	// 0x36d0c341
- (id)albumImageWithFormat:(int)format artworkCacheID:(id)anId;	// 0x36d0c355
- (id)albumImageWithFormat:(int)format artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image;	// 0x36d0c379
- (id)albumImageWithSize:(CGSize)size;	// 0x36d0c771
// converted property getter: - (CGRect)bounds;	// 0x36d0d9bd
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x36d0d725
- (void)dealloc;	// 0x36d0c281
- (void)encodeWithCoder:(id)coder;	// 0x36d0db8d
- (BOOL)hasArtworkAvailable;	// 0x36d0c2cd
- (CGRect)imageCropRect;	// 0x36d0da55
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x36d0d4f1
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x36d0ce25
@end

