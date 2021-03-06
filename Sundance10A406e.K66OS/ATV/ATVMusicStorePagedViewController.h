/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : XXUnknownSuperclass {
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1cca85
- (id)init;	// 0x1ccb41
- (id)initWithStoreItem:(id)storeItem;	// 0x1ccb45
- (long)_itemsPerPage;	// 0x1cd65d
- (long)_pageCount;	// 0x1cd661
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1cd269
- (void)dealloc;	// 0x1ccdf9
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1cd265
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1cd651
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1cd301
- (long)numberOfItemsInGrid:(id)grid;	// 0x1cd26d
- (long)pageCountForPagedView:(id)pagedView;	// 0x1cd0d9
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1cd261
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1ccf65
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1cd0e9
- (void)toggleCursorMode:(id)mode;	// 0x1cce9d
- (id)view;	// 0x1ccf61
@end

