/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import </libobjc.A.h>
#import "CoreDAVSubmittable.h"
#import "CoreDAV-Structs.h"

@class CoreDAVErrorItem, NSError, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, NSDictionary, NSURL, NSData, NSString, NSMutableArray, NSMutableDictionary, CoreDAVRequestLogger;
@protocol CoreDAVTaskManager, CoreDAVTaskDelegate, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable> {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	int _numDownloadedElements;	// 12 = 0xc
	int _depth;	// 16 = 0x10
	NSHTTPURLResponse *_response;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSURLRequest *_request;	// 28 = 0x1c
	double _timeoutInterval;	// 32 = 0x20
	int _responseStatusCode;	// 40 = 0x28
	NSDate *_dateConnectionWentOut;	// 44 = 0x2c
	BOOL _didSendRequest;	// 48 = 0x30
	BOOL _didFailWithError;	// 49 = 0x31
	BOOL _didCancel;	// 50 = 0x32
	BOOL _didReceiveResponse;	// 51 = 0x33
	BOOL _didReceiveData;	// 52 = 0x34
	BOOL _didFinishLoading;	// 53 = 0x35
	BOOL _finished;	// 54 = 0x36
	void *_context;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 60 = 0x3c
	BOOL _justTriedTokenAuth;	// 61 = 0x3d
	BOOL _everTriedTokenAuth;	// 62 = 0x3e
	BOOL _requestIsCompressed;	// 63 = 0x3f
	BOOL _compressedRequestFailed;	// 64 = 0x40
	NSError *_passwordNotificationError;	// 68 = 0x44
	id<CoreDAVResponseBodyParser> _responseBodyParser;	// 72 = 0x48
	CoreDAVRequestLogger *_logger;	// 76 = 0x4c
	NSURL *_url;	// 80 = 0x50
	BOOL _allowAutomaticRedirects;	// 84 = 0x54
	id<CoreDAVTaskDelegate> _delegate;	// 88 = 0x58
	id _requestProgressBlock;	// 92 = 0x5c
	id _responseProgressBlock;	// 96 = 0x60
	id _completionBlock;	// 100 = 0x64
	NSError *_error;	// 104 = 0x68
	unsigned _totalBytesReceived;	// 108 = 0x6c
	NSMutableDictionary *_overriddenHeaders;	// 112 = 0x70
	NSMutableArray *_redirectHistory;	// 116 = 0x74
	NSDictionary *_requestProperties;	// 120 = 0x78
	NSData *_fakeResponseData;	// 124 = 0x7c
	BOOL _haveParsedFakeResponseData;	// 128 = 0x80
	CoreDAVErrorItem *_forbiddenErrorItem;	// 132 = 0x84
	NSString *_uniqueID;	// 136 = 0x88
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x3048e9fd; S=0x3048ea0d; @synthesize=_accountInfoProvider
@property(assign, nonatomic) BOOL allowAutomaticRedirects;	// G=0x3048ebf5; S=0x3048ec05; @synthesize=_allowAutomaticRedirects
@property(copy, nonatomic) id completionBlock;	// G=0x3048eb91; S=0x3048eba5; @synthesize=_completionBlock
@property(assign, nonatomic) void *context;	// G=0x3048ea3d; S=0x3048ea4d; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// G=0x3048ea1d; S=0x3048ea2d; @synthesize=_delegate
@property(assign) int depth;	// G=0x3048ea71; S=0x3048ea85; @synthesize=_depth
@property(retain, nonatomic) NSError *error;	// G=0x3048ebb5; S=0x3048ebc5; @synthesize=_error
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x3048bf71; 
@property(readonly, assign) int numDownloadedElements;	// G=0x3048e7c5; converted property
@property(copy, nonatomic) id requestProgressBlock;	// G=0x3048eb49; S=0x3048eb5d; @synthesize=_requestProgressBlock
@property(retain) NSDictionary *requestProperties;	// G=0x3048ec15; S=0x3048ec29; @synthesize=_requestProperties
@property(retain) id<CoreDAVResponseBodyParser> responseBodyParser;	// G=0x3048eb05; S=0x3048eb19; @synthesize=_responseBodyParser
@property(readonly, assign) NSDictionary *responseHeaders;	// G=0x3048e5b1; 
@property(copy, nonatomic) id responseProgressBlock;	// G=0x3048eb6d; S=0x3048eb81; @synthesize=_responseProgressBlock
@property(assign, nonatomic) int responseStatusCode;	// G=0x3048eb29; S=0x3048eb39; @synthesize=_responseStatusCode
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;	// G=0x3048e9dd; S=0x3048e9ed; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x3048ea9d; S=0x3048ead1; @synthesize=_timeoutInterval
@property(assign, nonatomic) unsigned totalBytesReceived;	// G=0x3048ebd5; S=0x3048ebe5; @synthesize=_totalBytesReceived
@property(readonly, assign) NSURL *url;	// G=0x3048ea5d; @synthesize=_url
+ (id)stringFromDepth:(int)depth;	// 0x3048b185
+ (unsigned)uniqueQueryID;	// 0x3048a059
- (id)initWithURL:(id)url;	// 0x3048a06d
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x3048c149
- (id)_applyStorageSession:(CFURLStorageSessionRef)session toRequest:(id)request;	// 0x3048c245
- (id)_compressBodyData:(id)data;	// 0x3048ade1
- (id)_connectionForLogging;	// 0x3048e9bd
- (id)_createBodyData;	// 0x3048af71
- (void)_failImmediately;	// 0x3048b041
- (void)_handleBadPasswordResponse;	// 0x3048c2ed
- (BOOL)_includeGeneralHeaders;	// 0x3048a6c5
- (id)_requestForLogging;	// 0x3048e9cd
- (BOOL)_shouldHandleStatusCode:(int)code;	// 0x3048cc8d
// declared property getter: - (id)accountInfoProvider;	// 0x3048e9fd
- (id)additionalHeaderValues;	// 0x3048b0d9
// declared property getter: - (BOOL)allowAutomaticRedirects;	// 0x3048ebf5
- (unsigned)cachePolicy;	// 0x3048b181
// declared property getter: - (id)completionBlock;	// 0x3048eb91
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3048d1fd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3048e1ad
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3048d3ed
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3048c4e9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3048e0b5
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x3048c495
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x3048ccad
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3048cd11
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3048d751
- (void)connectionDidFinishLoading:(id)connection;	// 0x3048da69
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x3048d3a5
// declared property getter: - (void *)context;	// 0x3048ea3d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3048a735
- (id)credentialForOAuthChallenge:(id)oauthChallenge;	// 0x3048bfc1
- (void)dealloc;	// 0x3048a189
// declared property getter: - (id)delegate;	// 0x3048ea1d
// declared property getter: - (int)depth;	// 0x3048ea71
- (id)description;	// 0x3048a4a1
// declared property getter: - (id)error;	// 0x3048ebb5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3048bc01
- (void)finishEarlyWithError:(id)error;	// 0x3048e5e1
- (id)httpMethod;	// 0x3048a6b9
// declared property getter: - (BOOL)isFinished;	// 0x3048bf71
- (id)lastRedirectURL;	// 0x3048ccf1
- (void)loadRequest:(id)request;	// 0x3048a73d
- (BOOL)markAsFinished;	// 0x3048bf95
// converted property getter: - (int)numDownloadedElements;	// 0x3048e7c5
- (void)overrideRequestHeader:(id)header withValue:(id)value;	// 0x3048b0dd
- (void)performCoreDAVTask;	// 0x3048b1b9
- (void)reportStatusWithError:(id)error;	// 0x3048e7d5
- (id)requestBody;	// 0x3048a705
- (id)requestBodyStream;	// 0x3048a701
// declared property getter: - (id)requestProgressBlock;	// 0x3048eb49
// declared property getter: - (id)requestProperties;	// 0x3048ec15
- (void)reset;	// 0x3048e6d9
// declared property getter: - (id)responseBodyParser;	// 0x3048eb05
// declared property getter: - (id)responseHeaders;	// 0x3048e5b1
// declared property getter: - (id)responseProgressBlock;	// 0x3048eb6d
// declared property getter: - (int)responseStatusCode;	// 0x3048eb29
// declared property setter: - (void)setAccountInfoProvider:(id)provider;	// 0x3048ea0d
// declared property setter: - (void)setAllowAutomaticRedirects:(BOOL)redirects;	// 0x3048ec05
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x3048eba5
// declared property setter: - (void)setContext:(void *)context;	// 0x3048ea4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3048ea2d
// declared property setter: - (void)setDepth:(int)depth;	// 0x3048ea85
// declared property setter: - (void)setError:(id)error;	// 0x3048ebc5
// declared property setter: - (void)setRequestProgressBlock:(id)block;	// 0x3048eb5d
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x3048ec29
// declared property setter: - (void)setResponseBodyParser:(id)parser;	// 0x3048eb19
// declared property setter: - (void)setResponseProgressBlock:(id)block;	// 0x3048eb81
// declared property setter: - (void)setResponseStatusCode:(int)code;	// 0x3048eb39
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x3048e9ed
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x3048ead1
// declared property setter: - (void)setTotalBytesReceived:(unsigned)received;	// 0x3048ebe5
- (BOOL)shouldLogResponseBody;	// 0x3048a739
- (void)startModal;	// 0x3048e5d1
- (void)submitWithTaskManager:(id)taskManager;	// 0x3048e611
// declared property getter: - (id)taskManager;	// 0x3048e9dd
- (void)tearDownResources;	// 0x3048ad31
// declared property getter: - (double)timeoutInterval;	// 0x3048ea9d
// declared property getter: - (unsigned)totalBytesReceived;	// 0x3048ebd5
// declared property getter: - (id)url;	// 0x3048ea5d
- (BOOL)validate:(id *)validate;	// 0x3048bbfd
@end

