/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMusicPlayerController.h"
#import "MPServerObject.h"

@class NSMutableDictionary, MPVideoViewController, MPMusicPlayerControllerServer, NSMutableArray;
@protocol MPMusicPlayerControllerServerDelegate;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
@private
	id<MPMusicPlayerControllerServerDelegate> _delegate;	// 12 = 0xc
	MPMusicPlayerControllerServer *_musicPlayerServer;	// 16 = 0x10
	NSMutableArray *_clientPorts;	// 20 = 0x14
	NSMutableDictionary *_clientPortsForPIDs;	// 24 = 0x18
	NSMutableDictionary *_clientStateForPIDs;	// 28 = 0x1c
	MPVideoViewController *_videoViewController;	// 32 = 0x20
	int _activeClientPID;	// 36 = 0x24
	int _extendedModeNotifyToken;	// 40 = 0x28
	unsigned _queuePrepared : 1;	// 44 = 0x2c
}
@property(retain) id allowsRemoteUIAccess;	// G=0x3039f74d; S=0x3039f795; converted property
@property(retain) id currentChapterIndex;	// G=0x3039f4d5; S=0x3039f579; converted property
@property(retain) id currentPlaybackTime;	// G=0x3039e695; S=0x3039e6e1; converted property
@property(retain) id nowPlayingItem;	// G=0x3039e3d9; S=0x3039e38d; converted property
@property(retain) id playbackSpeed;	// G=0x3039f329; S=0x3039f2dd; converted property
@property(retain) id repeatMode;	// G=0x3039e8cd; S=0x3039e959; converted property
@property(retain) id shuffleMode;	// G=0x3039e7d1; S=0x3039e85d; converted property
+ (BOOL)_canSeedGeniusWithItem:(id)item;	// 0x303a13fd
- (id)init;	// 0x3039e275
- (void)_applicationStateChangedNotification:(id)notification;	// 0x3039f909
- (id)_avController;	// 0x303a09cd
- (id)_avControllerForClientPID:(int)clientPID;	// 0x303a09fd
- (id)_avControllerForClientPID:(int)clientPID ignoreExtendedMode:(BOOL)mode;	// 0x303a0a11
- (BOOL)_clientPIDHasPermissionToPlay:(int)play;	// 0x303a07b9
- (void)_clientPortInvalidated:(id)invalidated;	// 0x303a0515
- (void)_clientPortInvalidatedNotification:(id)notification;	// 0x3039f895
- (id)_clientState;	// 0x303a0741
- (id)_clientStateForPID:(int)pid;	// 0x303a0771
- (BOOL)_currentClientPIDHasPermissionToPlay;	// 0x303a0809
- (void)_endPlayback;	// 0x303a127d
- (void)_endPlaybackForClientIfNecessary:(int)clientIfNecessary;	// 0x303a1031
- (void)_itemDidChangeNotification:(id)_item;	// 0x3039fbcd
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x3039fd65
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x3039fa21
- (void)_prepareQueueIfNecessary;	// 0x303a0b95
- (void)_registerClientPort:(unsigned)port forProcessID:(int)processID hasAudioBackgroundMode:(BOOL)mode;	// 0x3039fe7d
- (void)_setQueueWithQuery:(id)query;	// 0x303a0add
- (void)_tearDownVideoView;	// 0x303a1361
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x3039fe55
// converted property getter: - (id)allowsRemoteUIAccess;	// 0x3039f74d
- (void)beginSeekingBackward;	// 0x3039ea1d
- (void)beginSeekingForward;	// 0x3039e9c9
// converted property getter: - (id)currentChapterIndex;	// 0x3039f4d5
// converted property getter: - (id)currentPlaybackTime;	// 0x3039e695
- (void)dealloc;	// 0x3039e2c5
- (void)endSeeking;	// 0x3039ea71
- (id)indexOfNowPlayingItem;	// 0x3039f37d
- (id)isGeniusAvailable;	// 0x3039eb8d
- (id)isNowPlayingItemFromGeniusMix;	// 0x3039f425
// converted property getter: - (id)nowPlayingItem;	// 0x3039e3d9
- (id)nowPlayingItemAtIndex:(id)index;	// 0x3039f13d
- (id)numberOfItems;	// 0x3039e789
- (void)pause;	// 0x3039e65d
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;	// 0x3039f291
- (void)play;	// 0x3039e561
- (void)playItem:(id)item;	// 0x3039f1d9
// converted property getter: - (id)playbackSpeed;	// 0x3039f329
- (id)playbackState;	// 0x3039e73d
- (void)prepareQueueForPlayback;	// 0x3039f629
- (id)queueAsQuery;	// 0x3039f0e9
- (void)registerForServerDiedNotifications;	// 0x3039f659
// converted property getter: - (id)repeatMode;	// 0x3039e8cd
- (id)serverIsAlive;	// 0x3039f639
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;	// 0x3039f795
// converted property setter: - (void)setCurrentChapterIndex:(id)index;	// 0x3039f579
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;	// 0x3039e6e1
// converted property setter: - (void)setNowPlayingItem:(id)item;	// 0x3039e38d
// converted property setter: - (void)setPlaybackSpeed:(id)speed;	// 0x3039f2dd
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x3039f7e1
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x3039e4e5
- (void)setQueueWithQuery:(id)query;	// 0x3039e489
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x3039f0a5
- (id)setQueueWithSeedItems:(id)seedItems;	// 0x3039ec11
// converted property setter: - (void)setRepeatMode:(id)mode;	// 0x3039e959
// converted property setter: - (void)setShuffleMode:(id)mode;	// 0x3039e85d
- (void)setUseApplicationSpecificQueue:(id)queue;	// 0x3039f685
- (void)shuffle;	// 0x3039e5a1
// converted property getter: - (id)shuffleMode;	// 0x3039e7d1
- (void)skipToBeginning;	// 0x3039eaed
- (void)skipToBeginningOrPreviousItem;	// 0x3039eb59
- (void)skipToNextChapter;	// 0x3039f479
- (void)skipToNextItem;	// 0x3039eac1
- (void)skipToPreviousChapter;	// 0x3039f4a5
- (void)skipToPreviousItem;	// 0x3039eb25
- (void)stop;	// 0x3039e685
- (id)unshuffledIndexOfNowPlayingItem;	// 0x3039f3d1
- (BOOL)useApplicationSpecificQueue;	// 0x3039f65d
@end

