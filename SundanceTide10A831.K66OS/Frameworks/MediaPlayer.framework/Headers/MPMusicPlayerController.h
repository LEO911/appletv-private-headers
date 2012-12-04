/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPMediaPlayback.h"

@class MPMusicPlayerControllerInternal;

@protocol MPMusicPlayerController
@optional
@property(retain) id allowsRemoteUIAccess;	// converted property
@property(retain) id currentChapterIndex;	// converted property
@property(retain) id currentPlaybackRate;	// converted property
@property(retain) id currentPlaybackTime;	// converted property
@property(retain) id nowPlayingItem;	// converted property
@property(retain) id playbackSpeed;	// converted property
@property(retain) id repeatMode;	// converted property
@property(retain) id shuffleMode;	// converted property
// converted property getter: - (id)allowsRemoteUIAccess;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
// converted property getter: - (id)currentChapterIndex;
// converted property getter: - (id)currentPlaybackRate;
// converted property getter: - (id)currentPlaybackTime;
- (void)endSeeking;
- (id)indexOfNowPlayingItem;
- (id)isGeniusAvailable;
- (id)isGeniusAvailableForSeedItems:(id)seedItems;
- (id)isNowPlayingItemFromGeniusMix;
// converted property getter: - (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(id)index;
- (id)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;
- (void)play;
- (void)playItem:(id)item;
// converted property getter: - (id)playbackSpeed;
- (id)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (id)queueAsQuery;
- (void)registerForServerDiedNotifications;
// converted property getter: - (id)repeatMode;
- (id)serverIsAlive;
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;
// converted property setter: - (void)setCurrentChapterIndex:(id)index;
// converted property setter: - (void)setCurrentPlaybackRate:(id)rate;
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;
// converted property setter: - (void)setNowPlayingItem:(id)item;
// converted property setter: - (void)setPlaybackSpeed:(id)speed;
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;
- (void)setQueueWithItemCollection:(id)itemCollection;
- (void)setQueueWithQuery:(id)query;
- (void)setQueueWithQuery:(id)query firstItem:(id)item;
- (id)setQueueWithSeedItems:(id)seedItems;
// converted property setter: - (void)setRepeatMode:(id)mode;
// converted property setter: - (void)setShuffleMode:(id)mode;
- (void)setUseApplicationSpecificQueue:(id)queue;
- (void)shuffle;
// converted property getter: - (id)shuffleMode;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (void)stop;
- (id)unshuffledIndexOfNowPlayingItem;
@end

@interface MPMusicPlayerController : NSObject <MPMediaPlayback> {
	MPMusicPlayerControllerInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsRemoteUIAccess;	// G=0x36f0a7b9; S=0x36f0a7ed; converted property
@property(assign) unsigned currentChapterIndex;	// G=0x36f0a9d1; S=0x36f0aa09; converted property
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x36f0a07d; S=0x36f0a16d; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x36f0a0b5; S=0x36f0a1b5; 
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x36f0a0ed; 
@property(assign) int playbackSpeed;	// G=0x36f0a875; S=0x36f0a8ad; converted property
@property(assign) int repeatMode;	// G=0x36f0a39d; S=0x36f0a3d5; converted property
@property(assign) int shuffleMode;	// G=0x36f0a41d; S=0x36f0a455; converted property
@property(assign) float volume;	// G=0x36f0a49d; S=0x36f0a4f9; converted property
+ (id)applicationMusicPlayer;	// 0x36f09b61
+ (id)iPodMusicPlayer;	// 0x36f09bbd
+ (void)initialize;	// 0x36f0ab4d
+ (id)runLoopForNotifications;	// 0x36f0abe9
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x36f0abb1
- (id)init;	// 0x36f09c19
- (void)_clientCheckInUsingExistencePort:(BOOL)usingExistencePort;	// 0x36f0ae29
- (void)_isQueuePreparedDidChange:(BOOL)_isQueuePrepared;	// 0x36f0b3e9
- (void)_itemPlaybackDidEnd:(unsigned long long)_itemPlayback;	// 0x36f0b479
- (void)_musicPlayerDidLaunch;	// 0x36f0ad25
- (BOOL)_musicPlayerExistencePortIsValid;	// 0x36f0af7d
- (void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;	// 0x36f0b1c5
- (void)_playbackStateDidChange:(int)_playbackState;	// 0x36f0b049
- (void)_registerForLaunchNotifications;	// 0x36f0ad61
- (void)_repeatModeDidChange:(int)_repeatMode;	// 0x36f0b361
- (void)_runMigServerOnPort:(unsigned)port;	// 0x36f0b56d
- (void)_serverDied:(id)died;	// 0x36f0acbd
- (void)_setUseApplicationSpecificQueue:(BOOL)queue;	// 0x36f0ac2d
- (void)_shuffleModeDidChange:(int)_shuffleMode;	// 0x36f0b2d9
- (void)_stopMigServer;	// 0x36f0b609
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x36f09f21
- (void)_unregisterForLaunchNotifications;	// 0x36f0ae09
// converted property getter: - (BOOL)allowsRemoteUIAccess;	// 0x36f0a7b9
- (void)beginGeneratingPlaybackNotifications;	// 0x36f0a611
- (void)beginSeekingBackward;	// 0x36f0a03d
- (void)beginSeekingForward;	// 0x36f0a01d
// converted property getter: - (unsigned)currentChapterIndex;	// 0x36f0a9d1
// declared property getter: - (float)currentPlaybackRate;	// 0x36f0a07d
// declared property getter: - (double)currentPlaybackTime;	// 0x36f0a0b5
- (void)dealloc;	// 0x36f09dcd
- (void)endGeneratingPlaybackNotifications;	// 0x36f0a635
- (void)endSeeking;	// 0x36f0a05d
- (void)forwardInvocation:(id)invocation;	// 0x36f09fd9
- (unsigned)indexOfNowPlayingItem;	// 0x36f0a8f5
- (BOOL)isGeniusAvailable;	// 0x36f0a65d
- (BOOL)isGeniusAvailableForSeedItems:(id)seedItems;	// 0x36f0a691
- (BOOL)isNowPlayingItemFromGeniusMix;	// 0x36f0a99d
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x36f0a0ed
- (id)methodSignatureForSelector:(SEL)selector;	// 0x36f09ffd
- (id)nowPlayingItem;	// 0x36f0a21d
- (id)nowPlayingItemAtIndex:(unsigned)index;	// 0x36f0a6f9
- (unsigned)numberOfItems;	// 0x36f0a965
- (void)pause;	// 0x36f0a14d
- (void)pauseWithFadeoutDuration:(double)fadeoutDuration;	// 0x36f0a741
- (void)play;	// 0x36f0a12d
// converted property getter: - (int)playbackSpeed;	// 0x36f0a875
- (int)playbackState;	// 0x36f0a309
- (void)prepareToPlay;	// 0x36f0a10d
// converted property getter: - (int)repeatMode;	// 0x36f0a39d
- (BOOL)serverIsAlive;	// 0x36f0abf9
// converted property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x36f0a7ed
// converted property setter: - (void)setCurrentChapterIndex:(unsigned)index;	// 0x36f0aa09
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x36f0a16d
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x36f0a1b5
// converted property setter: - (void)setPlaybackSpeed:(int)speed;	// 0x36f0a8ad
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x36f0ab2d
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x36f0a269
- (void)setQueueWithQuery:(id)query;	// 0x36f0a255
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x36f0aa51
- (BOOL)setQueueWithSeedItems:(id)seedItems;	// 0x36f0a6c5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x36f0a3d5
// converted property setter: - (void)setShuffleMode:(int)mode;	// 0x36f0a455
- (void)setUseCachedPlaybackState:(BOOL)state;	// 0x36f0a789
// converted property setter: - (void)setVolume:(float)volume;	// 0x36f0a4f9
// converted property getter: - (int)shuffleMode;	// 0x36f0a41d
- (void)stop;	// 0x36f0a1fd
- (unsigned)unshuffledIndexOfNowPlayingItem;	// 0x36f0a92d
// converted property getter: - (float)volume;	// 0x36f0a49d
@end
