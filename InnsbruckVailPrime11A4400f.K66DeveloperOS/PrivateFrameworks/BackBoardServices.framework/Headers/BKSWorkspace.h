/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import </libobjc.A.h>

@class NSMutableArray, NSMutableDictionary, BKSSignal, BKSWorkspaceActivationTokenFactory, BKSApplicationActivationAssertion, NSString;
@protocol OS_xpc_object, OS_dispatch_queue, BKSWorkspaceDelegate;

@interface BKSWorkspace : NSObject {
	BKSSignal *_invalidationSignal;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_applicationInfoQueue;	// 16 = 0x10
	id<BKSWorkspaceDelegate> _delegate;	// 20 = 0x14
	NSObject<OS_xpc_object> *_serverEndpoint;	// 24 = 0x18
	NSObject<OS_xpc_object> *_serverConnection;	// 28 = 0x1c
	NSString *_topApplicationBundleID;	// 32 = 0x20
	NSMutableArray *_runningApplicationInfo;	// 36 = 0x24
	NSMutableArray *_activatingApplications;	// 40 = 0x28
	NSMutableDictionary *_activationTokens;	// 44 = 0x2c
	unsigned _serverPort;	// 48 = 0x30
	BOOL _suspended;	// 52 = 0x34
	BOOL _locked;	// 53 = 0x35
	BOOL _workspaceOwner;	// 54 = 0x36
	BKSWorkspaceActivationTokenFactory *_activationTokenFactory;	// 56 = 0x38
	BKSApplicationActivationAssertion *_topApplicationAssertion;	// 60 = 0x3c
}
@property(readonly, retain) NSMutableArray *activatingApplications;	// G=0x301bbde5; converted property
@property(retain, nonatomic) BKSWorkspaceActivationTokenFactory *activationTokenFactory;	// G=0x301bfd09; S=0x301bfd19; @synthesize=_activationTokenFactory
@property(assign, nonatomic) id<BKSWorkspaceDelegate> delegate;	// G=0x301bfcc9; S=0x301bfcd9; @synthesize=_delegate
@property(assign, getter=isLocked) BOOL locked;	// G=0x301bc7e5; S=0x301bc7c5; converted property
@property(readonly, assign, nonatomic) unsigned serverPort;	// G=0x301bfce9; @synthesize=_serverPort
@property(readonly, assign, nonatomic) BOOL suspended;	// G=0x301bfcf9; @synthesize=_suspended
- (id)init;	// 0x301bb271
- (id)initWithQueue:(id)queue;	// 0x301bb285
- (id)initWithQueue:(id)queue endpoint:(id)endpoint delegate:(id)delegate connectImmediately:(BOOL)immediately;	// 0x301bb2a9
- (void)_acquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x301bd261
- (id)_activationTokenForBundleID:(id)bundleID;	// 0x301bbdf5
- (id)_activationTokens;	// 0x301bbf61
- (void)_addApplicationAsPending:(id)pending;	// 0x301bfca1
- (void)_clearActivationStateForBundleID:(id)bundleID;	// 0x301bbe29
- (void)_handleDidBecomeReceiverFrom:(id)_handle to:(id)to workspaceWillResume:(BOOL)workspace;	// 0x301bcfb1
- (void)_handleMessage:(id)message;	// 0x301bd281
- (id)_handleWillBecomeReceiverFrom:(id)_handle to:(id)to activationToken:(id)token;	// 0x301bcf35
- (id)_infoForBundleIdentifier:(id)bundleIdentifier;	// 0x301bc809
- (void)_invalidateConnection;	// 0x301bbad1
- (BOOL)_isServerBeingDebugged;	// 0x301bbc79
- (void)_makeInitialConnection;	// 0x301bb599
- (void)_noteWillActivateBundleIdentifier:(id)_note suspended:(BOOL)suspended activationToken:(id)token;	// 0x301bbe85
- (void)_receiveApplicationDidActivate:(id)_receiveApplication;	// 0x301be421
- (void)_receiveApplicationExited:(id)exited;	// 0x301be755
- (void)_receiveApplicationFinishedBackgroundContentFetching:(id)fetching;	// 0x301beb45
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)changed;	// 0x301bee51
- (void)_receiveApplicationLaunchBegan:(id)began;	// 0x301be169
- (void)_receiveApplicationSuspended:(id)suspended;	// 0x301be985
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)updated;	// 0x301bea65
- (void)_receiveCanActivateApplication:(id)application;	// 0x301bef0d
- (void)_receiveDidBecomeReceiver:(id)_receive;	// 0x301bdff9
- (void)_receiveHandleOpenApplicationRequest:(id)request;	// 0x301bf00d
- (void)_receiveHandleOpenURLRequest:(id)request;	// 0x301bf639
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)application;	// 0x301be085
- (void)_receiveWillBecomeReceiver:(id)_receive;	// 0x301bdee1
- (void)_receiveWorkspaceActivationResponse:(id)response;	// 0x301becd1
- (void)_receiveWorkspaceIsSuspended:(id)suspended;	// 0x301bec45
- (void)_registerWithServer;	// 0x301bb609
- (void)_releaseApplicationActivationAssertion:(id)assertion;	// 0x301bd271
- (void)_reregister;	// 0x301bbaa1
- (void)_sendAcquireApplicationActivationAssertion:(id)assertion uniqueID:(id)anId name:(id)name;	// 0x301bdd59
- (void)_sendActivate:(id)activate withActivation:(id)activation withDeactivation:(id)deactivation token:(id)token;	// 0x301bd561
- (void)_sendApplication:(id)application setIsConnectionToEA:(BOOL)ea;	// 0x301bd9a5
- (void)_sendApplication:(id)application setNowPlayingAudio:(BOOL)audio;	// 0x301bdb2d
- (void)_sendApplication:(id)application setRecordingAudio:(BOOL)audio;	// 0x301bd8f1
- (void)_sendApplication:(id)application setTaskPort:(id)port;	// 0x301bda59
- (void)_sendApplication:(id)application simpleGSEvent:(int)event;	// 0x301bdbe1
- (void)_sendApplication:(id)application simpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x301bdc8d
- (void)_sendClientBundleIdentifier:(id)identifier;	// 0x301bd4e1
- (void)_sendLocked:(BOOL)locked;	// 0x301bd7f9
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker;	// 0x301bd3f9
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler;	// 0x301bd43d
- (void)_sendMessage:(long long)message withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;	// 0x301bd47d
- (void)_sendReleaseApplicationActivationAssertion:(id)assertion;	// 0x301bde61
- (void)_sendResume:(id)resume;	// 0x301bd745
- (void)_sendShutdown:(BOOL)shutdown;	// 0x301bd875
- (void)_sendSuspend:(id)suspend;	// 0x301bd6c5
- (void)_setupForActivationForBundleID:(id)bundleID activationSettings:(id)settings withResult:(id)result;	// 0x301bc081
- (void)activate:(id)activate withActivation:(id)activation;	// 0x301bbf99
// converted property getter: - (id)activatingApplications;	// 0x301bbde5
// declared property getter: - (id)activationTokenFactory;	// 0x301bfd09
- (void)application:(id)application resignActiveForReason:(int)reason;	// 0x301bcef5
- (void)application:(id)application resumeActiveForReason:(int)reason;	// 0x301bcf15
- (void)application:(id)application sendSimpleGSEvent:(int)event;	// 0x301bced5
- (void)application:(id)application sendSimpleGSEvent:(int)event withSubtype:(int)subtype;	// 0x301bcee5
- (void)application:(id)application setIsConnectedToExternalAccessory:(BOOL)externalAccessory;	// 0x301bce45
- (void)application:(id)application setNowPlayingWithAudio:(BOOL)audio;	// 0x301bcec5
- (void)application:(id)application setRecordingAudio:(BOOL)audio;	// 0x301bca1d
- (void)application:(id)application setTaskPort:(id)port;	// 0x301bceb5
- (double)backgroundTimeRemaining:(id)remaining;	// 0x301bcc21
- (void)dealloc;	// 0x301bb459
// declared property getter: - (id)delegate;	// 0x301bfcc9
- (id)description;	// 0x301bbca1
- (void)elapsedCPUTimesForApplications:(id)applications completion:(id)completion;	// 0x301bca8d
- (void)invalidate;	// 0x301bbb2d
- (BOOL)isApplicationConnectedToExternalAccessory:(id)externalAccessory;	// 0x301bce8d
- (BOOL)isApplicationRecordingAudio:(id)audio;	// 0x301bca65
- (BOOL)isBeingDebugged:(id)debugged;	// 0x301bcb9d
- (BOOL)isBusy;	// 0x301bc7f5
// converted property getter: - (BOOL)isLocked;	// 0x301bc7e5
- (void)kill:(id)kill;	// 0x301bc68d
- (void)kill:(id)kill withReason:(int)reason description:(id)description;	// 0x301bc699
- (void)killall:(BOOL)killall;	// 0x301bc681
- (id)newActivationAssertionForApplication:(id)application named:(id)named;	// 0x301bd21d
- (void)resume:(id)resume;	// 0x301bc765
- (id)runningApplications;	// 0x301bc265
- (id)runningBundleIDForPID:(int)pid;	// 0x301bc499
// declared property getter: - (unsigned)serverPort;	// 0x301bfce9
// declared property setter: - (void)setActivationTokenFactory:(id)factory;	// 0x301bfd19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x301bfcd9
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x301bc7c5
- (void)shutdown:(BOOL)shutdown;	// 0x301bc7f9
- (void)suspend:(id)suspend;	// 0x301bc6a5
// declared property getter: - (BOOL)suspended;	// 0x301bfcf9
- (id)topActivatingApplication;	// 0x301bbd99
- (id)topApplication;	// 0x301bbd89
@end
