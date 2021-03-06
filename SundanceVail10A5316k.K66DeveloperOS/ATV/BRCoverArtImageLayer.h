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
	id<BRImageProxy> _imageProxy;	// 80 = 0x50
	BRImage *_image;	// 84 = 0x54
	BOOL _deletterboxImage;	// 88 = 0x58
	BOOL _showsDefaultCoverArt;	// 89 = 0x59
	BOOL _showsBorder;	// 90 = 0x5a
	NSTimer *_setCoverArtTimer;	// 92 = 0x5c
}
@property(assign) BOOL deletterboxImage;	// G=0x318ec9; S=0x318e9d; converted property
@property(readonly, retain) BRImage *image;	// G=0x318e3d; converted property
@property(assign) BOOL showsBorder;	// G=0x318f99; S=0x318ef9; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x318ee9; S=0x318ed9; converted property
- (id)init;	// 0x318ce5
- (void)_coverArtChanged:(id)changed;	// 0x3192c1
- (void)_setCoverArtImage:(id)image;	// 0x319129
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x3190cd
- (void)_setImageAsContents:(id)contents;	// 0x319249
- (void)_updateCoverArt;	// 0x318fa9
- (void)dealloc;	// 0x318dad
// converted property getter: - (BOOL)deletterboxImage;	// 0x318ec9
// converted property getter: - (id)image;	// 0x318e3d
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x318e9d
- (void)setImageProxy:(id)proxy;	// 0x318e4d
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x318ef9
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x318ed9
// converted property getter: - (BOOL)showsBorder;	// 0x318f99
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x318ee9
@end

