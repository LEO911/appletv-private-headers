/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface GEOCountryConfiguration : NSObject {
	NSString *_countryCode;	// 4 = 0x4
	NSDictionary *_oldProvidersInfo;	// 8 = 0x8
	NSString *_oldCountryCode;	// 12 = 0xc
	BOOL _isObservingReachability;	// 16 = 0x10
	BOOL _isUpdating;	// 17 = 0x11
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x3792d8d9; S=0x3792da8d; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x3792d405
- (void)_checkCountryCode;	// 0x3792da9d
- (void)_checkCountryProviders;	// 0x37936af9
- (void)_reachabilityChanged:(id)changed;	// 0x3797f76d
- (void)_registerNetworkDefaults;	// 0x379367d5
- (void)_useCountryCodeProvider:(id)provider;	// 0x37936511
// declared property getter: - (id)countryCode;	// 0x3792d8d9
- (id)countryDefaultForKey:(id)key;	// 0x37948715
- (void)dealloc;	// 0x3797f6c9
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x379486e9
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3792da8d
- (void)updateProvidersForCurrentCountry;	// 0x3792d431
@end

