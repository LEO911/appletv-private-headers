/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRImage;

__attribute__((visibility("hidden")))
@interface ATVButtonSearchControl : BRControl {
	BRImage *_image;	// 84 = 0x54
	BRImage *_activeImage;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRImageControl *_imageControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRImage *activeImage;	// G=0x3ee26d; S=0x3ee27d; @synthesize=_activeImage
@property(retain, nonatomic) BRImage *image;	// G=0x3ee235; S=0x3ee245; @synthesize=_image
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0x3ee2dd; S=0x3ee2ed; @synthesize=_imageControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x3ee2a5; S=0x3ee2b5; @synthesize=_titleControl
- (id)init;	// 0x3edbe5
- (void).cxx_destruct;	// 0x3ee315
- (id)accessibilityLabel;	// 0x3ee1b1
- (id)accessibilityTraitsList;	// 0x3ee1f9
// declared property getter: - (id)activeImage;	// 0x3ee26d
- (void)controlWasFocused;	// 0x3ee081
- (void)controlWasUnfocused;	// 0x3ee115
// declared property getter: - (id)image;	// 0x3ee235
// declared property getter: - (id)imageControl;	// 0x3ee2dd
- (BOOL)isAccessibilityElement;	// 0x3ee1ad
- (void)layoutSubcontrols;	// 0x3edebd
// declared property setter: - (void)setActiveImage:(id)image;	// 0x3ee27d
// declared property setter: - (void)setImage:(id)image;	// 0x3ee245
// declared property setter: - (void)setImageControl:(id)control;	// 0x3ee2ed
// declared property setter: - (void)setTitleControl:(id)control;	// 0x3ee2b5
// declared property getter: - (id)titleControl;	// 0x3ee2a5
@end

