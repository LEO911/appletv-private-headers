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
@property(retain) id allowsRemoteUIAccess;	// G=0x3469674d; S=0x34696795; converted property
@property(retain) id currentChapterIndex;	// G=0x346964d5; S=0x34696579; converted property
@property(retain) id currentPlaybackTime;	// G=0x34695695; S=0x346956e1; converted property
@property(retain) id nowPlayingItem;	// G=0x346953d9; S=0x3469538d; converted property
@property(retain) id playbackSpeed;	// G=0x34696329; S=0x346962dd; converted property
@property(retain) id repeatMode;	// G=0x346958cd; S=0x34695959; converted property
@property(retain) id shuffleMode;	// G=0x346957d1; S=0x3469585d; converted property
+ (BOOL)_canSeedGeniusWithItem:(id)item;	// 0x346983fd
- (id)init;	// 0x34695275
- (void)_applicationStateChangedNotification:(id)notification;	// 0x34696909
- (id)_avController;	// 0x346979cd
- (id)_avControllerForClientPID:(int)clientPID;	// 0x346979fd
- (id)_avControllerForClientPID:(int)clientPID ignoreExtendedMode:(BOOL)mode;	// 0x34697a11
- (BOOL)_clientPIDHasPermissionToPlay:(int)play;	// 0x346977b9
- (void)_clientPortInvalidated:(id)invalidated;	// 0x34697515
- (void)_clientPortInvalidatedNotification:(id)notification;	// 0x34696895
- (id)_clientState;	// 0x34697741
- (id)_clientStateForPID:(int)pid;	// 0x34697771
- (BOOL)_currentClientPIDHasPermissionToPlay;	// 0x34697809
- (void)_endPlayback;	// 0x3469827d
- (void)_endPlaybackForClientIfNecessary:(int)clientIfNecessary;	// 0x34698031
- (void)_itemDidChangeNotification:(id)_item;	// 0x34696bcd
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x34696d65
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34696a21
- (void)_prepareQueueIfNecessary;	// 0x34697b95
- (void)_registerClientPort:(unsigned)port forProcessID:(int)processID hasAudioBackgroundMode:(BOOL)mode;	// 0x34696e7d
- (void)_setQueueWithQuery:(id)query;	// 0x34697add
- (void)_tearDownVideoView;	// 0x34698361
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x34696e55
// converted property getter: - (id)allowsRemoteUIAccess;	// 0x3469674d
- (void)beginSeekingBackward;	// 0x34695a1d
- (void)beginSeekingForward;	// 0x346959c9
// converted property getter: - (id)currentChapterIndex;	// 0x346964d5
// converted property getter: - (id)currentPlaybackTime;	// 0x34695695
- (void)dealloc;	// 0x346952c5
- (void)endSeeking;	// 0x34695a71
- (id)indexOfNowPlayingItem;	// 0x3469637d
- (id)isGeniusAvailable;	// 0x34695b8d
- (id)isNowPlayingItemFromGeniusMix;	// 0x34696425
// converted property getter: - (id)nowPlayingItem;	// 0x346953d9
- (id)nowPlayingItemAtIndex:(id)index;	// 0x3469613d
- (id)numberOfItems;	// 0x34695789
- (void)pause;	// 0x3469565d
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;	// 0x34696291
- (void)play;	// 0x34695561
- (void)playItem:(id)item;	// 0x346961d9
// converted property getter: - (id)playbackSpeed;	// 0x34696329
- (id)playbackState;	// 0x3469573d
- (void)prepareQueueForPlayback;	// 0x34696629
- (id)queueAsQuery;	// 0x346960e9
- (void)registerForServerDiedNotifications;	// 0x34696659
// converted property getter: - (id)repeatMode;	// 0x346958cd
- (id)serverIsAlive;	// 0x34696639
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;	// 0x34696795
// converted property setter: - (void)setCurrentChapterIndex:(id)index;	// 0x34696579
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;	// 0x346956e1
// converted property setter: - (void)setNowPlayingItem:(id)item;	// 0x3469538d
// converted property setter: - (void)setPlaybackSpeed:(id)speed;	// 0x346962dd
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x346967e1
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x346954e5
- (void)setQueueWithQuery:(id)query;	// 0x34695489
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x346960a5
- (id)setQueueWithSeedItems:(id)seedItems;	// 0x34695c11
// converted property setter: - (void)setRepeatMode:(id)mode;	// 0x34695959
// converted property setter: - (void)setShuffleMode:(id)mode;	// 0x3469585d
- (void)setUseApplicationSpecificQueue:(id)queue;	// 0x34696685
- (void)shuffle;	// 0x346955a1
// converted property getter: - (id)shuffleMode;	// 0x346957d1
- (void)skipToBeginning;	// 0x34695aed
- (void)skipToBeginningOrPreviousItem;	// 0x34695b59
- (void)skipToNextChapter;	// 0x34696479
- (void)skipToNextItem;	// 0x34695ac1
- (void)skipToPreviousChapter;	// 0x346964a5
- (void)skipToPreviousItem;	// 0x34695b25
- (void)stop;	// 0x34695685
- (id)unshuffledIndexOfNowPlayingItem;	// 0x346963d1
- (BOOL)useApplicationSpecificQueue;	// 0x3469665d
@end

