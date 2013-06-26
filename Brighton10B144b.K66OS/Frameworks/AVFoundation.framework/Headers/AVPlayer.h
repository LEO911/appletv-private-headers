/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSArray, AVPlayerInternal;

@interface AVPlayer : NSObject {
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x3025604d; S=0x30256091; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x30256171; 
@property(assign) int actionAtItemEnd;	// G=0x30251299; S=0x302515d1; converted property
@property(assign) BOOL allowsAirPlayVideo;	// G=0x30252229; S=0x30252241; converted property
@property(assign) BOOL allowsExternalPlayback;	// G=0x30251a29; S=0x30251b05; converted property
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x302563f1; 
@property(assign, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x302516dd; S=0x302517b9; converted property
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x30257765; S=0x30257841; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3024eb8d; 
@property(retain) id externalPlaybackVideoGravity;	// G=0x30252f89; S=0x30252fcd; converted property
@property(retain) id externalVideoGravity;	// G=0x302531b9; S=0x302531c9; converted property
@property(assign) OpaqueCMClock *masterClock;	// G=0x30250e5d; S=0x30250e7d; converted property
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x30256705; S=0x30256665; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x302565b1; S=0x30256511; 
@property(assign) float rate;	// G=0x30250489; S=0x30250565; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x3024eb6d; 
@property(assign) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x30252425; S=0x3025243d; converted property
@property(assign) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x30251d99; S=0x30251e75; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x302515e5
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;	// 0x30252421
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;	// 0x30252295
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;	// 0x30251c65
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x302518cd
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x3024eee9
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;	// 0x30257955
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;	// 0x302521e5
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;	// 0x30250f6d
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x30250665
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x30252491
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;	// 0x30251fd5
+ (BOOL)automaticallyNotifiesObserversOfVolume;	// 0x3025116d
+ (void)initialize;	// 0x3024dca1
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x302515e9
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x302518d1
+ (id)keyPathsForValuesAffectingRate;	// 0x30250669
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x3024dd05
+ (id)playerWithURL:(id)url;	// 0x3024dcbd
- (id)init;	// 0x3024ddc5
- (id)initWithDispatchQueue:(id)dispatchQueue;	// 0x3024e2f5
- (id)initWithPlayerItem:(id)playerItem;	// 0x3024dd4d
- (id)initWithURL:(id)url;	// 0x3024dd89
- (BOOL)_CALayerDestinationIsTVOut;	// 0x3025741d
- (int)_actionAtItemEnd;	// 0x30251175
- (void)_addFPListeners;	// 0x302532e1
- (void)_addLayer:(id)layer;	// 0x30252d3d
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem;	// 0x3024eeed
- (BOOL)_airPlayVideoActive;	// 0x30252299
- (BOOL)_allowsExternalPlayback;	// 0x302518f9
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// 0x302567b9
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x3024f385
- (void)_attachLayersToFigPlayer;	// 0x302529c5
- (id)_cachedValueForKey:(id)key;	// 0x3024e849
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)handler;	// 0x30250aa9
- (void)_changeStatusToFailedWithError:(id)error;	// 0x3024ebd1
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x30253829
- (id)_clientName;	// 0x30257221
- (void)_coordinateWithRemovalOfItem:(id)item;	// 0x30250111
- (int)_createPrerollID;	// 0x30250a4d
- (id)_currentItem;	// 0x3024ecbd
- (void)_currentItemStatusIsReadyToPlay;	// 0x3024ee45
- (id)_currentSubtitlesPayload;	// 0x30253661
- (int)_defaultActionAtItemEnd;	// 0x30251171
- (void)_detachLayersFromFigPlayer;	// 0x30252aa9
- (void)_didAccessKVOForKey:(id)key;	// 0x3024e8d5
- (void)_didFinishSuspension:(id)suspension;	// 0x30256df1
- (BOOL)_disallowsAMRAudio;	// 0x302576b9
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x3025604d
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x3025028d
- (BOOL)_externalPlaybackActive;	// 0x30251fd9
// declared property getter: - (int)_externalProtectionStatus;	// 0x30256171
- (OpaqueFigPlayer *)_figPlayer;	// 0x3024e809
- (id)_fpNotificationNames;	// 0x302531d9
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;	// 0x30256961
- (BOOL)_iapdExtendedModeIsActive;	// 0x30256a31
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x3024f365
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x3024f2dd
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x30251611
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)background;	// 0x30256a91
- (id)_items;	// 0x302502ed
- (void)_logPerformanceDataForCurrentItem;	// 0x302539a9
- (void)_logPerformanceDataForPreviousItem;	// 0x3025388d
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;	// 0x3025621d
- (id)_pixelBufferAttributeMediator;	// 0x30252889
- (id)_playbackDisplaysForFigPlayer;	// 0x30255f65
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)_playerDestinationPixelBufferAttributes;	// 0x3024ec55
- (id)_playerLayers;	// 0x302528a9
- (id)_propertyStorage;	// 0x3024e829
- (float)_rate;	// 0x30250409
- (void)_removeAllItems;	// 0x302503b9
- (void)_removeAllLayers;	// 0x30252799
- (void)_removeFPListeners;	// 0x3025349d
- (BOOL)_removeItem:(id)item;	// 0x302501f9
- (void)_removeLayer:(id)layer;	// 0x30252af5
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x30257579
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x30251385
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x30257379
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x3024e875
- (void)_setClientName:(id)name;	// 0x302572d9
- (void)_setCurrentItem:(id)item;	// 0x3024ed15
- (void)_setCurrentSubtitlesPayload:(id)payload;	// 0x30253609
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x30256091
- (void)_setEQPreset:(int)preset;	// 0x302570e9
- (void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItem *)makeCurrent;	// 0x302535e9
- (void)_setNeroVideoGravityOnFigPlayer;	// 0x30253069
- (void)_setPreferredLanguageList:(id)list;	// 0x302574d9
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x30257181
- (void)_setVolume:(float)volume;	// 0x30251095
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x30257045
- (BOOL)_shouldDetachContentLayersFromFigPlayer;	// 0x30256d91
- (BOOL)_shouldLogPerformanceData;	// 0x3025386d
- (id)_stateDispatchQueue;	// 0x3024e7e9
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;	// 0x30250c55
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;	// 0x30251c69
- (float)_volume;	// 0x30250f71
- (id)_weakReference;	// 0x3024e7b9
- (void)_willAccessKVOForKey:(id)key;	// 0x3024e8a9
- (void)_willEnterForeground:(id)foreground;	// 0x30256f35
// converted property getter: - (int)actionAtItemEnd;	// 0x30251299
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x302525ed
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3024e9c1
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(id)queue usingBlock:(id)block;	// 0x3025250d
// converted property getter: - (BOOL)allowsAirPlayVideo;	// 0x30252229
// converted property getter: - (BOOL)allowsExternalPlayback;	// 0x30251a29
- (void)cancelPendingPrerolls;	// 0x30250d59
- (id)currentItem;	// 0x3024ecdd
- (XXStruct_pwHToB)currentTime;	// 0x30250691
- (void)dealloc;	// 0x3024e361
- (void)didChangeValueForKey:(id)key;	// 0x3024e961
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x30257765
- (id)dispatchQueue;	// 0x3024e7d9
// declared property getter: - (id)error;	// 0x3024eb8d
- (int)externalPlaybackType;	// 0x302521e9
// converted property getter: - (id)externalPlaybackVideoGravity;	// 0x30252f89
// converted property getter: - (id)externalVideoGravity;	// 0x302531b9
- (void)finalize;	// 0x3024e675
- (BOOL)isAirPlayVideoActive;	// 0x30252345
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x302563f1
// converted property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x302516dd
- (BOOL)isExternalPlaybackActive;	// 0x30252109
// converted property getter: - (OpaqueCMClock *)masterClock;	// 0x30250e5d
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x30256705
// declared property getter: - (float)minRateForAudioPlayback;	// 0x302565b1
- (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x30256239
- (void)pause;	// 0x302524a9
- (void)play;	// 0x30252495
- (id)playerAVAudioSession;	// 0x30257675
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x3024f345
- (void)prerollAtRate:(float)rate completionHandler:(id)handler;	// 0x30250c99
- (void)prerollOperationDidComplete:(BOOL)prerollOperation notificationPayload:(CFDictionaryRef)payload;	// 0x30250d6d
// converted property getter: - (float)rate;	// 0x30250489
- (void)removeAudioPlaybackRateLimits;	// 0x30256315
- (void)removeTimeObserver:(id)observer;	// 0x302526b5
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x302524bd
- (void)seekToDate:(id)date;	// 0x302506f1
- (void)seekToDate:(id)date completionHandler:(id)handler;	// 0x30250721
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x30250755
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x30250841
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x302507a1
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x302508cd
// converted property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x302515d1
// converted property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x30252241
// converted property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x30251b05
// converted property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x302517b9
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x30257841
// converted property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x30252fcd
// converted property setter: - (void)setExternalVideoGravity:(id)gravity;	// 0x302531c9
// converted property setter: - (void)setMasterClock:(OpaqueCMClock *)clock;	// 0x30250e7d
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x30256665
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x30256511
// converted property setter: - (void)setRate:(float)rate;	// 0x30250565
- (void)setRate:(float)rate time:(XXStruct_pwHToB)time atHostTime:(XXStruct_pwHToB)hostTime;	// 0x30250979
// converted property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x3025243d
// converted property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x30251e75
// declared property getter: - (int)status;	// 0x3024eb6d
// converted property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x30252425
// converted property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x30251d99
- (void)willChangeValueForKey:(id)key;	// 0x3024e901
@end
