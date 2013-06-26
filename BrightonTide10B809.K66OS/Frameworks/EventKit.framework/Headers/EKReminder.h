/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x3184a6cd; S=0x3184a689; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x3184a389; S=0x3184a425; 
@property(assign) unsigned displayOrder;	// G=0x3184a48d; S=0x3184a529; converted property
@property(copy, nonatomic) NSDateComponents *dueDateComponents;	// G=0x31849f2d; S=0x3184a095; 
@property(assign, nonatomic) int priority;	// G=0x3184a56d; S=0x3184a599; 
@property(copy, nonatomic) NSDateComponents *startDateComponents;	// G=0x31849bd9; S=0x31849d35; 
+ (void)_removeSnoozedAlarmsFromReminder:(id)reminder usingDueDate:(id)date;	// 0x3184b3ed
+ (id)reminderWithEventStore:(id)eventStore;	// 0x318499ad
- (id)initWithPersistentObject:(id)persistentObject;	// 0x31849a41
- (id)_persistentReminder;	// 0x31849af1
- (void)_sendModifiedNote;	// 0x31849b01
- (id)bestDisplayAlarm;	// 0x3184b635
- (void)clearParentID;	// 0x3184a711
- (BOOL)commit:(id *)commit;	// 0x3184a9a5
// declared property getter: - (id)completionDate;	// 0x3184a389
- (void)dealloc;	// 0x31849ac5
- (id)description;	// 0x3184a5c5
// converted property getter: - (unsigned)displayOrder;	// 0x3184a48d
- (id)dueDate;	// 0x31849ee5
// declared property getter: - (id)dueDateComponents;	// 0x31849f2d
- (id)externalURI;	// 0x31849b55
// declared property getter: - (BOOL)isCompleted;	// 0x3184a6cd
- (id)parentID;	// 0x3184a6e9
// declared property getter: - (int)priority;	// 0x3184a56d
- (id)reminderIdentifier;	// 0x31849b45
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x3184a689
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x3184a425
// converted property setter: - (void)setDisplayOrder:(unsigned)order;	// 0x3184a529
// declared property setter: - (void)setDueDateComponents:(id)components;	// 0x3184a095
// declared property setter: - (void)setPriority:(int)priority;	// 0x3184a599
// declared property setter: - (void)setStartDateComponents:(id)components;	// 0x31849d35
- (void)setTimeZone:(id)zone;	// 0x3184a341
// declared property getter: - (id)startDateComponents;	// 0x31849bd9
- (BOOL)validate:(id *)validate;	// 0x3184a73d
@end
