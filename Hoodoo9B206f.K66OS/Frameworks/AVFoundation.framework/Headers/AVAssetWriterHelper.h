/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVAssetWriterConfigurationState, NSError, NSArray, AVMediaFileType, NSURL;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x326b23ed; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x326b2fed; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x326b2459; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x326b2745; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x326b23c5; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x326b2691; S=0x326b26b9; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x326b245d; S=0x326b249d; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x326b25dd; S=0x326b2605; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x326b239d; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x326b2529; S=0x326b2551; 
@property(readonly, assign, nonatomic) int status;	// G=0x326b2425; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x326b2ffd; S=0x326b3011; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x326b2245
- (id)initWithConfigurationState:(id)configurationState;	// 0x326b2259
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x326b276d
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x326b2d71
- (void)addInput:(id)input;	// 0x326b2ab1
// declared property getter: - (id)availableMediaTypes;	// 0x326b23ed
- (BOOL)canAddInput:(id)input;	// 0x326b2aad
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x326b2a89
- (void)cancelWriting;	// 0x326b2ce1
// declared property getter: - (id)configurationState;	// 0x326b2fed
- (void)dealloc;	// 0x326b233d
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x326b2c55
// declared property getter: - (id)error;	// 0x326b2459
- (void)finishWriting;	// 0x326b2ce5
// declared property getter: - (id)inputs;	// 0x326b2745
// declared property getter: - (id)mediaFileType;	// 0x326b23c5
// declared property getter: - (id)metadata;	// 0x326b2691
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x326b245d
// declared property getter: - (int)movieTimeScale;	// 0x326b25dd
// declared property getter: - (id)outputURL;	// 0x326b239d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x326b26b9
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x326b249d
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x326b2605
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x326b2551
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x326b3011
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x326b2529
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x326b2bc9
- (void)startWriting;	// 0x326b2b3d
// declared property getter: - (int)status;	// 0x326b2425
- (void)transitionToFailedStatusWithError:(id)error;	// 0x326b2eb5
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x326b2ffd
@end
