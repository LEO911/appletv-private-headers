/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
@private
	NSHTTPCookieStorageInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x337096d5; S=0x33709709; converted property
+ (id)sharedHTTPCookieStorage;	// 0x336586ad
- (id)init;	// 0x337093a9
- (OpaqueCFHTTPCookieStorage *)_cookieStorage;	// 0x33709301
- (id)_initWithSharedStorage;	// 0x33658719
- (void)_readAcceptCookiesPreference;	// 0x337091bd
- (void)_saveCookies;	// 0x3370933d
- (void)_setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x3370925d
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x337096d5
- (id)cookieRequestHeaderFieldsForURL:(id)url;	// 0x337094c5
- (id)cookies;	// 0x337093c1
- (id)cookiesForURL:(id)url;	// 0x337095ed
- (void)dealloc;	// 0x3370935d
- (void)deleteCookie:(id)cookie;	// 0x3370945d
- (id)description;	// 0x337097dd
- (void)setCookie:(id)cookie;	// 0x33709419
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x33709709
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x3370967d
- (void)setCookiesFromResponseHeader:(id)responseHeader forURL:(id)url policyBaseURL:(id)url3;	// 0x33709585
- (id)sortedCookiesUsingDescriptors:(id)descriptors;	// 0x33709909
@end
