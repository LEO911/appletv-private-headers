/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoComposition, NSArray, NSString, AVAssetExportSessionInternal, NSError, NSURL, AVAudioMix;

@interface AVAssetExportSession : NSObject {
@private
	AVAssetExportSessionInternal *_exportSession;	// 4 = 0x4
}
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x3475d00d; S=0x3475dc49; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3475e6ed; 
@property(assign, nonatomic) long long fileLengthLimit;	// G=0x3475cff1; S=0x3475dced; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;	// G=0x3475eeed; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3475cfd5; S=0x3475dd65; 
@property(copy, nonatomic) NSString *outputFileType;	// G=0x3475cf51; S=0x3475e261; 
@property(copy, nonatomic) NSURL *outputURL;	// G=0x3475cf6d; S=0x3475dea1; 
@property(readonly, assign, nonatomic) NSString *presetName;	// G=0x3475cf35; 
@property(readonly, assign, nonatomic) float progress;	// G=0x3475e5d9; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3475d045; S=0x3475dbd9; 
@property(readonly, assign, nonatomic) int status;	// G=0x3475e811; 
@property(readonly, assign, nonatomic) NSArray *supportedFileTypes;	// G=0x3475d509; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x3475cfad; S=0x3475de09; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x3475d029; S=0x3475f1fd; 
+ (id)_figRemakerNotificationNames;	// 0x3475d0a5
+ (id)_settingForPreset:(id)preset;	// 0x3475f3b1
+ (id)_utTypesForPresets;	// 0x34760239
+ (id)allExportPresets;	// 0x3475f419
+ (id)exportPresetsCompatibleWithAsset:(id)asset;	// 0x3475e3fd
+ (id)exportSessionWithAsset:(id)asset presetName:(id)name;	// 0x3475d581
- (id)init;	// 0x3475d569
- (id)initWithAsset:(id)asset presetName:(id)name;	// 0x3475d711
- (id)_actualPresetName;	// 0x3475d061
- (void)_addListeners;	// 0x3475f6e1
- (BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;	// 0x3475fcc5
- (BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;	// 0x3476025d
- (OpaqueFigRemaker *)_createFigRemaker;	// 0x34760a21
- (CGSize)_getSourceDimension;	// 0x3475fa81
- (int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;	// 0x3475e14d
- (void)_handleFigRemakerNotification:(id)notification;	// 0x3475f58d
- (void)_handleFigRemakerNotificationAsync:(id)async;	// 0x3475f685
- (BOOL)_hasProtectedNonAudioVideoTracks;	// 0x3475fb4d
- (void)_removeListeners;	// 0x3475f829
- (id)_settingForFigRemaker;	// 0x3475f96d
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;	// 0x3475e039
- (void)_transitionToStatus:(int)status error:(id)error;	// 0x3475eaad
- (void)_updateProgress;	// 0x3475e9f1
// declared property getter: - (id)audioMix;	// 0x3475d00d
- (void)cancelExport;	// 0x3475d439
- (void)dealloc;	// 0x3475da0d
- (id)description;	// 0x3475d675
// declared property getter: - (id)error;	// 0x3475e6ed
- (void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;	// 0x3475ed49
// declared property getter: - (long long)fileLengthLimit;	// 0x3475cff1
- (void)finalize;	// 0x34762421
// declared property getter: - (XXStruct_pwHToB)maxDuration;	// 0x3475eeed
// declared property getter: - (id)metadata;	// 0x3475cfd5
// declared property getter: - (id)outputFileType;	// 0x3475cf51
// declared property getter: - (id)outputURL;	// 0x3475cf6d
// declared property getter: - (id)presetName;	// 0x3475cf35
// declared property getter: - (float)progress;	// 0x3475e5d9
- (void)release;	// 0x3475d5c5
- (id)retain;	// 0x3475d61d
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x3475dc49
// declared property setter: - (void)setFileLengthLimit:(long long)limit;	// 0x3475dced
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3475dd65
// declared property setter: - (void)setOutputFileType:(id)type;	// 0x3475e261
// declared property setter: - (void)setOutputURL:(id)url;	// 0x3475dea1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3475dbd9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x3475de09
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x3475f1fd
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3475d045
// declared property getter: - (int)status;	// 0x3475e811
// declared property getter: - (id)supportedFileTypes;	// 0x3475d509
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x3475cfad
// declared property getter: - (id)videoComposition;	// 0x3475d029
@end
