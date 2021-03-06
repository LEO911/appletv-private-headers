/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	BRImage *_image;	// 88 = 0x58
	BOOL _deletterboxImage;	// 92 = 0x5c
	BOOL _showsDefaultCoverArt;	// 93 = 0x5d
	BOOL _showsBorder;	// 94 = 0x5e
	NSTimer *_setCoverArtTimer;	// 96 = 0x60
}
@property(assign) BOOL deletterboxImage;	// G=0x33ef05; S=0x33eed9; converted property
@property(readonly, retain) BRImage *image;	// G=0x33ee79; converted property
@property(assign) BOOL showsBorder;	// G=0x33efd5; S=0x33ef35; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x33ef25; S=0x33ef15; converted property
- (id)init;	// 0x33ed21
- (void)_coverArtChanged:(id)changed;	// 0x33f2fd
- (void)_setCoverArtImage:(id)image;	// 0x33f165
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x33f109
- (void)_setImageAsContents:(id)contents;	// 0x33f285
- (void)_updateCoverArt;	// 0x33efe5
- (void)dealloc;	// 0x33ede9
// converted property getter: - (BOOL)deletterboxImage;	// 0x33ef05
// converted property getter: - (id)image;	// 0x33ee79
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x33eed9
- (void)setImageProxy:(id)proxy;	// 0x33ee89
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x33ef35
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x33ef15
// converted property getter: - (BOOL)showsBorder;	// 0x33efd5
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x33ef25
@end

