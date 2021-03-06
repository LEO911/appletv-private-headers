/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, AVWeakReference, NSError, NSArray, AVMediaFileType, AVAssetWriterConfigurationState;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x3231aa3d; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x323193c9; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x323193bd; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3231aaed; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3231aa15; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3231aac5; S=0x3231b579; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x3231b7a9; S=0x3231b71d; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x3231aa9d; S=0x3231b605; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x3231a9ed; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3231aa75; S=0x3231b691; 
@property(readonly, assign, nonatomic) int status;	// G=0x3231b7d9; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x3231acd9; S=0x3231acb5; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x3231a9d9
- (id)initWithConfigurationState:(id)configurationState;	// 0x3231b80d
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x3231b245
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x3231ae39
- (void)addInput:(id)input;	// 0x3231b1b9
// declared property getter: - (id)availableMediaTypes;	// 0x3231aa3d
- (BOOL)canAddInput:(id)input;	// 0x323193c1
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x3231ab15
- (void)cancelWriting;	// 0x323193c5
// declared property getter: - (id)configurationState;	// 0x323193c9
- (void)dealloc;	// 0x3231ac55
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x3231b015
// declared property getter: - (id)error;	// 0x323193bd
- (void)finishWriting;	// 0x3231af89
// declared property getter: - (id)inputs;	// 0x3231aaed
// declared property getter: - (id)mediaFileType;	// 0x3231aa15
// declared property getter: - (id)metadata;	// 0x3231aac5
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x3231b7a9
// declared property getter: - (int)movieTimeScale;	// 0x3231aa9d
// declared property getter: - (id)outputURL;	// 0x3231a9ed
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3231b579
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x3231b71d
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x3231b605
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3231b691
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x3231acb5
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3231aa75
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x3231b0a1
- (void)startWriting;	// 0x3231b12d
// declared property getter: - (int)status;	// 0x3231b7d9
- (void)transitionToFailedStatusWithError:(id)error;	// 0x3231acf1
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x3231acd9
@end

