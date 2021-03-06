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
@property(assign, nonatomic) BOOL dismissWithTopMenuEvent;	// G=0x2477bd; S=0x2477cd; @synthesize=_dismissWithTopMenuEvent
@property(retain, nonatomic) NSTimer *screenSaverBringBackTimer;	// G=0x2477fd; S=0x24780d; @synthesize=_screenSaverBringBackTimer
@property(retain, nonatomic) id<ATVScreenSaverInterstitials> screenSaverInterstitials;	// G=0x2477dd; S=0x2477ed; @synthesize=_screenSaverInterstitials
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x246dc9
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x246c3d
- (BOOL)_nextTrackAction:(id)action;	// 0x247519
- (BOOL)_playPauseAction:(id)action;	// 0x2474b9
- (void)_playerAssetChanged:(id)changed;	// 0x247475
- (void)_playerStateChanged:(id)changed;	// 0x24732d
- (BOOL)_previousTrackAction:(id)action;	// 0x247579
- (void)_screenSaverBringBackTimerHandler:(id)handler;	// 0x247765
- (id)_screenSaverInterstitialsForPlayer:(id)player;	// 0x247605
- (void)_setNewPlayer:(id)player;	// 0x2471e5
- (void)_showInterstitials:(BOOL)interstitials animate:(BOOL)animate;	// 0x247609
- (id)accessibilityLabel;	// 0x2471bd
- (BOOL)brEventAction:(id)action;	// 0x246e99
- (void)controlWasActivated;	// 0x246fcd
- (void)controlWasDeactivated;	// 0x247035
- (void)dealloc;	// 0x246e09
// declared property getter: - (BOOL)dismissWithTopMenuEvent;	// 0x2477bd
- (BOOL)isAccessibilityElement;	// 0x2471b9
- (void)layoutSubcontrols;	// 0x2470fd
// declared property getter: - (id)screenSaverBringBackTimer;	// 0x2477fd
// declared property getter: - (id)screenSaverInterstitials;	// 0x2477dd
// declared property setter: - (void)setDismissWithTopMenuEvent:(BOOL)topMenuEvent;	// 0x2477cd
// declared property setter: - (void)setScreenSaverBringBackTimer:(id)timer;	// 0x24780d
// declared property setter: - (void)setScreenSaverInterstitials:(id)interstitials;	// 0x2477ed
@end

