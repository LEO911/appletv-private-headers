/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStatusBarItemView.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
@private
	NSString *_contentsString;	// 112 = 0x70
	float _letterSpacing;	// 116 = 0x74
	BOOL _ellipsize;	// 120 = 0x78
}
- (id)contentsImageForStyle:(int)style;	// 0x303e6f65
- (void)dealloc;	// 0x303e6d79
- (float)extraRightPadding;	// 0x303e7135
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x303e6dc5
- (BOOL)usesSmallerTextFont;	// 0x303e7131
@end
