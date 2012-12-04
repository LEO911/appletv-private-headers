/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, ATVMerchant, NSMutableDictionary, ATVFeedElement;

__attribute__((visibility("hidden")))
@interface ATVFeedDataSource : XXUnknownSuperclass {
	NSString *_templateName;	// 4 = 0x4
	long _gridColumnCount;	// 8 = 0x8
	NSDictionary *_data;	// 12 = 0xc
	ATVFeedElement *_feedElement;	// 16 = 0x10
	ATVMerchant *_merchant;	// 20 = 0x14
	BOOL _usesVariableItemHeight;	// 24 = 0x18
	BOOL _cacheControls;	// 25 = 0x19
	NSMutableDictionary *_cachedControlsByIndexPath;	// 28 = 0x1c
	XXStruct_qlg9jA _itemHeight;	// 32 = 0x20
}
@property(assign) BOOL cacheControls;	// G=0x14ca15; S=0x14ca2d; @synthesize=_cacheControls
@property(retain) NSMutableDictionary *cachedControlsByIndexPath;	// G=0x14ca45; S=0x14ca59; @synthesize=_cachedControlsByIndexPath
@property(readonly, assign) NSDictionary *data;	// G=0x14c999; @synthesize=_data
@property(readonly, assign) ATVFeedElement *feedElement;	// G=0x14c9ad; @synthesize=_feedElement
@property(assign) long gridColumnCount;	// G=0x14c96d; S=0x14c981; @synthesize=_gridColumnCount
@property(assign) XXStruct_qlg9jA itemHeight;	// G=0x14ca69; S=0x14ca81; @synthesize=_itemHeight
@property(retain) ATVMerchant *merchant;	// G=0x14c9c1; S=0x14c9d5; @synthesize=_merchant
@property(retain) NSString *templateName;	// G=0x14c949; S=0x14c95d; @synthesize=_templateName
@property(assign) BOOL usesVariableItemHeight;	// G=0x14c9e5; S=0x14c9fd; @synthesize=_usesVariableItemHeight
- (id)initWithData:(id)data;	// 0x14ada5
- (id)initWithData:(id)data templateName:(id)name;	// 0x14adb9
- (id)initWithFeedElement:(id)feedElement;	// 0x14ae35
- (id)initWithFeedElement:(id)feedElement templateName:(id)name;	// 0x14ae49
- (void)_cacheControl:(id)control section:(long)section index:(long)index;	// 0x14ca99
// declared property getter: - (BOOL)cacheControls;	// 0x14ca15
// declared property getter: - (id)cachedControlsByIndexPath;	// 0x14ca45
// declared property getter: - (id)data;	// 0x14c999
- (void)dealloc;	// 0x14aeb1
// declared property getter: - (id)feedElement;	// 0x14c9ad
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x14b9cd
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x14b7c1
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x14b44d
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x14b70d
// declared property getter: - (long)gridColumnCount;	// 0x14c96d
// declared property getter: - (XXStruct_qlg9jA)itemHeight;	// 0x14ca69
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x14c621
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x14c091
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x14bb09
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x14bf09
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x14bdf5
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x14c2c1
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x14c3dd
// declared property getter: - (id)merchant;	// 0x14c9c1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x14b43d
- (long)numberOfItemsInGrid:(id)grid;	// 0x14b3c5
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x14bd69
// declared property setter: - (void)setCacheControls:(BOOL)controls;	// 0x14ca2d
// declared property setter: - (void)setCachedControlsByIndexPath:(id)path;	// 0x14ca59
// declared property setter: - (void)setGridColumnCount:(long)count;	// 0x14c981
// declared property setter: - (void)setItemHeight:(XXStruct_qlg9jA)height;	// 0x14ca81
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x14c9d5
// declared property setter: - (void)setTemplateName:(id)name;	// 0x14c95d
// declared property setter: - (void)setUsesVariableItemHeight:(BOOL)height;	// 0x14c9fd
// declared property getter: - (id)templateName;	// 0x14c949
- (void)updateGrid:(id)grid withFeedElement:(id)feedElement;	// 0x14b1fd
- (void)updateShelf:(id)shelf withFeedElement:(id)feedElement;	// 0x14af51
// declared property getter: - (BOOL)usesVariableItemHeight;	// 0x14c9e5
@end
