/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"

@class AVCaptureAudioDataOutputInternal, NSObject;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureAudioDataOutput : AVCaptureOutput {
	AVCaptureAudioDataOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;	// G=0x3028f99d; 
@property(readonly, assign, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x3028f97d; 
+ (void)initialize;	// 0x3028f5f5
- (id)init;	// 0x3028f5f9
- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;	// 0x3028fb79
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3028fa15
- (id)connectionMediaTypes;	// 0x3028f9bd
- (void)dealloc;	// 0x3028f679
- (void)didStartForSession:(id)session;	// 0x3028fb35
- (void)didStopForSession:(id)session error:(id)error;	// 0x3028fb21
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x3028faa5
- (BOOL)isTheOnlyDataOutput;	// 0x3028f6c5
// declared property getter: - (id)sampleBufferCallbackQueue;	// 0x3028f99d
// declared property getter: - (id)sampleBufferDelegate;	// 0x3028f97d
- (void)setSampleBufferDelegate:(id)delegate queue:(id)queue;	// 0x3028f88d
- (void)setSession:(id)session;	// 0x3028f81d
@end

