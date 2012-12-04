/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
	BOOL _waitingForImage;	// 104 = 0x68
	BRMerchant *_merchant;	// 108 = 0x6c
	BRImage *_image;	// 112 = 0x70
	id<BRImageProxy> _imageProxy;	// 116 = 0x74
}
@property(retain) BRImage *image;	// G=0x12ed99; S=0x12edad; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x12edbd; S=0x12edd1; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x12ed75; S=0x12ed89; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x12eb39
- (void)_imageLoadFailed:(id)failed;	// 0x12eebd
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x12ede1
- (void)_setWaitingForImage:(BOOL)image;	// 0x12ef7d
- (void)dealloc;	// 0x12ec19
- (void)drawRect:(CGRect)rect;	// 0x12ecbd
// declared property getter: - (id)image;	// 0x12ed99
// declared property getter: - (id)imageProxy;	// 0x12edbd
// declared property getter: - (id)merchant;	// 0x12ed75
// declared property setter: - (void)setImage:(id)image;	// 0x12edad
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x12edd1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x12ed89
@end
