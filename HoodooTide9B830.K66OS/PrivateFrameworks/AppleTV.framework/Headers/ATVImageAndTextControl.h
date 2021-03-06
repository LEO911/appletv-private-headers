/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSAttributedString, BRImage, BRImageControl;

@interface ATVImageAndTextControl : BRControl {
@private
	BRImage *_image;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	BOOL _imageOnLeft;	// 56 = 0x38
	float _preferredImageHeight;	// 60 = 0x3c
	float _gapBetweenImageAndText;	// 64 = 0x40
	BRImageControl *_imageControl;	// 68 = 0x44
	BRTextControl *_textControl;	// 72 = 0x48
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0x32b16b85; S=0x32b16b95; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) BRImage *image;	// G=0x32b16b05; S=0x32b16b15; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0x32b16ba5; S=0x32b16bb9; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0x32b16b45; S=0x32b16b55; @synthesize=_imageOnLeft
@property(assign, nonatomic) float preferredImageHeight;	// G=0x32b16b65; S=0x32b16b75; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0x32b16b25; S=0x32b16b35; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0x32b16bdd; S=0x32b16bf1; @synthesize=_textControl
- (id)initWithImage:(id)image text:(id)text;	// 0x32b165a1
- (void)_imageDidChange;	// 0x32b16c15
- (void)_textDidChange;	// 0x32b16cc1
- (void)dealloc;	// 0x32b1671d
// declared property getter: - (float)gapBetweenImageAndText;	// 0x32b16b85
// declared property getter: - (id)image;	// 0x32b16b05
// declared property getter: - (id)imageControl;	// 0x32b16ba5
// declared property getter: - (BOOL)imageOnLeft;	// 0x32b16b45
- (void)layoutSubcontrols;	// 0x32b1697d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32b167ed
// declared property getter: - (float)preferredImageHeight;	// 0x32b16b65
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0x32b16b95
// declared property setter: - (void)setImage:(id)image;	// 0x32b16b15
// declared property setter: - (void)setImageControl:(id)control;	// 0x32b16bb9
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0x32b16b55
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0x32b16b75
// declared property setter: - (void)setText:(id)text;	// 0x32b16b35
// declared property setter: - (void)setTextControl:(id)control;	// 0x32b16bf1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32b168a5
// declared property getter: - (id)text;	// 0x32b16b25
// declared property getter: - (id)textControl;	// 0x32b16bdd
@end

