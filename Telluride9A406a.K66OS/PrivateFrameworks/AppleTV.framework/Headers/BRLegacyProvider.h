/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x33078d95; S=0x33078d85; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x330795b5
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x330794b1
- (void)_updateDividers;	// 0x33079355
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x33078da5
- (id)controlFactory;	// 0x330790ad
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33079239
- (id)dataAtIndex:(long)index;	// 0x33079185
- (long)dataCount;	// 0x330790b1
// converted property getter: - (id)datasource;	// 0x33078d95
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x33079225
- (void)dealloc;	// 0x33078d39
- (id)hashForDataAtIndex:(long)index;	// 0x330791c9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x330792a1
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x33079215
- (void)removeDividerAtIndex:(long)index;	// 0x33078f75
- (void)removeDividers;	// 0x33079069
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x33078d85
@end
