/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDRGradient : NSObject <GQDNameMappable> {
	CFArrayRef mStops;	// 4 = 0x4
	int mType;	// 8 = 0x8
	float mOpacity;	// 12 = 0xc
	float mAngle;	// 16 = 0x10
	CGPoint mStart;	// 20 = 0x14
	CGPoint mEnd;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x32cdcaf5
- (id).cxx_construct;	// 0x32cdcbb5
- (float)angle;	// 0x32cdcb75
- (void)dealloc;	// 0x32cdcb01
- (CGPoint)end;	// 0x32cdcb9d
- (float)opacity;	// 0x32cdcb65
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32cdcbb9
- (CGPoint)start;	// 0x32cdcb85
- (CFArrayRef)stops;	// 0x32cdcb45
- (int)type;	// 0x32cdcb55
@end
