/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "DATask.h"
#import "NSURLConnectionDelegate.h"
#import "DAEAS-Structs.h"

@class NSMutableSet, NSString, NSDate, NSError, ASTaskManager, ASItem, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSTimer, DATaskManager, ASParseContext;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	int _numBadPasswordResponses;	// 60 = 0x3c
	BOOL _askedToCancelWhileModal;	// 64 = 0x40
	BOOL _haveCheckedForTopLevelError;	// 65 = 0x41
	BOOL _handledTopLevelError;	// 66 = 0x42
	int _taskID;	// 68 = 0x44
	ASTaskManager *_taskManager;	// 72 = 0x48
	int _modalReason;	// 76 = 0x4c
	int _modalPushCount;	// 80 = 0x50
	NSString *_lastKnownPolicyKey;	// 84 = 0x54
	NSError *_passwordNotificationError;	// 88 = 0x58
	NSString *_lastKnownPassword;	// 92 = 0x5c
	NSDate *_dateConnectionWentOut;	// 96 = 0x60
	NSTimer *_timeoutEnforcer;	// 100 = 0x64
	BOOL _retry;	// 104 = 0x68
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x34bac385; S=0x34bac395; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x34bac305; S=0x34bac315; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x34bac365; S=0x34bac375; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x34bac2e5; S=0x34bac2f5; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x34bac325; S=0x34bac335; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x34bac345; S=0x34bac355; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x34bac3a5; S=0x34bac3b5; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x34ba68d9; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x34bac2d5; S=0x34bac1b1; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x34bac3c5; S=0x34bac281; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x34ba6921
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x34ba690d
- (id)init;	// 0x34ba6381
- (id)_HTTPMethodForRequest:(id)request;	// 0x34ba68fd
- (void)_addAuthToRequest:(id)request;	// 0x34ba8551
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x34ba974d
- (void)_continuePerformTask;	// 0x34ba8801
- (id)_easVersion;	// 0x34ba69cd
- (void)_failImmediately;	// 0x34ba7f81
- (void)_handleBadPasswordResponse;	// 0x34ba9895
- (BOOL)_handleCertificateError:(id)error;	// 0x34ba9aed
- (BOOL)_handleRedirect:(id)redirect;	// 0x34ba9bad
- (void)_initFakeParseContext;	// 0x34babf6d
- (BOOL)_isWBXML;	// 0x34ba6a0d
- (id)_policyKey;	// 0x34ba69ed
- (void)_popModal;	// 0x34ba8171
- (void)_pushModalForReason:(int)reason;	// 0x34ba8109
- (void)_setHTTPParametersOnRequest:(id)request outBodyStream:(id *)stream outBodyData:(id *)data;	// 0x34ba8665
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x34ba68f9
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x34ba68f5
- (void)_timeoutEnforcerFired:(id)fired;	// 0x34ba722d
- (id)_url;	// 0x34ba6991
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x34bac385
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x34ba8ff9
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x34ba95f5
- (BOOL)checkForErrorInContext:(id)context;	// 0x34ba6b8d
- (id)command;	// 0x34ba6a41
- (int)commandCode;	// 0x34ba6a5d
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x34baaea9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34bab829
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x34baaf41
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34ba9f3d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x34bab4e9
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x34ba9ea1
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x34baa895
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x34baa8f1
- (int)connectionActionForResponse:(id)response;	// 0x34ba7141
- (void)connectionDidFinishLoading:(id)connection;	// 0x34bab131
- (id)contentType;	// 0x34ba7111
// declared property getter: - (void *)context;	// 0x34bac305
// declared property getter: - (id)currentlyParsingItem;	// 0x34bac365
- (void)dealloc;	// 0x34ba64c5
// declared property getter: - (id)delegate;	// 0x34bac2e5
- (id)description;	// 0x34ba66f1
- (void)didCallOutToDelegate;	// 0x34ba925d
- (void)didProcessContext:(id)context;	// 0x34ba7121
- (BOOL)expectsWBXML;	// 0x34ba6a3d
- (void)finishWithError:(id)error;	// 0x34ba92e1
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x34ba6afd
- (void)handleTopLevelErrorStatus:(id)status;	// 0x34babd21
- (id)httpMethod;	// 0x34ba68e9
// declared property getter: - (int)interfaceBinding;	// 0x34bac325
// declared property getter: - (BOOL)isExclusive;	// 0x34bac345
- (BOOL)isInCallOutToDelegate;	// 0x34ba92d1
// declared property getter: - (id)lastKnownPassword;	// 0x34bac3a5
- (void)loadRequest:(id)request;	// 0x34ba7301
- (int)numDownloadedElements;	// 0x34bac11d
- (id)parameterData;	// 0x34ba6aa9
- (double)percentComplete;	// 0x34ba6f7d
- (void)performTask;	// 0x34ba802d
- (BOOL)processContext:(id)context;	// 0x34ba6af9
- (void)reportStatusWithError:(id)error;	// 0x34bac121
- (id)requestBody;	// 0x34ba6ab1
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x34ba6aad
- (BOOL)requiresEASVersionInformaton;	// 0x34ba7139
- (void)reset;	// 0x34babfe9
- (id)responseContentType;	// 0x34ba6899
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x34bac395
// declared property setter: - (void)setContext:(void *)context;	// 0x34bac315
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x34bac375
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34bac2f5
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x34bac335
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x34bac355
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x34bac3b5
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x34bac1b1
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x34bac281
- (BOOL)shouldHandlePasswordErrors;	// 0x34ba9e9d
- (BOOL)shouldHoldPowerAssertion;	// 0x34ba713d
- (BOOL)shouldLogIncomingData;	// 0x34ba7135
- (BOOL)shouldReportTimeInNetwork;	// 0x34bac119
- (void)startModal;	// 0x34ba81b5
// converted property getter: - (int)taskID;	// 0x34ba68d9
// declared property getter: - (id)taskManager;	// 0x34bac2d5
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x34ba8511
- (void)taskManagerDidFindEASVersion;	// 0x34ba83e1
- (void)taskManagerDidUpdatePolicyKey;	// 0x34ba8479
- (int)taskStatusForError:(id)error;	// 0x34ba6f8d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34ba6f89
- (void)tearDownResources;	// 0x34ba7eb1
// declared property getter: - (id)timeoutEnforcer;	// 0x34bac3c5
- (double)timeoutInterval;	// 0x34ba6939
- (void)willCallOutToDelegate;	// 0x34ba90b9
- (void)willProcessContext;	// 0x34ba711d
@end
