/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRKeyValueObservationEntry : NSObject {
@private
	NSObject *_observer;	// 4 = 0x4
	NSObject *_observedObject;	// 8 = 0x8
	NSString *_keyPath;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	BOOL _hasBeenRemoved;	// 20 = 0x14
}
- (id)initWithObserver:(id)observer observedObject:(id)object keyPath:(id)path handler:(id)handler;	// 0x329a575d
- (void)dealloc;	// 0x329a5701
- (BOOL)isEqualToObservedObject:(id)observedObject;	// 0x329a56a1
@end

