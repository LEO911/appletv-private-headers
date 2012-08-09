/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSOperation.h> // Unknown library

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
	UIPDFPageRenderJob *_job;	// 12 = 0xc
	BOOL executing;	// 16 = 0x10
	BOOL finished;	// 17 = 0x11
}
@property(readonly, assign, getter=isExecuting) BOOL executing;	// G=0x34d32ee5; converted property
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x34d32ef5; converted property
@property(retain) UIPDFPageRenderJob *job;	// G=0x34d32f05; S=0x34d32f19; @synthesize=_job
- (id)initWithJob:(id)job;	// 0x34d32c2d
- (void)completeOperation;	// 0x34d32e59
- (void)dealloc;	// 0x34d32c75
- (BOOL)isConcurrent;	// 0x34d32ee1
// converted property getter: - (BOOL)isExecuting;	// 0x34d32ee5
// converted property getter: - (BOOL)isFinished;	// 0x34d32ef5
// declared property getter: - (id)job;	// 0x34d32f05
- (void)main;	// 0x34d32d91
// declared property setter: - (void)setJob:(id)job;	// 0x34d32f19
- (void)start;	// 0x34d32cdd
@end
