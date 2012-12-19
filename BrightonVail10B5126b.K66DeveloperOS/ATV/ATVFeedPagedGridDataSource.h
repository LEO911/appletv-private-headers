/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVFeedPagedGridElement, ATVMerchant, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedPagedGridDataSource : XXUnknownSuperclass {
	unsigned _oldGridSelection;	// 4 = 0x4
	NSMutableArray *_grids;	// 8 = 0x8
	NSArray *_pages;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	ATVFeedPagedGridElement *_feedElement;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedPagedGridElement *feedElement;	// G=0x150755; S=0x150765; @synthesize=_feedElement
@property(readonly, assign) ATVMerchant *merchant;	// G=0x150741; @synthesize=_merchant
@property(readonly, assign) NSArray *pages;	// G=0x15072d; @synthesize=_pages
- (id)initWithFeedElement:(id)feedElement;	// 0x15004d
- (id)initWithPages:(id)pages merchant:(id)merchant;	// 0x1501ad
- (void)dealloc;	// 0x1502e9
// declared property getter: - (id)feedElement;	// 0x150755
// declared property getter: - (id)merchant;	// 0x150741
- (long)pageCountForPagedView:(id)pagedView;	// 0x1505d9
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x15066d
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x150375
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x150631
// declared property getter: - (id)pages;	// 0x15072d
// declared property setter: - (void)setFeedElement:(id)element;	// 0x150765
@end
