/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaPlayer.h"

@class NSTimer, MEAirTunesMediaAsset, MEAirTunesMediaProvider;

__attribute__((visibility("hidden")))
@interface MEAirTunesPlayer : BRMediaPlayer {
	BOOL _enabled;	// 4 = 0x4
	double _position;	// 8 = 0x8
	int _state;	// 16 = 0x10
	int _stateBeforeSeek;	// 20 = 0x14
	MEAirTunesMediaProvider *_provider;	// 24 = 0x18
	MEAirTunesMediaAsset *_asset;	// 28 = 0x1c
	NSTimer *_progressNotificationTimer;	// 32 = 0x20
}
@property(assign) double elapsedTime;	// G=0x473f45; S=0x473f11; converted property
+ (BOOL)allowMultiplePlayers;	// 0x4736a1
+ (id)contentTypes;	// 0x4736a5
+ (BOOL)handlesVideoForType:(id)type;	// 0x473705
- (id)init;	// 0x473709
- (void).cxx_destruct;	// 0x474679
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x4746c1
- (BOOL)_handleRateChangeState:(int)state withError:(id *)error;	// 0x474721
- (void)_notificationDACPError:(id)error;	// 0x474a75
- (void)_notificationOnOffToggleDidChange:(id)_notificationOnOffToggle;	// 0x474b3d
- (void)_notificationTemporaryEnableStateChange:(id)change;	// 0x474bc5
- (void)_registerForNotifications;	// 0x474879
- (void)_sendProgressNotification:(id)notification;	// 0x474a1d
- (void)_setNewState:(int)state;	// 0x4747c1
- (void)_startPlaybackProgressNotifications;	// 0x474969
- (void)_stopPlaybackProgressNotifications;	// 0x4749e1
- (void)dealloc;	// 0x473a29
- (void)disable;	// 0x473b69
- (double)duration;	// 0x473ee1
// converted property getter: - (double)elapsedTime;	// 0x473f45
- (void)enable;	// 0x473acd
- (id)media;	// 0x473e01
- (void)nextMedia;	// 0x473ff9
- (int)playerState;	// 0x473ed1
- (void)previousMedia;	// 0x473f81
- (void)resetToBeginning;	// 0x473f61
- (void)resume;	// 0x473c15
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x473f11
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x473cb9
- (BOOL)setState:(int)state error:(id *)error;	// 0x473e15
- (void)started;	// 0x474071
- (void)stopped;	// 0x474085
- (void)updateMetaData:(id)data;	// 0x4740ad
- (void)updateProgress:(double)progress duration:(double)duration;	// 0x4744b9
@end

