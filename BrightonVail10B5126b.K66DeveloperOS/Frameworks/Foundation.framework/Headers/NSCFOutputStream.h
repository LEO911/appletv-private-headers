/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOutputStream.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x319546bd; S=0x319546c1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3195459d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31954599
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x319545d1
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x319545f5
- (id)initToMemory;	// 0x319545a5
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x31954665
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3195483d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x31954825
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31954845
- (BOOL)allowsWeakReference;	// 0x31954531
- (void)close;	// 0x319546b9
// converted property getter: - (id)delegate;	// 0x319546bd
- (void)finalize;	// 0x31954559
- (BOOL)hasSpaceAvailable;	// 0x31954819
- (unsigned)hash;	// 0x31954519
- (BOOL)isEqual:(id)equal;	// 0x31954501
- (void)open;	// 0x319546b5
- (id)propertyForKey:(id)key;	// 0x31954745
- (oneway void)release;	// 0x3195452d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x319547b1
- (id)retain;	// 0x3195451d
- (unsigned)retainCount;	// 0x31954555
- (BOOL)retainWeakReference;	// 0x31954545
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31954781
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x319546c1
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31954771
- (id)streamError;	// 0x319547e5
- (unsigned)streamStatus;	// 0x319547e1
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31954811
@end

