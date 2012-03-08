/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputConfigurationState, AVOutputSettings, AVWeakReference, NSDictionary, NSArray, NSString;

@interface AVAssetWriterInputHelper : NSObject {
@private
	AVAssetWriterInputConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriterInput;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVAssetWriterInputConfigurationState *configurationState;	// G=0x3231cbbd; @synthesize=_configurationState
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x3231dbe9; S=0x3231eb99; 
@property(assign, nonatomic) int mediaTimeScale;	// G=0x3231dbc1; S=0x3231ec25; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3231db21; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3231db99; S=0x3231ecb1; 
@property(readonly, assign, nonatomic) AVOutputSettings *outputSettings;	// G=0x3231db49; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x3231cbb9; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x3231cbad; 
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x3231db71; S=0x3231edf9; 
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x3231dc11; S=0x3231e8fd; 
@property(readonly, assign, nonatomic) int status;	// G=0x3231ee85; 
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x3231edc9; S=0x3231ed3d; 
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;	// G=0x3231e8e5; S=0x3231e8c1; @synthesize=_weakReferenceToAssetWriterInput
- (id)initWithConfigurationState:(id)configurationState;	// 0x3231eeb9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x3231e9f5
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x3231ea81
// declared property getter: - (id)configurationState;	// 0x3231cbbd
- (void)dealloc;	// 0x3231e861
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x3231dbe9
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x3231cbad
- (void)markAsFinished;	// 0x3231e969
// declared property getter: - (int)mediaTimeScale;	// 0x3231dbc1
// declared property getter: - (id)mediaType;	// 0x3231db21
// declared property getter: - (id)metadata;	// 0x3231db99
// declared property getter: - (id)outputSettings;	// 0x3231db49
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x3231cbb9
- (void)prepareToEndSession;	// 0x3231cbb1
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x3231cbb5
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x3231eb0d
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x3231db71
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x3231eb99
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x3231ec25
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3231ecb1
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x3231edf9
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x3231e8fd
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x3231ed3d
// declared property setter: - (void)setWeakReferenceToAssetWriterInput:(id)assetWriterInput;	// 0x3231e8c1
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x3231dc11
// declared property getter: - (int)status;	// 0x3231ee85
// declared property getter: - (CGAffineTransform)transform;	// 0x3231edc9
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;	// 0x3231dae5
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x3231d6c9
// declared property getter: - (id)weakReferenceToAssetWriterInput;	// 0x3231e8e5
@end
