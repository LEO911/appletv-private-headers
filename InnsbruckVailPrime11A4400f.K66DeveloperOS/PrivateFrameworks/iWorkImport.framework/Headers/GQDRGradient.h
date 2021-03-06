/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


@interface GQDRGradient : NSObject <GQDNameMappable> {
	CFArrayRef mStops;	// 4 = 0x4
	int mType;	// 8 = 0x8
	float mOpacity;	// 12 = 0xc
	float mAngle;	// 16 = 0x10
	CGPoint mStart;	// 20 = 0x14
	CGPoint mEnd;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x33cb0321
- (id).cxx_construct;	// 0x33cb03e1
- (float)angle;	// 0x33cb03a1
- (void)dealloc;	// 0x33cb032d
- (CGPoint)end;	// 0x33cb03c9
- (float)opacity;	// 0x33cb0391
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33cb03e5
- (CGPoint)start;	// 0x33cb03b1
- (CFArrayRef)stops;	// 0x33cb0371
- (int)type;	// 0x33cb0381
@end

