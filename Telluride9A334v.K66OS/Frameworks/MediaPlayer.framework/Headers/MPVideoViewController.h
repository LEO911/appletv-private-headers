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
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x34df78dd; S=0x34df783d; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x34df7095; S=0x34df70a9; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x34df7959; S=0x34df78f1; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x34df70d1; S=0x34df70e5; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x34df92e9; S=0x34df92fd; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x34df9805; S=0x34df9815; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x34df7229; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x34df7131; S=0x34df7145; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x34df6931; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x34df6b31; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x34df97e5; S=0x34df9391; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x34df8da9; S=0x34df9221; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x34df6b71; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x34df8dbd; S=0x34df9245; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x34df79fd; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x34df929d; S=0x34df92a1; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x34df97b5; S=0x34df6e79; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x34df71a1; S=0x34df71b5; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x34df6bad; S=0x34df6ed5; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x34df97c5; S=0x34df6ea5; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x34df799d; S=0x34df79b1; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x34df79d1; S=0x34df79d5; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x34df71e1; S=0x34df71f5; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x34df97f5; S=0x34df79ed; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x34df6c21; S=0x34df6eed; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x34df9825; S=0x34df67d9; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x34df6f81; S=0x34df6f15; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x34df7225; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x34df6185; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x34df79cd; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x34df79c9; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;	// G=0x34df7995; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;	// G=0x34df7999; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x34df796d; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x34df7bdd; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x34df97d5; S=0x34df6fed; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x34df6055
+ (BOOL)supportsFullscreenDisplay;	// 0x34df5059
- (id)init;	// 0x34df4725
// declared property getter: - (BOOL)TVOutEnabled;	// 0x34df78dd
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x34df96bd
- (void)_cancelArtworkImageRequest;	// 0x34df9401
- (void)_delayedPopForTimeJump;	// 0x34df8a65
- (void)_delayedShowLoading;	// 0x34df8ab1
- (void)_delayedUpdateBackgroundView;	// 0x34df8731
- (void)_exitPlayerForPlaybackError;	// 0x34df831d
- (void)_fixupViewHierarchyIfNecessary;	// 0x34df68c9
- (void)_hideLoadingIndicator;	// 0x34df9459
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x34df8a35
- (unsigned)_itemTypeWithActualTypePreference;	// 0x34df6141
- (void)_popForTimeJump:(id)timeJump;	// 0x34df8921
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x34df90f1
- (void)_screenDidConnect:(id)_screen;	// 0x34df89ad
- (void)_screenDidDisconnect:(id)_screen;	// 0x34df89f1
- (BOOL)_showDestinationPlaceholder;	// 0x34df9515
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x34df9041
- (void)_updateAlwaysPlayWheneverPossible;	// 0x34df6c35
- (void)_updateBackgroundView:(BOOL)view;	// 0x34df8771
- (void)_updateClosedCaptionDisplay;	// 0x34df5609
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x34df5a9d
- (void)_updateProgressControlForItem:(id)item;	// 0x34df9609
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x34df7d5d
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x34df7df1
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x34df7e01
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x34df7e41
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)_videoView_isAirPlayVideoActive;	// 0x34df7e95
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x34df7f89
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x34df8399
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x34df842d
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x34df846d
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x34df8505
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x34df856d
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x34df85f9
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x34df8635
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x34df7c6d
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x34df7095
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x34df7959
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x34df70d1
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x34df92e9
// declared property getter: - (int)artworkImageStyle;	// 0x34df9805
// declared property getter: - (id)artworkImageView;	// 0x34df7229
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x34df7131
// declared property getter: - (id)backgroundView;	// 0x34df6931
- (void)backgroundViewDidUpdate;	// 0x34df93f9
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x34df6b31
// declared property getter: - (id)backstopColor;	// 0x34df97e5
- (void)bufferingStateChangedNotification:(id)notification;	// 0x34df88bd
- (CGRect)calculateArtworkImageViewFrame;	// 0x34df5f79
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x34df5d09
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x34df8da9
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x34df6b71
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x34df52d9
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x34df8dbd
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x34df79fd
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x34df7ab9
- (void)chapterListDidDisappear:(id)chapterList;	// 0x34df7bcd
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x34df929d
- (id)createChapterFlipTransition;	// 0x34df935d
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x34df5b81
- (void)crossedClosedCaptionTimeMarker:(id)marker;	// 0x34df5bdd
- (void)dealloc;	// 0x34df4bc5
// declared property getter: - (unsigned)desiredParts;	// 0x34df97b5
// declared property getter: - (BOOL)disableAutoRotation;	// 0x34df71a1
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x34df6bad
// declared property getter: - (unsigned)disabledParts;	// 0x34df97c5
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x34df93fd
- (int)displayArtworkImageStyle;	// 0x34df5cb9
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x34df799d
- (void)displayVideoView;	// 0x34df8dd1
- (void)displayVideoViewOnScreen;	// 0x34df8e89
- (void)displayVideoViewOnTV;	// 0x34df8e8d
- (void)enableAirPlayVideoRoutesIfNecessary;	// 0x34df6831
- (void)handleScaleModeChange;	// 0x34df8fe1
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x34df7a39
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x34df71e1
// declared property getter: - (BOOL)isFullscreen;	// 0x34df79d1
- (BOOL)isFullscreenForLayoutPurposes;	// 0x34df5c5d
- (BOOL)isStatusBarHidden;	// 0x34df5061
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x34df79cd
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x34df79c9
// declared property getter: - (unsigned)itemTypeOverride;	// 0x34df97f5
- (void)loadView;	// 0x34df7249
- (id)newAlternateTracksTransition;	// 0x34df9329
- (id)newArtworkImageView;	// 0x34df625d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x34df73a5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34df6875
// declared property getter: - (BOOL)ownsStatusBar;	// 0x34df6c21
// declared property getter: - (id)posterImage;	// 0x34df9825
- (void)prepareToDisplayVideo;	// 0x34df745d
- (void)reloadArtworkImageView;	// 0x34df631d
- (void)removeChildViewController:(id)controller;	// 0x34df73ed
// declared property getter: - (unsigned)scaleMode;	// 0x34df6f81
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x34df70a9
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x34df78f1
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x34df70e5
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x34df92fd
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x34df9815
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x34df7145
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x34df9391
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x34df9221
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x34df9245
- (void)setClosedCaptions:(id)captions;	// 0x34df5085
- (void)setControlsNeedLayout;	// 0x34df7221
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x34df92a1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x34df92c1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x34df92e5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x34df6e79
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x34df6e8d
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x34df71b5
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x34df6ed5
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x34df6ea5
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x34df79b1
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x34df79d5
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x34df79e9
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x34df71f5
- (void)setItem:(id)item;	// 0x34df6cad
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x34df79ed
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x34df621d
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x34df6eed
- (void)setPlayer:(id)player;	// 0x34df777d
// declared property setter: - (void)setPosterImage:(id)image;	// 0x34df67d9
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x34df6f15
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x34df6f29
- (void)setScaleModeOverride:(unsigned)override animated:(BOOL)animated;	// 0x34df6fa9
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x34df783d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x34df6fed
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x34df701d
- (void)showAlternateTracksController:(id)controller;	// 0x34df5435
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x34df7225
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x34df6185
- (void)showChaptersController;	// 0x34df5a89
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x34df5735
- (int)statusBarStyle;	// 0x34df505d
- (void)tearDownTVOutWindow;	// 0x34df8d41
- (void)toggleScaleMode:(BOOL)mode;	// 0x34df7069
// declared property getter: - (id)videoOverlayView;	// 0x34df7995
// declared property getter: - (id)videoOverlayViewIfLoaded;	// 0x34df7999
// declared property getter: - (id)videoView;	// 0x34df796d
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x34df86dd
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x34df8695
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x34df7bdd
- (void)viewDidAppear:(BOOL)view;	// 0x34df76a5
- (void)viewDidUnload;	// 0x34df733d
- (void)viewWillDisappear:(BOOL)view;	// 0x34df76f5
// declared property getter: - (unsigned)visibleParts;	// 0x34df97d5
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x34df7065
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x34df55b9
@end
