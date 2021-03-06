/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSAttributedString, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageAndTextControl : BRControl {
	BRImage *_image;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BOOL _imageOnLeft;	// 92 = 0x5c
	float _preferredImageHeight;	// 96 = 0x60
	float _gapBetweenImageAndText;	// 100 = 0x64
	BRImageControl *_imageControl;	// 104 = 0x68
	BRTextControl *_textControl;	// 108 = 0x6c
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0x135ea1; S=0x135eb1; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) BRImage *image;	// G=0x135e21; S=0x135e31; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0x135ec1; S=0x135ed5; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0x135e61; S=0x135e71; @synthesize=_imageOnLeft
@property(assign, nonatomic) float preferredImageHeight;	// G=0x135e81; S=0x135e91; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0x135e41; S=0x135e51; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0x135ee5; S=0x135ef9; @synthesize=_textControl
- (id)initWithImage:(id)image text:(id)text;	// 0x1358d1
- (void)_imageDidChange;	// 0x135f09
- (void)_textDidChange;	// 0x135fb1
- (void)dealloc;	// 0x135a41
// declared property getter: - (float)gapBetweenImageAndText;	// 0x135ea1
// declared property getter: - (id)image;	// 0x135e21
// declared property getter: - (id)imageControl;	// 0x135ec1
// declared property getter: - (BOOL)imageOnLeft;	// 0x135e61
- (void)layoutSubcontrols;	// 0x135ca9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x135b15
// declared property getter: - (float)preferredImageHeight;	// 0x135e81
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0x135eb1
// declared property setter: - (void)setImage:(id)image;	// 0x135e31
// declared property setter: - (void)setImageControl:(id)control;	// 0x135ed5
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0x135e71
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0x135e91
// declared property setter: - (void)setText:(id)text;	// 0x135e51
// declared property setter: - (void)setTextControl:(id)control;	// 0x135ef9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x135bd1
// declared property getter: - (id)text;	// 0x135e41
// declared property getter: - (id)textControl;	// 0x135ee5
@end

