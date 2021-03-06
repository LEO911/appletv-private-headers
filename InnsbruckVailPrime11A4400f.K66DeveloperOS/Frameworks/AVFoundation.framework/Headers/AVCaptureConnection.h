/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureVideoPreviewLayer, AVCaptureOutput, NSArray, AVCaptureConnectionInternal;

@interface AVCaptureConnection : NSObject {
	AVCaptureConnectionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x2c2bd799; 
@property(readonly, assign, nonatomic) NSArray *audioChannels;	// G=0x2c2bda75; 
@property(assign, nonatomic) BOOL automaticallyAdjustsVideoMirroring;	// G=0x2c2be40d; S=0x2c2be42d; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x2c2bd7d9; S=0x2c2bd7f9; 
@property(assign, nonatomic) BOOL enablesVideoStabilizationWhenAvailable;	// G=0x2c2bf48d; S=0x2c2bf4ad; 
@property(readonly, assign, nonatomic) NSArray *inputPorts;	// G=0x2c2bd751; 
@property(readonly, assign, nonatomic) AVCaptureOutput *output;	// G=0x2c2bd6c1; 
@property(readonly, assign, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;	// G=0x2c2bec25; 
@property(readonly, assign, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;	// G=0x2c2be585; 
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;	// G=0x2c2be231; 
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;	// G=0x2c2be44d; 
@property(readonly, assign, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;	// G=0x2c2bf3f9; 
@property(assign, nonatomic) XXStruct_pwHToB videoMaxFrameDuration;	// G=0x2c2bec99; S=0x2c2bed89; 
@property(readonly, assign, nonatomic) float videoMaxScaleAndCropFactor;	// G=0x2c2bf2e5; 
@property(assign, nonatomic) XXStruct_pwHToB videoMinFrameDuration;	// G=0x2c2be6a1; S=0x2c2beb9d; 
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;	// G=0x2c2be251; S=0x2c2be271; 
@property(assign, nonatomic) int videoOrientation;	// G=0x2c2be46d; S=0x2c2be48d; 
@property(readonly, assign, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;	// G=0x2c2bd709; 
@property(assign) int videoRetainedBufferCountHint;	// G=0x2c2bf5f5; S=0x2c2bf671; converted property
@property(assign, nonatomic) float videoScaleAndCropFactor;	// G=0x2c2bf305; S=0x2c2bf325; 
@property(readonly, assign, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;	// G=0x2c2bf46d; 
+ (id)connectionWithInputPort:(id)inputPort videoPreviewLayer:(id)layer;	// 0x2c2bc995
+ (id)connectionWithInputPorts:(id)inputPorts output:(id)output;	// 0x2c2bc945
+ (void)initialize;	// 0x2c2bc921
- (void)initCommonStorage;	// 0x2c2bc9e5
- (id)initWithInputPort:(id)inputPort videoPreviewLayer:(id)layer;	// 0x2c2bd105
- (id)initWithInputPorts:(id)inputPorts output:(id)output;	// 0x2c2bd00d
- (void)_setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2be725
- (void)_setVideoMirrored:(BOOL)mirrored;	// 0x2c2be3b1
- (XXStruct_pwHToB)_videoMinFrameDuration;	// 0x2c2be5f9
- (void)addInputPort:(id)port;	// 0x2c2bd341
// declared property getter: - (id)audioChannels;	// 0x2c2bda75
// declared property getter: - (BOOL)automaticallyAdjustsVideoMirroring;	// 0x2c2be40d
- (void)dealloc;	// 0x2c2bd1e9
- (id)description;	// 0x2c2bd249
// declared property getter: - (BOOL)enablesVideoStabilizationWhenAvailable;	// 0x2c2bf48d
- (float)getAvgAudioLevelForChannel:(id)channel;	// 0x2c2bdc7d
- (float)getPeakAudioLevelForChannel:(id)channel;	// 0x2c2bddf9
- (void)inputPortFormatDescriptionChanged:(id)changed;	// 0x2c2bd2e5
// declared property getter: - (id)inputPorts;	// 0x2c2bd751
- (void)invalidate;	// 0x2c2bd419
// declared property getter: - (BOOL)isActive;	// 0x2c2bd799
// declared property getter: - (BOOL)isEnabled;	// 0x2c2bd7d9
- (BOOL)isLive;	// 0x2c2bd8b1
// declared property getter: - (BOOL)isVideoMaxFrameDurationSupported;	// 0x2c2bec25
// declared property getter: - (BOOL)isVideoMinFrameDurationSupported;	// 0x2c2be585
// declared property getter: - (BOOL)isVideoMirrored;	// 0x2c2be251
// declared property getter: - (BOOL)isVideoMirroringSupported;	// 0x2c2be231
// declared property getter: - (BOOL)isVideoOrientationSupported;	// 0x2c2be44d
- (BOOL)isVideoRetainedBufferCountHintSupported;	// 0x2c2bf559
// declared property getter: - (BOOL)isVideoStabilizationEnabled;	// 0x2c2bf46d
// declared property getter: - (BOOL)isVideoStabilizationSupported;	// 0x2c2bf3f9
- (id)mediaType;	// 0x2c2bda31
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2c2bf881
// declared property getter: - (id)output;	// 0x2c2bd6c1
- (void)removeInputPort:(id)port;	// 0x2c2bd3ad
- (id)session;	// 0x2c2bd2f5
- (void)setActive:(BOOL)active;	// 0x2c2bd7b9
// declared property setter: - (void)setAutomaticallyAdjustsVideoMirroring:(BOOL)mirroring;	// 0x2c2be42d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x2c2bd7f9
// declared property setter: - (void)setEnablesVideoStabilizationWhenAvailable:(BOOL)available;	// 0x2c2bf4ad
// declared property setter: - (void)setVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2bed89
// declared property setter: - (void)setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x2c2beb9d
// declared property setter: - (void)setVideoMirrored:(BOOL)mirrored;	// 0x2c2be271
// declared property setter: - (void)setVideoOrientation:(int)orientation;	// 0x2c2be48d
// converted property setter: - (void)setVideoRetainedBufferCountHint:(int)hint;	// 0x2c2bf671
// declared property setter: - (void)setVideoScaleAndCropFactor:(float)factor;	// 0x2c2bf325
- (id)sourceDevice;	// 0x2c2bf735
- (BOOL)sourcesFromFrontFacingCamera;	// 0x2c2bf851
- (void)updateAudioChannelsArray;	// 0x2c2bdf75
- (void)updateAudioLevelsArray;	// 0x2c2bdb5d
// declared property getter: - (XXStruct_pwHToB)videoMaxFrameDuration;	// 0x2c2bec99
// declared property getter: - (float)videoMaxScaleAndCropFactor;	// 0x2c2bf2e5
// declared property getter: - (XXStruct_pwHToB)videoMinFrameDuration;	// 0x2c2be6a1
// declared property getter: - (int)videoOrientation;	// 0x2c2be46d
// declared property getter: - (id)videoPreviewLayer;	// 0x2c2bd709
// converted property getter: - (int)videoRetainedBufferCountHint;	// 0x2c2bf5f5
// declared property getter: - (float)videoScaleAndCropFactor;	// 0x2c2bf305
@end

