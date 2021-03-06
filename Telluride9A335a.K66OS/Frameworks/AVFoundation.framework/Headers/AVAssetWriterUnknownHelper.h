/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3231bbb1
- (id)initWithURL:(id)url fileType:(id)type;	// 0x3231985d
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;	// 0x32319b55
- (void)addInput:(id)input;	// 0x3231bdb1
- (BOOL)canAddInput:(id)input;	// 0x32319bbd
- (void)cancelWriting;	// 0x3231a941
- (void)setMetadata:(id)metadata;	// 0x32319afd
- (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x32319aa1
- (void)setMovieTimeScale:(int)scale;	// 0x32319b29
- (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x32319ad1
- (void)startWriting;	// 0x32319bd5
- (int)status;	// 0x32319381
@end

