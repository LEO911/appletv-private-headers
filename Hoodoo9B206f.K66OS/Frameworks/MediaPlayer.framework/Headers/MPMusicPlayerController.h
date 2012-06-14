/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerInternal;

@protocol MPMusicPlayerController
@optional
@property(retain) id allowsRemoteUIAccess;	// converted property
@property(retain) id currentChapterIndex;	// converted property
@property(retain) id currentPlaybackTime;	// converted property
@property(retain) id nowPlayingItem;	// converted property
@property(retain) id playbackSpeed;	// converted property
@property(retain) id repeatMode;	// converted property
@property(retain) id shuffleMode;	// converted property
// converted property getter: - (id)allowsRemoteUIAccess;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
// converted property getter: - (id)currentChapterIndex;
// converted property getter: - (id)currentPlaybackTime;
- (void)endSeeking;
- (id)indexOfNowPlayingItem;
- (id)isGeniusAvailable;
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
- (id)queueAsQuery;
- (void)registerForServerDiedNotifications;
// converted property getter: - (id)repeatMode;
- (id)serverIsAlive;
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;
// converted property setter: - (void)setCurrentChapterIndex:(id)index;
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

@interface MPMusicPlayerController : NSObject {
	MPMusicPlayerControllerInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsRemoteUIAccess;	// G=0x3038d411; S=0x3038d445; converted property
@property(assign) unsigned currentChapterIndex;	// G=0x3038d62d; S=0x3038d665; converted property
@property(assign) double currentPlaybackTime;	// G=0x3038d211; S=0x3038d249; converted property
@property(assign) int playbackSpeed;	// G=0x3038d4d1; S=0x3038d509; converted property
@property(assign) int repeatMode;	// G=0x3038cfc9; S=0x3038d001; converted property
@property(assign) int shuffleMode;	// G=0x3038d049; S=0x3038d081; converted property
@property(assign) float volume;	// G=0x3038d0c9; S=0x3038d125; converted property
+ (id)applicationMusicPlayer;	// 0x3038c9c5
+ (id)iPodMusicPlayer;	// 0x3038ca21
+ (void)initialize;	// 0x3038d7d5
+ (id)runLoopForNotifications;	// 0x3038d871
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x3038d839
- (id)init;	// 0x3038ca7d
- (void)_clientCheckInUsingExistencePort:(BOOL)usingExistencePort;	// 0x3038daad
- (void)_itemPlaybackDidEnd:(unsigned long long)_itemPlayback;	// 0x3038e04d
- (void)_musicPlayerDidLaunch;	// 0x3038d9cd
- (void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;	// 0x3038de31
- (void)_playbackStateDidChange:(int)_playbackState;	// 0x3038dcb1
- (void)_registerForLaunchNotifications;	// 0x3038d9e1
- (void)_repeatModeDidChange:(int)_repeatMode;	// 0x3038dfc1
- (void)_runMigServerOnPort:(unsigned)port;	// 0x3038e135
- (void)_serverDied:(id)died;	// 0x3038d949
- (void)_setUseApplicationSpecificQueue:(BOOL)queue;	// 0x3038d8b5
- (void)_shuffleModeDidChange:(int)_shuffleMode;	// 0x3038df39
- (void)_stopMigServer;	// 0x3038e1d9
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x3038cd41
- (void)_unregisterForLaunchNotifications;	// 0x3038da8d
// converted property getter: - (BOOL)allowsRemoteUIAccess;	// 0x3038d411
- (void)beginGeneratingPlaybackNotifications;	// 0x3038d295
// converted property getter: - (unsigned)currentChapterIndex;	// 0x3038d62d
// converted property getter: - (double)currentPlaybackTime;	// 0x3038d211
- (void)dealloc;	// 0x3038cbf1
- (void)endGeneratingPlaybackNotifications;	// 0x3038d2b9
- (void)forwardInvocation:(id)invocation;	// 0x3038cdf5
- (unsigned)indexOfNowPlayingItem;	// 0x3038d551
- (BOOL)isGeniusAvailable;	// 0x3038d2e1
- (BOOL)isNowPlayingItemFromGeniusMix;	// 0x3038d5f9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3038ce19
- (id)nowPlayingItem;	// 0x3038ce39
- (id)nowPlayingItemAtIndex:(unsigned)index;	// 0x3038d349
- (unsigned)numberOfItems;	// 0x3038d5c1
- (void)pauseWithFadeoutDuration:(double)fadeoutDuration;	// 0x3038d391
// converted property getter: - (int)playbackSpeed;	// 0x3038d4d1
- (int)playbackState;	// 0x3038cf31
// converted property getter: - (int)repeatMode;	// 0x3038cfc9
- (BOOL)serverIsAlive;	// 0x3038d881
// converted property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x3038d445
// converted property setter: - (void)setCurrentChapterIndex:(unsigned)index;	// 0x3038d665
// converted property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x3038d249
// converted property setter: - (void)setPlaybackSpeed:(int)speed;	// 0x3038d509
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x3038d7b5
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x3038ce8d
- (void)setQueueWithQuery:(id)query;	// 0x3038ce79
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x3038d6ad
- (BOOL)setQueueWithSeedItems:(id)seedItems;	// 0x3038d315
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x3038d001
// converted property setter: - (void)setShuffleMode:(int)mode;	// 0x3038d081
- (void)setUseCachedPlaybackState:(BOOL)state;	// 0x3038d3dd
// converted property setter: - (void)setVolume:(float)volume;	// 0x3038d125
// converted property getter: - (int)shuffleMode;	// 0x3038d049
- (unsigned)unshuffledIndexOfNowPlayingItem;	// 0x3038d589
// converted property getter: - (float)volume;	// 0x3038d0c9
@end
