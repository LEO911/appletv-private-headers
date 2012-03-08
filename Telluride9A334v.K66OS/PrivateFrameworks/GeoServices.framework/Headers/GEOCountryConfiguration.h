/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSURLConnection, NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSMutableData *_responseData;	// 8 = 0x8
	NSString *_countryCode;	// 12 = 0xc
	NSDictionary *_oldProvidersInfo;	// 16 = 0x10
	NSString *_oldCountryCode;	// 20 = 0x14
	BOOL _isObservingReachability;	// 24 = 0x18
	BOOL _isUpdating;	// 25 = 0x19
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x32c7e249; S=0x32c7e6cd; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x32c7dae1
- (void)_checkCountryCode;	// 0x32c7deb9
- (void)_checkCountryProviders;	// 0x32c7e019
- (void)_reachabilityChanged:(id)changed;	// 0x32c7dc2d
- (void)_registerNetworkDefaults;	// 0x32c7dfad
- (void)_useCountryCodeProvider:(id)provider;	// 0x32c7e4f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32c7e2a1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32c7e3e5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32c7e2f5
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x32c7e2f1
- (void)connectionDidFinishLoading:(id)connection;	// 0x32c7e405
// declared property getter: - (id)countryCode;	// 0x32c7e249
- (id)countryDefaultForKey:(id)key;	// 0x32c7e66d
- (void)dealloc;	// 0x32c7db4d
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x32c7e641
// declared property setter: - (void)setCountryCode:(id)code;	// 0x32c7e6cd
- (void)toggleCountry;	// 0x32c7e5a5
- (void)updateProvidersForCurrentCountry;	// 0x32c7dccd
@end
