/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class EKObjectToOneRelation, NSDate, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {
	EKObjectToOneRelation *_locationRelation;	// 36 = 0x24
}
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x3183e109; S=0x3183e125; 
@property(retain) id acknowledgedDate;	// G=0x3183e185; S=0x3183e1a1; converted property
@property(assign, getter=isDefaultAlarm) BOOL defaultAlarm;	// G=0x3183e375; S=0x3183e3a5; converted property
@property(retain, nonatomic) EKObjectToOneRelation *locationRelation;	// G=0x3183e865; S=0x3183e875; @synthesize=_locationRelation
@property(assign, nonatomic) int proximity;	// G=0x3183e239; S=0x3183e1f5; 
@property(assign, nonatomic) double relativeOffset;	// G=0x3183e06d; S=0x3183e0a1; 
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;	// G=0x3183e309; S=0x3183e2b5; 
+ (int)_currentAuthorizationStatus;	// 0x3183e7a1
+ (id)alarmWithAbsoluteDate:(id)absoluteDate;	// 0x3183dcc1
+ (id)alarmWithRelativeOffset:(double)relativeOffset;	// 0x3183dcfd
+ (BOOL)areLocationsAllowed;	// 0x3183e7c9
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)authorizationStatus;	// 0x3183e7f9
+ (BOOL)areLocationsAvailable;	// 0x317f4629
+ (BOOL)areLocationsCurrentlyEnabled;	// 0x3183e829
- (id)init;	// 0x3183dd3d
- (id)initWithAbsoluteDate:(id)absoluteDate;	// 0x3183dd99
- (id)initWithRelativeOffset:(double)relativeOffset;	// 0x3183de55
- (id)UUID;	// 0x3183e051
- (id)_locationRelation;	// 0x3183e299
- (id)_originalAlarmRelation;	// 0x3183e3e9
// declared property getter: - (id)absoluteDate;	// 0x3183e109
// converted property getter: - (id)acknowledgedDate;	// 0x3183e185
- (id)copyWithZone:(NSZone *)zone;	// 0x3183e42d
- (void)dealloc;	// 0x3183de91
- (id)description;	// 0x3183e639
- (id)externalID;	// 0x3183e1bd
- (BOOL)isAbsolute;	// 0x3183e1d9
// converted property getter: - (BOOL)isDefaultAlarm;	// 0x3183e375
- (id)lazyLoadRelationForKey:(id)key;	// 0x3183dedd
// declared property getter: - (id)locationRelation;	// 0x3183e865
- (id)originalAlarm;	// 0x3183e405
- (id)owner;	// 0x3183e01d
- (id)ownerUUID;	// 0x3183e331
// declared property getter: - (int)proximity;	// 0x3183e239
- (BOOL)rebase;	// 0x3183e52d
// declared property getter: - (double)relativeOffset;	// 0x3183e06d
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x3183e125
// converted property setter: - (void)setAcknowledgedDate:(id)date;	// 0x3183e1a1
// converted property setter: - (void)setDefaultAlarm:(BOOL)alarm;	// 0x3183e3a5
// declared property setter: - (void)setLocationRelation:(id)relation;	// 0x3183e875
// declared property setter: - (void)setProximity:(int)proximity;	// 0x3183e1f5
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x3183e0a1
// declared property setter: - (void)setStructuredLocation:(id)location;	// 0x3183e2b5
// declared property getter: - (id)structuredLocation;	// 0x3183e309
- (BOOL)validate:(id *)validate;	// 0x3183e6e5
@end
