/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVRCButtonPatternSet, NSTimer, NSArray;
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
@property(retain) NSArray *downEvents;	// G=0x22f6f1; S=0x22f63d; converted property
@property(retain) NSArray *holdEvents;	// G=0x22f701; S=0x22f679; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x22f62d; S=0x22f5e1; converted property
@property(retain) NSArray *upEvents;	// G=0x22f711; S=0x22f6b5; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x22f9ad
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x22f8e1
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x22f82d
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x22fc19
+ (double)intervalBetweenLastEvents:(id)events;	// 0x22fb71
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x22faf1
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x22fa41
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x22f4a1
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x230259
- (void)_clearDiscontinuityTrigger;	// 0x23010d
- (void)_clearHoldTrigger;	// 0x23019d
- (void)_commandPatternMatched;	// 0x22ff5d
- (double)_discontinuityTriggerInterval;	// 0x2301d1
- (void)_discontinuityTriggered;	// 0x230331
- (void)_dispatchEvents:(id)events;	// 0x230489
- (void)_holdTriggered;	// 0x230401
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x22fed5
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x22fd11
- (void)_resetDiscontinuityTrigger;	// 0x230095
- (void)_resetHoldTrigger;	// 0x230141
- (void)dealloc;	// 0x22f4fd
// converted property getter: - (id)downEvents;	// 0x22f6f1
- (void)forceReleaseState;	// 0x22fced
// converted property getter: - (id)holdEvents;	// 0x22f701
// converted property getter: - (id)patternSet;	// 0x22f62d
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x22f721
- (void)reset;	// 0x22f589
- (void)setDelegate:(id)delegate;	// 0x22f61d
// converted property setter: - (void)setDownEvents:(id)events;	// 0x22f63d
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x22f679
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x22fcb9
// converted property setter: - (void)setPatternSet:(id)set;	// 0x22f5e1
// converted property setter: - (void)setUpEvents:(id)events;	// 0x22f6b5
// converted property getter: - (id)upEvents;	// 0x22f711
@end
