/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class EKPersistentAttendee, NSDate, EKPersistentLocation, NSURL, NSString, EKPersistentCalendar, NSTimeZone, NSData, NSSet, EKPersistentOrganizer;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x34f5733d; S=0x34f57359; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x34f571b5; 
@property(copy, nonatomic) NSURL *action;	// G=0x34f57305; S=0x34f57321; 
@property(copy, nonatomic) NSSet *alarms;	// G=0x34ee5ec1; S=0x34f57375; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x34edcba9; S=0x34f572b1; 
@property(copy, nonatomic) NSSet *attachments;	// G=0x34ee514d; S=0x34f5783d; 
@property(copy, nonatomic) NSSet *attendees;	// G=0x34ee549d; S=0x34f574e1; 
@property(retain, nonatomic) EKPersistentCalendar *calendar;	// G=0x34edf741; S=0x34eec9a5; 
@property(copy, nonatomic) NSDate *creationDate;	// G=0x34f57279; S=0x34f57295; 
@property(assign, nonatomic, getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;	// G=0x34f573c9; S=0x34f573e9; 
@property(readonly, assign, nonatomic, getter=isDetached) BOOL detached;	// G=0x34ee7cc5; 
@property(copy, nonatomic) NSSet *detachedItems;	// G=0x34eeea25; S=0x34f57e21; 
@property(copy, nonatomic) NSSet *exceptionDates;	// G=0x34f57459; S=0x34eeea09; 
@property(copy, nonatomic) NSData *externalData;	// G=0x34f577d9; S=0x34f577f5; 
@property(copy, nonatomic) NSString *externalID;	// G=0x34f577a1; S=0x34f577bd; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x34eef7bd; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x34edf9dd; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x34f571d1; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x34ee6745; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x34f57241; S=0x34f5725d; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x34edf899; S=0x34eee469; 
@property(copy, nonatomic) NSString *notes;	// G=0x34ee60a5; S=0x34eed305; 
@property(retain, nonatomic) EKPersistentOrganizer *organizer;	// G=0x34f57741; S=0x34f5775d; 
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;	// G=0x34ee7ce1; S=0x34f57d59; 
@property(assign, nonatomic) int priority;	// G=0x34f572cd; S=0x34f572e9; 
@property(copy, nonatomic) NSSet *recurrenceRules;	// G=0x34ee72d9; S=0x34f57405; 
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;	// G=0x34ee0c11; S=0x34f575cd; 
@property(readonly, assign, nonatomic) int selfParticipantStatus;	// G=0x34f57779; 
@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;	// G=0x34f57891; S=0x34f578ad; 
@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress;	// G=0x34f578c9; S=0x34f57935; 
@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;	// G=0x34f579a5; S=0x34f579c1; 
@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;	// G=0x34f579dd; S=0x34f579f9; 
@property(copy, nonatomic) NSDate *sharedItemCreatedDate;	// G=0x34f57a15; S=0x34f57a31; 
@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;	// G=0x34f57a4d; S=0x34f57aa1; 
@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;	// G=0x34f57af5; S=0x34f57b11; 
@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;	// G=0x34f57b2d; S=0x34f57b99; 
@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;	// G=0x34f57c09; S=0x34f57c25; 
@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;	// G=0x34f57c41; S=0x34f57c5d; 
@property(copy, nonatomic) NSDate *sharedItemModifiedDate;	// G=0x34f57c79; S=0x34f57c95; 
@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;	// G=0x34f57cb1; S=0x34f57d05; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x34ee0129; S=0x34eee7b5; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x34edca6d; S=0x34eee761; 
@property(copy, nonatomic) NSString *title;	// G=0x34edeafd; S=0x34eee745; 
@property(copy, nonatomic) NSString *uniqueID;	// G=0x34ee49a5; S=0x34eef95d; 
+ (id)defaultPropertiesToLoad;	// 0x34f571b1
+ (id)relations;	// 0x34edc655
- (id)init;	// 0x34ee6a2d
// declared property getter: - (id)URL;	// 0x34f5733d
// declared property getter: - (id)UUID;	// 0x34f571b5
// declared property getter: - (id)action;	// 0x34f57305
- (void)addAlarm:(id)alarm;	// 0x34f57391
- (void)addAttachment:(id)attachment;	// 0x34f57859
- (void)addAttendee:(id)attendee;	// 0x34f5755d
- (void)addDetachedItem:(id)item;	// 0x34f57e3d
- (void)addExceptionDate:(id)date;	// 0x34f57475
- (void)addRecurrenceRule:(id)rule;	// 0x34f57421
// declared property getter: - (id)alarms;	// 0x34ee5ec1
// declared property getter: - (id)attachments;	// 0x34ee514d
- (int)attendeeCount;	// 0x34f574ad
// declared property getter: - (id)attendees;	// 0x34ee549d
// declared property getter: - (id)calendar;	// 0x34edf741
// declared property getter: - (id)creationDate;	// 0x34f57279
- (void)deleteSelfAndDetached;	// 0x34f57fcd
// declared property getter: - (id)detachedItems;	// 0x34eeea25
// declared property getter: - (id)exceptionDates;	// 0x34f57459
// declared property getter: - (id)externalData;	// 0x34f577d9
// declared property getter: - (id)externalID;	// 0x34f577a1
// declared property getter: - (BOOL)hasAlarms;	// 0x34eef7bd
- (BOOL)hasAttachments;	// 0x34f57811
// declared property getter: - (BOOL)hasAttendees;	// 0x34edf9dd
// declared property getter: - (BOOL)hasNotes;	// 0x34f571d1
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x34ee6745
// declared property getter: - (BOOL)isAllDay;	// 0x34edcba9
// declared property getter: - (BOOL)isDefaultAlarmRemoved;	// 0x34f573c9
// declared property getter: - (BOOL)isDetached;	// 0x34ee7cc5
- (void)itemDidReplicateInNewCalendar:(id)item;	// 0x34f582e9
// declared property getter: - (id)lastModifiedDate;	// 0x34f57241
// declared property getter: - (id)location;	// 0x34edf899
- (id)moveToCalendar:(id)calendar;	// 0x34f582ed
- (id)moveToCalendar:(id)calendar skipItem:(id)item;	// 0x34f580b9
// declared property getter: - (id)notes;	// 0x34ee60a5
// declared property getter: - (id)organizer;	// 0x34f57741
// declared property getter: - (id)originalItem;	// 0x34ee7ce1
- (void)primitiveValueChangedForKey:(id)key;	// 0x34ee6e49
// declared property getter: - (int)priority;	// 0x34f572cd
// declared property getter: - (id)recurrenceRules;	// 0x34ee72d9
- (void)removeAlarm:(id)alarm;	// 0x34f573ad
- (void)removeAttachment:(id)attachment;	// 0x34f57875
- (void)removeAttendee:(id)attendee;	// 0x34f57579
- (void)removeDetachedItem:(id)item;	// 0x34f57f05
- (void)removeExceptionDate:(id)date;	// 0x34f57491
- (void)removeRecurrenceRule:(id)rule;	// 0x34f5743d
// declared property getter: - (id)selfAttendee;	// 0x34ee0c11
// declared property getter: - (int)selfParticipantStatus;	// 0x34f57779
// declared property setter: - (void)setAction:(id)action;	// 0x34f57321
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x34f57375
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34f572b1
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x34f5783d
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x34f574e1
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x34eec9a5
// declared property setter: - (void)setCreationDate:(id)date;	// 0x34f57295
// declared property setter: - (void)setDefaultAlarmRemoved:(BOOL)removed;	// 0x34f573e9
// declared property setter: - (void)setDetachedItems:(id)items;	// 0x34f57e21
// declared property setter: - (void)setExceptionDates:(id)dates;	// 0x34eeea09
// declared property setter: - (void)setExternalData:(id)data;	// 0x34f577f5
// declared property setter: - (void)setExternalID:(id)anId;	// 0x34f577bd
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x34f5725d
// declared property setter: - (void)setLocation:(id)location;	// 0x34eee469
// declared property setter: - (void)setNotes:(id)notes;	// 0x34eed305
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x34f5775d
// declared property setter: - (void)setOriginalItem:(id)item;	// 0x34f57d59
// declared property setter: - (void)setPriority:(int)priority;	// 0x34f572e9
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x34f57405
// declared property setter: - (void)setSelfAttendee:(id)attendee;	// 0x34f575cd
// declared property setter: - (void)setSharedItemCreatedByDisplayName:(id)name;	// 0x34f578ad
// declared property setter: - (void)setSharedItemCreatedByEmailAddress:(id)address;	// 0x34f57935
// declared property setter: - (void)setSharedItemCreatedByFirstName:(id)name;	// 0x34f579c1
// declared property setter: - (void)setSharedItemCreatedByLastName:(id)name;	// 0x34f579f9
// declared property setter: - (void)setSharedItemCreatedDate:(id)date;	// 0x34f57a31
// declared property setter: - (void)setSharedItemCreatedTimeZone:(id)zone;	// 0x34f57aa1
// declared property setter: - (void)setSharedItemModifiedByDisplayName:(id)name;	// 0x34f57b11
// declared property setter: - (void)setSharedItemModifiedByEmailAddress:(id)address;	// 0x34f57b99
// declared property setter: - (void)setSharedItemModifiedByFirstName:(id)name;	// 0x34f57c25
// declared property setter: - (void)setSharedItemModifiedByLastName:(id)name;	// 0x34f57c5d
// declared property setter: - (void)setSharedItemModifiedDate:(id)date;	// 0x34f57c95
// declared property setter: - (void)setSharedItemModifiedTimeZone:(id)zone;	// 0x34f57d05
// declared property setter: - (void)setStartDate:(id)date;	// 0x34eee7b5
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34eee761
// declared property setter: - (void)setTitle:(id)title;	// 0x34eee745
// declared property setter: - (void)setURL:(id)url;	// 0x34f57359
// declared property setter: - (void)setUniqueID:(id)anId;	// 0x34eef95d
// declared property getter: - (id)sharedItemCreatedByDisplayName;	// 0x34f57891
// declared property getter: - (id)sharedItemCreatedByEmailAddress;	// 0x34f578c9
// declared property getter: - (id)sharedItemCreatedByFirstName;	// 0x34f579a5
// declared property getter: - (id)sharedItemCreatedByLastName;	// 0x34f579dd
// declared property getter: - (id)sharedItemCreatedDate;	// 0x34f57a15
// declared property getter: - (id)sharedItemCreatedTimeZone;	// 0x34f57a4d
// declared property getter: - (id)sharedItemModifiedByDisplayName;	// 0x34f57af5
// declared property getter: - (id)sharedItemModifiedByEmailAddress;	// 0x34f57b2d
// declared property getter: - (id)sharedItemModifiedByFirstName;	// 0x34f57c09
// declared property getter: - (id)sharedItemModifiedByLastName;	// 0x34f57c41
// declared property getter: - (id)sharedItemModifiedDate;	// 0x34f57c79
// declared property getter: - (id)sharedItemModifiedTimeZone;	// 0x34f57cb1
// declared property getter: - (id)startDate;	// 0x34ee0129
// declared property getter: - (id)timeZone;	// 0x34edca6d
// declared property getter: - (id)title;	// 0x34edeafd
// declared property getter: - (id)uniqueID;	// 0x34ee49a5
- (BOOL)validate:(id *)validate;	// 0x34eef10d
@end

