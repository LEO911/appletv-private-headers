/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaPlayer.h"

@class MEAirTunesMediaAsset, NSTimer, MEAirTunesMediaProvider;

__attribute__((visibility("hidden")))
@interface MEAirTunesPlayer : BRMediaPlayer {
	BOOL _enabled;	// 8 = 0x8
	double _position;	// 12 = 0xc
	int _state;	// 20 = 0x14
	int _stateBeforeSeek;	// 24 = 0x18
	MEAirTunesMediaProvider *_provider;	// 28 = 0x1c
	MEAirTunesMediaAsset *_asset;	// 32 = 0x20
	NSTimer *_progressNotificationTimer;	// 36 = 0x24
}
@property(assign) double elapsedTime;	// G=0x57b45; S=0x57b11; converted property
+ (BOOL)allowMultiplePlayers;	// 0x57289
+ (id)contentTypes;	// 0x5728d
+ (BOOL)handlesVideoForType:(id)type;	// 0x572ed
- (id)init;	// 0x572f1
- (void).cxx_destruct;	// 0x58275
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x582bd
- (BOOL)_handleRateChangeState:(int)state withError:(id *)error;	// 0x5831d
- (void)_notificationDACPError:(id)error;	// 0x58671
- (void)_notificationOnOffToggleDidChange:(id)_notificationOnOffToggle;	// 0x58739
- (void)_notificationTemporaryEnableStateChange:(id)change;	// 0x587c5
- (void)_registerForNotifications;	// 0x58475
- (void)_sendProgressNotification:(id)notification;	// 0x58619
- (void)_setNewState:(int)state;	// 0x583bd
- (void)_startPlaybackProgressNotifications;	// 0x58565
- (void)_stopPlaybackProgressNotifications;	// 0x585dd
- (void)dealloc;	// 0x57629
- (void)disable;	// 0x57769
- (double)duration;	// 0x57ae1
// converted property getter: - (double)elapsedTime;	// 0x57b45
- (void)enable;	// 0x576cd
- (id)media;	// 0x57a01
- (void)nextMedia;	// 0x57bf9
- (int)playerState;	// 0x57ad1
- (void)previousMedia;	// 0x57b81
- (void)resetToBeginning;	// 0x57b61
- (void)resume;	// 0x57815
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x57b11
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x578b9
- (BOOL)setState:(int)state error:(id *)error;	// 0x57a15
- (void)started;	// 0x57c71
- (void)stopped;	// 0x57c85
- (void)updateMetaData:(id)data;	// 0x57cad
- (void)updateProgress:(double)progress duration:(double)duration;	// 0x580ad
@end

