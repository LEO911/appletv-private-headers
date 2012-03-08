/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"
#import "OADGraphic.h"

@class NSMutableArray, CHDDefaultTextProperties, EDSheet, CHDView3D, CHDPlotArea, CHDLegend, CHDTitle, EDWorkbook, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic <OADDrawableContainer> {
@private
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x32a817a5; S=0x3298d541; converted property
@property(retain) id backWallGraphicProperties;	// G=0x32a817f5; S=0x3298e629; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x32994d99; S=0x32981609; converted property
@property(retain) id defaultTextProperties;	// G=0x3298415d; S=0x32a81879; converted property
@property(assign) int direction;	// G=0x3298d149; S=0x32990581; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x32a81869; S=0x32a09e31; converted property
@property(assign) int displayBlankAs;	// G=0x32a817c5; S=0x3298167d; converted property
@property(retain) id externalData;	// G=0x32a817e5; S=0x32a03d89; converted property
@property(retain) id floorGraphicProperties;	// G=0x32a81815; S=0x329881a5; converted property
@property(retain) id legend;	// G=0x3298bcc5; S=0x329f0e95; converted property
@property(assign) CGRect logicalBounds;	// G=0x32a81825; S=0x3297f4e9; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x3299027d; S=0x32a81859; converted property
@property(retain) id plotArea;	// G=0x329850d9; S=0x3298d42d; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x32a817b5; S=0x32981659; converted property
@property(retain) id sheet;	// G=0x32a81795; S=0x3297ed09; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x32a81805; S=0x3298e5e1; converted property
@property(assign) int styleId;	// G=0x329fe3b1; S=0x3297ed19; converted property
@property(retain) id title;	// G=0x3299491d; S=0x3298d4f9; converted property
@property(retain) id view3D;	// G=0x32a817d5; S=0x32989189; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x32980ef5
- (id)init;	// 0x3297c28d
- (void)addChild:(id)child;	// 0x3297f5d9
- (void)addChildren:(id)children;	// 0x32a818e1
// converted property getter: - (id)backWallGraphicProperties;	// 0x32a817f5
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x32994d99
- (id)childAtIndex:(unsigned)index;	// 0x32a81961
- (unsigned)childCount;	// 0x32a818c1
- (id)children;	// 0x32a81849
- (void)dealloc;	// 0x32997885
- (id)defaultContentFormat;	// 0x32a81c05
- (id)defaultDataLabelFont;	// 0x32a81ae5
- (unsigned)defaultFontIndex;	// 0x329f0d0d
- (id)defaultFontWithResources:(id)resources;	// 0x32a81c45
- (int)defaultLabelPosition;	// 0x32a81c99
- (id)defaultSeriesTitleFont;	// 0x32a81b75
- (id)defaultTextFont;	// 0x32a81a6d
// converted property getter: - (id)defaultTextProperties;	// 0x3298415d
- (id)defaultThemeFont;	// 0x32a81985
// converted property getter: - (int)direction;	// 0x3298d149
// converted property getter: - (int)displayBlankAs;	// 0x32a817c5
// converted property getter: - (id)externalData;	// 0x32a817e5
// converted property getter: - (id)floorGraphicProperties;	// 0x32a81815
- (bool)is3D;	// 0x329feded
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x32a817a5
- (bool)isBinary;	// 0x3297ef55
// converted property getter: - (bool)isDirectionChanged;	// 0x32a81869
// converted property getter: - (bool)isMSGraph;	// 0x3299027d
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x32a817b5
// converted property getter: - (id)legend;	// 0x3298bcc5
// converted property getter: - (CGRect)logicalBounds;	// 0x32a81825
- (id)mainType;	// 0x329946a5
// converted property getter: - (id)plotArea;	// 0x329850d9
- (id)processors;	// 0x3298ad49
- (unsigned)seriesCount;	// 0x32a032b1
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x3298d541
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x3298e629
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x32981609
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x32a81879
// converted property setter: - (void)setDirection:(int)direction;	// 0x32990581
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x32a09e31
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x3298167d
// converted property setter: - (void)setExternalData:(id)data;	// 0x32a03d89
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x329881a5
// converted property setter: - (void)setLegend:(id)legend;	// 0x329f0e95
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x3297f4e9
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x32a81859
- (void)setParentTextListStyle:(id)style;	// 0x32a03ea9
// converted property setter: - (void)setPlotArea:(id)area;	// 0x3298d42d
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x32981659
// converted property setter: - (void)setSheet:(id)sheet;	// 0x3297ed09
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x3298e5e1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x3297ed19
// converted property setter: - (void)setTitle:(id)title;	// 0x3298d4f9
// converted property setter: - (void)setView3D:(id)d;	// 0x32989189
// converted property getter: - (id)sheet;	// 0x32a81795
// converted property getter: - (id)sideWallGraphicProperties;	// 0x32a81805
// converted property getter: - (int)styleId;	// 0x329fe3b1
- (id)styleMatrix;	// 0x329fe609
// converted property getter: - (id)title;	// 0x3299491d
// converted property getter: - (id)view3D;	// 0x32a817d5
- (id)workbook;	// 0x329fe651
@end
