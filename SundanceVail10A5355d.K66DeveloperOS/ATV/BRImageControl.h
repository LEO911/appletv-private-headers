/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRImageControl : BRControl {
	id<BRImageProxy> _imageProxy;	// 80 = 0x50
	BRImage *_image;	// 84 = 0x54
	BOOL _renderingImage;	// 88 = 0x58
	BOOL _autoDownsample;	// 89 = 0x59
	NSString *_artworkIdentifier;	// 92 = 0x5c
	BOOL _sizeIgnoresPixelBounds;	// 96 = 0x60
}
@property(assign) BOOL automaticDownsample;	// G=0x2baf19; S=0x2bae95; converted property
@property(retain) BRImage *image;	// G=0x2bae29; S=0x2bad41; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x2bafe5; S=0x2bafd5; converted property
- (void)_imageUpdated:(id)updated;	// 0x2bb2b1
- (void)_loadImage;	// 0x2bb3b9
- (void)_unloadImage;	// 0x2bb355
- (id)accessibilityLabel;	// 0x2bb255
- (id)accessibilityTraitsList;	// 0x2bb275
- (float)aspectRatio;	// 0x2bae75
// converted property getter: - (BOOL)automaticDownsample;	// 0x2baf19
- (void)controlWasActivated;	// 0x2bb1c9
- (void)controlWasDeactivated;	// 0x2bb1ed
- (void)dealloc;	// 0x2bab95
- (void)drawRect:(CGRect)rect;	// 0x2baff5
// converted property getter: - (id)image;	// 0x2bae29
- (CGSize)pixelBounds;	// 0x2bae39
- (void)setArtworkIdentifier:(id)identifier;	// 0x2baf29
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x2bae95
// converted property setter: - (void)setImage:(id)image;	// 0x2bad41
- (void)setImageAsContents:(id)contents;	// 0x2bada1
- (void)setImageProxy:(id)proxy;	// 0x2bac39
- (void)setImageProxyAsContents:(id)contents;	// 0x2bacbd
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x2bafd5
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x2bafe5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2bb0c9
- (void)windowMaxBoundsChanged;	// 0x2bb211
@end

