/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLProtocol.h"


__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol {
@private
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x3104664d
+ (id)canonicalRequestForRequest:(id)request;	// 0x3104672d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x310c0ef1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x310c1005
- (void)_resumeLoading;	// 0x310c1419
- (void)_suspendLoading;	// 0x310c1405
- (void)dealloc;	// 0x310c0f7d
- (void)finalize;	// 0x310c0fc5
- (void)startLoading;	// 0x310c13dd
- (void)stopLoading;	// 0x310c13f1
@end

