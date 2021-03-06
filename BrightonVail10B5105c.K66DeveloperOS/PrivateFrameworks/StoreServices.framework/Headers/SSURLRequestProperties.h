/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSInputStream, NSString, NSURL, NSDictionary, NSData, NSArray;
@protocol OS_dispatch_queue;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	unsigned _networkServiceType;	// 48 = 0x30
	NSDictionary *_requestParameters;	// 52 = 0x34
	BOOL _requiresExtendedValidationCertificates;	// 56 = 0x38
	BOOL _shouldDecodeResponse;	// 57 = 0x39
	BOOL _shouldDisableCellularFallback;	// 58 = 0x3a
	BOOL _shouldProcessProtocol;	// 59 = 0x3b
	double _timeoutInterval;	// 60 = 0x3c
	NSString *_urlBagKey;	// 68 = 0x44
	int _urlBagType;	// 72 = 0x48
	id _urlBagURLBlock;	// 76 = 0x4c
	NSArray *_urls;	// 80 = 0x50
	NSArray *_userAgentComponents;	// 84 = 0x54
}
@property(readonly, assign) NSData *HTTPBody;	// G=0x3585c9ed; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x3585dfc9; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x3585cb9d; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x3585cd4d; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x3585cefd; 
@property(readonly, assign) NSURL *URL;	// G=0x3585d5dd; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x3585d42d; 
@property(readonly, assign) int URLBagType;	// G=0x3585e409; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x3585e4d5; 
@property(readonly, assign) NSArray *URLs;	// G=0x3585e699; 
@property(readonly, assign) int allowedRetryCount;	// G=0x3585c5bd; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x3585c68d; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x3585dc69; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x3585c759; 
@property(readonly, assign) long long expectedContentLength;	// G=0x3585c909; 
@property(readonly, assign) unsigned networkServiceType;	// G=0x3585cfe5; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x3585d0b5; 
@property(readonly, assign) BOOL requiresExtendedValidationCertificates;	// G=0x3585e179; 
@property(readonly, assign) BOOL shouldDecodeResponse;	// G=0x3585e265; 
@property(readonly, assign) BOOL shouldDisableCellularFallback;	// G=0x3585e339; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x3585d265; 
@property(readonly, assign) double timeoutInterval;	// G=0x3585d339; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x3585d7bd; 
- (id)init;	// 0x3585ad71
- (id)initWithCoder:(id)coder;	// 0x3585b4f9
- (id)initWithURL:(id)url;	// 0x3585ad85
- (id)initWithURLRequest:(id)urlrequest;	// 0x3585ade5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3585c27d
// declared property getter: - (id)HTTPBody;	// 0x3585c9ed
// declared property getter: - (id)HTTPBodyStream;	// 0x3585dfc9
// declared property getter: - (id)HTTPHeaders;	// 0x3585cb9d
// declared property getter: - (id)HTTPMethod;	// 0x3585cd4d
// declared property getter: - (id)URL;	// 0x3585d5dd
// declared property getter: - (id)URLBagKey;	// 0x3585d42d
// declared property getter: - (int)URLBagType;	// 0x3585e409
// declared property getter: - (id)URLBagURLBlock;	// 0x3585e4d5
// declared property getter: - (id)URLs;	// 0x3585e699
- (id)_initCommon;	// 0x3585ad21
// declared property getter: - (int)allowedRetryCount;	// 0x3585c5bd
// declared property getter: - (unsigned)cachePolicy;	// 0x3585c68d
// declared property getter: - (BOOL)canBeResolved;	// 0x3585dc69
// declared property getter: - (id)clientIdentifier;	// 0x3585c759
- (id)copyURLRequest;	// 0x3585dd79
- (id)copyWithZone:(NSZone *)zone;	// 0x3585bb89
- (id)copyXPCEncoding;	// 0x3585bf3d
- (void)dealloc;	// 0x3585afe9
- (id)description;	// 0x3585d96d
- (void)encodeWithCoder:(id)coder;	// 0x3585b0ed
// declared property getter: - (long long)expectedContentLength;	// 0x3585c909
- (BOOL)isEqual:(id)equal;	// 0x3585da11
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x3585cefd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3585bb99
// declared property getter: - (unsigned)networkServiceType;	// 0x3585cfe5
// declared property getter: - (id)requestParameters;	// 0x3585d0b5
// declared property getter: - (BOOL)requiresExtendedValidationCertificates;	// 0x3585e179
// declared property getter: - (BOOL)shouldDecodeResponse;	// 0x3585e265
// declared property getter: - (BOOL)shouldDisableCellularFallback;	// 0x3585e339
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x3585d265
// declared property getter: - (double)timeoutInterval;	// 0x3585d339
// declared property getter: - (id)userAgentComponents;	// 0x3585d7bd
@end

