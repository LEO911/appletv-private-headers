/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSData, NSDictionary;

@interface HSRequest : NSObject {
	NSString *_action;	// 4 = 0x4
	NSData *_bodyData;	// 8 = 0x8
	NSDictionary *_headers;	// 12 = 0xc
	NSDictionary *_arguments;	// 16 = 0x10
	CFHTTPMessageRef _message;	// 20 = 0x14
	int _method;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *action;	// G=0x31de9ce1; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x31de9cf1; S=0x31de9d05; @synthesize=_bodyData
@property(assign, nonatomic) int method;	// G=0x31de9d15; S=0x31de9d25; @synthesize=_method
+ (id)request;	// 0x31de94fd
- (id)initWithAction:(id)action;	// 0x31de95a1
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x31de9a1d
- (id)_defaultHeaderFields;	// 0x31de9c55
- (id)_methodStringForMethod:(int)method;	// 0x31de9cc5
- (BOOL)acceptsGzipEncoding;	// 0x31de9c51
// declared property getter: - (id)action;	// 0x31de9ce1
// declared property getter: - (id)bodyData;	// 0x31de9cf1
- (id)canonicalResponseForResponse:(id)response;	// 0x31de9c4d
- (void)dealloc;	// 0x31de9625
- (id)description;	// 0x31de96c5
- (id)descriptionWithoutHeaderFields;	// 0x31de9755
// declared property getter: - (int)method;	// 0x31de9d15
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x31de9865
- (id)requestURLForConnection:(id)connection;	// 0x31de9439
// declared property setter: - (void)setBodyData:(id)data;	// 0x31de9d05
// declared property setter: - (void)setMethod:(int)method;	// 0x31de9d25
- (void)setValue:(id)value forArgument:(id)argument;	// 0x31de97f5
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x31de97d5
@end
