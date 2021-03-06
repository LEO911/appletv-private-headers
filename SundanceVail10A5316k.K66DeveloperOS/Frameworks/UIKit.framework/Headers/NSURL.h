/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x302a83bd
+ (id)mapsURLWithAddress:(id)address;	// 0x302a81d1
+ (id)mapsURLWithQuery:(id)query;	// 0x302a8131
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x302a8271
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x301c8e35
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x301c8f45
- (id)appleStoreURL;	// 0x302a83b9
- (BOOL)isGoogleMapsURL;	// 0x301c8db1
- (BOOL)isHTTPOrHTTPSURL;	// 0x302a86d9
- (BOOL)isJavaScriptURL;	// 0x302a869d
- (BOOL)isSpringboardHandledURL;	// 0x302a8569
- (BOOL)isWebcalURL;	// 0x302a85c5
- (id)itmsURL;	// 0x302a83b5
- (id)phobosURL;	// 0x301c4c09
- (id)radarWebURL;	// 0x301c5661
- (id)searchResultDomain;	// 0x302a8421
- (id)searchResultIdentifier;	// 0x302a84c5
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x302a8745
@end

