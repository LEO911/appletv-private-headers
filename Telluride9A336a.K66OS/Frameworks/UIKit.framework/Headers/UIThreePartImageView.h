/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIThreePartImageView : UIView {
@private
	XXStruct_UUz0SD _slices;	// 48 = 0x30
	UIImage *_image;	// 96 = 0x60
}
- (void)dealloc;	// 0x3540145d
- (void)drawRect:(CGRect)rect;	// 0x3540151d
- (void)setImage:(id)image;	// 0x354014a9
- (void)setSlices:(XXStruct_UUz0SD)slices;	// 0x354014d1
@end

