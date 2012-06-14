/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton {
@private
	NSString *_title;	// 212 = 0xd4
	NSString *_pressedTitle;	// 216 = 0xd8
	NSSet *_possibleTitles;	// 220 = 0xdc
}
- (id)initWithTitle:(id)title pressedTitle:(id)title2 withFont:(id)font withBarStyle:(int)barStyle withStyle:(int)style withTitleWidth:(float)titleWidth possibleTitles:(id)titles withToolbarTintColor:(id)toolbarTintColor;	// 0x301477c9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3027d76d
- (id)_scriptingInfo;	// 0x301c316d
- (void)_setPressed:(BOOL)pressed;	// 0x3027d6b9
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3027d9b9
- (void)dealloc;	// 0x301c34f1
@end
