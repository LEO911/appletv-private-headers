/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVMediaFileType, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVFigAssetWriterTrack : NSObject {
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x2c2a2325; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x2c2a2d29; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x2c2a2d59; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x2c2a2d49; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x2c2a20fd; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x2c2a2cd5; S=0x2c2a2cf5; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x2c2a2d39; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x2c2a1969
- (id)init;	// 0x2c2a1a59
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x2c2a1a81
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x2c2a2c51
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x2c2a2179
- (void)_refreshAboveHighWaterLevel;	// 0x2c2a21b1
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x2c2a25bd
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x2c2a23f9
- (void)dealloc;	// 0x2c2a1f15
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x2c2a2d29
- (void)finalize;	// 0x2c2a202d
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x2c2a2325
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x2c2a26ed
// declared property getter: - (id)mediaFileType;	// 0x2c2a2d59
// declared property getter: - (id)mediaType;	// 0x2c2a2d49
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x2c2a20fd
- (void)prepareToEndSession;	// 0x2c2a26e9
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x2c2a2cd5
- (void)setAlternateGroupID:(short)anId;	// 0x2c2a2b51
- (void)setExcludeFromAutoSelection:(BOOL)autoSelection;	// 0x2c2a2bd1
- (void)setExtendedLanguageTag:(id)tag;	// 0x2c2a2975
- (void)setFigDimensions:(id)dimensions;	// 0x2c2a28b5
- (void)setFigMetadata:(id)metadata;	// 0x2c2a2775
- (void)setFigTrackMatrix:(id)matrix;	// 0x2c2a27d5
- (void)setLanguageCode:(id)code;	// 0x2c2a2915
- (void)setLayer:(int)layer;	// 0x2c2a2ad5
- (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x2c2a29d5
- (void)setMediaTimeScale:(int)scale;	// 0x2c2a2835
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x2c2a2cf5
- (void)setTrackVolume:(float)volume;	// 0x2c2a2a55
// declared property getter: - (int)trackID;	// 0x2c2a2d39
@end

