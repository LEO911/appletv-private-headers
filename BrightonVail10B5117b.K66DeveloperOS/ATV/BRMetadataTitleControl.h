/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

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
- (id)init;	// 0x2f6785
- (void)_layoutSubcontrolsWithSize:(CGSize)size;	// 0x2f6e75
- (id)accessibilityLabel;	// 0x2f6df1
- (void)dealloc;	// 0x2f690d
- (void)layoutSubcontrols;	// 0x2f6da9
- (CGSize)renderedSize;	// 0x2f6bb9
- (void)setRating:(id)rating;	// 0x2f6a95
- (void)setRatingSnapsToTitle:(BOOL)title;	// 0x2f6b19
- (void)setRightImage:(id)image;	// 0x2f6b45
- (void)setRightImageFixedHeight:(float)height;	// 0x2f6b81
- (void)setTitle:(id)title;	// 0x2f6999
- (void)setTitleSubtext:(id)subtext;	// 0x2f6a15
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f6cbd
@end
