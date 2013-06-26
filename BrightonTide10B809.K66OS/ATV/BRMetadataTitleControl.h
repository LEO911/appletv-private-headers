/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataTitleControl : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_titleSubtext;	// 88 = 0x58
	BRImageControl *_rating;	// 92 = 0x5c
	BRImageControl *_rightImage;	// 96 = 0x60
	BOOL _ratingSnapsToTitle;	// 100 = 0x64
	float _rightImageHeight;	// 104 = 0x68
}
- (id)init;	// 0x2ffcdd
- (void)_layoutSubcontrolsWithSize:(CGSize)size;	// 0x3003cd
- (id)accessibilityLabel;	// 0x300349
- (void)dealloc;	// 0x2ffe65
- (void)layoutSubcontrols;	// 0x300301
- (CGSize)renderedSize;	// 0x300111
- (void)setRating:(id)rating;	// 0x2fffed
- (void)setRatingSnapsToTitle:(BOOL)title;	// 0x300071
- (void)setRightImage:(id)image;	// 0x30009d
- (void)setRightImageFixedHeight:(float)height;	// 0x3000d9
- (void)setTitle:(id)title;	// 0x2ffef1
- (void)setTitleSubtext:(id)subtext;	// 0x2fff6d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300215
@end
