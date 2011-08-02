/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRPanelControl.h"
#import "BackRow-Structs.h"

@class NSArray, NSDictionary;

@interface BRTabControl : BRPanelControl {
@private
	int _selectedTabIndex;	// 72 = 0x48
	float _scaledTextPadding;	// 76 = 0x4c
	float _scaledPreferredHeight;	// 80 = 0x50
	int _tabBeingDeselected;	// 84 = 0x54
	id _tabControlDelegate;	// 88 = 0x58
	NSArray *_greyImages;	// 92 = 0x5c
	NSArray *_blackImages;	// 96 = 0x60
	NSArray *_blueImages;	// 100 = 0x64
	NSDictionary *_tabItemLabelAttributes;	// 104 = 0x68
}
@property(assign) id tabControlDelegate;	// G=0x32f7c835; S=0x32f7c845; converted property
+ (id)fullSizeTabControl;	// 0x32f7de51
+ (id)menuTabControl;	// 0x32f7db7d
- (id)init;	// 0x32f7e0bd
- (id)_centerTabImagesFromImages:(id)images;	// 0x32f7ce05
- (void)_focusChanged:(id)changed;	// 0x32f7c865
- (id)_imagesForTabItem:(id)tabItem;	// 0x32f7ca29
- (id)_leftTabImagesFromImages:(id)images;	// 0x32f7ce81
- (void)_loadTabImages;	// 0x32f7d01d
- (id)_rightTabImagesFromImages:(id)images;	// 0x32f7cd31
- (void)_updateFocusNotifications;	// 0x32f7c891
- (void)_updateTabItemNames:(int)names;	// 0x32f7c91d
- (void)addTabItem:(id)item;	// 0x32f7da65
- (void)addTabItems:(id)items;	// 0x32f7d839
- (BOOL)brEventAction:(id)action;	// 0x32f7dc35
- (void)controlWasFocused;	// 0x32f7d32d
- (void)controlWasUnfocused;	// 0x32f7d285
- (void)dealloc;	// 0x32f7dad5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32f7d3d5
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x32f7df09
- (void)removeAllTabItems;	// 0x32f7d80d
- (void)removeTabItem:(id)item;	// 0x32f7d73d
- (void)selectNextTabItem;	// 0x32f7d445
- (void)selectPreviousTabItem;	// 0x32f7d4b5
- (void)selectTabItem:(id)item;	// 0x32f7d55d
- (void)selectTabItemAtIndex:(int)index;	// 0x32f7d501
- (id)selectedTabItem;	// 0x32f7d6e9
- (int)selectedTabItemIndex;	// 0x32f7c855
- (void)setScaledPreferredHeight:(float)height;	// 0x32f7c825
- (void)setScaledTextPadding:(float)padding;	// 0x32f7c815
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x32f7c845
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x32f7da9d
- (void)setTabItemNonSelectedImages:(id)images;	// 0x32f7cf2d
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x32f7cfcd
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x32f7cf7d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f7dd01
// converted property getter: - (id)tabControlDelegate;	// 0x32f7c835
- (int)tabItemCount;	// 0x32f7d719
- (id)tabItems;	// 0x32f7d825
@end
