/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class TSMTraceBuffer;

@interface CPTracingManager : NSObject {
	TSMTraceBuffer *mBuffer;	// 4 = 0x4
	unsigned mCount;	// 8 = 0x8
}
+ (id)_singletonAlloc;	// 0x372030b9
+ (id)allocWithZone:(NSZone *)zone;	// 0x3720326d
+ (id)sharedManager;	// 0x372030e9
- (id)autorelease;	// 0x372032f9
- (id)copyWithZone:(NSZone *)zone;	// 0x372032fd
- (void)dealloc;	// 0x37203301
- (oneway void)release;	// 0x372032f5
- (id)retain;	// 0x372032e9
- (unsigned)retainCount;	// 0x372032ed
- (void)setup;	// 0x37203341
- (void)teardown;	// 0x37203345
@end

