/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIInternalEvent {
	id _motionAccelerometer;	// 16 = 0x10
	int _subtype;	// 20 = 0x14
	int _shakeState;	// 24 = 0x18
	int _stateMachineState;	// 28 = 0x1c
	double _shakeStartTime;	// 32 = 0x20
	double _lastMovementTime;	// 40 = 0x28
	double _highLevelTime;	// 48 = 0x30
	double _lowEndTimeout;	// 56 = 0x38
	NSTimer *_idleTimer;	// 64 = 0x40
	BOOL _sentMotionBegan;	// 68 = 0x44
	float _lowPassState[10];	// 72 = 0x48
	unsigned _lowPassStateIndex;	// 112 = 0x70
	unsigned _highPassStateIndex;	// 116 = 0x74
	float _highPassState[2];	// 120 = 0x78
	int notifyToken;	// 128 = 0x80
}
@property(assign, nonatomic) int shakeState;	// G=0x3046baf1; S=0x3046bb01; @synthesize=_shakeState
@property(readonly, assign) int subtype;	// G=0x3046b315; converted property
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)_accelerometer;	// 0x3046b4d9
- (BOOL)_detectWhenNotActive;	// 0x3046b465
- (float)_determineShakeLevelX:(float)x y:(float)y z:(float)z currentState:(int)state;	// 0x3046b969
- (void)_enablePeakDetectionIfNecessary;	// 0x30219651
- (int)_feedStateMachine:(float)machine currentState:(int)state timestamp:(double)timestamp;	// 0x3046b741
- (float)_highPass:(float)pass;	// 0x3046b899
- (void)_idleTimerFired;	// 0x3029e4b9
- (id)_init;	// 0x302671c1
- (BOOL)_isDetectingMotionEvents;	// 0x3046b4b1
- (float)_lowPass:(float)pass;	// 0x3046b8fd
- (void)_resetLowPassState;	// 0x3029e5a9
- (void)_setSubtype:(int)subtype;	// 0x3046b325
- (int)_shakeState;	// 0x3046bae1
- (void)_updateAccelerometerEnabled;	// 0x3046b3c9
- (void)_willResume;	// 0x30285131
- (void)_willSuspend;	// 0x3029e459
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x3046b5d1
- (void)dealloc;	// 0x3046b26d
- (id)description;	// 0x3046b335
// declared property setter: - (void)setShakeState:(int)state;	// 0x3046bb01
// declared property getter: - (int)shakeState;	// 0x3046baf1
// converted property getter: - (int)subtype;	// 0x3046b315
- (int)type;	// 0x3046b311
@end
