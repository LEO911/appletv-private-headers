/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAReminderTrigger, NSString, NSArray, NSDate, SAReminderRecurrence;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject {
}
@property(copy, nonatomic) NSString *alternateSubject;	// G=0x353d5ce5; S=0x353d5d01; 
@property(assign, nonatomic) BOOL completed;	// G=0x353d5d51; S=0x353d5dc9; 
@property(copy, nonatomic) NSDate *dueDate;	// G=0x353d5e0d; S=0x353d5e29; 
@property(copy, nonatomic) NSString *dueDateTimeZoneId;	// G=0x353d5e79; S=0x353d5e95; 
@property(assign, nonatomic) BOOL important;	// G=0x353d5ee5; S=0x353d5f5d; 
@property(copy, nonatomic) NSArray *lists;	// G=0x353d5fa1; S=0x353d601d; 
@property(retain, nonatomic) id<SAReminderPayload> payload;	// G=0x353d6085; S=0x353d60d9; 
@property(retain, nonatomic) SAReminderRecurrence *recurrence;	// G=0x353d6115; S=0x353d6169; 
@property(copy, nonatomic) NSString *subject;	// G=0x353d61a5; S=0x353d61c1; 
@property(retain, nonatomic) SAReminderTrigger *trigger;	// G=0x353d6211; S=0x353d6265; 
+ (id)object;	// 0x353d5c55
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x353d5c99
// declared property getter: - (id)alternateSubject;	// 0x353d5ce5
// declared property getter: - (BOOL)completed;	// 0x353d5d51
// declared property getter: - (id)dueDate;	// 0x353d5e0d
// declared property getter: - (id)dueDateTimeZoneId;	// 0x353d5e79
- (id)encodedClassName;	// 0x353d5c49
- (id)groupIdentifier;	// 0x353d5c39
// declared property getter: - (BOOL)important;	// 0x353d5ee5
// declared property getter: - (id)lists;	// 0x353d5fa1
// declared property getter: - (id)payload;	// 0x353d6085
// declared property getter: - (id)recurrence;	// 0x353d6115
// declared property setter: - (void)setAlternateSubject:(id)subject;	// 0x353d5d01
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x353d5dc9
// declared property setter: - (void)setDueDate:(id)date;	// 0x353d5e29
// declared property setter: - (void)setDueDateTimeZoneId:(id)anId;	// 0x353d5e95
// declared property setter: - (void)setImportant:(BOOL)important;	// 0x353d5f5d
// declared property setter: - (void)setLists:(id)lists;	// 0x353d601d
// declared property setter: - (void)setPayload:(id)payload;	// 0x353d60d9
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x353d6169
// declared property setter: - (void)setSubject:(id)subject;	// 0x353d61c1
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x353d6265
// declared property getter: - (id)subject;	// 0x353d61a5
// declared property getter: - (id)trigger;	// 0x353d6211
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d62a1
@end

