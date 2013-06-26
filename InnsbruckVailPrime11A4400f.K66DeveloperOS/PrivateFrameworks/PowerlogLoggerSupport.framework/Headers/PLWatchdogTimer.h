/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

#import </libobjc.A.h>

@class PLLogger, NSDate, NSString;
@protocol OS_dispatch_source;

@interface PLWatchdogTimer : NSObject {
	PLLogger *_logger;	// 4 = 0x4
	NSString *_message;	// 8 = 0x8
	id _timeoutBlock;	// 12 = 0xc
	NSDate *_fired;	// 16 = 0x10
	NSObject<OS_dispatch_source> *_timer;	// 20 = 0x14
	double _timeout;	// 24 = 0x18
}
@property(retain, nonatomic) NSDate *fired;	// G=0x32445d15; S=0x32445d25; @synthesize=_fired
@property(assign, nonatomic) PLLogger *logger;	// G=0x32445c85; S=0x32445c95; @synthesize=_logger
@property(retain, nonatomic) NSString *message;	// G=0x32445ca5; S=0x32445cb5; @synthesize=_message
@property(assign, nonatomic) double timeout;	// G=0x32445cc5; S=0x32445cdd; @synthesize=_timeout
@property(copy, nonatomic) id timeoutBlock;	// G=0x32445cf1; S=0x32445d05; @synthesize=_timeoutBlock
@property(assign, nonatomic) NSObject<OS_dispatch_source> *timer;	// G=0x32445d35; S=0x32445d45; @synthesize=_timer
- (id)initWithLogger:(id)logger withTimeout:(double)timeout withMessage:(id)message;	// 0x32445a55
- (id)initWithLogger:(id)logger withTimeout:(double)timeout withMessage:(id)message withTimeoutBlock:(id)timeoutBlock;	// 0x32445729
- (id)initWithTimeout:(double)timeout withMessage:(id)message;	// 0x32445a81
- (void)dealloc;	// 0x32445aa9
// declared property getter: - (id)fired;	// 0x32445d15
- (void)invalidate;	// 0x32445b61
// declared property getter: - (id)logger;	// 0x32445c85
// declared property getter: - (id)message;	// 0x32445ca5
// declared property setter: - (void)setFired:(id)fired;	// 0x32445d25
// declared property setter: - (void)setLogger:(id)logger;	// 0x32445c95
// declared property setter: - (void)setMessage:(id)message;	// 0x32445cb5
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x32445cdd
// declared property setter: - (void)setTimeoutBlock:(id)block;	// 0x32445d05
// declared property setter: - (void)setTimer:(id)timer;	// 0x32445d45
// declared property getter: - (double)timeout;	// 0x32445cc5
// declared property getter: - (id)timeoutBlock;	// 0x32445cf1
// declared property getter: - (id)timer;	// 0x32445d35
@end
