/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTITunesMetadataRetrieval.h"
#import "AppleTV-Structs.h"
#import "BRMediaPlayer.h"
#import "BRPeriodicMetadataRetrieval.h"
#import "AVAssetResourceLoaderDelegate.h"
#import "LTAVFoundationDataRetrieval.h"

@class NSTimer, NSMutableArray, LTAVPlaylist, NSArray, NSSet, LTMusicScrubber, BRKeyValueObservingRegistry, AVMediaSelectionOption, LTVideoVisualControl, NSDate, AVPlayerItem, LTTrickPlayPlayer, AVPlayer, NSString, AVQueuePlayer, ATVSecureKeyStandardConnector, BRStateMachine, BRControl;
@protocol BRFailedURLHandling, BRMediaCollection, BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTAVPlayer : BRMediaPlayer <LTITunesMetadataRetrieval, LTAVFoundationDataRetrieval, BRPeriodicMetadataRetrieval, AVAssetResourceLoaderDelegate> {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BRStateMachine *_lookaheadStateMachine;	// 8 = 0x8
	AVQueuePlayer *_player;	// 12 = 0xc
	int _playerItemStatus;	// 16 = 0x10
	LTVideoVisualControl *_avPlayerVisuals;	// 20 = 0x14
	BRControl *_trickPlayVisuals;	// 24 = 0x18
	AVPlayerItem *_currentItem;	// 28 = 0x1c
	AVPlayerItem *_playerItemBeingLoaded;	// 32 = 0x20
	AVPlayerItem *_lookaheadPlayerItemBeingLoaded;	// 36 = 0x24
	LTAVPlaylist *_playlist;	// 40 = 0x28
	id<BRMediaAsset> _mediaAssetBeingAuthorized;	// 44 = 0x2c
	id<BRMediaAsset> _lookaheadMediaAssetBeingAuthorized;	// 48 = 0x30
	id<BRMediaCollection> _mediaCollection;	// 52 = 0x34
	BRKeyValueObservingRegistry *_kvoRegistry;	// 56 = 0x38
	NSTimer *_movieExpirationTimer;	// 60 = 0x3c
	id _timeObserverToken;	// 64 = 0x40
	NSString *_keyBagPath;	// 68 = 0x44
	NSArray *_selectableAudioOptions;	// 72 = 0x48
	NSArray *_chapters;	// 76 = 0x4c
	NSArray *_selectableSubtitleOptions;	// 80 = 0x50
	AVMediaSelectionOption *_selectedAVSubtitleOption;	// 84 = 0x54
	id _subtitleOptionFilter;	// 88 = 0x58
	NSSet *_cachedLastAudioFormatsSet;	// 92 = 0x5c
	NSMutableArray *_fairPlayContexts;	// 96 = 0x60
	int _defaultActionAtItemEnd;	// 100 = 0x64
	unsigned _reasonForPlayerItemChange;	// 104 = 0x68
	AVPlayerItem *_dummyPlayerItem;	// 108 = 0x6c
	AVPlayer *_dummyPlayer;	// 112 = 0x70
	NSTimer *_HDCPDownTimer;	// 116 = 0x74
	NSTimer *_HDCPPollTimer;	// 120 = 0x78
	NSTimer *_daapTickleTimer;	// 124 = 0x7c
	NSTimer *_liveStreamMonitorTimer;	// 128 = 0x80
	NSTimer *_bookmarkSaverTimer;	// 132 = 0x84
	NSTimer *_seekDelayTimer;	// 136 = 0x88
	NSTimer *_expirationTimer;	// 140 = 0x8c
	NSTimer *_unexpectedZeroRateTimer;	// 144 = 0x90
	NSTimer *_crabsDownloadStalledTimer;	// 148 = 0x94
	LTTrickPlayPlayer *_trickPlayPlayer;	// 152 = 0x98
	LTMusicScrubber *_musicScrubber;	// 156 = 0x9c
	long _lastRetrievedChapterIndex;	// 160 = 0xa0
	int _externalPlayerState;	// 164 = 0xa4
	int _direction;	// 168 = 0xa8
	BOOL _forceLiveStreaming;	// 172 = 0xac
	BOOL _playingBackInitialItem;	// 173 = 0xad
	BOOL _startDateIsEstimate;	// 174 = 0xae
	BOOL _currentItemHasBeenPlayed;	// 175 = 0xaf
	BOOL _shouldDisplayBitRate;	// 176 = 0xb0
	BOOL _muted;	// 177 = 0xb1
	BOOL _hasRealChapters;	// 178 = 0xb2
	BOOL _constantAudioOutputEnabled;	// 179 = 0xb3
	BOOL _shouldUseWorkaroundForStalledDownload;	// 180 = 0xb4
	long _chapterGroupIndex;	// 184 = 0xb8
	double _virtualChapterMark;	// 188 = 0xbc
	int _numPendingRateRequests;	// 196 = 0xc4
	long _previousNotedAccessLogEventsCount;	// 200 = 0xc8
	int _hdcpStatus;	// 204 = 0xcc
	BOOL _isExternalProtectionRequiredForPlaybackForCurrentItem;	// 208 = 0xd0
	BOOL _isPresentable;	// 209 = 0xd1
	XXStruct_pwHToB _cachedDuration;	// 212 = 0xd4
	XXStruct_pwHToB _cachedPlayerTime;	// 236 = 0xec
	XXStruct_pwHToB _lastTimeUpdate;	// 260 = 0x104
	XXStruct_pwHToB _forwardPlaybackEndTime;	// 284 = 0x11c
	XXStruct_pwHToB _reversePlaybackEndTime;	// 308 = 0x134
	float _volume;	// 332 = 0x14c
	XXStruct_yD8eWC _aggregateBufferedRange;	// 336 = 0x150
	double _startTime;	// 384 = 0x180
	float _startPosition;	// 392 = 0x188
	NSDate *_startDate;	// 396 = 0x18c
	XXStruct_pwHToB _timeBeingSeekedTo;	// 400 = 0x190
	NSDate *_dateBeingSeekedTo;	// 424 = 0x1a8
	XXStruct_yD8eWC _lastGoodSeekableRange;	// 428 = 0x1ac
	int _playlistEndAction;	// 476 = 0x1dc
	int _mediaAssetEndAction;	// 480 = 0x1e0
	id<BRFailedURLHandling> _failedURLHandlingDelegate;	// 484 = 0x1e4
	ATVSecureKeyStandardConnector *_standardKeyConnector;	// 488 = 0x1e8
	double _lastReportedBandwidth;	// 492 = 0x1ec
	double _lastReportedBandwidthMax;	// 500 = 0x1f4
	double _lastReportedBandwidthMean;	// 508 = 0x1fc
	double _lastReportedBandwidthStdDev;	// 516 = 0x204
	double _playbackLikelyToKeepUpTime;	// 524 = 0x20c
	int _stallCount;	// 532 = 0x214
}
@property(assign) long chapterGroupIndex;	// G=0x471f6d; S=0x471f45; converted property
@property(readonly, retain) NSArray *chapters;	// G=0x471fd5; converted property
@property(assign) long currentChapterIndex;	// G=0x471d45; S=0x471c69; converted property
@property(assign) double elapsedTime;	// G=0x46fb29; S=0x46fa61; converted property
@property(readonly, assign) BOOL hasRealChapters;	// G=0x471eed; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x472a49; S=0x472a29; converted property
@property(assign) BOOL isPresentable;	// G=0x4724b5; S=0x4724a5; converted property
@property(assign) int mediaAssetEndAction;	// G=0x473ae1; S=0x473a65; converted property
@property(assign) BOOL muted;	// G=0x47228d; S=0x472255; converted property
@property(retain) id playbackDate;	// G=0x46ff0d; S=0x46fe09; converted property
@property(readonly, retain) LTAVPlaylist *playlist;	// G=0x4944c9; converted property
@property(assign) int playlistEndAction;	// G=0x473a55; S=0x4739d9; converted property
@property(assign) int repeatMode;	// G=0x4729c1; S=0x472925; converted property
@property(retain) id selectedAudioOption;	// G=0x4730cd; S=0x472f35; converted property
@property(retain) id selectedMedia;	// G=0x473341; S=0x4734e9; converted property
@property(retain) id selectedSubtitleOption;	// G=0x472db5; S=0x472b09; converted property
@property(assign) BOOL shufflePlayback;	// G=0x4728dd; S=0x472841; converted property
@property(assign) BOOL skipExplicit;	// G=0x472a05; S=0x4729e5; converted property
@property(readonly, retain) NSDate *startDate;	// G=0x470075; converted property
@property(assign) float startPosition;	// G=0x46fa51; S=0x46fa41; converted property
@property(retain) id subtitleOptionFilter;	// G=0x472ab1; S=0x472a6d; converted property
@property(assign) double virtualChapterMark;	// G=0x470f69; S=0x470f11; converted property
+ (id)_buildQualityOfServiceReport:(id)serviceReport;	// 0x47bda1
+ (BOOL)allowMultiplePlayers;	// 0x46e6a5
+ (id)contentTypes;	// 0x46e311
+ (double)fastSpeedLevel1;	// 0x46e6a9
+ (double)fastSpeedLevel2;	// 0x46e6bd
+ (double)fastSpeedLevel3;	// 0x46e6d1
+ (void)initialize;	// 0x46e19d
+ (double)slowSpeedLevel1;	// 0x46e6e5
+ (double)slowSpeedLevel2;	// 0x46e6f9
+ (double)slowSpeedLevel3;	// 0x46e70d
- (id)init;	// 0x46e721
- (void).cxx_destruct;	// 0x474085
- (void)_addLookAheadPlayerItem;	// 0x477a89
- (BOOL)_allowedToBeginFastForwardFromTime:(XXStruct_pwHToB)time;	// 0x480315
- (BOOL)_allowedToBeginRewindFromTime:(XXStruct_pwHToB)time;	// 0x480491
- (BOOL)_allowedToPauseAtTime:(XXStruct_pwHToB)time;	// 0x480619
- (BOOL)_allowedToSetElapsedTimeWithUserInfo:(id)userInfo fromTime:(XXStruct_pwHToB)time;	// 0x480799
- (BOOL)_alreadyPlayingMediaIndex:(long)index inTrackList:(id)trackList;	// 0x47d171
- (BOOL)_alwaysUseTrickPlayPlayer;	// 0x478b81
- (void)_applyLoudnessInfoForAsset:(id)asset playerItem:(id)item priorToEnqueueing:(BOOL)enqueueing;	// 0x4772e9
- (void)_audioFormatsDidChange;	// 0x479c99
- (id)_authIfNecessaryAndPrimeQueue;	// 0x4813c5
- (void)_authorizationAttemptComplete:(id)complete;	// 0x47c13d
- (id)_bookmarkSaveInterval;	// 0x49421d
- (void)_bookmarkSaverTimerFired:(id)fired;	// 0x478361
- (id)_cachedLastAudioFormatsSet;	// 0x478fe9
- (void)_cancelMusicScrub;	// 0x4832d9
- (id)_chaptersFromAVAsset;	// 0x47a0e9
- (void)_configureDAAPTickleTimer;	// 0x478a39
- (void)_configureLoadedPlayerItem;	// 0x47eeb9
- (void)_crabsDownloadStalledTimerFired:(id)fired;	// 0x47fe59
- (BOOL)_currentItemIsLive;	// 0x478375
- (id)_dateCorrespondingToTime:(XXStruct_pwHToB)time;	// 0x482b15
- (void)_deactivateAudioSession;	// 0x479ac5
- (void)_deauthorizeAsset:(id)asset;	// 0x478589
- (void)_delayedEventHandler:(id)handler;	// 0x478e59
- (void)_delayedEventTimerFired:(id)fired;	// 0x478e19
- (void)_deleteDownloadKeyCookieForAsset:(id)asset;	// 0x4943a5
- (void)_displayModeChanged:(id)changed;	// 0x47c2bd
- (void)_disposePlayer;	// 0x47441d
- (void)_dummyPlayerItemStatusHasChanged;	// 0x47cb4d
- (void)_durationDidChange:(XXStruct_pwHToB)_duration;	// 0x47b0f9
- (id)_emergeFromTrickPlayAtTime:(XXStruct_pwHToB)time resumeState:(int)state;	// 0x480245
- (XXStruct_pwHToB)_endSeekTimeFromDuration:(double)duration useBounceBack:(BOOL)back;	// 0x4831c1
- (void)_enforceMovieExpirationPolicy:(id)policy;	// 0x47c589
- (void)_enterTrickPlayAtRate:(float)rate fromTime:(XXStruct_pwHToB)time;	// 0x47f691
- (id)_eventForError:(id)error;	// 0x481279
- (int)_externalProtectionStatus;	// 0x4791e9
- (id)_filteredSubtitleOptions;	// 0x4798e9
- (id)_generateFakeChapters;	// 0x47a501
- (id)_goToNextMediaWithReason:(unsigned)reason;	// 0x481a41
- (id)_goToPreviousMediaWithReason:(unsigned)reason;	// 0x481d05
- (id)_handleBufferEmptyDuringAVPlayerPlaybackWithRate:(float)rate;	// 0x4810e9
- (id)_handleDisplayWasUnpluggedDuringPlayback:(id)playback;	// 0x483dc5
- (id)_handleGenericError:(BOOL)error avError:(id)error2;	// 0x48330d
- (id)_handleHDCPDroppedDuringPlayback:(id)playback;	// 0x483d05
- (id)_handleHDCPErrorDuringStateTransition;	// 0x483c5d
- (id)_handleMediaResourceLoaded:(BOOL)loaded;	// 0x4837b1
- (void)_handleSoundFormatSelectionAfterPause:(id)pause;	// 0x479c15
- (void)_hdcpHasBeenDownTooLong:(id)aLong;	// 0x479145
- (BOOL)_hdcpRequiredButNotAvailable;	// 0x479105
- (id)_hitBeginningWhileGoingBackwardUsingAVPlayer;	// 0x482d31
- (id)_hitBeginningWhileGoingBackwardUsingTrickPlayPlayer;	// 0x482f79
- (id)_hitEndWhileGoingForwardUsingAVPlayerUsingBounceBack:(BOOL)back;	// 0x482e7d
- (id)_hitEndWhileGoingForwardUsingTrickPlayPlayer;	// 0x482ff9
- (id)_hitEndWhilePlaying;	// 0x48309d
- (id)_iTunesMetadataForKey:(id)key fallbackCode:(unsigned long)code;	// 0x478601
- (void)_initializeLookaheadStateMachine:(id)machine;	// 0x49343d
- (id)_initializePlayer;	// 0x47d899
- (void)_initializeStateMachine:(id)machine;	// 0x483e1d
- (id)_interstitials;	// 0x47aac1
- (BOOL)_isStreamingAsset:(id)asset;	// 0x47839d
- (BOOL)_isTimeNearForwardEdgeOfBuffer:(XXStruct_pwHToB)buffer;	// 0x47c615
- (id)_itemChangedToNilDueToUserAction:(BOOL)userAction;	// 0x481f55
- (id)_itemChangedToNonNil:(BOOL)nonNil currentState:(id)state;	// 0x48264d
- (void)_liveStreamMonitorFired:(id)fired;	// 0x478295
- (id)_loadLookaheadAVAssetKeysForAsset:(id)asset;	// 0x493fe1
- (void)_loadedTimeRangesDidChange:(id)_loadedTimeRanges;	// 0x47b131
- (void)_movieExpirationDateSet:(id)set;	// 0x47c3cd
- (double)_nextChapterMark;	// 0x47aa21
- (id)_pause;	// 0x47f75d
- (void)_performPostMediaAssetChangedActions:(BOOL)actions;	// 0x494439
- (void)_playbackBufferEmptyDidChange:(BOOL)_playbackBufferEmpty;	// 0x47c0d5
- (void)_playbackBufferFullDidChange:(BOOL)_playbackBufferFull;	// 0x47c0a1
- (id)_playbackDateFromAVPlayer;	// 0x47c8a1
- (void)_playbackLikelyToKeepUpDidChange:(BOOL)_playbackLikelyToKeepUp;	// 0x47c041
- (void)_playerItemAccessLogChanged:(id)changed;	// 0x47ab2d
- (void)_playerItemDidChange;	// 0x47ade1
- (void)_playerItemDidPlayToEnd:(id)_playerItem;	// 0x47ab81
- (void)_playerItemFailedToPlayToEnd:(id)end;	// 0x47ac01
- (id)_playerItemForAsset:(id)asset;	// 0x475d1d
- (void)_playerItemPlaybackStalled:(id)stalled;	// 0x47acb5
- (void)_playerItemStatusDidChange;	// 0x47aeed
- (void)_playerItemTracksDidChange:(id)_playerItemTracks;	// 0x47bac1
- (void)_playerItemWillChange;	// 0x47adb5
- (void)_playerRateDidChangeToRate:(float)_playerRate;	// 0x47ae51
- (void)_pollHDCPStatus:(id)status;	// 0x479039
- (void)_postAssetWillChangeImmediately;	// 0x475a5d
- (void)_postDelayedEvent:(id)event;	// 0x478bed
- (void)_postDelayedEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x478cf9
- (void)_postDelayedEventWithHighPriority:(id)highPriority;	// 0x478c0d
- (void)_postErrorNotificationImmediately:(id)immediately;	// 0x475c59
- (double)_previousChapterMark;	// 0x47a8e9
- (id)_primeQueue;	// 0x481549
- (void)_primeQueueAfterDelay:(double)delay;	// 0x481335
- (void)_queuePrimeDelayExpired;	// 0x481399
- (void)_removeLookAheadPlayerItem;	// 0x477b85
- (void)_restartFirehoseByCreatingDummyPlayer;	// 0x47c911
- (int)_resumeState;	// 0x47ee99
- (void)_sagaMediaFailedToResolve:(id)resolve;	// 0x478f61
- (void)_saveBookmarkWithShouldAttemptToUpdatePlaycount:(BOOL)_saveBookmarkWith;	// 0x4836c9
- (id)_seekCompleted:(BOOL)completed;	// 0x47fcfd
- (void)_seekDelayTimerFired:(id)fired;	// 0x47fe0d
- (void)_seekableTimeRangesDidChange:(id)_seekableTimeRanges;	// 0x47b9e9
- (void)_sendBufferSufficientToPlayNotification;	// 0x47bd1d
- (void)_sendQualityOfServiceReportNotification;	// 0x47bf7d
- (void)_sendStartBufferingNotification:(XXStruct_pwHToB)notification;	// 0x47bc05
- (void)_setAVPlayerRate:(float)rate;	// 0x478505
- (void)_setCachedLastAudioFormatsSet:(id)set;	// 0x478ffd
- (void)_setChapters:(id)chapters;	// 0x47a7a9
- (void)_setConstantAudioOuputEnabled:(BOOL)enabled;	// 0x47f855
- (void)_setDateBeingSeekedTo:(id)to;	// 0x47ff59
- (void)_setElapsedTime:(XXStruct_pwHToB)time;	// 0x47f925
- (void)_setElapsedTimeWithUserInfo:(id)userInfo;	// 0x47f88d
- (void)_setExternalPlayerState:(int)state;	// 0x47ed11
- (void)_setExternalPlayerState:(int)state reason:(id)reason;	// 0x47ed25
- (id)_setMediaAtIndex:(long)index inTrackList:(id)trackList;	// 0x47cdc1
- (void)_setPlayerItem:(id)item;	// 0x474501
- (void)_setResumeState:(int)state;	// 0x47ee65
- (void)_setTimeBeingSeekedTo:(XXStruct_pwHToB)to;	// 0x47fea9
- (void)_setTimeOrDateWithDelayedSeek:(id)delayedSeek;	// 0x47ff81
- (BOOL)_shouldAdvanceManuallyOnError;	// 0x483621
- (BOOL)_shouldUseTrickPlayPlayerForFastForwardOnBufferEmpty;	// 0x48104d
- (BOOL)_shouldUseTrickPlayPlayerForFastReverseOnBufferEmpty;	// 0x480fb1
- (void)_speakerWasSelected:(id)selected;	// 0x47c261
- (id)_standardKeyConnector;	// 0x4743c5
- (void)_startBookmarkTimerIfNeeded;	// 0x4942b9
- (id)_startFastForwardFromTime:(XXStruct_pwHToB)time rate:(float)rate;	// 0x480929
- (id)_startPlayback;	// 0x47f4f5
- (id)_startRewindFromTime:(XXStruct_pwHToB)time rate:(float)rate;	// 0x480cd1
- (void)_stopAndTearDownEverythingWithReason:(unsigned)reason notifyListeners:(BOOL)listeners;	// 0x47d20d
- (void)_stopBookmarkTimer;	// 0x494371
- (void)_stopPlayer:(id)player;	// 0x4784d1
- (id)_stringValueForMetadataItem:(id)metadataItem notificationName:(id)name;	// 0x478779
- (void)_subtitleSettingsChanged:(id)changed;	// 0x47c37d
- (void)_tickleHomeShareActivity:(id)activity;	// 0x478165
- (XXStruct_pwHToB)_timeCorrespondingToDate:(id)date;	// 0x482c1d
- (void)_timedMetadataDidChange;	// 0x47b075
- (void)_unexpectedZeroRateTimerFired:(id)fired;	// 0x478f15
- (id)_unfilteredSubtitleOptions;	// 0x4798d5
- (void)_updateActionAtItemEnd;	// 0x47f609
- (void)_updateAudioOptions;	// 0x4791f9
- (void)_updateCachedPlayerTime:(XXStruct_pwHToB)time;	// 0x47eb0d
- (void)_updateChapters;	// 0x479f01
- (void)_updateFairplayContext;	// 0x477ca9
- (void)_updateSelectedAudioOptionAndSelectableAudioOptionsForRouteChange;	// 0x479e55
- (void)_updateSelectedSubtitleOption;	// 0x47957d
- (void)_updateSubtitleOptions;	// 0x479231
- (void)_updateTrickPlayPlayer;	// 0x475695
- (void)_updateVisuals:(BOOL)visuals;	// 0x475925
- (BOOL)_useDateForChapterSeeking;	// 0x47a801
- (BOOL)_useSeekTime;	// 0x47c79d
- (BOOL)_useTrickPlayPlayerTime;	// 0x47c68d
- (id)accessLogArray;	// 0x473909
- (void)appendMediaList:(id)list;	// 0x46f151
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x46f0fd
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x472435
- (id)audioOptions;	// 0x472f21
- (BRTimeRange)bufferedRange;	// 0x472065
- (float)bufferingProgress;	// 0x47219d
- (id)chapterAtIndex:(long)index;	// 0x472009
- (long)chapterCount;	// 0x471fe9
- (id)chapterGroupAtIndex:(long)index;	// 0x471f7d
- (long)chapterGroupCount;	// 0x471efd
// converted property getter: - (long)chapterGroupIndex;	// 0x471f6d
- (long)chapterIndexForTime:(double)time;	// 0x471e81
- (BOOL)chapterIsPlayable:(long)playable;	// 0x471ee9
// converted property getter: - (id)chapters;	// 0x471fd5
- (id)collection;	// 0x46f421
- (BOOL)cueMediaWithError:(id *)error;	// 0x46f4b5
// converted property getter: - (long)currentChapterIndex;	// 0x471d45
- (id)currentVideoFrame;	// 0x4722c9
- (void)dealloc;	// 0x46ec81
- (double)duration;	// 0x46f901
// converted property getter: - (double)elapsedTime;	// 0x46fb29
- (id)errorLogArray;	// 0x473971
- (void)externalPlayerDidHitBeginning;	// 0x473ffd
- (void)externalPlayerDidHitEnd;	// 0x474029
- (void)handleSoundFormatChangeWhilePlayingVideo;	// 0x479b81
// converted property getter: - (BOOL)hasRealChapters;	// 0x471eed
- (id)iTunesMetadataArtist;	// 0x473755
- (id)iTunesMetadataCoverArtImageProxy;	// 0x4737c5
- (id)iTunesMetadataTitle;	// 0x4736e5
- (void)insertMedia:(id)media atIndex:(long)index;	// 0x46f1f5
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x4721a5
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x472a49
// converted property getter: - (BOOL)isPresentable;	// 0x4724b5
- (BOOL)isTrackEnabled:(int)enabled;	// 0x4730e1
- (id)media;	// 0x46f435
// converted property getter: - (int)mediaAssetEndAction;	// 0x473ae1
- (long)mediaIndex;	// 0x46f495
// converted property getter: - (BOOL)muted;	// 0x47228d
- (void)nextChapter;	// 0x470f81
- (void)nextMedia;	// 0x472741
- (id)periodicMetadataTitle;	// 0x473ed9
// converted property getter: - (id)playbackDate;	// 0x46ff0d
- (id)playbackInfo;	// 0x470199
- (int)playerState;	// 0x46f8c1
- (BOOL)playingVisualContent;	// 0x4724c5
// converted property getter: - (id)playlist;	// 0x4944c9
// converted property getter: - (int)playlistEndAction;	// 0x473a55
- (void)previousChapter;	// 0x4715d9
- (void)previousMedia;	// 0x472641
- (void)purgeTrackList;	// 0x46f3fd
- (id)qualityOfServiceInfo;	// 0x473af1
- (void)refreshLookaheadItem;	// 0x474055
- (void)removeMedia:(id)media;	// 0x46f25d
// converted property getter: - (int)repeatMode;	// 0x4729c1
- (void)resetToBeginning;	// 0x470089
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)requestedResource;	// 0x473fd5
// converted property getter: - (id)selectedAudioOption;	// 0x4730cd
// converted property getter: - (id)selectedMedia;	// 0x473341
// converted property getter: - (id)selectedSubtitleOption;	// 0x472db5
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x471f45
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x471c69
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x46fa61
- (void)setFailedURLDelegate:(id)delegate;	// 0x4743b1
- (void)setForwardPlaybackEndTime:(double)time;	// 0x46fc99
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x472a29
// converted property setter: - (void)setIsPresentable:(BOOL)presentable;	// 0x4724a5
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x46f071
// converted property setter: - (void)setMediaAssetEndAction:(int)action;	// 0x473a65
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x46ed89
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x46eded
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x472255
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x46fe09
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x4739d9
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x472925
- (void)setReversePlaybackEndTime:(double)time;	// 0x46fd51
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x472f35
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x4734e9
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x472b09
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x472841
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x4729e5
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x470041
// converted property setter: - (void)setStartPosition:(float)position;	// 0x46fa41
- (BOOL)setState:(int)state error:(id *)error;	// 0x46f5c5
// converted property setter: - (void)setSubtitleOptionFilter:(id)filter;	// 0x472a6d
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x473219
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x470f11
- (void)setVolume:(float)volume;	// 0x47229d
// converted property getter: - (BOOL)shufflePlayback;	// 0x4728dd
// converted property getter: - (BOOL)skipExplicit;	// 0x472a05
// converted property getter: - (id)startDate;	// 0x470075
// converted property getter: - (float)startPosition;	// 0x46fa51
// converted property getter: - (id)subtitleOptionFilter;	// 0x472ab1
- (id)subtitleOptions;	// 0x472ad1
- (BOOL)supportsBufferedRange;	// 0x472061
- (BOOL)supportsMultipleTrickSpeeds;	// 0x46f8d1
- (BOOL)supportsRepeatModes;	// 0x4729e1
- (BOOL)supportsShufflePlayback;	// 0x472901
- (BOOL)supportsTrickPlay;	// 0x46f8e9
- (BOOL)supportsVolumeControl;	// 0x470131
- (id)timedMetadata;	// 0x4738c1
- (id)trackList;	// 0x46f475
- (id)upNextMedia;	// 0x46f455
// converted property getter: - (double)virtualChapterMark;	// 0x470f69
- (id)visuals;	// 0x472501
@end
