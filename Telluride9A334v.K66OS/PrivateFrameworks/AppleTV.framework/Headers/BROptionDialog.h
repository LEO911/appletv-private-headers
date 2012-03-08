/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSMutableArray, NSDictionary, NSString;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 124 = 0x7c
	int _currentSelection;	// 128 = 0x80
	NSDictionary *_userInfo;	// 132 = 0x84
	NSMutableArray *_options;	// 136 = 0x88
	id _delegate;	// 140 = 0x8c
	SEL _actionSelector;	// 144 = 0x90
}
@property(retain) NSString *tag;	// G=0x331ee009; S=0x331edfc9; converted property
@property(retain) NSDictionary *userInfo;	// G=0x331ee059; S=0x331ee019; converted property
- (id)init;	// 0x331edc9d
- (BOOL)_itemSelected:(id)selected;	// 0x331ee191
- (void)_setSelectedIndex:(long)index;	// 0x331ee259
- (void)addOptionText:(id)text;	// 0x331edea1
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x331edeed
- (void)dealloc;	// 0x331eddbd
- (float)heightForRow:(long)row;	// 0x331ee0d1
- (long)itemCount;	// 0x331ee0b1
- (id)itemForRow:(long)row;	// 0x331ee121
- (float)listVerticalOffset;	// 0x331ee069
- (BOOL)rowSelectable:(long)selectable;	// 0x331ee0d5
- (long)selectedIndex;	// 0x331edfb9
- (id)selectedText;	// 0x331edf65
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x331ede49
// converted property setter: - (void)setTag:(id)tag;	// 0x331edfc9
// converted property setter: - (void)setUserInfo:(id)info;	// 0x331ee019
// converted property getter: - (id)tag;	// 0x331ee009
- (id)titleForRow:(long)row;	// 0x331ee0d9
// converted property getter: - (id)userInfo;	// 0x331ee059
@end
