/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable> {
	float mScale;	// 4 = 0x4
	float mBaselineOffset;	// 8 = 0x8
	BOOL mScaleWithText;	// 12 = 0xc
	int mLabelAlignment;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x33cc4ac5
- (float)baselineOffset;	// 0x33cc4c01
- (int)labelAlignment;	// 0x33cc4c21
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33cc4ad1
- (float)scale;	// 0x33cc4bf1
- (BOOL)scaleWithText;	// 0x33cc4c11
@end

