/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

@interface UI9PartImageView : UIView {
	UIView *_topLeft;	// 44 = 0x2c
	UIView *_topMiddle;	// 48 = 0x30
	UIView *_topRight;	// 52 = 0x34
	UIView *_middleLeft;	// 56 = 0x38
	UIView *_middleMiddle;	// 60 = 0x3c
	UIView *_middleRight;	// 64 = 0x40
	UIView *_bottomLeft;	// 68 = 0x44
	UIView *_bottomMiddle;	// 72 = 0x48
	UIView *_bottomRight;	// 76 = 0x4c
	XXStruct_4cr1oD _slices;	// 80 = 0x50
	UIImage *_image;	// 224 = 0xe0
	unsigned _dontReflow : 1;	// 228 = 0xe4
}
- (id)initWithFrame:(CGRect)frame image:(id)image slices:(XXStruct_4cr1oD)slices;	// 0x3021a105
- (void)dealloc;	// 0x3021a0bd
- (void)rebuildTiles;	// 0x30219f41
- (void)reflowTiles;	// 0x3021a1d1
- (void)setFrame:(CGRect)frame;	// 0x30219e31
@end

