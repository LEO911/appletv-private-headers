/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EXOfficeArtState, CHDChart, CHDSeries, OADParagraphProperties, CHDChartType, OCPPackagePart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXState : NSObject {
@private
	EXOfficeArtState *mDrawingState;	// 4 = 0x4
	CHDChart *mChart;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
	OCPPackagePart *mChartPart;	// 16 = 0x10
	CHDChartType *mCurrentChartType;	// 20 = 0x14
	CHDSeries *mCurrentSeries;	// 24 = 0x18
	OADParagraphProperties *mDefaultTextProperties;	// 28 = 0x1c
	BOOL mDefaultTextPropertiesHaveExplicitFontSize;	// 32 = 0x20
	id<CHAutoStyling> mAutoStyling;	// 36 = 0x24
}
@property(retain) id chart;	// G=0x34555b79; S=0x34553f25; converted property
@property(retain) id chartPart;	// G=0x34553f15; S=0x34553c89; converted property
@property(retain) id currentChartType;	// G=0x3455707d; S=0x34556649; converted property
@property(retain) id currentSeries;	// G=0x34577df5; S=0x34557565; converted property
@property(retain) id defaultTextProperties;	// G=0x34554a89; S=0x34554455; converted property
@property(retain) id resources;	// G=0x345543ed; S=0x34553ce1; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x34553c31
- (id)autoStyling;	// 0x345551f5
// converted property getter: - (id)chart;	// 0x34555b79
// converted property getter: - (id)chartPart;	// 0x34553f15
// converted property getter: - (id)currentChartType;	// 0x3455707d
// converted property getter: - (id)currentSeries;	// 0x34577df5
- (void)dealloc;	// 0x3455add1
// converted property getter: - (id)defaultTextProperties;	// 0x34554a89
- (id)drawingState;	// 0x34553fa9
- (id)exState;	// 0x345578a1
- (void)popTitleTextProperties;	// 0x34575b75
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x34575681
// converted property getter: - (id)resources;	// 0x345543ed
// converted property setter: - (void)setChart:(id)chart;	// 0x34553f25
// converted property setter: - (void)setChartPart:(id)part;	// 0x34553c89
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x34556649
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x34557565
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x34554455
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x345543fd
// converted property setter: - (void)setResources:(id)resources;	// 0x34553ce1
@end

