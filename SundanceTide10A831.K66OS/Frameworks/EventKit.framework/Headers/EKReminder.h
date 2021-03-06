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
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x34f380ed; S=0x34f380a9; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x34f37da9; S=0x34f37e45; 
@property(assign) unsigned displayOrder;	// G=0x34f37ead; S=0x34f37f49; converted property
@property(copy, nonatomic) NSDateComponents *dueDateComponents;	// G=0x34f3794d; S=0x34f37ab5; 
@property(assign, nonatomic) int priority;	// G=0x34f37f8d; S=0x34f37fb9; 
@property(copy, nonatomic) NSDateComponents *startDateComponents;	// G=0x34f375f9; S=0x34f37755; 
+ (id)reminderWithEventStore:(id)eventStore;	// 0x34f373cd
- (id)initWithPersistentObject:(id)persistentObject;	// 0x34f37461
- (id)_persistentReminder;	// 0x34f37511
- (void)_sendModifiedNote;	// 0x34f37521
- (void)clearParentID;	// 0x34f38131
- (BOOL)commit:(id *)commit;	// 0x34f383c5
// declared property getter: - (id)completionDate;	// 0x34f37da9
- (void)dealloc;	// 0x34f374e5
- (id)description;	// 0x34f37fe5
// converted property getter: - (unsigned)displayOrder;	// 0x34f37ead
- (id)dueDate;	// 0x34f37905
// declared property getter: - (id)dueDateComponents;	// 0x34f3794d
- (id)externalURI;	// 0x34f37575
// declared property getter: - (BOOL)isCompleted;	// 0x34f380ed
- (id)parentID;	// 0x34f38109
// declared property getter: - (int)priority;	// 0x34f37f8d
- (id)reminderIdentifier;	// 0x34f37565
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x34f380a9
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x34f37e45
// converted property setter: - (void)setDisplayOrder:(unsigned)order;	// 0x34f37f49
// declared property setter: - (void)setDueDateComponents:(id)components;	// 0x34f37ab5
// declared property setter: - (void)setPriority:(int)priority;	// 0x34f37fb9
// declared property setter: - (void)setStartDateComponents:(id)components;	// 0x34f37755
- (void)setTimeZone:(id)zone;	// 0x34f37d61
// declared property getter: - (id)startDateComponents;	// 0x34f375f9
- (BOOL)validate:(id *)validate;	// 0x34f3815d
@end

