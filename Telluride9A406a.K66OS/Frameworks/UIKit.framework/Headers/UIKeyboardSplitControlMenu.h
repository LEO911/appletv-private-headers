/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {
@private
	NSMutableArray *m_menuOptions;	// 136 = 0x88
	CGSize m_preferredSize;	// 140 = 0x8c
}
@property(readonly, assign) CGSize preferredSize;	// G=0x35a30b5d; converted property
+ (id)activeInstance;	// 0x35784195
+ (id)sharedInstance;	// 0x35a30a8d
- (id)initWithFrame:(CGRect)frame;	// 0x35a30849
- (void)dealloc;	// 0x35a30a41
- (int)defaultSelectedIndex;	// 0x35a30b79
- (void)didSelectItemAtIndex:(int)index;	// 0x35a30c09
- (int)numberOfItems;	// 0x35a30b11
// converted property getter: - (CGSize)preferredSize;	// 0x35a30b5d
- (id)titleForItemAtIndex:(int)index;	// 0x35a30b81
@end
