/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldAtomBackgroundView : UIView {
@private
	int _atomStyle;	// 48 = 0x30
}
@property(assign) int atomStyle;	// G=0x30193bc1; S=0x30193ce9; converted property
+ (id)_blueAtomBackgroundImage;	// 0x301f51e1
+ (id)_purpleAtomBackgroundImage;	// 0x30197dcd
- (id)initWithFrame:(CGRect)frame;	// 0x30193b49
// converted property getter: - (int)atomStyle;	// 0x30193bc1
- (void)drawRect:(CGRect)rect;	// 0x30197cfd
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x30193ce9
@end

