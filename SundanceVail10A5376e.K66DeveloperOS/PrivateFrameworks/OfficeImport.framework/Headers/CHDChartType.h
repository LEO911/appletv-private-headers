/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDDataLabel, EDCollection, CHDChart, CHDSeriesCollection;

@interface CHDChartType : NSObject {
	CHDChart *mChart;	// 4 = 0x4
	EDCollection *mAxisIds;	// 8 = 0x8
	CHDSeriesCollection *mSeries;	// 12 = 0xc
	CHDDataLabel *mDefaultDataLabel;	// 16 = 0x10
	bool mVaryColors;	// 20 = 0x14
}
@property(retain) id defaultDataLabel;	// G=0x370ef55d; S=0x37073475; converted property
@property(retain) id seriesCollection;	// G=0x37073045; S=0x3707fd85; converted property
@property(assign, getter=isVaryColors) bool varyColors;	// G=0x3707e80d; S=0x37070b29; converted property
+ (id)chartTypeWithChart:(id)chart;	// 0x370991e9
+ (bool)is3DType;	// 0x370be0bd
- (id)initWithChart:(id)chart;	// 0x370708dd
- (id)axes;	// 0x37077c81
- (id)axisForClass:(Class)aClass;	// 0x370ef3d1
- (id)axisIds;	// 0x37070b39
- (unsigned)categoryCount;	// 0x370ef4b9
- (id)chart;	// 0x37073b11
- (id)contentFormat;	// 0x370ef56d
- (void)dealloc;	// 0x3708046d
// converted property getter: - (id)defaultDataLabel;	// 0x370ef55d
- (int)defaultLabelPosition;	// 0x370ef58d
- (id)defaultTitleWithResources:(id)resources;	// 0x370c871d
- (bool)isHorizontal;	// 0x3707da75
- (bool)isPlotedOnSecondaryAxis;	// 0x370ef2d1
// converted property getter: - (bool)isVaryColors;	// 0x3707e80d
// converted property getter: - (id)seriesCollection;	// 0x37073045
- (unsigned)seriesCount;	// 0x3709d5e9
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x37073475
// converted property setter: - (void)setSeriesCollection:(id)collection;	// 0x3707fd85
// converted property setter: - (void)setVaryColors:(bool)colors;	// 0x37070b29
@end

