/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRProviderDataSourceAdapter : NSObject {
@private
	float _itemHeight;	// 4 = 0x4
	NSArray *_providers;	// 8 = 0x8
	BOOL _showsDividers;	// 12 = 0xc
	long _gridColumnCount;	// 16 = 0x10
	NSArray *_shelfSectionTitles;	// 20 = 0x14
	BOOL _variableItemHeight;	// 24 = 0x18
}
@property(assign) long gridColumnCount;	// G=0x329ab0e1; S=0x329ab0f1; @synthesize=_gridColumnCount
@property(retain) NSArray *providers;	// G=0x329ab089; S=0x329ab09d; @synthesize=_providers
@property(retain) NSArray *shelfSectionTitles;	// G=0x329ab101; S=0x329ab115; @synthesize=_shelfSectionTitles
@property(assign) BOOL showsDividers;	// G=0x329ab0c1; S=0x329ab0d1; @synthesize=_showsDividers
@property(assign) BOOL variableItemHeight;	// G=0x329ab139; S=0x329ab149; @synthesize=_variableItemHeight
- (id)_dataAtIndex:(long)index;	// 0x329ab159
- (void)dealloc;	// 0x329aa855
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x329aab55
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x329aaadd
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x329aaa39
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x329aaaa1
// declared property getter: - (long)gridColumnCount;	// 0x329ab0e1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x329aa9ed
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x329aa9e9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x329aa8b5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x329aa979
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x329aa9b1
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x329aada1
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x329aac3d
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x329aad39
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x329aad01
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x329aae65
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x329aaefd
- (long)numberOfColumnsInGrid:(id)grid;	// 0x329aaa29
- (long)numberOfItemsInGrid:(id)grid;	// 0x329aa9f1
- (long)numberOfSectionsInList:(id)list;	// 0x329aa959
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x329aace1
// declared property getter: - (id)providers;	// 0x329ab089
// declared property setter: - (void)setGridColumnCount:(long)count;	// 0x329ab0f1
// declared property setter: - (void)setProviders:(id)providers;	// 0x329ab09d
// declared property setter: - (void)setShelfSectionTitles:(id)titles;	// 0x329ab115
// declared property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x329ab0d1
// declared property setter: - (void)setVariableItemHeight:(BOOL)height;	// 0x329ab149
// declared property getter: - (id)shelfSectionTitles;	// 0x329ab101
// declared property getter: - (BOOL)showsDividers;	// 0x329ab0c1
// declared property getter: - (BOOL)variableItemHeight;	// 0x329ab139
@end
