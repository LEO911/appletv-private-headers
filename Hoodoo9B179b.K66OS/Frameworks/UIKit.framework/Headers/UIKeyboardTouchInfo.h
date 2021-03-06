/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITouch, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject {
@private
	UITouch *_touch;	// 4 = 0x4
	UIKBTree *_key;	// 8 = 0x8
	UIKBTree *_keyplane;	// 12 = 0xc
	UIKBTree *_slidOffKey;	// 16 = 0x10
	CGPoint _initialPoint;	// 20 = 0x14
	int _stage;	// 28 = 0x1c
}
@property(assign, nonatomic) CGPoint initialPoint;	// G=0x3316b215; S=0x32fc9429; @synthesize=_initialPoint
@property(retain, nonatomic) UIKBTree *key;	// G=0x32fd2b55; S=0x32fc9ffd; @synthesize=_key
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x32fd2b65; S=0x32fc9405; @synthesize=_keyplane
@property(retain, nonatomic) UIKBTree *slidOffKey;	// G=0x3316b205; S=0x32fd6159; @synthesize=_slidOffKey
@property(assign, nonatomic) int stage;	// G=0x32fd2c51; S=0x32fc93f5; @synthesize=_stage
@property(retain, nonatomic) UITouch *touch;	// G=0x32fc98ed; S=0x32fc93d1; @synthesize=_touch
- (void)dealloc;	// 0x32fd60d9
// declared property getter: - (CGPoint)initialPoint;	// 0x3316b215
// declared property getter: - (id)key;	// 0x32fd2b55
// declared property getter: - (id)keyplane;	// 0x32fd2b65
// declared property setter: - (void)setInitialPoint:(CGPoint)point;	// 0x32fc9429
// declared property setter: - (void)setKey:(id)key;	// 0x32fc9ffd
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x32fc9405
// declared property setter: - (void)setSlidOffKey:(id)key;	// 0x32fd6159
// declared property setter: - (void)setStage:(int)stage;	// 0x32fc93f5
// declared property setter: - (void)setTouch:(id)touch;	// 0x32fc93d1
// declared property getter: - (id)slidOffKey;	// 0x3316b205
// declared property getter: - (int)stage;	// 0x32fd2c51
// declared property getter: - (id)touch;	// 0x32fc98ed
@end

