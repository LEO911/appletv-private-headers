/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library


@interface AXThreadTimerTask : NSObject {
	id _block;	// 4 = 0x4
	BOOL cancel;	// 8 = 0x8
	BOOL finished;	// 9 = 0x9
}
@property(retain, nonatomic) id block;	// G=0x341b42e1; S=0x341b41ed; @synthesize=_block
@property(assign, nonatomic, getter=isCancelled) BOOL cancel;	// G=0x341b42f1; S=0x341b4301; @synthesize
@property(assign, nonatomic, getter=isFinished) BOOL finished;	// G=0x341b4311; S=0x341b4321; @synthesize
// declared property getter: - (id)block;	// 0x341b42e1
- (void)dealloc;	// 0x341b429d
// declared property getter: - (BOOL)isCancelled;	// 0x341b42f1
// declared property getter: - (BOOL)isFinished;	// 0x341b4311
- (void)run;	// 0x341b4221
- (void)runAfterDelay:(float)delay;	// 0x341b4269
// declared property setter: - (void)setBlock:(id)block;	// 0x341b41ed
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x341b4301
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x341b4321
@end
