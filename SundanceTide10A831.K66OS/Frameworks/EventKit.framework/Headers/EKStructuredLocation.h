/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class NSString, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {
}
@property(retain) id addressBookEntityID;	// G=0x34ee9e09; S=0x34ee9e41; converted property
@property(retain, nonatomic) CLLocation *geoLocation;	// G=0x34ee9bdd; S=0x34ee9ded; 
@property(assign, nonatomic) double radius;	// G=0x34ee9e5d; S=0x34ee9ead; 
@property(retain, nonatomic) NSString *title;	// G=0x34ee0815; S=0x34ee9aed; 
+ (id)locationWithTitle:(id)title;	// 0x34ee99bd
- (id)init;	// 0x34ee9a1d
- (id)_persistentLocation;	// 0x34ee9cd1
// converted property getter: - (id)addressBookEntityID;	// 0x34ee9e09
- (id)copyWithZone:(NSZone *)zone;	// 0x34ee9b09
- (id)description;	// 0x34f5c991
// declared property getter: - (id)geoLocation;	// 0x34ee9bdd
- (BOOL)isStructured;	// 0x34f5c955
// declared property getter: - (double)radius;	// 0x34ee9e5d
// converted property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x34ee9e41
// declared property setter: - (void)setGeoLocation:(id)location;	// 0x34ee9ded
// declared property setter: - (void)setRadius:(double)radius;	// 0x34ee9ead
// declared property setter: - (void)setTitle:(id)title;	// 0x34ee9aed
// declared property getter: - (id)title;	// 0x34ee0815
- (void)updatePersistentObject;	// 0x34eee485
@end
