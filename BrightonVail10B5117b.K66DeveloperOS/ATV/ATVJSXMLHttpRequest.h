/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableURLRequest, NSMutableData, NSHTTPURLResponse, NSString, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSXMLHttpRequest : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_object;	// 8 = 0x8
	BOOL _isObjectProtected;	// 12 = 0xc
	unsigned _readyState;	// 16 = 0x10
	NSMutableURLRequest *_urlRequest;	// 20 = 0x14
	NSURLConnection *_urlConnection;	// 24 = 0x18
	BOOL _async;	// 28 = 0x1c
	NSString *_user;	// 32 = 0x20
	NSString *_password;	// 36 = 0x24
	NSHTTPURLResponse *_urlResponse;	// 40 = 0x28
	unsigned _statusCode;	// 44 = 0x2c
	NSString *_statusText;	// 48 = 0x30
	NSMutableData *_receivedData;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned readyState;	// G=0x1808a5; S=0x17fead; @synthesize=_readyState
@property(retain) NSMutableData *receivedData;	// G=0x180965; S=0x180979; @synthesize=_receivedData
@property(assign, nonatomic) unsigned statusCode;	// G=0x180921; S=0x180931; @synthesize=_statusCode
@property(copy) NSString *statusText;	// G=0x180941; S=0x180955; @synthesize=_statusText
@property(retain) NSURLConnection *urlConnection;	// G=0x1808d9; S=0x1808ed; @synthesize=_urlConnection
@property(retain) NSMutableURLRequest *urlRequest;	// G=0x1808b5; S=0x1808c9; @synthesize=_urlRequest
@property(retain) NSHTTPURLResponse *urlResponse;	// G=0x1808fd; S=0x180911; @synthesize=_urlResponse
+ (void)registerClassInContext:(OpaqueJSContext *)context;	// 0x17ef71
- (id)initWithContext:(id)context jsObject:(OpaqueJSValue *)object;	// 0x17fd5d
- (void)_jsObjectWasFinalized;	// 0x1807d1
- (void)_unprotectJSObjectIfNecessary;	// 0x1807f1
- (void)abort;	// 0x1804c1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x1806b1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x18066d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x1805b1
- (void)connectionDidFinishLoading:(id)connection;	// 0x180779
- (void)dealloc;	// 0x17fdd1
- (void)openWithMethod:(id)method url:(id)url async:(BOOL)async user:(id)user password:(id)password;	// 0x17ffcd
// declared property getter: - (unsigned)readyState;	// 0x1808a5
// declared property getter: - (id)receivedData;	// 0x180965
- (void)sendWithData:(id)data jsContext:(OpaqueJSContext *)context;	// 0x180119
// declared property setter: - (void)setReadyState:(unsigned)state;	// 0x17fead
// declared property setter: - (void)setReceivedData:(id)data;	// 0x180979
// declared property setter: - (void)setStatusCode:(unsigned)code;	// 0x180931
// declared property setter: - (void)setStatusText:(id)text;	// 0x180955
// declared property setter: - (void)setUrlConnection:(id)connection;	// 0x1808ed
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x1808c9
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x180911
// declared property getter: - (unsigned)statusCode;	// 0x180921
// declared property getter: - (id)statusText;	// 0x180941
// declared property getter: - (id)urlConnection;	// 0x1808d9
// declared property getter: - (id)urlRequest;	// 0x1808b5
// declared property getter: - (id)urlResponse;	// 0x1808fd
@end
