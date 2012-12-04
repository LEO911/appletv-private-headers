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
	BOOL _excludeSessionIDFromURL;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *action;	// G=0x356046a9; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x356046b9; S=0x356046cd; @synthesize=_bodyData
@property(assign, nonatomic) BOOL excludeSessionIDFromURL;	// G=0x356046fd; S=0x3560470d; @synthesize=_excludeSessionIDFromURL
@property(assign, nonatomic) int method;	// G=0x356046dd; S=0x356046ed; @synthesize=_method
+ (id)request;	// 0x35603eb1
- (id)initWithAction:(id)action;	// 0x35603f55
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x356043e5
- (id)_defaultHeaderFields;	// 0x3560461d
- (id)_methodStringForMethod:(int)method;	// 0x3560468d
- (BOOL)acceptsGzipEncoding;	// 0x35604619
// declared property getter: - (id)action;	// 0x356046a9
// declared property getter: - (id)bodyData;	// 0x356046b9
- (id)canonicalResponseForResponse:(id)response;	// 0x35604615
- (void)dealloc;	// 0x35603fd9
- (id)description;	// 0x35604079
- (id)descriptionWithoutHeaderFields;	// 0x35604109
// declared property getter: - (BOOL)excludeSessionIDFromURL;	// 0x356046fd
// declared property getter: - (int)method;	// 0x356046dd
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x35604219
- (id)requestURLForConnection:(id)connection;	// 0x35603ded
// declared property setter: - (void)setBodyData:(id)data;	// 0x356046cd
// declared property setter: - (void)setExcludeSessionIDFromURL:(BOOL)url;	// 0x3560470d
// declared property setter: - (void)setMethod:(int)method;	// 0x356046ed
- (void)setValue:(id)value forArgument:(id)argument;	// 0x356041a9
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x35604189
@end
