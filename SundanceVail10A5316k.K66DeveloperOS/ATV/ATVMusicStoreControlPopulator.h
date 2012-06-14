/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : XXUnknownSuperclass {
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x1c795d; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x1c54d1
- (id)init;	// 0x1c5511
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x1c7e51
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x1c7fb9
- (float)_shelfWidthForData:(id)data;	// 0x1c7eb9
- (id)buttonForData:(id)data;	// 0x1c55c9
- (float)buttonHeightForData:(id)data;	// 0x1c75d1
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x1c7971
- (id)gridForData:(id)data;	// 0x1c66d9
- (float)gridHeightForData:(id)data;	// 0x1c77fd
- (id)listForData:(id)data;	// 0x1c6a8d
- (float)listHeightForData:(id)data;	// 0x1c7801
- (id)listRowForData:(id)data;	// 0x1c6d3d
- (float)listRowHeightForData:(id)data;	// 0x1c7805
- (id)mainMenuButtonForData:(id)data;	// 0x1c5d5d
// declared property getter: - (unsigned)matchOrder;	// 0x1c795d
- (id)mediaPreviewControlForData:(id)data;	// 0x1c729d
- (float)mediaPreviewHeightForData:(id)data;	// 0x1c794d
- (id)pagedViewForData:(id)data;	// 0x1c759d
- (float)pagedViewHeightForData:(id)data;	// 0x1c7951
- (id)placeholderImageForData:(id)data;	// 0x1c7a7d
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x1c7dd1
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x1c7c99
- (id)playButtonEnabledMenuItem;	// 0x1c8209
- (id)shelfForData:(id)data;	// 0x1c5ef9
- (float)shelfHeightForData:(id)data;	// 0x1c76e1
@end
