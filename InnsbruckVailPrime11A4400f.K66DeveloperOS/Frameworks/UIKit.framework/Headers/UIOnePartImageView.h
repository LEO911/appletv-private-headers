/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIOnePartImageView : UIView {
	CGRect _fromRect;	// 96 = 0x60
	UIImage *_image;	// 112 = 0x70
}
- (void)dealloc;	// 0x2f7dd1c9
- (void)drawRect:(CGRect)rect;	// 0x2f7dd261
- (void)setFromRect:(CGRect)rect;	// 0x2f7dd23d
- (void)setImage:(id)image;	// 0x2f7dd215
@end

