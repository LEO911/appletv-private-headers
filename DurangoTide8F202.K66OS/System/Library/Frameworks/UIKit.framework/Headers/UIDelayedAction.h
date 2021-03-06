/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject {
@private
	id m_target;	// 4 = 0x4
	SEL m_action;	// 8 = 0x8
	id m_userInfo;	// 12 = 0xc
	double m_delay;	// 16 = 0x10
	NSTimer *m_timer;	// 24 = 0x18
	BOOL m_canceled;	// 28 = 0x1c
	NSString *m_runLoopMode;	// 32 = 0x20
}
@property(readonly, assign) double delay;	// G=0x306cd6c1; converted property
@property(retain) id target;	// G=0x3072d165; S=0x30666169; converted property
@property(readonly, retain) id userInfo;	// G=0x3072d155; converted property
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay;	// 0x306710f1
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay mode:(id)mode;	// 0x3062fcb9
- (void)cancel;	// 0x30642e79
- (void)dealloc;	// 0x30633cb5
// converted property getter: - (double)delay;	// 0x306cd6c1
- (BOOL)scheduled;	// 0x3072d175
// converted property setter: - (void)setTarget:(id)target;	// 0x30666169
// converted property getter: - (id)target;	// 0x3072d165
- (void)timerFired:(id)fired;	// 0x30673c91
- (void)touch;	// 0x306829a9
- (void)touchWithDelay:(double)delay;	// 0x3062fd7d
- (void)unschedule;	// 0x30633c79
// converted property getter: - (id)userInfo;	// 0x3072d155
@end

