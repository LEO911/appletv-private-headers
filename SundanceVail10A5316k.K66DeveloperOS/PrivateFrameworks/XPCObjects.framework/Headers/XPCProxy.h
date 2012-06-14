/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "XPCObjects-Structs.h"

@class Protocol, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue, XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying> {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	id<XPCProxyTarget> _target;	// 12 = 0xc
	Class _remoteClass;	// 16 = 0x10
	Protocol *_remoteProtocol;	// 20 = 0x14
	id _errorHandler;	// 24 = 0x18
	BOOL _invalidated;	// 28 = 0x1c
	BOOL _useTraditionalEncoder;	// 29 = 0x1d
	NSArray *_whitelistedClassNames;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x345d8d71; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x345d8cc9; S=0x345d8cdd; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x345d8d19; S=0x345d8d2d; @synthesize=_remoteClass
@property(assign) Protocol *remoteProtocol;	// G=0x345d8d45; S=0x345d8d59; @synthesize=_remoteProtocol
@property(assign) id<XPCProxyTarget> target;	// G=0x345d8ced; S=0x345d8d01; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x345d8d81; S=0x345d8d91; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x345d6de1
- (id)initWithConnection:(id)connection queue:(id)queue target:(id)target;	// 0x345d6e15
- (id)_errorForXpcError:(id)xpcError;	// 0x345d8be5
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(id)xpcArgument message:(id)message;	// 0x345d80e5
- (id)_invocationForMessage:(id)message;	// 0x345d7659
- (id)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x345d7aa1
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x345d7eed
- (id)_newXpcEncodingForObject:(id)object;	// 0x345d88cd
- (id)_objectForXpcEncoding:(id)xpcEncoding;	// 0x345d8ae9
- (id)_proxyDescription;	// 0x345d8c49
- (SEL)_selectorForMessage:(id)message;	// 0x345d7635
// declared property getter: - (id)connection;	// 0x345d8d71
- (id)copyWithZone:(NSZone *)zone;	// 0x345d8cb9
- (void)dealloc;	// 0x345d7341
// declared property getter: - (id)errorHandler;	// 0x345d8cc9
- (void)forwardInvocation:(id)invocation;	// 0x345d7541
- (void)invalidate;	// 0x345d73d1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x345d744d
// declared property getter: - (Class)remoteClass;	// 0x345d8d19
// declared property getter: - (id)remoteProtocol;	// 0x345d8d45
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x345d72c5
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x345d8cdd
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x345d8d2d
// declared property setter: - (void)setRemoteProtocol:(id)protocol;	// 0x345d8d59
// declared property setter: - (void)setTarget:(id)target;	// 0x345d8d01
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x345d8d91
// declared property getter: - (id)target;	// 0x345d8ced
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x345d8d81
@end
