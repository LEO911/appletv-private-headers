/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, NSTimer, ATVRCButtonPatternSet;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : XXUnknownSuperclass {
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x21ac89; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x21ac99; converted property
- (id)init;	// 0x21aa59
- (void)_clearDiscontinuityTrigger;	// 0x21b109
- (void)_discontinuityTrigger:(id)trigger;	// 0x21b13d
- (void)_firstCommandEventReceived;	// 0x21add1
- (BOOL)_identifyCommandPattern;	// 0x21b269
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x21af11
- (double)_maxIntervalBetweenEvents;	// 0x21b419
- (void)_resetDiscontinuityTrigger;	// 0x21b091
- (void)_setCaptureState:(int)state;	// 0x21ad41
- (void)addEvent:(id)event;	// 0x21ab91
- (double)captureProgress;	// 0x21aca9
// converted property getter: - (int)captureState;	// 0x21ac89
- (void)dealloc;	// 0x21aae9
- (void)reset;	// 0x21ac1d
- (void)startCapture;	// 0x21ab61
// converted property getter: - (id)workingPatternSet;	// 0x21ac99
@end
