/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDate, NSTimer, ATVRCButtonPatternSet;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : NSObject {
@private
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x328eb7a9; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x328eb7b9; converted property
- (id)init;	// 0x328eb579
- (void)_clearDiscontinuityTrigger;	// 0x328ebc19
- (void)_discontinuityTrigger:(id)trigger;	// 0x328ebc4d
- (void)_firstCommandEventReceived;	// 0x328eb8ed
- (BOOL)_identifyCommandPattern;	// 0x328ebd89
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x328eba2d
- (double)_maxIntervalBetweenEvents;	// 0x328ebf2d
- (void)_resetDiscontinuityTrigger;	// 0x328ebba5
- (void)_setCaptureState:(int)state;	// 0x328eb861
- (void)addEvent:(id)event;	// 0x328eb6a9
- (double)captureProgress;	// 0x328eb7c9
// converted property getter: - (int)captureState;	// 0x328eb7a9
- (void)dealloc;	// 0x328eb605
- (void)reset;	// 0x328eb73d
- (void)startCapture;	// 0x328eb679
// converted property getter: - (id)workingPatternSet;	// 0x328eb7b9
@end

