/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "CATVApplication.h"

@class NSMutableArray, BREvent;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : CATVApplication {
	BREvent *_currentEvent;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	CFRunLoopSourceRef _source;	// 116 = 0x74
	CFRunLoopRef _mainRunLoop;	// 120 = 0x78
	double _flushBeforeTimeStamp;	// 124 = 0x7c
	BOOL _handlingEvent;	// 132 = 0x84
	BOOL _eventsBlocked;	// 133 = 0x85
	BOOL _wantsSpaceCharacters;	// 134 = 0x86
	id<BRResponder> _firstBRResponder;	// 136 = 0x88
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x107e5; converted property
@property(retain) id firstBRResponder;	// G=0x1076d; S=0x10781; converted property
@property(assign) BOOL wantsSpaceCharacters;	// G=0x107c5; S=0x107d5; converted property
+ (void)_setupLogging;	// 0xff69
+ (BOOL)registerAsSystemApp;	// 0x10b19
+ (id)sharedApplication;	// 0xff3d
- (id)init;	// 0x10409
- (void).cxx_destruct;	// 0x10d2d
- (id)BRApplicationDelegate;	// 0x10665
- (id)_accessibilityResponderElement;	// 0x11045
- (void)_handler;	// 0x10d75
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x3d5b91
- (void)adjustToDisplayChange;	// 0x10ae1
- (void)applicationWillTerminate;	// 0x10649
- (void)blockEvents;	// 0x10a99
// converted property getter: - (id)currentEvent;	// 0x107e5
- (void)dealloc;	// 0x105d1
- (void)dispatchEventOnEventThread:(id)thread;	// 0x10979
- (void)emptyQueue;	// 0x109a9
- (void)endScreenSaverTest;	// 0x48d3b1
- (void)failedTest:(id)test options:(id)options error:(id)error;	// 0x48d03d
- (void)finishedTest:(id)test options:(id)options;	// 0x48d011
// converted property getter: - (id)firstBRResponder;	// 0x1076d
- (void)postEvent:(id)event;	// 0x107f9
- (BOOL)runTest:(id)test options:(id)options;	// 0x48ced9
// converted property setter: - (void)setFirstBRResponder:(id)responder;	// 0x10781
// converted property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0x107d5
- (void)setupDisplayManagement;	// 0x10619
- (void)startLogTest:(id)test;	// 0x48d115
- (void)startMoviePreviewPlayTest:(id)test;	// 0x48d49d
- (void)startScreenSaverTest:(id)test;	// 0x48d2c9
- (void)startYouTubePlayTest:(id)test;	// 0x48d195
- (void)startedTest:(id)test options:(id)options;	// 0x48cfe5
- (void)submitAggregateReportingNow;	// 0x10afd
- (void)unblockEvents;	// 0x10aad
// converted property getter: - (BOOL)wantsSpaceCharacters;	// 0x107c5
@end
