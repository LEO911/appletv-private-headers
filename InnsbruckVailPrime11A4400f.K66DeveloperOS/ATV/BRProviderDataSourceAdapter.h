/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRProviderDataSourceAdapter : XXUnknownSuperclass {
	float _itemHeight;	// 4 = 0x4
	BOOL _showsDividers;	// 8 = 0x8
	BOOL _variableItemHeight;	// 9 = 0x9
	NSArray *_providers;	// 12 = 0xc
	long _gridColumnCount;	// 16 = 0x10
	NSArray *_shelfSectionTitles;	// 20 = 0x14
}
@property(assign) long gridColumnCount;	// G=0x2faf49; S=0x2faf5d; @synthesize=_gridColumnCount
@property(retain) NSArray *providers;	// G=0x2faef5; S=0x2faf09; @synthesize=_providers
@property(retain) NSArray *shelfSectionTitles;	// G=0x2faf75; S=0x2faf89; @synthesize=_shelfSectionTitles
@property(assign) BOOL showsDividers;	// G=0x2faf19; S=0x2faf31; @synthesize=_showsDividers
@property(assign) BOOL variableItemHeight;	// G=0x2faf99; S=0x2fafb1; @synthesize=_variableItemHeight
- (id)_dataAtIndex:(long)index;	// 0x2fafc9
- (void)dealloc;	// 0x2fa6e1
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2fa9e9
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x2fa971
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x2fa8cd
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x2fa935
// declared property getter: - (long)gridColumnCount;	// 0x2faf49
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2fa881
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x2fa87d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2fa745
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2fa809
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2fa845
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x2fac31
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x2faac9
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x2fabc9
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x2fab8d
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x2facf1
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x2fad6d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x2fa8bd
- (long)numberOfItemsInGrid:(id)grid;	// 0x2fa885
- (long)numberOfSectionsInList:(id)list;	// 0x2fa7e9
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x2fab6d
// declared property getter: - (id)providers;	// 0x2faef5
// declared property setter: - (void)setGridColumnCount:(long)count;	// 0x2faf5d
// declared property setter: - (void)setProviders:(id)providers;	// 0x2faf09
// declared property setter: - (void)setShelfSectionTitles:(id)titles;	// 0x2faf89
// declared property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x2faf31
// declared property setter: - (void)setVariableItemHeight:(BOOL)height;	// 0x2fafb1
// declared property getter: - (id)shelfSectionTitles;	// 0x2faf75
// declared property getter: - (BOOL)showsDividers;	// 0x2faf19
// declared property getter: - (BOOL)variableItemHeight;	// 0x2faf99
@end

