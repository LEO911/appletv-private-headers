/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer;

@interface SKTelephonyController : NSObject {
	NSTimer *_hackTimer;	// 4 = 0x4
	CTServerConnectionRef _serverCon;	// 8 = 0x8
	BOOL _commCenterActive;	// 12 = 0xc
	int _stream;	// 16 = 0x10
}
@property(assign) CTCallRef activeCall;	// G=0x30c4d701; S=0x30c4d761; converted property
@property(readonly, assign, getter=isCommCenterActive) BOOL commCenterActive;	// G=0x30c4defd; converted property
@property(assign) BOOL dataStatus;	// G=0x30c4dded; S=0x30c4de11; converted property
+ (id)sharedInstance;	// 0x30c4cf89
- (id)init;	// 0x30c4d059
- (id)activeBands;	// 0x30c4dd55
// converted property getter: - (CTCallRef)activeCall;	// 0x30c4d701
- (double)activeCallDuration;	// 0x30c4d7b1
- (void)answerIncomingCall;	// 0x30c4d961
- (BOOL)autoSelectsNetwork;	// 0x30c4de71
- (id)basebandVersion;	// 0x30c4df4d
- (void)callIsIncoming:(CTCallRef)incoming;	// 0x30c4d835
- (void)closeBasebandStream;	// 0x30c4e231
- (int)countCurrentCalls;	// 0x30c4d78d
- (CFArrayRef)currentCalls;	// 0x30c4d785
// converted property getter: - (BOOL)dataStatus;	// 0x30c4dded
- (void)dealloc;	// 0x30c4d581
- (BOOL)dialNumber:(id)number;	// 0x30c4dbe5
- (void)enableCommCenter:(BOOL)center;	// 0x30c4dead
- (void)enableMux:(BOOL)mux;	// 0x30c4df0d
- (void)hangupActiveCall;	// 0x30c4dc4d
- (void)hangupCall:(CTCallRef)call;	// 0x30c4dc2d
- (void)ignoreIncomingCall;	// 0x30c4da19
- (id)imei;	// 0x30c4df99
- (CTCallRef)incomingCall;	// 0x30c4d7f9
- (BOOL)isCallConnected;	// 0x30c4d765
// converted property getter: - (BOOL)isCommCenterActive;	// 0x30c4defd
- (void)mainThreadAnswerIncomingCall;	// 0x30c4d8f1
- (void)mainThreadIgnoreIncomingCall;	// 0x30c4d9b9
- (id)myPhoneNumber;	// 0x30c4d6e5
- (id)networkName;	// 0x30c4de51
- (void)openBasebandStream;	// 0x30c4e14d
- (void)pulseRTS;	// 0x30c4e045
- (id)readATResponse;	// 0x30c4e329
- (void)registerTelephonyNotification:(CFStringRef)notification withCallback:(/*function-pointer*/ void *)callback;	// 0x30c4d6bd
- (void)requestNetworkList;	// 0x30c4dea5
- (void)resetModem;	// 0x30c4e01d
- (void)routeAudioToCall;	// 0x30c4dc7d
- (void)sendATCommand:(id)command;	// 0x30c4e269
- (void)sendUSSDResponse:(id)response;	// 0x30c4e45d
- (CTServerConnectionRef)serverConnection;	// 0x30c4d6ad
- (void)setActiveBands:(CFArrayRef)bands;	// 0x30c4ddb9
// converted property setter: - (void)setActiveCall:(CTCallRef)call;	// 0x30c4d761
- (void)setAutoSelectNetwork;	// 0x30c4de99
- (void)setBasebandSpeed:(int)speed;	// 0x30c4e09d
// converted property setter: - (void)setDataStatus:(BOOL)status;	// 0x30c4de11
- (void)setManuallySelectNetwork:(id)network;	// 0x30c4de9d
- (void)setMasterVolume:(float)volume;	// 0x30c4dc81
- (void)setSpeechVolume:(float)volume;	// 0x30c4dcb9
- (int)signalStrength;	// 0x30c4dea9
- (id)supportedBands;	// 0x30c4dcf1
- (void)updateWithCall:(CTCallRef)call;	// 0x30c4da81
@end

