/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSTimer, NSMutableDictionary, NSRunLoop;

__attribute__((visibility("hidden")))
@interface BRStateMachine : XXUnknownSuperclass {
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x3ad801; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x3ad841; S=0x3ad851; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x3ad829; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x3ad815; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x3ad7e1; S=0x3ad7f1; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x3aca29
+ (void)initialize;	// 0x3ac8f5
+ (void)registerStateMachine:(id)machine;	// 0x3ac949
+ (id)stateMachineWithName:(id)name;	// 0x3acb41
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x3acc35
- (id)_eventHandlerForEvent:(id)event;	// 0x3adbe5
- (void)_processNextEvent;	// 0x3ad861
// declared property getter: - (id)currentState;	// 0x3ad801
- (void)dealloc;	// 0x3acd69
- (void)deregisterHandlers;	// 0x3ad451
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x3ad841
// declared property getter: - (BOOL)immediate;	// 0x3ad829
- (void)logUnhandledEvents;	// 0x3ad491
// declared property getter: - (id)name;	// 0x3ad815
- (void)postEvent:(id)event withContext:(id)context;	// 0x3acee5
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x3acf09
- (void)purgeEventQueue;	// 0x3ad239
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x3ad3d1
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x3ad301
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x3ad851
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x3ad7f1
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x3ad7e1
@end

