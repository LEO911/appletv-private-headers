/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x324ee57d; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x324eef45; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x324ee65d; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x324ee73d; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x324ee81d; @dynamic
@property(retain) NSURL *URL;	// S=0x324eeaf9; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x324eea19; @dynamic
@property(assign) int URLBagType;	// S=0x324ef0a9; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x324ef129; @dynamic
@property(copy) NSArray *URLs;	// S=0x324ef209; @dynamic
@property(assign) int allowedRetryCount;	// S=0x324ee305; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x324ee385; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x324ee405; @dynamic
@property(assign) long long expectedContentLength;	// S=0x324ee4e5; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x324ee8a1; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x324ef025; @dynamic
@property(assign) double timeoutInterval;	// S=0x324ee981; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x324eeb5d; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x324ee2f5
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x324ee305
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x324ee385
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x324ee405
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x324ee4e5
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x324ee57d
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x324eef45
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x324ee65d
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x324ee73d
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x324ee81d
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x324ee8a1
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x324ef025
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x324ee981
// declared property setter: - (void)setURL:(id)url;	// 0x324eeaf9
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x324eea19
// declared property setter: - (void)setURLBagType:(int)type;	// 0x324ef0a9
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x324ef129
// declared property setter: - (void)setURLs:(id)urls;	// 0x324ef209
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x324eeb5d
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x324eec3d
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x324eedc1
@end
