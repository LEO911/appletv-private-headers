/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSTimer, ATVRCButtonPatternSet;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : XXUnknownSuperclass {
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned long _pairingMask;	// 36 = 0x24
	unsigned long _payloadMask;	// 40 = 0x28
	unsigned long _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x234b81; S=0x234acd; converted property
@property(retain) NSArray *holdEvents;	// G=0x234b91; S=0x234b09; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x234abd; S=0x234a71; converted property
@property(retain) NSArray *upEvents;	// G=0x234ba1; S=0x234b45; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x234e45
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x234d75
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x234cbd
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x2350b1
+ (double)intervalBetweenLastEvents:(id)events;	// 0x235009
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x234f89
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x234ed9
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x234931
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x2356f1
- (void)_clearDiscontinuityTrigger;	// 0x2355a5
- (void)_clearHoldTrigger;	// 0x235635
- (void)_commandPatternMatched;	// 0x2353f5
- (double)_discontinuityTriggerInterval;	// 0x235669
- (void)_discontinuityTriggered;	// 0x2357c9
- (void)_dispatchEvents:(id)events;	// 0x235921
- (void)_holdTriggered;	// 0x235899
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x23536d
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x2351a9
- (void)_resetDiscontinuityTrigger;	// 0x23552d
- (void)_resetHoldTrigger;	// 0x2355d9
- (void)dealloc;	// 0x23498d
// converted property getter: - (id)downEvents;	// 0x234b81
- (void)forceReleaseState;	// 0x235185
// converted property getter: - (id)holdEvents;	// 0x234b91
// converted property getter: - (id)patternSet;	// 0x234abd
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x234bb1
- (void)reset;	// 0x234a19
- (void)setDelegate:(id)delegate;	// 0x234aad
// converted property setter: - (void)setDownEvents:(id)events;	// 0x234acd
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x234b09
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x235151
// converted property setter: - (void)setPatternSet:(id)set;	// 0x234a71
// converted property setter: - (void)setUpEvents:(id)events;	// 0x234b45
// converted property getter: - (id)upEvents;	// 0x234ba1
@end
