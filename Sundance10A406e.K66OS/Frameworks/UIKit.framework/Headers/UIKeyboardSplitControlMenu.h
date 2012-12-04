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
	NSMutableArray *m_menuOptions;	// 180 = 0xb4
	CGSize m_preferredSize;	// 184 = 0xb8
}
@property(readonly, assign) CGSize preferredSize;	// G=0x30c8c955; converted property
+ (id)activeInstance;	// 0x309d71b5
+ (id)sharedInstance;	// 0x30a126e1
- (id)initWithFrame:(CGRect)frame;	// 0x30c8c691
- (void)dealloc;	// 0x30c8c8d5
- (int)defaultSelectedIndex;	// 0x30c8c96d
- (void)didSelectItemAtIndex:(int)index;	// 0x30c8ca05
- (int)numberOfItems;	// 0x30c8c925
// converted property getter: - (CGSize)preferredSize;	// 0x30c8c955
- (id)titleForItemAtIndex:(int)index;	// 0x30c8c975
@end
