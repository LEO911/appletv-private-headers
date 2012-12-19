/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPTextObject : CPChunk {
	CGPoint anchor;	// 52 = 0x34
	BOOL metricInfoCalculated;	// 60 = 0x3c
	float maxFontSize;	// 64 = 0x40
	double maxFontLineHeight;	// 68 = 0x44
}
@property(readonly, assign) double maxFontLineHeight;	// G=0x3384f7b5; converted property
@property(readonly, assign) float maxFontSize;	// G=0x3384f77d; converted property
- (void)calculateMetrics;	// 0x3384f659
- (void)clearCachedInfo;	// 0x3384f7f5
// converted property getter: - (double)maxFontLineHeight;	// 0x3384f7b5
// converted property getter: - (float)maxFontSize;	// 0x3384f77d
- (void)translateObjectYBy:(float)by;	// 0x3384f829
@end
