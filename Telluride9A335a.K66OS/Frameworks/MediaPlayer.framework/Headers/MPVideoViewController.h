/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoTransferViewController.h"
#import "UIModalViewDelegate.h"
#import "MPViewController.h"

@class MPTVOutWindow, UIImage, UIAlertView, UIColor, MPVideoBackgroundView, UIActivityIndicatorView, UIView, MPClosedCaptionDisplay, MPVideoView, MPImageCache, MPImageCacheRequest, MPSwipableView;
@protocol MPVideoOverlay;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView *_backgroundView;	// 196 = 0xc4
	MPSwipableView *_backstopView;	// 200 = 0xc8
	BOOL _batteryMonitoringWasEnabled;	// 204 = 0xcc
	MPClosedCaptionDisplay *_captionView;	// 208 = 0xd0
	unsigned _desiredParts;	// 212 = 0xd4
	unsigned _disabledParts;	// 216 = 0xd8
	unsigned _visibleParts;	// 220 = 0xdc
	unsigned _tvOutEnabled : 1;	// 224 = 0xe0
	unsigned _allowsTVOutInBackground : 1;	// 224 = 0xe0
	unsigned _itemTypeOverride;	// 228 = 0xe4
	unsigned _scaleMode;	// 232 = 0xe8
	unsigned _scaleModeOverride;	// 236 = 0xec
@private
	UIAlertView *_alertSheet;	// 240 = 0xf0
	MPImageCache *_artworkImageCache;	// 244 = 0xf4
	MPImageCacheRequest *_artworkImageRequest;	// 248 = 0xf8
	UIColor *_backstopColor;	// 252 = 0xfc
	UIActivityIndicatorView *_loadingIndicator;	// 256 = 0x100
	MPTVOutWindow *_tvOutWindow;	// 260 = 0x104
	int _extendedModeNotifyToken;	// 264 = 0x108
	int _artworkImageStyle;	// 268 = 0x10c
	UIImage *_posterImage;	// 272 = 0x110
	unsigned _canAnimateControlsOverlay : 1;	// 276 = 0x114
	unsigned _canShowControlsOverlay : 1;	// 276 = 0x114
	unsigned _disableControlsAutohide : 1;	// 276 = 0x114
	unsigned _ownsStatusBar : 1;	// 276 = 0x114
	unsigned _playAfterPop : 1;	// 276 = 0x114
	unsigned _scheduledLoadingIndicator : 1;	// 276 = 0x114
	unsigned _displayPlaybackErrorAlerts : 1;	// 276 = 0x114
	unsigned _allowsDetailScrubbing : 1;	// 276 = 0x114
	unsigned _attemptAutoPlayWhenControlsHidden : 1;	// 277 = 0x115
	unsigned _alwaysAllowHidingControlsOverlay : 1;	// 277 = 0x115
	unsigned _hasShownFirstVideoFrame : 1;	// 277 = 0x115
	unsigned _allowsWirelessPlayback : 1;	// 277 = 0x115
	unsigned _disableAutoRotation : 1;	// 277 = 0x115
	unsigned _inlinePlaybackUsesTVOut : 1;	// 277 = 0x115
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x301188dd; S=0x3011883d; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x30118095; S=0x301180a9; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x30118959; S=0x301188f1; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x301180d1; S=0x301180e5; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x3011a2e9; S=0x3011a2fd; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x3011a805; S=0x3011a815; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x30118229; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x30118131; S=0x30118145; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x30117931; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x30117b31; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x3011a7e5; S=0x3011a391; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x30119da9; S=0x3011a221; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x30117b71; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x30119dbd; S=0x3011a245; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x301189fd; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x3011a29d; S=0x3011a2a1; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x3011a7b5; S=0x30117e79; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x301181a1; S=0x301181b5; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x30117bad; S=0x30117ed5; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x3011a7c5; S=0x30117ea5; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x3011899d; S=0x301189b1; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x301189d1; S=0x301189d5; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x301181e1; S=0x301181f5; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x3011a7f5; S=0x301189ed; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x30117c21; S=0x30117eed; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x3011a825; S=0x301177d9; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x30117f81; S=0x30117f15; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x30118225; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x30117185; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x301189cd; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x301189c9; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;	// G=0x30118995; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;	// G=0x30118999; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x3011896d; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x30118bdd; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x3011a7d5; S=0x30117fed; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x30117055
+ (BOOL)supportsFullscreenDisplay;	// 0x30116059
- (id)init;	// 0x30115725
// declared property getter: - (BOOL)TVOutEnabled;	// 0x301188dd
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x3011a6bd
- (void)_cancelArtworkImageRequest;	// 0x3011a401
- (void)_delayedPopForTimeJump;	// 0x30119a65
- (void)_delayedShowLoading;	// 0x30119ab1
- (void)_delayedUpdateBackgroundView;	// 0x30119731
- (void)_exitPlayerForPlaybackError;	// 0x3011931d
- (void)_fixupViewHierarchyIfNecessary;	// 0x301178c9
- (void)_hideLoadingIndicator;	// 0x3011a459
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x30119a35
- (unsigned)_itemTypeWithActualTypePreference;	// 0x30117141
- (void)_popForTimeJump:(id)timeJump;	// 0x30119921
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x3011a0f1
- (void)_screenDidConnect:(id)_screen;	// 0x301199ad
- (void)_screenDidDisconnect:(id)_screen;	// 0x301199f1
- (BOOL)_showDestinationPlaceholder;	// 0x3011a515
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x3011a041
- (void)_updateAlwaysPlayWheneverPossible;	// 0x30117c35
- (void)_updateBackgroundView:(BOOL)view;	// 0x30119771
- (void)_updateClosedCaptionDisplay;	// 0x30116609
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x30116a9d
- (void)_updateProgressControlForItem:(id)item;	// 0x3011a609
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x30118d5d
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x30118df1
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x30118e01
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x30118e41
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)_videoView_isAirPlayVideoActive;	// 0x30118e95
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x30118f89
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x30119399
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x3011942d
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x3011946d
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x30119505
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x3011956d
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x301195f9
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x30119635
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30118c6d
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x30118095
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x30118959
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x301180d1
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x3011a2e9
// declared property getter: - (int)artworkImageStyle;	// 0x3011a805
// declared property getter: - (id)artworkImageView;	// 0x30118229
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x30118131
// declared property getter: - (id)backgroundView;	// 0x30117931
- (void)backgroundViewDidUpdate;	// 0x3011a3f9
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x30117b31
// declared property getter: - (id)backstopColor;	// 0x3011a7e5
- (void)bufferingStateChangedNotification:(id)notification;	// 0x301198bd
- (CGRect)calculateArtworkImageViewFrame;	// 0x30116f79
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x30116d09
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x30119da9
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x30117b71
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x301162d9
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x30119dbd
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x301189fd
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x30118ab9
- (void)chapterListDidDisappear:(id)chapterList;	// 0x30118bcd
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x3011a29d
- (id)createChapterFlipTransition;	// 0x3011a35d
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x30116b81
- (void)crossedClosedCaptionTimeMarker:(id)marker;	// 0x30116bdd
- (void)dealloc;	// 0x30115bc5
// declared property getter: - (unsigned)desiredParts;	// 0x3011a7b5
// declared property getter: - (BOOL)disableAutoRotation;	// 0x301181a1
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x30117bad
// declared property getter: - (unsigned)disabledParts;	// 0x3011a7c5
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x3011a3fd
- (int)displayArtworkImageStyle;	// 0x30116cb9
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x3011899d
- (void)displayVideoView;	// 0x30119dd1
- (void)displayVideoViewOnScreen;	// 0x30119e89
- (void)displayVideoViewOnTV;	// 0x30119e8d
- (void)enableAirPlayVideoRoutesIfNecessary;	// 0x30117831
- (void)handleScaleModeChange;	// 0x30119fe1
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x30118a39
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x301181e1
// declared property getter: - (BOOL)isFullscreen;	// 0x301189d1
- (BOOL)isFullscreenForLayoutPurposes;	// 0x30116c5d
- (BOOL)isStatusBarHidden;	// 0x30116061
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x301189cd
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x301189c9
// declared property getter: - (unsigned)itemTypeOverride;	// 0x3011a7f5
- (void)loadView;	// 0x30118249
- (id)newAlternateTracksTransition;	// 0x3011a329
- (id)newArtworkImageView;	// 0x3011725d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x301183a5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30117875
// declared property getter: - (BOOL)ownsStatusBar;	// 0x30117c21
// declared property getter: - (id)posterImage;	// 0x3011a825
- (void)prepareToDisplayVideo;	// 0x3011845d
- (void)reloadArtworkImageView;	// 0x3011731d
- (void)removeChildViewController:(id)controller;	// 0x301183ed
// declared property getter: - (unsigned)scaleMode;	// 0x30117f81
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x301180a9
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x301188f1
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x301180e5
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x3011a2fd
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x3011a815
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x30118145
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x3011a391
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x3011a221
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x3011a245
- (void)setClosedCaptions:(id)captions;	// 0x30116085
- (void)setControlsNeedLayout;	// 0x30118221
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x3011a2a1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x3011a2c1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x3011a2e5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x30117e79
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x30117e8d
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x301181b5
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x30117ed5
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x30117ea5
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x301189b1
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x301189d5
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x301189e9
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x301181f5
- (void)setItem:(id)item;	// 0x30117cad
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x301189ed
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x3011721d
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x30117eed
- (void)setPlayer:(id)player;	// 0x3011877d
// declared property setter: - (void)setPosterImage:(id)image;	// 0x301177d9
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x30117f15
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x30117f29
- (void)setScaleModeOverride:(unsigned)override animated:(BOOL)animated;	// 0x30117fa9
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x3011883d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x30117fed
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x3011801d
- (void)showAlternateTracksController:(id)controller;	// 0x30116435
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x30118225
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x30117185
- (void)showChaptersController;	// 0x30116a89
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x30116735
- (int)statusBarStyle;	// 0x3011605d
- (void)tearDownTVOutWindow;	// 0x30119d41
- (void)toggleScaleMode:(BOOL)mode;	// 0x30118069
// declared property getter: - (id)videoOverlayView;	// 0x30118995
// declared property getter: - (id)videoOverlayViewIfLoaded;	// 0x30118999
// declared property getter: - (id)videoView;	// 0x3011896d
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x301196dd
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x30119695
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x30118bdd
- (void)viewDidAppear:(BOOL)view;	// 0x301186a5
- (void)viewDidUnload;	// 0x3011833d
- (void)viewWillDisappear:(BOOL)view;	// 0x301186f5
// declared property getter: - (unsigned)visibleParts;	// 0x3011a7d5
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x30118065
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x301165b9
@end
