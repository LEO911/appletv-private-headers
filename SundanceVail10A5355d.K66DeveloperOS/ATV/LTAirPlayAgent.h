/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"
#import "BRSingleton.h"

@class NSMutableDictionary, BRMediaPlayer, NSTimer, LTAirPlayPINControl;

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
+ (void)setSingleton:(id)singleton;	// 0x62939
+ (id)singleton;	// 0x62929
- (id)init;	// 0x6295d
- (void).cxx_destruct;	// 0x62a0d
- (long)_allowInterruption:(id *)interruption;	// 0x654f9
- (void)_autoDismissOnScreenCode:(id)code;	// 0x65b41
- (void)_dismissOnScreenCode:(id)code;	// 0x65b55
- (id)_errorToDictionary:(id)dictionary;	// 0x6555d
- (BOOL)_isFinancialTransactionInProgress;	// 0x656f5
- (void)_playerStateChanged:(id)changed;	// 0x65791
- (long)_setVideoPosition:(float)position;	// 0x6589d
- (long)_setVideoRate:(float)rate;	// 0x65999
- (void)_showPIN:(id)pin;	// 0x65c15
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x65e91
- (void)_updatePlayerStateObserving;	// 0x66199
- (void)_videoMetadataChanged:(id)changed;	// 0x66295
- (void)_videoPlaybackEnded:(id)ended;	// 0x662a5
- (void)_videoPlaybackError:(id)error;	// 0x66339
- (void)_videoPlayerStateChanged:(id)changed;	// 0x66405
- (void)airplayUIActivity;	// 0x64295
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x62a65
- (long)airplayUIHideProgress;	// 0x641d5
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x632bd
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x62dd5
- (long)airplayUIShowProgress;	// 0x64115
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x6431d
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x63d31
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x646ed
- (long)airplayUIStopAudio:(id)audio;	// 0x64551
- (long)airplayUIStopPresentation:(id)presentation;	// 0x64049
- (long)airplayUIStopVideo:(id)video;	// 0x652d1
- (long)airplayUIUpdateAudioMetaData:(id)data;	// 0x645f5
- (long)airplayUIUpdateAudioProgress:(double)progress duration:(double)duration;	// 0x6466d
- (void)dealloc;	// 0x629a1
- (BOOL)handleFailedURLRequest:(id)request;	// 0x65415
@end

