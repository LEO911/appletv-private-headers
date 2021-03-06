/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLRequest, NSString;

@interface AARequest : NSObject {
	NSString *_urlString;	// 4 = 0x4
	BOOL _flushCache;	// 8 = 0x8
	OpaqueCFHTTPCookieStorage *_cookieStorage;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL flushCache;	// G=0x3726f801; S=0x3726f811; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x3726f235; 
@property(readonly, retain) NSString *urlString;	// G=0x3726f231; converted property
+ (id)protocolVersion;	// 0x3726f16d
+ (Class)responseClass;	// 0x3726f151
- (id)initWithURLString:(id)urlstring;	// 0x3726f185
- (void).cxx_destruct;	// 0x3726f821
- (id)bodyDictionary;	// 0x3726f41d
- (void)dealloc;	// 0x3726f7bd
// declared property getter: - (BOOL)flushCache;	// 0x3726f801
- (void)performRequestWithHandler:(id)handler;	// 0x3726f5ed
- (void)setCookieStorage:(OpaqueCFHTTPCookieStorage *)storage;	// 0x3726f1ed
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x3726f811
- (id)urlCredential;	// 0x3726f419
// declared property getter: - (id)urlRequest;	// 0x3726f235
// converted property getter: - (id)urlString;	// 0x3726f231
@end

