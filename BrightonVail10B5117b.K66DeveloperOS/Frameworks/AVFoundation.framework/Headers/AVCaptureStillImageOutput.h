/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
	AVCaptureStillImageOutputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;	// G=0x302b0085; 
@property(readonly, assign, nonatomic) NSArray *availableImageDataCodecTypes;	// G=0x302b0151; 
@property(readonly, assign, getter=isCapturingStillImage) BOOL capturingStillImage;	// G=0x302b058d; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x302b0315; S=0x302b0335; converted property
@property(assign, getter=isEV0CaptureEnabled) BOOL eV0CaptureEnabled;	// G=0x302b02d5; S=0x302b02f5; converted property
@property(assign, getter=isHDRCaptureEnabled) BOOL hDRCaptureEnabled;	// G=0x302b0295; S=0x302b02b5; converted property
@property(copy, nonatomic) NSDictionary *outputSettings;	// G=0x302afce5; S=0x302afd1d; 
@property(assign) CGSize previewImageSize;	// G=0x302b0225; S=0x302b024d; converted property
@property(assign, getter=isRawCaptureEnabled) BOOL rawCaptureEnabled;	// G=0x302b03c5; S=0x302b03e5; converted property
@property(assign) BOOL suspendsVideoProcessingDuringStillImageCapture;	// G=0x302b04e9; S=0x302b0509; converted property
+ (CGImageRef)cgImageForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x302b1d51
+ (void)initialize;	// 0x302afaad
+ (id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBuffer *)representation;	// 0x302b19dd
+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(IOSurfaceRef)bgrasurface size:(unsigned long)size;	// 0x302b1ed9
+ (id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)surface size:(unsigned long)size metadata:(id)metadata;	// 0x302b1c45
- (id)init;	// 0x302afad1
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x302afb9d
- (void)_updateStillImageDataSizeForCaptureOptions:(id)captureOptions;	// 0x302b1735
// declared property getter: - (id)availableImageDataCVPixelFormatTypes;	// 0x302b0085
// declared property getter: - (id)availableImageDataCodecTypes;	// 0x302b0151
- (void)captureStillImageAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x302b0e89
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)connection completionHandler:(id)handler;	// 0x302b0fa1
- (void)configureAndInitiateCopyStillImageForRequest:(id)request;	// 0x302b0751
- (id)connectionMediaTypes;	// 0x302b01a9
- (void)dealloc;	// 0x302afb51
- (id)firstActiveConnection;	// 0x302b05ad
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x302b1485
- (void)handlePhotoTakenForRequest:(id)request info:(id)info;	// 0x302b10b9
- (unsigned long)imageDataFormatType;	// 0x302b0275
// declared property getter: - (BOOL)isCapturingStillImage;	// 0x302b058d
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x302b0315
// converted property getter: - (BOOL)isEV0CaptureEnabled;	// 0x302b02d5
// converted property getter: - (BOOL)isHDRCaptureEnabled;	// 0x302b0295
// converted property getter: - (BOOL)isRawCaptureEnabled;	// 0x302b03c5
- (BOOL)isRawCaptureSupported;	// 0x302b0355
- (long long)maxStillImageDataSize;	// 0x302b0201
// declared property getter: - (id)outputSettings;	// 0x302afce5
// converted property getter: - (CGSize)previewImageSize;	// 0x302b0225
- (BOOL)resumeVideoProcessing;	// 0x302b0529
- (id)scaleAndCropDictionary;	// 0x302b05f5
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x302b0335
// converted property setter: - (void)setEV0CaptureEnabled:(BOOL)enabled;	// 0x302b02f5
// converted property setter: - (void)setHDRCaptureEnabled:(BOOL)enabled;	// 0x302b02b5
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x302afd1d
// converted property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x302b024d
// converted property setter: - (void)setRawCaptureEnabled:(BOOL)enabled;	// 0x302b03e5
// converted property setter: - (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)capture;	// 0x302b0509
// converted property getter: - (BOOL)suspendsVideoProcessingDuringStillImageCapture;	// 0x302b04e9
@end
