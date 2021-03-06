/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMediaPlayer, BRMediaPlayerEventHandler;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	BRMediaPlayerEventHandler *_eventHandler;	// 88 = 0x58
	BOOL _dismissWithTopMenuEvent;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL dismissWithTopMenuEvent;	// G=0x229eb9; S=0x229ec9; @synthesize=_dismissWithTopMenuEvent
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x229b09
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x2299d5
- (BOOL)_nextTrackAction:(id)action;	// 0x22a045
- (BOOL)_playPauseAction:(id)action;	// 0x229fe5
- (void)_playerStateChanged:(id)changed;	// 0x229fa1
- (BOOL)_previousTrackAction:(id)action;	// 0x22a0a5
- (void)_setNewPlayer:(id)player;	// 0x229ed9
- (id)accessibilityLabel;	// 0x22a135
- (BOOL)brEventAction:(id)action;	// 0x229bd9
- (void)controlWasActivated;	// 0x229d0d
- (void)controlWasDeactivated;	// 0x229d75
- (void)dealloc;	// 0x229b49
// declared property getter: - (BOOL)dismissWithTopMenuEvent;	// 0x229eb9
- (BOOL)isAccessibilityElement;	// 0x22a131
- (void)layoutSubcontrols;	// 0x229dfd
// declared property setter: - (void)setDismissWithTopMenuEvent:(BOOL)topMenuEvent;	// 0x229ec9
@end

