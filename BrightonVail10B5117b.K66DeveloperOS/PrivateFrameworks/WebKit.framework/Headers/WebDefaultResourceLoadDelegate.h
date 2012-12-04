/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDefaultResourceLoadDelegate : NSObject {
}
+ (id)sharedResourceLoadDelegate;	// 0x36794565
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x367945c1
- (void)webView:(id)view didLoadResourceFromMemoryCache:(id)memoryCache response:(id)response length:(int)length fromDataSource:(id)dataSource;	// 0x367945d9
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x367945ad
- (void)webView:(id)view plugInFailedWithError:(id)error dataSource:(id)source;	// 0x367945d5
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x367945bd
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x367945b9
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x367945d1
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x367945cd
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x367945b5
- (void)webView:(id)view resource:(id)resource didReceiveContentLength:(int)length fromDataSource:(id)dataSource;	// 0x367945c9
- (void)webView:(id)view resource:(id)resource didReceiveResponse:(id)response fromDataSource:(id)dataSource;	// 0x367945c5
- (BOOL)webView:(id)view resource:(id)resource shouldUseCredentialStorageForDataSource:(id)dataSource;	// 0x367945dd
- (id)webView:(id)view resource:(id)resource willCacheResponse:(id)response fromDataSource:(id)dataSource;	// 0x367945e1
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x367945b1
@end
