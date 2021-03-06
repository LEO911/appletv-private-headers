/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimationShapeTarget.h"


__attribute__((visibility("hidden")))
@interface PDAnimationChartTarget : PDAnimationShapeTarget {
@private
	int mCatagoryIndex;	// 8 = 0x8
	int mSeriesIndex;	// 12 = 0xc
	int mBuildStep;	// 16 = 0x10
}
@property(assign) int buildStep;	// G=0x312fac89; S=0x312fac99; converted property
@property(assign) int catagoryIndex;	// G=0x312fac49; S=0x312fac59; converted property
@property(assign) int seriesIndex;	// G=0x312fac69; S=0x312fac79; converted property
- (id)init;	// 0x312fbaa5
// converted property getter: - (int)buildStep;	// 0x312fac89
// converted property getter: - (int)catagoryIndex;	// 0x312fac49
- (unsigned)hash;	// 0x312fbbb5
- (BOOL)isEqual:(id)equal;	// 0x312fbad1
// converted property getter: - (int)seriesIndex;	// 0x312fac69
// converted property setter: - (void)setBuildStep:(int)step;	// 0x312fac99
// converted property setter: - (void)setCatagoryIndex:(int)index;	// 0x312fac59
// converted property setter: - (void)setSeriesIndex:(int)index;	// 0x312fac79
@end

