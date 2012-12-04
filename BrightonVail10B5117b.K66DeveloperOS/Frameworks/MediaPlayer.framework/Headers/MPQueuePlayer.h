/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAudioDeviceControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class MPAudioDeviceController, NSMutableArray, NSDictionary, AVQueuePlayer, NSError, AVPlayer, NSString, NSArray, AVAudioSessionMediaPlayerOnly, AVPlayerItem;
@protocol OS_dispatch_queue;

@interface MPQueuePlayer : NSObject <MPAudioDeviceControllerDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 4 = 0x4
	AVPlayerItem *_currentItem;	// 8 = 0x8
	XXStruct_pwHToB _currentTime;	// 12 = 0xc
	BOOL _isExternalPlaybackActive;	// 36 = 0x24
	BOOL _pausedForPlaybackQueueTransaction;	// 37 = 0x25
	NSDictionary *_pickedRouteDescription;	// 40 = 0x28
	id _playbackQueueCommitHandler;	// 44 = 0x2c
	int _playbackQueueTransactionCount;	// 48 = 0x30
	AVQueuePlayer *_player;	// 52 = 0x34
	NSMutableArray *_queuedOperations;	// 56 = 0x38
	NSObject<OS_dispatch_queue> *_queuedOperationsAccessQueue;	// 60 = 0x3c
	float _rate;	// 64 = 0x40
	float _rateBeforePlaybackQueueTransaction;	// 68 = 0x44
	BOOL _routeDidChangeDuringPlaybackQueueTransaction;	// 72 = 0x48
	int _status;	// 76 = 0x4c
	int _defaultItemEQPresetType;	// 80 = 0x50
	BOOL _outputObscuredDueToInsufficientExternalProtection;	// 84 = 0x54
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x31e1a4dd; S=0x31e1b231; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x31e1a53d; 
@property(readonly, assign, nonatomic) AVPlayer *_player;	// G=0x31e1a881; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x31e19eb1; S=0x31e1af69; 
@property(assign, nonatomic) BOOL allowsExternalPlayback;	// G=0x31e19f11; S=0x31e1b0c9; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x31e1a58d; S=0x31e1a921; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x31e1a42d; 
@property(readonly, assign) XXStruct_pwHToB currentTime;	// G=0x31e1a465; converted property
@property(assign, nonatomic) int defaultItemEQPresetType;	// G=0x31e1c1fd; S=0x31e1bba1; @synthesize=_defaultItemEQPresetType
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x31e1b661; S=0x31e1bbb1; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x31e1a51d; 
@property(readonly, assign, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;	// G=0x31e1a57d; 
@property(readonly, assign, nonatomic) int externalPlaybackType;	// G=0x31e1a4fd; 
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;	// G=0x31e1b685; S=0x31e1bbe1; 
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;	// G=0x31e1a0cd; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31e1a5b1; 
@property(readonly, assign, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;	// G=0x31e1b62d; 
@property(copy, nonatomic) id playbackQueueCommitHandler;	// G=0x31e1c1d9; S=0x31e1c1ed; @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *playerAVAudioSession;	// G=0x31e1b60d; 
@property(assign, nonatomic) float rate;	// G=0x31e1a8b1; S=0x31e1b251; 
@property(readonly, assign, nonatomic) int status;	// G=0x31e1b5d9; 
@property(assign, nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x31e1b5e9; S=0x31e1b471; 
- (id)init;	// 0x31e19841
- (BOOL)_CALayerDestinationIsTVOut;	// 0x31e1b63d
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x31e1a4dd
// declared property getter: - (int)_externalProtectionStatus;	// 0x31e1a53d
// declared property getter: - (id)_player;	// 0x31e1a881
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x31e1b6d9
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x31e1b881
- (void)_setClientName:(id)name;	// 0x31e1b9e9
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x31e1b231
- (void)_setEQPreset:(int)preset;	// 0x31e1bbd1
- (void)_setPreferredLanguageList:(id)list;	// 0x31e1bc39
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x31e1bdf1
- (void)_setVolume:(float)volume;	// 0x31e1bf65
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x31e1bf85
- (float)_volume;	// 0x31e1c0ed
// declared property getter: - (int)actionAtItemEnd;	// 0x31e19eb1
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x31e19ed1
- (void)advanceToNextItem;	// 0x31e19ef1
// declared property getter: - (BOOL)allowsExternalPlayback;	// 0x31e19f11
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31e1c10d
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;	// 0x31e19f35
- (void)commitPlaybackQueueTransaction;	// 0x31e1a0e5
// declared property getter: - (id)currentItem;	// 0x31e1a42d
// converted property getter: - (XXStruct_pwHToB)currentTime;	// 0x31e1a465
- (void)dealloc;	// 0x31e19add
// declared property getter: - (int)defaultItemEQPresetType;	// 0x31e1c1fd
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x31e1b661
// declared property getter: - (id)error;	// 0x31e1a51d
// declared property getter: - (int)externalPlaybackType;	// 0x31e1a4fd
// declared property getter: - (id)externalPlaybackVideoGravity;	// 0x31e1b685
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x31e1a55d
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x31e1a58d
// declared property getter: - (BOOL)isExternalPlaybackActive;	// 0x31e1a57d
// declared property getter: - (BOOL)isPlaybackQueueTransactionActive;	// 0x31e1a0cd
// declared property getter: - (id)items;	// 0x31e1a5b1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31e19c75
// declared property getter: - (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x31e1b62d
- (void)pause;	// 0x31e1a5d1
- (void)play;	// 0x31e1a729
// declared property getter: - (id)playbackQueueCommitHandler;	// 0x31e1c1d9
// declared property getter: - (id)playerAVAudioSession;	// 0x31e1b60d
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x31e1a891
// declared property getter: - (float)rate;	// 0x31e1a8b1
- (void)removeItem:(id)item;	// 0x31e1a8e1
- (void)removeTimeObserver:(id)observer;	// 0x31e1a901
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x31e1aabd
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x31e1ac81
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x31e1af69
// declared property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x31e1b0c9
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x31e1a921
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;	// 0x31e1aa89
// declared property setter: - (void)setDefaultItemEQPresetType:(int)type;	// 0x31e1bba1
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x31e1bbb1
// declared property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x31e1bbe1
// declared property setter: - (void)setPlaybackQueueCommitHandler:(id)handler;	// 0x31e1c1ed
// declared property setter: - (void)setRate:(float)rate;	// 0x31e1b251
// declared property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x31e1b471
// declared property getter: - (int)status;	// 0x31e1b5d9
// declared property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x31e1b5e9
@end
