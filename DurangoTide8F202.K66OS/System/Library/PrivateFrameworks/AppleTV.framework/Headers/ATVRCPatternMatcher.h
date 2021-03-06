/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, ATVRCButtonPatternSet, NSTimer;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : NSObject {
@private
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned _pairingMask;	// 36 = 0x24
	unsigned _payloadMask;	// 40 = 0x28
	unsigned _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x336cc871; S=0x336cd5ed; converted property
@property(retain) NSArray *holdEvents;	// G=0x336cc881; S=0x336cd5b5; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x336cc861; S=0x336cd625; converted property
@property(retain) NSArray *upEvents;	// G=0x336cc891; S=0x336cd57d; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x336cd28d
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x336cd31d
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x336cd3e5
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x336cd025
+ (double)intervalBetweenLastEvents:(id)events;	// 0x336cd0bd
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x336cd165
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x336cd1e1
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x336cd729
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x336cd779
- (void)_clearDiscontinuityTrigger;	// 0x336ccc15
- (void)_clearHoldTrigger;	// 0x336ccb99
- (void)_commandPatternMatched;	// 0x336cccb9
- (double)_discontinuityTriggerInterval;	// 0x336ccb11
- (void)_discontinuityTriggered;	// 0x336cca51
- (void)_dispatchEvents:(id)events;	// 0x336cc8c9
- (void)_holdTriggered;	// 0x336cc9d5
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x336ccddd
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x336cce79
- (void)_resetDiscontinuityTrigger;	// 0x336ccc41
- (void)_resetHoldTrigger;	// 0x336ccbc5
- (void)dealloc;	// 0x336cd6a9
// converted property getter: - (id)downEvents;	// 0x336cc871
- (void)forceReleaseState;	// 0x336cd84d
// converted property getter: - (id)holdEvents;	// 0x336cc881
// converted property getter: - (id)patternSet;	// 0x336cc861
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x336cd485
- (void)reset;	// 0x336cd65d
- (void)setDelegate:(id)delegate;	// 0x336cc851
// converted property setter: - (void)setDownEvents:(id)events;	// 0x336cd5ed
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x336cd5b5
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x336cc8a1
// converted property setter: - (void)setPatternSet:(id)set;	// 0x336cd625
// converted property setter: - (void)setUpEvents:(id)events;	// 0x336cd57d
// converted property getter: - (id)upEvents;	// 0x336cc891
@end

