/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawGyroDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _GyroPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	BOOL _getTemperature;	// 20 = 0x14
	SEL _registeredCallback;	// 24 = 0x18
	id _registeredDelegate;	// 28 = 0x1c
	BOOL getTemperature;	// 32 = 0x20
}
@property(assign) IOHIDServiceClientRef _GyroPlugin;	// G=0x3739afb1; S=0x3739afc5; @synthesize
@property(readonly, assign, getter=_getTemperature) BOOL getTemperature;	// G=0x3739a705; @synthesize
- (id)init;	// 0x3739a621
// declared property getter: - (IOHIDServiceClientRef)_GyroPlugin;	// 0x3739afb1
// declared property getter: - (BOOL)_getTemperature;	// 0x3739a705
- (void)dealloc;	// 0x3739a6b5
- (void)enqueueCallback:(id)callback;	// 0x3739a925
- (IOHIDServiceClientRef)getGyroPlugin;	// 0x3739adc1
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x3739ad39
- (int)registerGyroCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x3739a715
- (int)registerGyroCallbackIOKit:(float)kit withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x3739ab9d
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval withTemperature:(BOOL)temperature lowPassFilter:(int)filter;	// 0x3739a845
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x3739a905
// declared property setter: - (void)set_GyroPlugin:(IOHIDServiceClientRef)plugin;	// 0x3739afc5
- (void)unregisterGyroCallback;	// 0x3739a7d1
- (void)unregisterGyroCallbackIOKit;	// 0x3739acdd
@end

