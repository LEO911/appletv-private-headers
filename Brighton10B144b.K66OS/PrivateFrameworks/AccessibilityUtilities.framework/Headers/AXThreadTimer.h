/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXTimer.h"

@class NSThread, AXThreadTimerTask;

@interface AXThreadTimer : AXTimer {
	NSThread *_thread;	// 16 = 0x10
	id _cancelBlock;	// 20 = 0x14
	AXThreadTimerTask *_task;	// 24 = 0x18
}
@property(retain, nonatomic) AXThreadTimerTask *task;	// G=0x3339955d; S=0x3339956d; @synthesize=_task
- (id)initWithThread:(id)thread;	// 0x333991e1
- (void)_runAfterDelay:(id)delay;	// 0x33399239
- (void)afterDelay:(double)delay processBlock:(id)block;	// 0x33399299
- (void)afterDelay:(double)delay processBlock:(id)block cancelBlock:(id)block3;	// 0x333992bd
- (void)cancel;	// 0x33399425
- (void)dealloc;	// 0x333994fd
- (BOOL)isCancelled;	// 0x3339948d
- (BOOL)isPending;	// 0x333994b5
// declared property setter: - (void)setTask:(id)task;	// 0x3339956d
// declared property getter: - (id)task;	// 0x3339955d
@end
