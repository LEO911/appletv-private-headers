/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"

@class NSTimer, LTAirPlayPINControl, BRMediaPlayer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LTAirPlayAgent : BRSingleton <AirPlayReceiverUIDelegate, BRFailedURLHandling> {
	BOOL _audioStarted;	// 4 = 0x4
	NSMutableDictionary *_failedURLRequests;	// 8 = 0x8
	BOOL _playerStateObserving;	// 12 = 0xc
	BOOL _videoPlaybackEnded;	// 13 = 0xd
	BRMediaPlayer *_videoPlayer;	// 16 = 0x10
	BOOL _videoStarted;	// 20 = 0x14
	LTAirPlayPINControl *_dialog;	// 24 = 0x18
	NSTimer *_dialogTimer;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x621b1
+ (id)singleton;	// 0x621a1
- (id)init;	// 0x621d5
- (void).cxx_destruct;	// 0x62285
- (long)_allowInterruption:(id *)interruption;	// 0x64d71
- (void)_autoDismissOnScreenCode:(id)code;	// 0x653b9
- (void)_dismissOnScreenCode:(id)code;	// 0x653cd
- (id)_errorToDictionary:(id)dictionary;	// 0x64dd5
- (BOOL)_isFinancialTransactionInProgress;	// 0x64f6d
- (void)_playerStateChanged:(id)changed;	// 0x65009
- (long)_setVideoPosition:(float)position;	// 0x65115
- (long)_setVideoRate:(float)rate;	// 0x65211
- (void)_showPIN:(id)pin;	// 0x6548d
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x65709
- (void)_updatePlayerStateObserving;	// 0x65a11
- (void)_videoMetadataChanged:(id)changed;	// 0x65b0d
- (void)_videoPlaybackEnded:(id)ended;	// 0x65b1d
- (void)_videoPlaybackError:(id)error;	// 0x65bb1
- (void)_videoPlayerStateChanged:(id)changed;	// 0x65c7d
- (void)airplayUIActivity;	// 0x63b0d
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x622dd
- (long)airplayUIHideProgress;	// 0x63a4d
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x62b35
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x6264d
- (long)airplayUIShowProgress;	// 0x6398d
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x63b95
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x635a9
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x63f65
- (long)airplayUIStopAudio:(id)audio;	// 0x63dc9
- (long)airplayUIStopPresentation:(id)presentation;	// 0x638c1
- (long)airplayUIStopVideo:(id)video;	// 0x64b49
- (long)airplayUIUpdateAudioMetaData:(id)data;	// 0x63e6d
- (long)airplayUIUpdateAudioProgress:(double)progress duration:(double)duration;	// 0x63ee5
- (void)dealloc;	// 0x62219
- (BOOL)handleFailedURLRequest:(id)request;	// 0x64c8d
@end

