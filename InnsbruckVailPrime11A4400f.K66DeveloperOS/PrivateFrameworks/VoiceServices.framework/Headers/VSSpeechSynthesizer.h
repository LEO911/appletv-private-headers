/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import </libobjc.A.h>
#import "VSSpeechConnectionDelegate.h"

@class VSKeepAlive, VSSpeechConnection, NSString;
@protocol VSSpeechSynthesizerDelegate, OS_dispatch_queue;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {
	VSKeepAlive *_keepAlive;	// 4 = 0x4
	VSKeepAlive *_inactiveKeepAlive;	// 8 = 0x8
	int _footprint;	// 12 = 0xc
	BOOL _useCustomVoice;	// 16 = 0x10
	int _gender;	// 20 = 0x14
	BOOL _useSharedSession;	// 24 = 0x18
	BOOL _audioSessionIDIsValid;	// 25 = 0x19
	unsigned _audioSessionID;	// 28 = 0x1c
	unsigned _audioQueueFlags;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_queue;	// 36 = 0x24
	VSSpeechConnection *_speechConnection;	// 40 = 0x28
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 44 = 0x2c
	id<VSSpeechSynthesizerDelegate> _delegate;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	float _pitch;	// 56 = 0x38
	float _volume;	// 60 = 0x3c
	NSString *_voice;	// 64 = 0x40
}
@property(assign, nonatomic) __weak id<VSSpeechSynthesizerDelegate> delegate;	// G=0x32e3e381; S=0x32e3c885; @synthesize=_delegate
@property(assign) int footprint;	// G=0x32e3cfdd; S=0x32e3cfcd; converted property
@property(assign) int gender;	// G=0x32e3d01d; S=0x32e3d00d; converted property
@property(assign, nonatomic) float pitch;	// G=0x32e3e3c1; S=0x32e3e3d1; @synthesize=_pitch
@property(assign, nonatomic) float rate;	// G=0x32e3e3a1; S=0x32e3e3b1; @synthesize=_rate
@property(assign) BOOL useCustomVoice;	// G=0x32e3cffd; S=0x32e3cfed; converted property
@property(retain, nonatomic) NSString *voice;	// G=0x32e3cf35; S=0x32e3e401; @synthesize=_voice
@property(assign, nonatomic) float volume;	// G=0x32e3e3e1; S=0x32e3e3f1; @synthesize=_volume
+ (id)availableFootprintsForVoice:(id)voice languageCode:(id)code;	// 0x32e3bb9d
+ (id)availableLanguageCodes;	// 0x32e3bb8d
+ (id)availableVoices;	// 0x32e3bb05
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x32e3bb19
+ (void)downloadVoiceAsset:(id)asset progress:(id)progress completion:(id)completion;	// 0x32e3e571
+ (void)getAllVoiceAssets:(id)assets;	// 0x32e3e4a9
+ (void)getAutoDownloadedVoiceAssets:(id)assets;	// 0x32e3e665
+ (void)getLocalVoiceAssets:(id)assets;	// 0x32e3e50d
+ (void)getVoiceInfoForLanguageCode:(id)languageCode footprint:(int)footprint gender:(int)gender custom:(BOOL)custom reply:(id)reply;	// 0x32e3e6c9
+ (BOOL)isSystemSpeaking;	// 0x32e3bc29
+ (void)setAutoDownloadedVoiceAssets:(id)assets;	// 0x32e3e601
- (id)init;	// 0x32e3bc79
- (id)initForInputFeedback;	// 0x32e3bd09
- (void).cxx_destruct;	// 0x32e3e429
- (BOOL)_continueSpeakingRequest:(id)request withError:(id *)error;	// 0x32e3c7d1
- (BOOL)_pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3c671
- (void)_setDelegate:(id)delegate;	// 0x32e3be11
- (BOOL)_startSpeakingString:(id)string orAttributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;	// 0x32e3c03d
- (BOOL)_stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3c511
- (void)connection:(id)connection speechRequest:(id)request didStopAtEnd:(BOOL)end phonemesSpoken:(id)spoken error:(id)error;	// 0x32e3db45
- (void)connection:(id)connection speechRequest:(id)request willSpeakMark:(int)mark inRange:(NSRange)range;	// 0x32e3e0c5
- (void)connection:(id)connection speechRequestDidContinue:(id)speechRequest;	// 0x32e3d8c1
- (void)connection:(id)connection speechRequestDidPause:(id)speechRequest;	// 0x32e3d601
- (void)connection:(id)connection speechRequestDidStart:(id)speechRequest;	// 0x32e3d341
- (BOOL)continueSpeakingRequest:(id)request withError:(id *)error;	// 0x32e3d1d5
- (BOOL)continueSpeakingWithError:(id *)error;	// 0x32e3ccb5
- (void)dealloc;	// 0x32e3bd9d
// declared property getter: - (id)delegate;	// 0x32e3e381
// converted property getter: - (int)footprint;	// 0x32e3cfdd
// converted property getter: - (int)gender;	// 0x32e3d01d
- (BOOL)isSpeaking;	// 0x32e3cd95
- (float)maximumRate;	// 0x32e3cf2d
- (float)minimumRate;	// 0x32e3cf25
- (BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32e3cb81
- (BOOL)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3cba1
- (BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32e3d181
- (BOOL)pauseSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3d1b1
// declared property getter: - (float)pitch;	// 0x32e3e3c1
// declared property getter: - (float)rate;	// 0x32e3e3a1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e3c885
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x32e3cfcd
// converted property setter: - (void)setGender:(int)gender;	// 0x32e3d00d
- (void)setMaintainInactivePersistentConnection:(BOOL)connection;	// 0x32e3d2a1
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x32e3d1ed
// declared property setter: - (void)setPitch:(float)pitch;	// 0x32e3e3d1
// declared property setter: - (void)setRate:(float)rate;	// 0x32e3e3b1
// converted property setter: - (void)setUseCustomVoice:(BOOL)voice;	// 0x32e3cfed
// declared property setter: - (void)setVoice:(id)voice;	// 0x32e3e401
// declared property setter: - (void)setVolume:(float)volume;	// 0x32e3e3f1
- (id)speechString;	// 0x32e3ce7d
- (BOOL)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;	// 0x32e3bd49
- (BOOL)startSpeakingString:(id)string error:(id *)error;	// 0x32e3c94d
- (BOOL)startSpeakingString:(id)string request:(id *)request error:(id *)error;	// 0x32e3d071
- (BOOL)startSpeakingString:(id)string toURL:(id)url error:(id *)error;	// 0x32e3c971
- (BOOL)startSpeakingString:(id)string toURL:(id)url request:(id *)request error:(id *)error;	// 0x32e3d0a5
- (BOOL)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode error:(id *)error;	// 0x32e3c9f9
- (BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode error:(id *)error;	// 0x32e3c9b1
- (BOOL)startSpeakingString:(id)string withLanguageCode:(id)languageCode request:(id *)request error:(id *)error;	// 0x32e3d0e9
- (BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32e3ca4d
- (BOOL)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3ca6d
- (BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary error:(id *)error;	// 0x32e3d12d
- (BOOL)stopSpeakingRequest:(id)request atNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e3d15d
- (void)useAudioQueueFlags:(unsigned)flags;	// 0x32e3d061
// converted property getter: - (BOOL)useCustomVoice;	// 0x32e3cffd
- (void)useSharedAudioSession:(BOOL)session;	// 0x32e3d02d
- (void)useSpecificAudioSession:(unsigned)session;	// 0x32e3d03d
// declared property getter: - (id)voice;	// 0x32e3cf35
// declared property getter: - (float)volume;	// 0x32e3e3e1
@end

