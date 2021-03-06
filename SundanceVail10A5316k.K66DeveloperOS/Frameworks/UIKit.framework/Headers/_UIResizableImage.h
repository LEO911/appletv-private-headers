/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"


__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage {
@private
	BOOL _alwaysStretches;	// 36 = 0x24
	UIEdgeInsets _capInsets;	// 40 = 0x28
}
@property(readonly, assign) UIEdgeInsets capInsets;	// G=0x300c25e5; converted property
- (id)initWithCoder:(id)coder;	// 0x30228a09
- (id)initWithImage:(id)image capInsets:(UIEdgeInsets)insets;	// 0x300c2429
- (CGRect)_contentStretchInPixels;	// 0x300c2609
- (id)_initWithOtherImage:(id)otherImage;	// 0x302288dd
- (BOOL)_isResizable;	// 0x300b5009
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x300c250d
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x30228bd5
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x300c24fd
// converted property getter: - (UIEdgeInsets)capInsets;	// 0x300c25e5
- (void)encodeWithCoder:(id)coder;	// 0x30228b6d
@end

