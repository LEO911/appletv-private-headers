/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class MFWeakSet, NSLock;
@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject {
	id<NSObject> _reference;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	MFWeakSet *_observers;	// 12 = 0xc
}
+ (id)weakReferenceWithObject:(id)object;	// 0x35e6de1d
+ (id)weakReferenceWithObject:(id)object referenceObserver:(id)observer;	// 0x35e6de61
- (id)init;	// 0x35e6dc89
- (void)_addObserver:(id)observer;	// 0x35e6dc9d
- (id)_initWithObject:(id)object;	// 0x35e6e0ed
- (void)_override_release;	// 0x35e6df25
- (void)dealloc;	// 0x35e6e08d
- (void)removeReferenceObserver:(id)observer;	// 0x35e6dd45
- (id)retainedReference;	// 0x35e6dda9
@end

