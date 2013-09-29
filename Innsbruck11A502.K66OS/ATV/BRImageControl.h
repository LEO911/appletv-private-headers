/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRImageControl : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	ATVImage *_image;	// 88 = 0x58
	BOOL _renderingImage;	// 92 = 0x5c
	BOOL _autoDownsample;	// 93 = 0x5d
	NSString *_artworkIdentifier;	// 96 = 0x60
	BOOL _sizeIgnoresPixelBounds;	// 100 = 0x64
}
@property(assign) BOOL automaticDownsample;	// G=0x36cea9; S=0x36ce25; converted property
@property(retain) ATVImage *image;	// G=0x36cdb9; S=0x36ccd1; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x36cf75; S=0x36cf65; converted property
- (void)_imageUpdated:(id)updated;	// 0x36d29d
- (void)_loadImage;	// 0x36d3a5
- (void)_unloadImage;	// 0x36d341
- (id)accessibilityLabel;	// 0x36d241
- (id)accessibilityTraitsList;	// 0x36d261
- (float)aspectRatio;	// 0x36ce05
// converted property getter: - (BOOL)automaticDownsample;	// 0x36cea9
- (void)controlWasActivated;	// 0x36d15d
- (void)controlWasDeactivated;	// 0x36d1ad
- (void)dealloc;	// 0x36cb25
- (void)drawRect:(CGRect)rect;	// 0x36cf85
// converted property getter: - (id)image;	// 0x36cdb9
- (CGSize)pixelBounds;	// 0x36cdc9
- (void)setArtworkIdentifier:(id)identifier;	// 0x36ceb9
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x36ce25
// converted property setter: - (void)setImage:(id)image;	// 0x36ccd1
- (void)setImageAsContents:(id)contents;	// 0x36cd31
- (void)setImageProxy:(id)proxy;	// 0x36cbc9
- (void)setImageProxyAsContents:(id)contents;	// 0x36cc4d
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x36cf65
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x36cf75
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36d061
- (CGSize)sizeThatReallyFitsMaintainingAspectRatio:(CGSize)ratio;	// 0x4e632d
- (void)windowMaxBoundsChanged;	// 0x36d1fd
@end
