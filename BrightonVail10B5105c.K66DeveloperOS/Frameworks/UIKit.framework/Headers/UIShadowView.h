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
@interface UIShadowView : UIView {
	UIImage *_image;	// 84 = 0x54
}
+ (id)bottomShadowImage;	// 0x346e9399
+ (id)topShadowImage;	// 0x346e929d
- (id)initWithFrame:(CGRect)frame;	// 0x346e9239
- (void)dealloc;	// 0x346ea8d5
- (void)drawRect:(CGRect)rect;	// 0x34772bd1
- (void)setShadowImage:(id)image forEdge:(int)edge inside:(BOOL)inside;	// 0x346e92ad
@end

