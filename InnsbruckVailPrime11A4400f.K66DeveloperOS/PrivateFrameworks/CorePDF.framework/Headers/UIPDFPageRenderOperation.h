/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
	UIPDFPageRenderJob *_job;	// 12 = 0xc
	BOOL executing;	// 16 = 0x10
	BOOL finished;	// 17 = 0x11
}
@property(readonly, assign, getter=isExecuting) BOOL executing;	// G=0x3062e605; converted property
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x3062e615; converted property
@property(retain) UIPDFPageRenderJob *job;	// G=0x3062e625; S=0x3062e639; @synthesize=_job
- (id)initWithJob:(id)job;	// 0x3062e34d
- (void)completeOperation;	// 0x3062e579
- (void)dealloc;	// 0x3062e395
- (BOOL)isConcurrent;	// 0x3062e601
// converted property getter: - (BOOL)isExecuting;	// 0x3062e605
// converted property getter: - (BOOL)isFinished;	// 0x3062e615
// declared property getter: - (id)job;	// 0x3062e625
- (void)main;	// 0x3062e4b1
// declared property setter: - (void)setJob:(id)job;	// 0x3062e639
- (void)start;	// 0x3062e3fd
@end
