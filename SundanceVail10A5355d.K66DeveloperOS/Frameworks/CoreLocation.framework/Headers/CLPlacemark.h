/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, CLRegion, NSString, CLPlacemarkInternal, CLLocation, NSDictionary;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
	CLPlacemarkInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *ISOcountryCode;	// G=0x329193a9; 
@property(readonly, assign, nonatomic) NSDictionary *addressDictionary;	// G=0x329191c9; 
@property(readonly, assign, nonatomic) NSString *administrativeArea;	// G=0x32919301; 
@property(readonly, assign, nonatomic) NSArray *areasOfInterest;	// G=0x32919489; 
@property(readonly, assign, nonatomic) NSString *country;	// G=0x329193e1; 
@property(readonly, assign, nonatomic) NSString *inlandWater;	// G=0x329194a9; 
@property(readonly, assign, nonatomic) NSString *locality;	// G=0x32919291; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x32919189; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x329191e9; 
@property(readonly, assign, nonatomic) NSString *ocean;	// G=0x329194e1; 
@property(readonly, assign, nonatomic) NSString *postalCode;	// G=0x32919371; 
@property(readonly, assign, nonatomic) CLRegion *region;	// G=0x329191a9; 
@property(readonly, assign, nonatomic) NSString *subAdministrativeArea;	// G=0x32919339; 
@property(readonly, assign, nonatomic) NSString *subLocality;	// G=0x329192c9; 
@property(readonly, assign, nonatomic) NSString *subThoroughfare;	// G=0x32919259; 
@property(readonly, assign, nonatomic) NSString *thoroughfare;	// G=0x32919221; 
- (id)initWithCoder:(id)coder;	// 0x32919015
- (id)initWithLocation:(id)location addressDictionary:(id)dictionary region:(id)region areasOfInterest:(id)interest;	// 0x32918d61
- (id)initWithPlacemark:(id)placemark;	// 0x32918e51
// declared property getter: - (id)ISOcountryCode;	// 0x329193a9
// declared property getter: - (id)addressDictionary;	// 0x329191c9
// declared property getter: - (id)administrativeArea;	// 0x32919301
// declared property getter: - (id)areasOfInterest;	// 0x32919489
- (id)copyWithZone:(NSZone *)zone;	// 0x32919145
// declared property getter: - (id)country;	// 0x329193e1
- (void)dealloc;	// 0x32918f6d
- (id)description;	// 0x32919519
- (void)encodeWithCoder:(id)coder;	// 0x329190a1
- (id)formattedAddressLines;	// 0x32919451
- (id)fullThoroughfare;	// 0x32919419
// declared property getter: - (id)inlandWater;	// 0x329194a9
// declared property getter: - (id)locality;	// 0x32919291
// declared property getter: - (id)location;	// 0x32919189
// declared property getter: - (id)name;	// 0x329191e9
// declared property getter: - (id)ocean;	// 0x329194e1
// declared property getter: - (id)postalCode;	// 0x32919371
// declared property getter: - (id)region;	// 0x329191a9
// declared property getter: - (id)subAdministrativeArea;	// 0x32919339
// declared property getter: - (id)subLocality;	// 0x329192c9
// declared property getter: - (id)subThoroughfare;	// 0x32919259
// declared property getter: - (id)thoroughfare;	// 0x32919221
@end

