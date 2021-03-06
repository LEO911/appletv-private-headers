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
@private
	MPMusicPlayerControllerInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsRemoteUIAccess;	// G=0x348670f1; S=0x34867125; converted property
@property(assign) unsigned currentChapterIndex;	// G=0x34867309; S=0x34867341; converted property
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x348669b5; S=0x34866aa5; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x348669ed; S=0x34866aed; 
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x34866a25; 
@property(assign) int playbackSpeed;	// G=0x348671ad; S=0x348671e5; converted property
@property(assign) int repeatMode;	// G=0x34866cd5; S=0x34866d0d; converted property
@property(assign) int shuffleMode;	// G=0x34866d55; S=0x34866d8d; converted property
@property(assign) float volume;	// G=0x34866dd5; S=0x34866e31; converted property
+ (id)applicationMusicPlayer;	// 0x348664e1
+ (id)iPodMusicPlayer;	// 0x3486653d
+ (void)initialize;	// 0x34867495
+ (id)runLoopForNotifications;	// 0x34867531
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x348674f9
- (id)init;	// 0x34866599
- (void)_clientCheckInUsingExistencePort:(BOOL)usingExistencePort;	// 0x34867761
- (void)_isQueuePreparedDidChange:(BOOL)_isQueuePrepared;	// 0x34867cf1
- (void)_itemPlaybackDidEnd:(unsigned long long)_itemPlayback;	// 0x34867d81
- (void)_musicPlayerDidLaunch;	// 0x34867685
- (void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;	// 0x34867acd
- (void)_playbackStateDidChange:(int)_playbackState;	// 0x34867951
- (void)_registerForLaunchNotifications;	// 0x34867699
- (void)_repeatModeDidChange:(int)_repeatMode;	// 0x34867c69
- (void)_runMigServerOnPort:(unsigned)port;	// 0x34867e75
- (void)_serverDied:(id)died;	// 0x34867605
- (void)_setUseApplicationSpecificQueue:(BOOL)queue;	// 0x34867575
- (void)_shuffleModeDidChange:(int)_shuffleMode;	// 0x34867be1
- (void)_stopMigServer;	// 0x34867f11
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x34866859
- (void)_unregisterForLaunchNotifications;	// 0x34867741
// converted property getter: - (BOOL)allowsRemoteUIAccess;	// 0x348670f1
- (void)beginGeneratingPlaybackNotifications;	// 0x34866f49
- (void)beginSeekingBackward;	// 0x34866975
- (void)beginSeekingForward;	// 0x34866955
// converted property getter: - (unsigned)currentChapterIndex;	// 0x34867309
// declared property getter: - (float)currentPlaybackRate;	// 0x348669b5
// declared property getter: - (double)currentPlaybackTime;	// 0x348669ed
- (void)dealloc;	// 0x34866705
- (void)endGeneratingPlaybackNotifications;	// 0x34866f6d
- (void)endSeeking;	// 0x34866995
- (void)forwardInvocation:(id)invocation;	// 0x34866911
- (unsigned)indexOfNowPlayingItem;	// 0x3486722d
- (BOOL)isGeniusAvailable;	// 0x34866f95
- (BOOL)isGeniusAvailableForSeedItems:(id)seedItems;	// 0x34866fc9
- (BOOL)isNowPlayingItemFromGeniusMix;	// 0x348672d5
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x34866a25
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34866935
- (id)nowPlayingItem;	// 0x34866b55
- (id)nowPlayingItemAtIndex:(unsigned)index;	// 0x34867031
- (unsigned)numberOfItems;	// 0x3486729d
- (void)pause;	// 0x34866a85
- (void)pauseWithFadeoutDuration:(double)fadeoutDuration;	// 0x34867079
- (void)play;	// 0x34866a65
// converted property getter: - (int)playbackSpeed;	// 0x348671ad
- (int)playbackState;	// 0x34866c41
- (void)prepareToPlay;	// 0x34866a45
// converted property getter: - (int)repeatMode;	// 0x34866cd5
- (BOOL)serverIsAlive;	// 0x34867541
// converted property setter: - (void)setAllowsRemoteUIAccess:(BOOL)access;	// 0x34867125
// converted property setter: - (void)setCurrentChapterIndex:(unsigned)index;	// 0x34867341
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x34866aa5
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x34866aed
// converted property setter: - (void)setPlaybackSpeed:(int)speed;	// 0x348671e5
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x34867475
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x34866ba1
- (void)setQueueWithQuery:(id)query;	// 0x34866b8d
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x34867389
- (BOOL)setQueueWithSeedItems:(id)seedItems;	// 0x34866ffd
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x34866d0d
// converted property setter: - (void)setShuffleMode:(int)mode;	// 0x34866d8d
- (void)setUseCachedPlaybackState:(BOOL)state;	// 0x348670c1
// converted property setter: - (void)setVolume:(float)volume;	// 0x34866e31
// converted property getter: - (int)shuffleMode;	// 0x34866d55
- (void)stop;	// 0x34866b35
- (unsigned)unshuffledIndexOfNowPlayingItem;	// 0x34867265
// converted property getter: - (float)volume;	// 0x34866dd5
@end

