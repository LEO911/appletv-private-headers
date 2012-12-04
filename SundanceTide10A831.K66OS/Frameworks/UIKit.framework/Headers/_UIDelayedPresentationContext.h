/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSInvocation;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIDelayedPresentationContext : NSObject {
	BOOL _enableUserInteraction;	// 4 = 0x4
	int _reqcnt;	// 8 = 0x8
	NSInvocation *_presentInvocation;	// 12 = 0xc
	id _cancellationHandler;	// 16 = 0x10
	double _timeout;	// 20 = 0x14
	NSObject<OS_dispatch_source> *_timerSource;	// 28 = 0x1c
}
@property(copy, nonatomic) id cancellationHandler;	// G=0x31ddc765; S=0x31ddc779; @synthesize=_cancellationHandler
@property(retain, nonatomic) NSInvocation *presentInvocation;	// G=0x31ddc789; S=0x31ddc799; @synthesize=_presentInvocation
- (id)initWithTimeout:(double)timeout cancellationHandler:(id)handler;	// 0x31ddc219
- (void)beginDelayedPresentation;	// 0x31ddc4b9
- (void)cancelDelayedPresentation:(BOOL)presentation;	// 0x31ddc3a9
// declared property getter: - (id)cancellationHandler;	// 0x31ddc765
- (void)dealloc;	// 0x31ddc295
- (int)decrementRequestCount;	// 0x31ddc379
- (id)delayingController;	// 0x31ddc32d
- (void)finishDelayedPresentation:(id)presentation;	// 0x31ddc679
- (int)incrementRequestCount;	// 0x31ddc391
- (id)invocationTarget;	// 0x31ddc30d
// declared property getter: - (id)presentInvocation;	// 0x31ddc789
- (int)requestCount;	// 0x31ddc369
// declared property setter: - (void)setCancellationHandler:(id)handler;	// 0x31ddc779
// declared property setter: - (void)setPresentInvocation:(id)invocation;	// 0x31ddc799
@end
