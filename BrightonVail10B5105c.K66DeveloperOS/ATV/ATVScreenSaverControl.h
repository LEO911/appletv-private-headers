/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler;
@protocol ATVScreenSaverInterstitials;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	BRMediaPlayerEventHandler *_eventHandler;	// 88 = 0x58
	BOOL _dismissWithTopMenuEvent;	// 92 = 0x5c
	id<ATVScreenSaverInterstitials> _screenSaverInterstitials;	// 96 = 0x60
	NSTimer *_screenSaverBringBackTimer;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL dismissWithTopMenuEvent;	// G=0x23c7b9; S=0x23c7c9; @synthesize=_dismissWithTopMenuEvent
@property(retain, nonatomic) NSTimer *screenSaverBringBackTimer;	// G=0x23c7f9; S=0x23c809; @synthesize=_screenSaverBringBackTimer
@property(retain, nonatomic) id<ATVScreenSaverInterstitials> screenSaverInterstitials;	// G=0x23c7d9; S=0x23c7e9; @synthesize=_screenSaverInterstitials
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x23bdc5
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x23bc39
- (BOOL)_nextTrackAction:(id)action;	// 0x23c515
- (BOOL)_playPauseAction:(id)action;	// 0x23c4b5
- (void)_playerAssetChanged:(id)changed;	// 0x23c471
- (void)_playerStateChanged:(id)changed;	// 0x23c329
- (BOOL)_previousTrackAction:(id)action;	// 0x23c575
- (void)_screenSaverBringBackTimerHandler:(id)handler;	// 0x23c761
- (id)_screenSaverInterstitialsForPlayer:(id)player;	// 0x23c601
- (void)_setNewPlayer:(id)player;	// 0x23c1e1
- (void)_showInterstitials:(BOOL)interstitials animate:(BOOL)animate;	// 0x23c605
- (id)accessibilityLabel;	// 0x23c1b9
- (BOOL)brEventAction:(id)action;	// 0x23be95
- (void)controlWasActivated;	// 0x23bfc9
- (void)controlWasDeactivated;	// 0x23c031
- (void)dealloc;	// 0x23be05
// declared property getter: - (BOOL)dismissWithTopMenuEvent;	// 0x23c7b9
- (BOOL)isAccessibilityElement;	// 0x23c1b5
- (void)layoutSubcontrols;	// 0x23c0f9
// declared property getter: - (id)screenSaverBringBackTimer;	// 0x23c7f9
// declared property getter: - (id)screenSaverInterstitials;	// 0x23c7d9
// declared property setter: - (void)setDismissWithTopMenuEvent:(BOOL)topMenuEvent;	// 0x23c7c9
// declared property setter: - (void)setScreenSaverBringBackTimer:(id)timer;	// 0x23c809
// declared property setter: - (void)setScreenSaverInterstitials:(id)interstitials;	// 0x23c7e9
@end

