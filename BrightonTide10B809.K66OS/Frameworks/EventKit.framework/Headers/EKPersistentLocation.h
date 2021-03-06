/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSNumber;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x317fc31d; S=0x31800b09; 
@property(retain) id alarmOwner;	// G=0x31865051; S=0x31865035; converted property
@property(retain) id calendarItemOwner;	// G=0x31865019; S=0x31864ffd; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x317fc1d9; S=0x31800c05; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x317fc2c9; S=0x31800c21; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x317fc389; S=0x31800b25; 
@property(copy, nonatomic) NSString *title;	// G=0x317f2cf1; S=0x31800aed; 
+ (id)defaultPropertiesToLoad;	// 0x317ef2f9
+ (id)relations;	// 0x317fc1f5
- (id)init;	// 0x317fbf71
// declared property getter: - (id)addressBookEntityID;	// 0x317fc31d
// converted property getter: - (id)alarmOwner;	// 0x31865051
// converted property getter: - (id)calendarItemOwner;	// 0x31865019
- (id)copyWithZone:(NSZone *)zone;	// 0x3186506d
- (id)description;	// 0x31865165
- (int)entityType;	// 0x31864ff9
// declared property getter: - (id)latitude;	// 0x317fc1d9
// declared property getter: - (id)longitude;	// 0x317fc2c9
// declared property getter: - (id)radius;	// 0x317fc389
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x31800b09
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x31865035
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x31864ffd
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x31800c05
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x31800c21
// declared property setter: - (void)setRadius:(id)radius;	// 0x31800b25
// declared property setter: - (void)setTitle:(id)title;	// 0x31800aed
// declared property getter: - (id)title;	// 0x317f2cf1
@end

