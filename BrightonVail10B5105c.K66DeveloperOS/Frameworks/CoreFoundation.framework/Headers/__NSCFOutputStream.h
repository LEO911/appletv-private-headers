/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSOutputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x3570ddf5; S=0x356e1df1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3570dcbd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3570dcb9
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x3570dcf9
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x3570dd29
- (id)initToMemory;	// 0x3570dcc1
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x3570dd99
- (BOOL)_isDeallocating;	// 0x3570dc69
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3570de3d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x3570de25
- (BOOL)_tryRetain;	// 0x3570dc59
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3570de45
- (void)close;	// 0x356e2609
// converted property getter: - (id)delegate;	// 0x3570ddf5
- (void)finalize;	// 0x3570dc79
- (BOOL)hasSpaceAvailable;	// 0x3570de19
- (unsigned)hash;	// 0x3570dc41
- (BOOL)isEqual:(id)equal;	// 0x3570dc29
- (void)open;	// 0x356e1f6d
- (id)propertyForKey:(id)key;	// 0x356e202d
- (oneway void)release;	// 0x356e260d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x356e2579
- (id)retain;	// 0x3570dc45
- (unsigned)retainCount;	// 0x3570dc75
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x356e1ed1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x356e1df1
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x3570ddf9
- (id)streamError;	// 0x356e26bd
- (unsigned)streamStatus;	// 0x3570de09
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x3570de11
@end

