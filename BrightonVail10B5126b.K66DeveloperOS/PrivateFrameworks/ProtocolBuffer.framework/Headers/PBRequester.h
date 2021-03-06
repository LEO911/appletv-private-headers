/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "ProtocolBuffer-Structs.h"

@class NSMutableData, NSURL, NSURLConnection, NSMutableArray, NSDictionary, NSMutableDictionary, PBDataReader, NSString, NSArray;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	id<PBRequesterDelegate> _delegate;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	PBDataReader *_dataReader;	// 20 = 0x14
	unsigned _lastGoodDataOffset;	// 24 = 0x18
	unsigned _uploadPayloadSize;	// 28 = 0x1c
	unsigned _downloadPayloadSize;	// 32 = 0x20
	unsigned long long _timeRequestSent;	// 36 = 0x24
	unsigned long long _timeResponseReceived;	// 44 = 0x2c
	int _responseStatusCode;	// 52 = 0x34
	NSMutableArray *_requests;	// 56 = 0x38
	NSMutableArray *_responses;	// 60 = 0x3c
	NSMutableArray *_internalRequests;	// 64 = 0x40
	NSMutableArray *_internalResponses;	// 68 = 0x44
	NSDictionary *_httpResponseHeaders;	// 72 = 0x48
	NSMutableDictionary *_httpRequestHeaders;	// 76 = 0x4c
	double _timeoutSeconds;	// 80 = 0x50
	CFRunLoopTimerRef _timeoutTimer;	// 88 = 0x58
	NSString *_logRequestToFile;	// 92 = 0x5c
	NSString *_logResponseToFile;	// 96 = 0x60
	BOOL _didNotifyRequestCompleted;	// 100 = 0x64
	NSArray *_clientCertificates;	// 104 = 0x68
	BOOL _shouldHandleCookies;	// 108 = 0x6c
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 109 = 0x6d
}
@property(retain, nonatomic) NSURL *URL;	// G=0x353b4571; S=0x353b4581; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x353b466d; S=0x353b467d; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x353b45a1; S=0x353b45b1; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x353b4591; S=0x353b2021; @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned downloadPayloadSize;	// G=0x353b465d; @synthesize=_downloadPayloadSize
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x353b2369; S=0x353b2379; 
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x353b45c1; S=0x353b45d1; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x353b1fe9; S=0x353b1ffd; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x353b2255; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x353b460d; S=0x353b461d; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x353b462d; S=0x353b463d; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x353b20f9; S=0x353b210d; 
@property(readonly, assign, nonatomic) unsigned requestResponseTime;	// G=0x353b42ad; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x353b2145; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x353b468d; S=0x353b469d; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) double timeoutSeconds;	// G=0x353b45e1; S=0x353b45f9; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x353b464d; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x353b44b1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x353b1d29
// declared property getter: - (id)URL;	// 0x353b4571
- (id)_applicationID;	// 0x353b2521
- (void)_cancelNoNotify;	// 0x353b3079
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x353b33cd
- (void)_cleanup;	// 0x353b1f11
- (void)_failWithError:(id)error;	// 0x353b3309
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x353b335d
- (id)_languageLocale;	// 0x353b243d
- (id)_osVersion;	// 0x353b2555
- (void)_removeTimeoutTimer;	// 0x353b43e5
- (void)_resetTimeoutTimer;	// 0x353b4411
- (void)_sendPayload:(id)payload;	// 0x353b2849
- (void)_startTimeoutTimer;	// 0x353b4331
- (void)_timeoutTimerFired;	// 0x353b4459
- (BOOL)_tryParseData;	// 0x353b3569
- (void)addInternalRequest:(id)request;	// 0x353b2265
- (void)addRequest:(id)request;	// 0x353b2155
- (void)cancel;	// 0x353b30e9
- (void)cancelWithErrorCode:(int)errorCode;	// 0x353b3459
// declared property getter: - (id)clientCertificates;	// 0x353b466d
// declared property getter: - (id)connection;	// 0x353b45a1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x353b4219
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x353b3b2d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x353b3931
- (void)connectionDidFinishLoading:(id)connection;	// 0x353b3d81
- (void)dealloc;	// 0x353b1dad
- (id)decodeResponseData:(id)data;	// 0x353b44c1
// declared property getter: - (id)delegate;	// 0x353b4591
// declared property getter: - (unsigned)downloadPayloadSize;	// 0x353b465d
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x353b44b5
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x353b2365
// declared property getter: - (id)httpRequestHeaders;	// 0x353b2369
// declared property getter: - (id)httpResponseHeaders;	// 0x353b45c1
// declared property getter: - (BOOL)ignoresResponse;	// 0x353b1fe9
// converted property getter: - (id)internalRequests;	// 0x353b2255
- (BOOL)isPaused;	// 0x353b32a9
// declared property getter: - (id)logRequestToFile;	// 0x353b460d
// declared property getter: - (id)logResponseToFile;	// 0x353b462d
// declared property getter: - (BOOL)needsCancel;	// 0x353b20f9
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x353b44c9
- (id)newConnectionWithCFURLRequest:(CFURLRequestRef)cfurlrequest delegate:(id)delegate;	// 0x353b44f9
- (void)pause;	// 0x353b3155
- (BOOL)readResponsePreamble:(id)preamble;	// 0x353b3485
- (id)requestPreamble;	// 0x353b260d
// declared property getter: - (unsigned)requestResponseTime;	// 0x353b42ad
// declared property getter: - (id)requests;	// 0x353b2145
- (id)responseForInternalRequest:(id)internalRequest;	// 0x353b22d9
- (id)responseForRequest:(id)request;	// 0x353b21c9
- (void)resume;	// 0x353b32bd
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x353b467d
// declared property setter: - (void)setConnection:(id)connection;	// 0x353b45b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x353b2021
- (void)setHttpRequestHeader:(id)header forKey:(id)key;	// 0x353b23bd
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x353b2379
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x353b45d1
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x353b1ffd
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x353b461d
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x353b463d
- (void)setNeedsCancel;	// 0x353b2131
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x353b210d
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x353b469d
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x353b45f9
// declared property setter: - (void)setURL:(id)url;	// 0x353b4581
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x353b468d
- (void)start;	// 0x353b2bd9
// declared property getter: - (double)timeoutSeconds;	// 0x353b45e1
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x353b34e1
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x353b464d
- (void)writeRequest:(id)request into:(id)into;	// 0x353b2799
@end

