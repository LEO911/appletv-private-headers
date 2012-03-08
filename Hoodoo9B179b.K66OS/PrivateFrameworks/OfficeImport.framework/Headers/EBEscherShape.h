/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ESDObject.h"

@class NSData, NSMutableArray, CHDChart;

__attribute__((visibility("hidden")))
@interface EBEscherShape : ESDObject {
@private
	NSData *mChartData;	// 16 = 0x10
	NSMutableArray *mChartColorLocators;	// 20 = 0x14
	BOOL mShowLegend;	// 24 = 0x18
	CHDChart *mChart;	// 28 = 0x1c
}
@property(retain) id chart;	// G=0x3298f569; S=0x3298f5f9; converted property
@property(retain) id chartColorLocators;	// G=0x3298f539; S=0x3298f5b9; converted property
@property(retain) id chartData;	// G=0x3298f529; S=0x3298f579; converted property
@property(assign) BOOL showLegend;	// G=0x3298f549; S=0x3298f559; converted property
// converted property getter: - (id)chart;	// 0x3298f569
// converted property getter: - (id)chartColorLocators;	// 0x3298f539
// converted property getter: - (id)chartData;	// 0x3298f529
- (void)dealloc;	// 0x3298f641
// converted property setter: - (void)setChart:(id)chart;	// 0x3298f5f9
// converted property setter: - (void)setChartColorLocators:(id)locators;	// 0x3298f5b9
// converted property setter: - (void)setChartData:(id)data;	// 0x3298f579
// converted property setter: - (void)setShowLegend:(BOOL)legend;	// 0x3298f559
// converted property getter: - (BOOL)showLegend;	// 0x3298f549
@end
