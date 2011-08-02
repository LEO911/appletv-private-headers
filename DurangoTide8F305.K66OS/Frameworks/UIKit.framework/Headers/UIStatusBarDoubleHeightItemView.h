/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
@private
	NSString *_contentsString;	// 72 = 0x48
	float _letterSpacing;	// 76 = 0x4c
	BOOL _ellipsize;	// 80 = 0x50
}
- (id)contentsImageForStyle:(int)style;	// 0x32258b1d
- (void)dealloc;	// 0x32258ad5
- (float)extraRightPadding;	// 0x32258acd
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x32258c35
- (BOOL)usesSmallerTextFont;	// 0x32258ac9
@end
