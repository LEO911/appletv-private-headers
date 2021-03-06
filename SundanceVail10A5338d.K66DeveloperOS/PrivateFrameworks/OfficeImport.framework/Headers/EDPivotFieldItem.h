/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDPivotFieldItem : NSObject {
	bool mChildItems;	// 4 = 0x4
	bool mExpanded;	// 5 = 0x5
	bool mCalculatedMember;	// 6 = 0x6
	bool mMissed;	// 7 = 0x7
	bool mHidden;	// 8 = 0x8
	bool mDetailsHidden;	// 9 = 0x9
	int mType;	// 12 = 0xc
	unsigned mItemIndex;	// 16 = 0x10
}
@property(assign) bool calculatedMember;	// G=0x33b80319; S=0x33b0f629; converted property
@property(assign) bool childItems;	// G=0x33b802f1; S=0x33b0f609; converted property
@property(assign) bool detailsHidden;	// G=0x33b80355; S=0x33b0f659; converted property
@property(assign) bool expanded;	// G=0x33b80305; S=0x33b0f619; converted property
@property(assign) bool hidden;	// G=0x33b80341; S=0x33b0f649; converted property
@property(assign) unsigned itemIndex;	// G=0x33b80369; S=0x33b0f669; converted property
@property(assign) bool missed;	// G=0x33b8032d; S=0x33b0f639; converted property
@property(assign) int type;	// G=0x33b80379; S=0x33b0f84d; converted property
+ (id)pivotFieldItem;	// 0x33b0f51d
- (id)init;	// 0x33b0f565
// converted property getter: - (bool)calculatedMember;	// 0x33b80319
// converted property getter: - (bool)childItems;	// 0x33b802f1
// converted property getter: - (bool)detailsHidden;	// 0x33b80355
// converted property getter: - (bool)expanded;	// 0x33b80305
// converted property getter: - (bool)hidden;	// 0x33b80341
// converted property getter: - (unsigned)itemIndex;	// 0x33b80369
// converted property getter: - (bool)missed;	// 0x33b8032d
// converted property setter: - (void)setCalculatedMember:(bool)member;	// 0x33b0f629
// converted property setter: - (void)setChildItems:(bool)items;	// 0x33b0f609
// converted property setter: - (void)setDetailsHidden:(bool)hidden;	// 0x33b0f659
// converted property setter: - (void)setExpanded:(bool)expanded;	// 0x33b0f619
// converted property setter: - (void)setHidden:(bool)hidden;	// 0x33b0f649
// converted property setter: - (void)setItemIndex:(unsigned)index;	// 0x33b0f669
// converted property setter: - (void)setMissed:(bool)missed;	// 0x33b0f639
// converted property setter: - (void)setType:(int)type;	// 0x33b0f84d
// converted property getter: - (int)type;	// 0x33b80379
@end

