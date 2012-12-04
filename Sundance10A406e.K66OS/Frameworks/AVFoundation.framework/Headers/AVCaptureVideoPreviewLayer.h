/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureSession, NSString, AVCaptureConnection, AVCaptureVideoPreviewLayerInternal;

@interface AVCaptureVideoPreviewLayer : CALayer {
	AVCaptureVideoPreviewLayerInternal *_internal;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL automaticallyAdjustsMirroring;	// G=0x30315585; S=0x303156dd; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x30315cfd; S=0x30315d31; converted property
@property(readonly, assign, nonatomic) AVCaptureConnection *connection;	// G=0x30313a59; 
@property(assign, nonatomic, getter=isMirrored) BOOL mirrored;	// G=0x3031579d; S=0x303158f5; 
@property(readonly, assign, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;	// G=0x303153f9; 
@property(assign, nonatomic) int orientation;	// G=0x30315169; S=0x303152c1; 
@property(readonly, assign, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;	// G=0x30315041; 
@property(assign, getter=isPaused) BOOL paused;	// G=0x30315b09; S=0x30315b3d; converted property
@property(retain, nonatomic) AVCaptureSession *session;	// G=0x30313a15; S=0x30313a9d; 
@property(copy) NSString *videoGravity;	// G=0x30314bfd; S=0x30314c31; 
+ (void)initialize;	// 0x30313319
+ (id)layerWithSession:(id)session;	// 0x30313435
- (id)init;	// 0x3031347d
- (id)initWithLayer:(id)layer;	// 0x303136f5
- (id)initWithSession:(id)session;	// 0x30313491
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30316261
- (BOOL)_automaticallyAdjustsMirroring;	// 0x303156bd
- (id)_input;	// 0x30316cd5
- (BOOL)_isMirrored;	// 0x303158d5
- (int)_orientation;	// 0x303152a1
- (void)_updateCaptureDeviceTransform;	// 0x30316fa1
- (id)activeConnections;	// 0x30316409
- (id)addConnection:(id)connection error:(id *)error;	// 0x30316655
// declared property getter: - (BOOL)automaticallyAdjustsMirroring;	// 0x30315585
- (void)bumpChangeSeed;	// 0x30316971
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x30316925
- (CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)point;	// 0x30316a25
- (void)centerSublayer;	// 0x3031331d
- (int)changeSeed;	// 0x30316951
// declared property getter: - (id)connection;	// 0x30313a59
- (id)connectionMediaTypes;	// 0x303165fd
- (id)connections;	// 0x303165a9
- (void)dealloc;	// 0x303138e9
- (void)didStartForSession:(id)session;	// 0x30315ef1
- (void)didStopForSession:(id)session error:(id)error;	// 0x3031625d
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x303142c5
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x30315cfd
- (BOOL)isChromaNoiseReductionSupported;	// 0x30315cb1
// declared property getter: - (BOOL)isMirrored;	// 0x3031579d
// declared property getter: - (BOOL)isMirroringSupported;	// 0x303153f9
// declared property getter: - (BOOL)isOrientationSupported;	// 0x30315041
// converted property getter: - (BOOL)isPaused;	// 0x30315b09
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x30315e5d
- (void)layoutSublayers;	// 0x30313c1d
- (id)liveConnections;	// 0x303169d1
- (id)notReadyError;	// 0x3031694d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303142fd
// declared property getter: - (int)orientation;	// 0x30315169
- (CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)interest;	// 0x30316b09
- (float)previewRotationDegrees;	// 0x303136c1
- (CGRect)rectForCaptureDeviceFaceRect:(CGRect)captureDeviceFaceRect;	// 0x30316bd9
- (CGRect)rectForMetadataObject:(id)metadataObject;	// 0x30316c75
- (void)removeConnection:(id)connection;	// 0x303167c9
// declared property getter: - (id)session;	// 0x30313a15
// declared property setter: - (void)setAutomaticallyAdjustsMirroring:(BOOL)mirroring;	// 0x303156dd
- (void)setBounds:(CGRect)bounds;	// 0x30313ba5
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x30315d31
- (void)setHidden:(BOOL)hidden;	// 0x30315ec5
// declared property setter: - (void)setMirrored:(BOOL)mirrored;	// 0x303158f5
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x303152c1
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x30315b3d
// declared property setter: - (void)setSession:(id)session;	// 0x30313a9d
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x30314c31
- (id)subLayer;	// 0x30314281
- (id)transformedMetadataObjectForMetadataObject:(id)metadataObject;	// 0x30316d61
// declared property getter: - (id)videoGravity;	// 0x30314bfd
@end
