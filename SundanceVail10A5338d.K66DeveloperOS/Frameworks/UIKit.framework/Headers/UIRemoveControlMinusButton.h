/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl {
	unsigned _rotated : 1;	// 106 = 0x6a
	unsigned _rotating : 1;	// 106 = 0x6a
	unsigned _hiding : 1;	// 106 = 0x6a
	unsigned _showAsPlus : 1;	// 106 = 0x6a
	unsigned _reserved : 28;	// 106 = 0x6a
	float _verticalOffset;	// 112 = 0x70
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x30dfcbf1; S=0x30dfcbd9; converted property
+ (float)defaultWidth;	// 0x30d2b801
+ (id)minusImage;	// 0x30d2b84d
+ (id)plusImage;	// 0x30dfc8d5
- (id)initWithRemoveControl:(id)removeControl;	// 0x30dfc90d
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x30dfcebd
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x30dfcd3d
- (void)dealloc;	// 0x30dfcb7d
- (void)drawRect:(CGRect)rect;	// 0x30dfcc05
// converted property getter: - (BOOL)isHiding;	// 0x30dfcbf1
- (BOOL)isRotated;	// 0x30dfce95
- (BOOL)isRotating;	// 0x30dfcea9
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x30dfcbd9
- (void)toggleRotate:(BOOL)rotate;	// 0x30dfcd79
@end

