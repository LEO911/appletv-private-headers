/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPMediaPlayback.h"
#import "MPMovieViewDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPMovieAccessLog, MPMovieErrorLog, MPAVController, MPVideoViewController, NSMutableArray, MPMoviePlayerController, NSMutableSet, MPMovieView, NSError, NSMutableDictionary, NSArray;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {
@private
	MPAVController *_player;	// 4 = 0x4
	MPMoviePlayerController *_moviePlayer;	// 8 = 0x8
	MPVideoViewController *_videoViewController;	// 12 = 0xc
	MPMovieView *_movieView;	// 16 = 0x10
	NSArray *_movies;	// 20 = 0x14
	NSMutableArray *_queuedThumbnailRequests;	// 24 = 0x18
	NSMutableSet *_asyncImageGenerators;	// 28 = 0x1c
	float _currentPlaybackRate;	// 32 = 0x20
	unsigned _stateBeforeSettingPlaybackTime;	// 36 = 0x24
	int _movieSourceType;	// 40 = 0x28
	int _controlStyle;	// 44 = 0x2c
	int _repeatMode;	// 48 = 0x30
	BOOL _shouldAutoplay;	// 52 = 0x34
	BOOL _useApplicationAudioSession;	// 53 = 0x35
	BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;	// 54 = 0x36
	BOOL _preparedQueue;	// 55 = 0x37
	BOOL _didAppear;	// 56 = 0x38
	BOOL _ignorePlaybackStateChanges;	// 57 = 0x39
	BOOL _playWhenSourceTypeIsDetermined;	// 58 = 0x3a
	BOOL _prepareWhenSourceTypeIsDetermined;	// 59 = 0x3b
	BOOL _isChangingMoviePath;	// 60 = 0x3c
	BOOL _wasPlayingBeforeSuspended;	// 61 = 0x3d
	BOOL _canPostDidFinishNotificationOnItemChange;	// 62 = 0x3e
	BOOL _didPostDidFinishNotification;	// 63 = 0x3f
	BOOL _shouldRestartPlaybackFromBeginning;	// 64 = 0x40
	NSError *_playbackError;	// 68 = 0x44
	double _initialPlaybackTime;	// 72 = 0x48
	double _endPlaybackTime;	// 80 = 0x50
	NSMutableDictionary *_timedMetadataForUniqueKey;	// 88 = 0x58
	BOOL _isActive;	// 92 = 0x5c
	BOOL _isResigningActive;	// 93 = 0x5d
	BOOL _didResignActive;	// 94 = 0x5e
	BOOL _canShowControlsOverlayBeforeResignedActive;	// 95 = 0x5f
	double _timeWhenResignedActive;	// 96 = 0x60
	unsigned _movieIndexWhenResignedActive;	// 104 = 0x68
	MPMovieAccessLog *_cachedAccessLog;	// 108 = 0x6c
	MPMovieErrorLog *_cachedErrorLog;	// 112 = 0x70
}
@property(assign) BOOL allowsAirPlay;	// G=0x3462e461; S=0x3462e435; converted property
@property(retain) id contentURL;	// G=0x3462de05; S=0x3462de5d; converted property
@property(assign) int controlStyle;	// G=0x3462e2a9; S=0x3462e1a5; converted property
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x3462e929; S=0x3462e8dd; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x3462e891; S=0x3462e781; 
@property(assign) double endPlaybackTime;	// G=0x3462eeb1; S=0x3462ee39; converted property
@property(assign, getter=isFullscreen) BOOL fullscreen;	// G=0x3462e4bd; S=0x3462e3b5; converted property
@property(assign) double initialPlaybackTime;	// G=0x3462edcd; S=0x3462ed55; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x3462e4e5; 
@property(assign) int movieSourceType;	// G=0x3462ec09; S=0x3462eb69; converted property
@property(assign) int repeatMode;	// G=0x3462e2c9; S=0x3462e2b9; converted property
@property(assign) int scalingMode;	// G=0x3462e179; S=0x3462e129; converted property
@property(assign) BOOL shouldAutoplay;	// G=0x3462e329; S=0x3462e2d9; converted property
- (id)init;	// 0x3462d745
- (BOOL)_areControlsHidden;	// 0x34630a4d
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x3462f9bd
- (void)_cacheAccessAndErrorLogs;	// 0x34630f65
- (BOOL)_canContinuePlayingWhenLocked;	// 0x3463199d
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;	// 0x346317d9
- (void)_didBecomeActiveNotification:(id)notification;	// 0x34630859
- (void)_ensureActive;	// 0x34631341
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x3462f5b1
- (void)_itemDidChangeNotification:(id)_item;	// 0x3462f5f5
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x3462f7c1
- (void)_itemPlaybackErrorNotification:(id)notification;	// 0x3462f93d
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x3462f741
- (void)_movieDurationAvailableNotification:(id)notification;	// 0x346306ed
- (void)_movieNaturalSizeAvailableNotification:(id)notification;	// 0x34630789
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x346302c1
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x3462ff5d
- (void)_movieSourceTypeAvailableNotification:(id)notification;	// 0x346305c9
- (id)_movieSubtitle;	// 0x34630a81
- (id)_movieTitle;	// 0x34630af5
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x346304ed
- (id)_movies;	// 0x34631265
- (id)_navigationBar;	// 0x34630b69
- (id)_nowPlayingMovie;	// 0x346312c5
- (void)_pausePlaybackForSuspension;	// 0x34631741
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x3462fa89
- (void)_postDidFinishNotificationWithUserInfo:(id)_post;	// 0x346318cd
- (void)_postNotificationName:(id)name object:(id)object;	// 0x3463183d
- (void)_postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x34631861
- (void)_prepareToPlayWithStartIndex:(unsigned)startIndex;	// 0x3463142d
- (void)_resignActive;	// 0x346313d1
- (void)_restartPlaybackFromBeginning;	// 0x34631929
- (void)_setControlsHidden:(BOOL)hidden;	// 0x34630c11
- (void)_setControlsHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x34630ba1
- (void)_setMovieMediaTypesOverride:(int)override;	// 0x34630c25
- (void)_setMoviePlayer:(id)player;	// 0x34631331
- (void)_setMovieSubtitle:(id)subtitle;	// 0x34630ab9
- (void)_setMovieTitle:(id)title;	// 0x34630b2d
- (void)_setMovies:(id)movies;	// 0x3463107d
- (void)_setNowPlayingMovie:(id)movie;	// 0x34631275
- (void)_setShouldEnforceHDCP:(BOOL)_set;	// 0x34630c61
- (void)_setUseApplicationAudioSession:(BOOL)session;	// 0x34631701
- (BOOL)_shouldContinuePlaybackInBackground;	// 0x34630c81
- (BOOL)_shouldEnforceHDCP;	// 0x34630cd9
- (void)_simpleRemoteNotification:(id)notification;	// 0x34630981
- (void)_timeDidJumpNotification:(id)_time;	// 0x3462fe3d
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x3462fb79
- (void)_timedMetadataImageAvailableNotification:(id)notification;	// 0x3462fe01
- (id)_videoView;	// 0x34630cfd
- (id)_videoViewController;	// 0x34630d25
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x3462fee9
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x3462fe69
- (void)_willResignActiveNotification:(id)notification;	// 0x34630825
- (void)_willTerminateNotification:(id)notification;	// 0x346308ad
- (void)_windowOrientationChangingNotification:(id)notification;	// 0x346308bd
- (id)accessLog;	// 0x34632445
// converted property getter: - (BOOL)allowsAirPlay;	// 0x3462e461
- (id)backgroundView;	// 0x3462e071
- (void)beginSeekingBackward;	// 0x3462e9bd
- (void)beginSeekingForward;	// 0x3462e971
- (void)cancelAllThumbnailImageRequests;	// 0x346323bd
// converted property getter: - (id)contentURL;	// 0x3462de05
// converted property getter: - (int)controlStyle;	// 0x3462e2a9
// declared property getter: - (float)currentPlaybackRate;	// 0x3462e929
// declared property getter: - (double)currentPlaybackTime;	// 0x3462e891
- (void)dealloc;	// 0x3462dc69
- (double)duration;	// 0x3462ec19
// converted property getter: - (double)endPlaybackTime;	// 0x3462eeb1
- (void)endSeeking;	// 0x3462ea0d
- (id)errorLog;	// 0x346324f9
// converted property getter: - (double)initialPlaybackTime;	// 0x3462edcd
- (BOOL)isAirPlayVideoActive;	// 0x3462e489
// converted property getter: - (BOOL)isFullscreen;	// 0x3462e4bd
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x3462e4e5
- (int)loadState;	// 0x3462e0e9
- (int)movieMediaTypes;	// 0x3462eb11
// converted property getter: - (int)movieSourceType;	// 0x3462ec09
- (void)movieView:(id)view willMoveToWindow:(id)window;	// 0x3462ef1d
- (void)movieViewDidMoveToWindow:(id)movieView;	// 0x3462efa5
- (CGSize)naturalSize;	// 0x3462ece1
- (void)pause;	// 0x3462e641
- (void)play;	// 0x3462e595
- (double)playableDuration;	// 0x3462ec7d
- (int)playbackState;	// 0x3462e0a9
- (void)prepareToPlay;	// 0x3462e545
// converted property getter: - (int)repeatMode;	// 0x3462e2c9
- (void)requestThumbnailImagesAtTimes:(id)times timeOption:(int)option;	// 0x34631cc1
// converted property getter: - (int)scalingMode;	// 0x3462e179
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x3462e435
- (void)setBackgroundColor:(id)color;	// 0x34630f1d
// converted property setter: - (void)setContentURL:(id)url;	// 0x3462de5d
// converted property setter: - (void)setControlStyle:(int)style;	// 0x3462e1a5
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x3462e8dd
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x3462e781
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x3462ee39
// converted property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x3462e3b5
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3462e3c9
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x3462ed55
- (void)setMovieControlMode:(int)mode;	// 0x34630f49
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x3462eb69
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x3462e2b9
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x3462e129
// converted property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x3462e2d9
- (void)setUseApplicationAudioSession:(BOOL)session;	// 0x3462e339
// converted property getter: - (BOOL)shouldAutoplay;	// 0x3462e329
- (void)skipToBeginning;	// 0x3462ea89
- (void)skipToNextItem;	// 0x3462ea49
- (void)skipToPreviousItem;	// 0x3462ead1
- (void)stop;	// 0x3462e69d
- (id)thumbnailImageAtTime:(double)time timeOption:(int)option;	// 0x34631a09
- (id)timedMetadata;	// 0x34632405
- (id)timedMetadataForKey:(id)key;	// 0x34632425
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;	// 0x3462f505
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x3462f1d9
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x3462f315
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x3462f085
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x3462f0e5
- (void)videoControllerWillExitFullscreen:(id)videoController;	// 0x3462f221
- (id)view;	// 0x3462defd
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x3462f35d
@end

