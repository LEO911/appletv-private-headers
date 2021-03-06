/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSInputStream, NSString, NSURL, NSDictionary, NSData, NSArray;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x356b8049; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x356b8b05; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x356b8129; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x356b8209; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x356b82e9; @dynamic
@property(retain) NSURL *URL;	// S=0x356b86c1; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x356b85e1; @dynamic
@property(assign) int URLBagType;	// S=0x356b8f8d; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x356b900d; @dynamic
@property(copy) NSArray *URLs;	// S=0x356b90ed; @dynamic
@property(assign) int allowedRetryCount;	// S=0x356b7dd1; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x356b7e51; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x356b7ed1; @dynamic
@property(assign) long long expectedContentLength;	// S=0x356b7fb1; @dynamic
@property(assign) unsigned networkServiceType;	// S=0x356b8369; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x356b83e9; @dynamic
@property(assign) BOOL requiresExtendedValidationCertificates;	// S=0x356b8e0d; @dynamic
@property(assign) BOOL shouldDecodeResponse;	// S=0x356b8e8d; @dynamic
@property(assign) BOOL shouldDisableCellularFallback;	// S=0x356b84c9; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x356b8f0d; @dynamic
@property(assign) double timeoutInterval;	// S=0x356b8549; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x356b8725; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x356b7dc1
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x356b7dd1
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x356b7e51
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x356b7ed1
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x356b7fb1
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x356b8049
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x356b8b05
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x356b8129
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x356b8209
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x356b82e9
- (void)setMultiPartFormDataWithDictionary:(id)dictionary;	// 0x356b8be5
// declared property setter: - (void)setNetworkServiceType:(unsigned)type;	// 0x356b8369
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x356b83e9
// declared property setter: - (void)setRequiresExtendedValidationCertificates:(BOOL)certificates;	// 0x356b8e0d
// declared property setter: - (void)setShouldDecodeResponse:(BOOL)decodeResponse;	// 0x356b8e8d
// declared property setter: - (void)setShouldDisableCellularFallback:(BOOL)disableCellularFallback;	// 0x356b84c9
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x356b8f0d
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x356b8549
// declared property setter: - (void)setURL:(id)url;	// 0x356b86c1
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x356b85e1
// declared property setter: - (void)setURLBagType:(int)type;	// 0x356b8f8d
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x356b900d
// declared property setter: - (void)setURLs:(id)urls;	// 0x356b90ed
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x356b8725
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x356b8805
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x356b8985
@end

