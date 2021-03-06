/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRResponder.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVPhotoSwapView, ATVPhotoPlayerSwapView, BRMediaPlayer, BRMediaPlayerEventHandler, NSTimer, BRTransportControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVPhotoPlayerSwapViewController : XXUnknownSuperclass <BRResponder> {
	BOOL _transportEnabled;	// 4 = 0x4
	ATVPhotoSwapView *_swapView;	// 8 = 0x8
	id<BRMediaAsset> _mediaAsset;	// 12 = 0xc
	BRMediaPlayer *_player;	// 16 = 0x10
	BRMediaPlayerEventHandler *_playerEventHandler;	// 20 = 0x14
	BRTransportControl *_transportControl;	// 24 = 0x18
	ATVPhotoPlayerSwapView *_playerSwapView;	// 28 = 0x1c
	NSTimer *_beginPlaybackTimer;	// 32 = 0x20
	NSTimer *_spinnerTimer;	// 36 = 0x24
}
@property(assign, nonatomic) __weak NSTimer *beginPlaybackTimer;	// G=0x4baf7d; S=0x4baf9d; @synthesize=_beginPlaybackTimer
@property(retain, nonatomic) id<BRMediaAsset> mediaAsset;	// G=0x4bae69; S=0x4bae79; @synthesize=_mediaAsset
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x4bae9d; S=0x4baead; @synthesize=_player
@property(retain, nonatomic) BRMediaPlayerEventHandler *playerEventHandler;	// G=0x4baed5; S=0x4baee5; @synthesize=_playerEventHandler
@property(retain, nonatomic) ATVPhotoPlayerSwapView *playerSwapView;	// G=0x4baf45; S=0x4baf55; @synthesize=_playerSwapView
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x4bafb1; S=0x4bafd1; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVPhotoSwapView *swapView;	// G=0x4bae59; S=0x4b8f29; @synthesize=_swapView
@property(retain, nonatomic) BRTransportControl *transportControl;	// G=0x4baf0d; S=0x4baf1d; @synthesize=_transportControl
@property(assign, nonatomic) BOOL transportEnabled;	// G=0x4bae8d; S=0x4b907d; @synthesize=_transportEnabled
- (void).cxx_destruct;	// 0x4bafe5
- (void)_beginDelayedPlayback;	// 0x4bac7d
- (void)_beginPlayback;	// 0x4ba305
- (void)_beginPlaybackTimerHandler:(id)handler;	// 0x4badfd
- (void)_cueMedia;	// 0x4b9b0d
- (id)_imageControlForSwapView:(id)swapView;	// 0x4baaf5
- (BOOL)_isPlayerReadyToBeSwappedBack;	// 0x4b9f89
- (BOOL)_isPlayerSeeking;	// 0x4bae0d
- (void)_playerDidStartLoading;	// 0x4b9c89
- (void)_playerDidTogglePlaying;	// 0x4b9cc1
- (void)_playerMediaCued:(id)cued;	// 0x4b9745
- (void)_playerMediaCuedError:(id)error;	// 0x4b9995
- (void)_playerProgressChanged:(id)changed;	// 0x4b9ad5
- (void)_playerStateChanged:(id)changed;	// 0x4b99ed
- (XXStruct_qlg9jA)_shadowWidthForSwapView:(id)swapView;	// 0x4bac0d
- (void)_showDelayedSpinner;	// 0x4ba25d
- (void)_showError;	// 0x4b9d9d
- (void)_showSpinner:(BOOL)spinner;	// 0x4ba079
- (void)_spinnerTimerHandler:(id)handler;	// 0x4ba2f1
- (void)_teardown;	// 0x4b9dad
// declared property getter: - (id)beginPlaybackTimer;	// 0x4baf7d
- (BOOL)brEventAction:(id)action;	// 0x4b9411
- (BOOL)brKeyEvent:(id)event;	// 0x4b9741
- (void)dealloc;	// 0x4b8ee9
// declared property getter: - (id)mediaAsset;	// 0x4bae69
// declared property getter: - (id)player;	// 0x4bae9d
// declared property getter: - (id)playerEventHandler;	// 0x4baed5
// declared property getter: - (id)playerSwapView;	// 0x4baf45
// declared property setter: - (void)setBeginPlaybackTimer:(id)timer;	// 0x4baf9d
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x4bae79
// declared property setter: - (void)setPlayer:(id)player;	// 0x4baead
// declared property setter: - (void)setPlayerEventHandler:(id)handler;	// 0x4baee5
// declared property setter: - (void)setPlayerSwapView:(id)view;	// 0x4baf55
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x4bafd1
// declared property setter: - (void)setSwapView:(id)view;	// 0x4b8f29
// declared property setter: - (void)setTransportControl:(id)control;	// 0x4baf1d
// declared property setter: - (void)setTransportEnabled:(BOOL)enabled;	// 0x4b907d
// declared property getter: - (id)spinnerTimer;	// 0x4bafb1
- (void)stop;	// 0x4b9401
// declared property getter: - (id)swapView;	// 0x4bae59
- (void)switchToMediaAsset:(id)mediaAsset swapView:(id)view;	// 0x4b9279
// declared property getter: - (id)transportControl;	// 0x4baf0d
// declared property getter: - (BOOL)transportEnabled;	// 0x4bae8d
@end

