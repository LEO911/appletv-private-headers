/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCallbackRegistry, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject {
	opaqueCMNotificationCenter *_cmNotificationCenter;	// 4 = 0x4
	AVCallbackRegistry *_callbackRegistry;	// 8 = 0x8
	NSMutableDictionary *_listenerObjectsPassedToFig;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_listenerObjectsQueue;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) opaqueCMNotificationCenter *CMNotificationCenter;	// G=0x2c2fb185; 
@property(readonly, assign, nonatomic, getter=_callbackRegistry) AVCallbackRegistry *callbackRegistry;	// G=0x2c2fb175; 
+ (void)initialize;	// 0x2c2fac6d
+ (id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x2c2fad1d
- (id)initWithCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x2c2fafa1
// declared property getter: - (opaqueCMNotificationCenter *)CMNotificationCenter;	// 0x2c2fb185
- (void)_addListenerAndCallback:(id)callback forWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback3 name:(CFStringRef)name object:(const void *)object;	// 0x2c2fb3d5
// declared property getter: - (id)_callbackRegistry;	// 0x2c2fb175
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x2c2fb56d
- (void)addListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object flags:(unsigned long)flags;	// 0x2c2fb195
- (void)dealloc;	// 0x2c2fb0a1
- (void)finalize;	// 0x2c2fb131
- (void)removeListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x2c2fb341
@end

