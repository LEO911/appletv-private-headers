/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import </libobjc.A.h>


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x2f6619a5
+ (id)mapsURLWithAddress:(id)address;	// 0x2f6617b5
+ (id)mapsURLWithQuery:(id)query;	// 0x2f661715
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x2f661855
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x2f50b0c1
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x2f50b1d1
- (id)appleStoreURL;	// 0x2f6619a1
- (BOOL)isGoogleMapsURL;	// 0x2f50b041
- (BOOL)isHTTPOrHTTPSURL;	// 0x2f661c65
- (BOOL)isJavaScriptURL;	// 0x2f661c29
- (BOOL)isSpringboardHandledURL;	// 0x2f54dabd
- (BOOL)isWebcalURL;	// 0x2f661b51
- (id)itmsURL;	// 0x2f66199d
- (id)phobosURL;	// 0x2f48aa21
- (id)radarWebURL;	// 0x2f48aa7d
- (id)searchResultDomain;	// 0x2f661a09
- (id)searchResultIdentifier;	// 0x2f661aad
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x2f661cd1
@end
