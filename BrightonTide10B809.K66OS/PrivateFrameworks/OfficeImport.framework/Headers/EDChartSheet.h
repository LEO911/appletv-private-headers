/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDSheet.h"

@class CHDChart;

@interface EDChartSheet : EDSheet {
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x3497eecd; S=0x3496938d; converted property
@property(retain) id mainChart;	// G=0x3497f171; S=0x3497ab11; converted property
- (id).cxx_construct;	// 0x3495f68d
- (void)addDrawable:(id)drawable;	// 0x34982601
- (bool)areBoundsSet;	// 0x3497eeb9
// converted property getter: - (CGRect)bounds;	// 0x3497eecd
// converted property getter: - (id)mainChart;	// 0x3497f171
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3496938d
// converted property setter: - (void)setMainChart:(id)chart;	// 0x3497ab11
- (void)teardown;	// 0x34968b89
@end

