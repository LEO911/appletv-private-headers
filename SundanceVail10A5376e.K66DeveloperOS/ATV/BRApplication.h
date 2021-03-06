/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BKSWorkspaceDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSTimer, NSMutableArray, BREvent, BKSWorkspace, NSMutableDictionary;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : XXUnknownSuperclass <BKSWorkspaceDelegate> {
	BREvent *_currentEvent;	// 104 = 0x68
	NSTimer *_retriggerTimer;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	void *_autoreleasePoolMark;	// 116 = 0x74
	CFRunLoopSourceRef _source;	// 120 = 0x78
	CFRunLoopRef _mainRunLoop;	// 124 = 0x7c
	double _flushBeforeTimeStamp;	// 128 = 0x80
	long _retriggerCount;	// 136 = 0x88
	double _nextRetriggerDelay;	// 140 = 0x8c
	BOOL _handlingEvent;	// 148 = 0x94
	BOOL _isInModalLoop;	// 149 = 0x95
	BOOL _eventsBlocked;	// 150 = 0x96
	BOOL _isTerminating;	// 151 = 0x97
	double _startingTimeOfRepeatEvent;	// 152 = 0x98
	double _lastTimeRepeatEventSent;	// 160 = 0xa0
	int _repeatingEventValue;	// 168 = 0xa8
	BOOL _repeatEventProcessedFully;	// 172 = 0xac
	BKSWorkspace *_workspace;	// 176 = 0xb0
	NSMutableDictionary *_launchedAppInfo;	// 180 = 0xb4
	NSTimer *_activityHoldTimer;	// 184 = 0xb8
	id<BRResponder> _firstResponder;	// 188 = 0xbc
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x34b175; converted property
@property(assign) id<BRResponder> firstResponder;	// G=0x34c039; S=0x34c04d; @synthesize=_firstResponder
@property(assign) BOOL isInModalLoop;	// G=0x34baf5; S=0x34bae5; converted property
@property(readonly, assign) BOOL isTerminating;	// G=0x34b119; converted property
@property(readonly, assign) double nextRetriggerDelay;	// G=0x34bd79; converted property
@property(readonly, assign) long retriggerCount;	// G=0x34bd69; converted property
+ (void)_startStatusBarServerIfNecessary;	// 0x34b01d
+ (BOOL)registerAsSystemApp;	// 0x34b021
+ (id)sharedApplication;	// 0x34adc9
- (id)init;	// 0x34adf5
- (BOOL)_accessibilityIsSystemAppServer;	// 0x272c01
- (id)_accessibilityResponderElement;	// 0x34c691
- (void)_activityHoldTimerFired;	// 0x34c6ad
- (void)_blockEvents;	// 0x34c065
- (void)_disposeWorkspace;	// 0x34c589
- (void)_drainRunLoopPool;	// 0x34c3bd
- (id)_getWorkspaceCreatingIfNeeded:(BOOL)needed;	// 0x34c471
- (void)_handler;	// 0x34c0ad
- (void)_retriggerEvent:(id)event;	// 0x34c415
- (void)_unblockEvents;	// 0x34c079
- (void)activateApplicationWithIdentifier:(id)identifier;	// 0x34bd91
- (id)brApplicationDelegate;	// 0x34b025
- (void)cancelRetriggerCurrentEvent;	// 0x34bc25
// converted property getter: - (id)currentEvent;	// 0x34b175
- (void)dealloc;	// 0x34afb9
- (void)dispatchEventOnEventThread:(id)thread;	// 0x34b9b9
- (void)emptyQueue;	// 0x34b9e9
// declared property getter: - (id)firstResponder;	// 0x34c039
// converted property getter: - (BOOL)isInModalLoop;	// 0x34baf5
// converted property getter: - (BOOL)isTerminating;	// 0x34b119
// converted property getter: - (double)nextRetriggerDelay;	// 0x34bd79
- (void)postEvent:(id)event;	// 0x34b851
- (void)restart;	// 0x34b129
// converted property getter: - (long)retriggerCount;	// 0x34bd69
- (void)retriggerCurrentEvent;	// 0x34bb05
- (void)retriggerCurrentEventAfterDelay:(double)delay;	// 0x34bb89
- (void)retriggerCurrentEventWithDecreasingDelay;	// 0x34bb1d
- (void)sendEvent:(id)event;	// 0x34b189
// declared property setter: - (void)setFirstResponder:(id)responder;	// 0x34c04d
// converted property setter: - (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x34bae5
- (void)terminate;	// 0x34b035
- (void)workspace:(id)workspace applicationActivated:(id)activated;	// 0x34bf05
- (void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;	// 0x34c035
- (void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x34bdc5
- (void)workspace:(id)workspace applicationDidFailToActivate:(id)application;	// 0x34bf09
- (void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;	// 0x34bf01
- (void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;	// 0x34bde1
- (void)workspace:(id)workspace applicationDidRemainReceiver:(id)application fromApplication:(id)application3;	// 0x34bdc9
- (void)workspace:(id)workspace applicationDidStartLaunching:(id)application;	// 0x34bddd
- (void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;	// 0x34bf11
- (void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;	// 0x34bf0d
- (void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;	// 0x34c029
- (id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x34bdc1
- (void)workspace:(id)workspace handleOpenURL:(id)url fromApplication:(id)application;	// 0x34c02d
- (void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;	// 0x34c031
- (void)workspaceDidResume:(id)workspace;	// 0x34bdd9
- (void)workspaceDidSuspend:(id)workspace;	// 0x34bdd1
- (void)workspaceWillResume:(id)workspace;	// 0x34bdd5
- (void)workspaceWillSuspend:(id)workspace;	// 0x34bdcd
@end

