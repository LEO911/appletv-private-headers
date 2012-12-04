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
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x3137c02d; S=0x31380819; 
@property(retain) id alarmOwner;	// G=0x313e4361; S=0x313e4345; converted property
@property(retain) id calendarItemOwner;	// G=0x313e4329; S=0x313e430d; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x3137bee9; S=0x31380915; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x3137bfd9; S=0x31380931; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x3137c099; S=0x31380835; 
@property(copy, nonatomic) NSString *title;	// G=0x31372a39; S=0x313807fd; 
+ (id)defaultPropertiesToLoad;	// 0x3136f049
+ (id)relations;	// 0x3137bf05
- (id)init;	// 0x3137bc81
// declared property getter: - (id)addressBookEntityID;	// 0x3137c02d
// converted property getter: - (id)alarmOwner;	// 0x313e4361
// converted property getter: - (id)calendarItemOwner;	// 0x313e4329
- (id)copyWithZone:(NSZone *)zone;	// 0x313e437d
- (id)description;	// 0x313e4475
- (int)entityType;	// 0x313e4309
// declared property getter: - (id)latitude;	// 0x3137bee9
// declared property getter: - (id)longitude;	// 0x3137bfd9
// declared property getter: - (id)radius;	// 0x3137c099
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x31380819
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x313e4345
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x313e430d
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x31380915
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x31380931
// declared property setter: - (void)setRadius:(id)radius;	// 0x31380835
// declared property setter: - (void)setTitle:(id)title;	// 0x313807fd
// declared property getter: - (id)title;	// 0x31372a39
@end
