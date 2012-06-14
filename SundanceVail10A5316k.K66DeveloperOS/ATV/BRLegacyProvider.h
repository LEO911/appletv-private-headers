/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"
#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x2aa5a5; S=0x2aa595; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x2aadfd
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x2aace1
- (void)_updateDividers;	// 0x2aab89
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2aa5b5
- (id)controlFactory;	// 0x2aa8d9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2aaa69
- (id)dataAtIndex:(long)index;	// 0x2aa9b5
- (long)dataCount;	// 0x2aa8dd
// converted property getter: - (id)datasource;	// 0x2aa5a5
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x2aaa55
- (void)dealloc;	// 0x2aa549
- (id)hashForDataAtIndex:(long)index;	// 0x2aa9f9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x2aaad1
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x2aaa45
- (void)removeDividerAtIndex:(long)index;	// 0x2aa7a9
- (void)removeDividers;	// 0x2aa895
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2aa595
@end
