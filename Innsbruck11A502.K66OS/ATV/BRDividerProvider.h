/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRDividerProvider : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory, BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRHorizontalDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x36dbd5; S=0x36dba9; converted property
+ (id)providerWithProvider:(id)provider;	// 0x36da81
- (id)initWithProvider:(id)provider;	// 0x36d8f5
- (void)_providerDataSetChanged:(id)changed;	// 0x36df95
- (void)_providerItemsModified:(id)modified;	// 0x36df21
- (id)_shiftRangesDown:(id)down;	// 0x36de49
- (BOOL)_shouldShowDivider;	// 0x36ddf9
- (void)_updateTopDividerControl;	// 0x36dd59
- (id)accessibilityLabel;	// 0x36dffd
- (void)addDividerWithLabel:(id)label;	// 0x36dadd
- (id)controlFactory;	// 0x36dc05
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x36e01d
- (id)dataAtIndex:(long)index;	// 0x36dc45
- (long)dataCount;	// 0x36dc09
- (void)dealloc;	// 0x36d9f1
- (id)divider;	// 0x36dbf5
// converted property getter: - (BOOL)dividerHidden;	// 0x36dbd5
- (BOOL)dividerVisible;	// 0x36dbe5
- (id)hashForDataAtIndex:(long)index;	// 0x36dc8d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x36e071
- (id)identifier;	// 0x36dcc9
- (id)provider;	// 0x36dacd
- (void)removeDivider;	// 0x36db69
- (void)reset;	// 0x36dd11
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x36dba9
@end
