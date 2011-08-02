/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureOutput.h"

@class NSDictionary, AVCaptureVideoDataOutputInternal;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
@private
	AVCaptureVideoDataOutputInternal *_internal;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL alwaysDiscardsLateVideoFrames;	// G=0x325b4dd9; S=0x325b4f11; 
@property(assign, nonatomic) XXStruct_pwHToB minFrameDuration;	// G=0x325b5791; S=0x325b56dd; 
@property(readonly, assign, nonatomic) dispatch_queue_s *sampleBufferCallbackQueue;	// G=0x325b4dbd; 
@property(readonly, assign, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x325b4da1; 
@property(copy, nonatomic) NSDictionary *videoSettings;	// G=0x325b4f69; S=0x325b539d; 
+ (void)initialize;	// 0x325b4d9d
- (id)init;	// 0x325b50cd
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;	// 0x325b5c29
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x325b586d
// declared property getter: - (BOOL)alwaysDiscardsLateVideoFrames;	// 0x325b4dd9
- (id)availableVideoCVPixelFormatTypes;	// 0x325b4fc5
- (id)availableVideoCodecTypes;	// 0x325b4fa5
- (id)connectionMediaTypes;	// 0x325b4ebd
- (void)dealloc;	// 0x325b5085
- (void)didStartForSession:(id)session;	// 0x325b4e6d
- (void)didStopForSession:(id)session error:(id)error;	// 0x325b4ea5
// declared property getter: - (XXStruct_pwHToB)minFrameDuration;	// 0x325b5791
// declared property getter: - (dispatch_queue_s *)sampleBufferCallbackQueue;	// 0x325b4dbd
// declared property getter: - (id)sampleBufferDelegate;	// 0x325b4da1
// declared property setter: - (void)setAlwaysDiscardsLateVideoFrames:(BOOL)frames;	// 0x325b4f11
// declared property setter: - (void)setMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x325b56dd
- (void)setSampleBufferDelegate:(id)delegate queue:(dispatch_queue_s *)queue;	// 0x325b55f9
- (void)setSession:(id)session;	// 0x325b522d
// declared property setter: - (void)setVideoSettings:(id)settings;	// 0x325b539d
// declared property getter: - (id)videoSettings;	// 0x325b4f69
@end
