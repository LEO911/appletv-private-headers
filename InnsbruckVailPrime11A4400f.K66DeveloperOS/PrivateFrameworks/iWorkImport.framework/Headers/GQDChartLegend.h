/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChart;

@interface GQDChartLegend : GQDGraphic {
	GQDChart *mChart;	// 40 = 0x28
	BOOL mIsChartRetained;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x33cab691
- (id)chart;	// 0x33cab6f9
- (void)dealloc;	// 0x33cab69d
- (id)graphicStyle;	// 0x33cab709
@end
