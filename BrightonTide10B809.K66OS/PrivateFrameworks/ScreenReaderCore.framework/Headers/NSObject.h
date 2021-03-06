/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x35416c71
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x35418821
- (id)_getRetainedValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time copy:(BOOL)copy;	// 0x35418d29
- (id)_getRetainedValueForKeyPathOnMainThread:(id)keyPathOnMainThread copy:(BOOL)copy;	// 0x354179e1
- (void)_scr_safeGetValueForBlock:(id)block lock:(id)lock;	// 0x35418c69
- (void)_scr_safeGetValueForKeyPath:(id)keyPath;	// 0x35417aed
- (void)_scr_safeGetValueForKeyPath:(id)keyPath lock:(id)lock;	// 0x35417b01
- (void)_scr_safeGetValueForSelector:(id)selector lock:(id)lock;	// 0x35418af9
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x35418f05
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x35418f2d
- (id)copyValueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x35417e6d
- (id)performSelector:(SEL)selector withObjectsAsArray:(id)objectsAsArray;	// 0x35418871
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x35415591
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x35417539
- (id)threadDescription;	// 0x35418805
- (id)valueForBlock:(id)block forThreadKey:(id)threadKey waitTime:(double)time;	// 0x35419151
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x35418ea1
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x35418ec9
- (id)valueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x354179b1
- (id)valueForSelector:(SEL)selector forThreadKey:(id)threadKey waitTime:(double)time copyValue:(BOOL)value withObjects:(id)objects;	// 0x35418f59
@end

