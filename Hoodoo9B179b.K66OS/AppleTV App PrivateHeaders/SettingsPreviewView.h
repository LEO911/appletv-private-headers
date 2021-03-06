/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRReflectionControl, BRImageControl, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface SettingsPreviewView : XXUnknownSuperclass {
	BRImageControl *_image;	// 48 = 0x30
	BRReflectionControl *_imageReflectionControl;	// 52 = 0x34
	BRImageControl *_overlayControl;	// 56 = 0x38
	BRReflectionControl *_overlayReflectionControl;	// 60 = 0x3c
	BRTextControl *_instructionsLabel;	// 64 = 0x40
	BRTextControl *_progressLabel;	// 68 = 0x44
	BRProgressBarWidget *_progressBar;	// 72 = 0x48
	CGPoint _imageOffset;	// 76 = 0x4c
	CGSize _imageScale;	// 84 = 0x54
	CGPoint _overlayOffset;	// 92 = 0x5c
	CGSize _overlayScale;	// 100 = 0x64
}
@property(assign, getter=isProgressHidden) BOOL progressHidden;	// G=0xb4e9d; S=0xb4ec1; converted property
@property(readonly, retain) BRTextControl *progressLabel;	// G=0xb4f8d; converted property
+ (id)defaultProductImage;	// 0xb4141
- (id)init;	// 0xb4195
- (void).cxx_destruct;	// 0xb5041
- (id)accessibilityLabel;	// 0xb4fa1
// converted property getter: - (BOOL)isProgressHidden;	// 0xb4e9d
- (void)layoutSubcontrols;	// 0xb4695
- (id)progress;	// 0xb4f79
// converted property getter: - (id)progressLabel;	// 0xb4f8d
- (void)setImage:(id)image;	// 0xb4c0d
- (void)setImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0xb4c39
- (void)setImageReflectionAmount:(float)amount;	// 0xb4ced
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0xb4e49
- (void)setOverlayImage:(id)image withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0xb4d41
- (void)setOverlayReflectionAmount:(float)amount;	// 0xb4df5
// converted property setter: - (void)setProgressHidden:(BOOL)hidden;	// 0xb4ec1
- (void)setProgressLabel:(id)label withAttributes:(id)attributes;	// 0xb4f05
- (void)setProgressPercentage:(float)percentage;	// 0xb4f59
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xb4625
@end

