/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverControl : BRControl {
@private
	BRMediaPlayer *_player;	// 48 = 0x30
}
+ (id)screenSaverControlWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x3311c5a9
- (id)initWithPlugin:(id)plugin screenSaverAutoFired:(BOOL)fired;	// 0x3311c4bd
- (BOOL)_nextTrackAction:(id)action;	// 0x3311ca59
- (BOOL)_playPauseAction:(id)action;	// 0x3311c9f9
- (void)_playerStateChanged:(id)changed;	// 0x3311c9b9
- (BOOL)_previousTrackAction:(id)action;	// 0x3311cabd
- (void)_setNewPlayer:(id)player;	// 0x3311c8f1
- (id)accessibilityLabel;	// 0x3311cb25
- (BOOL)brEventAction:(id)action;	// 0x3311c665
- (void)controlWasActivated;	// 0x3311c76d
- (void)controlWasDeactivated;	// 0x3311c7d5
- (void)dealloc;	// 0x3311c5e9
- (BOOL)isAccessibilityElement;	// 0x3311cb21
- (void)layoutSubcontrols;	// 0x3311c83d
@end
