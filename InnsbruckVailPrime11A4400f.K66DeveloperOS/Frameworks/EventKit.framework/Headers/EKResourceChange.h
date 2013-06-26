/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "EKIdentityProtocol.h"

@class NSURL, NSNumber, EKCalendarItem, NSDate, NSString, EKCalendar;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol> {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x2db17bf9; 
@property(readonly, assign, nonatomic) EKCalendar *calendar;	// G=0x2db179fd; 
@property(readonly, assign, nonatomic) EKCalendarItem *calendarItem;	// G=0x2db17a31; 
@property(readonly, assign, nonatomic) unsigned changeType;	// G=0x2db17a59; 
@property(readonly, assign, nonatomic) NSURL *changedByAddress;	// G=0x2db178f9; 
@property(readonly, assign, nonatomic) NSString *changedByDisplayName;	// G=0x2db17899; 
@property(readonly, assign, nonatomic) NSString *changedByFirstName;	// G=0x2db17921; 
@property(readonly, assign, nonatomic) NSString *changedByLastName;	// G=0x2db17949; 
@property(readonly, assign, nonatomic) NSNumber *createCount;	// G=0x2db17b59; 
@property(readonly, assign, nonatomic) BOOL dateChanged;	// G=0x2db17aa9; 
@property(readonly, assign, nonatomic) NSNumber *deleteCount;	// G=0x2db17ba9; 
@property(readonly, assign, nonatomic) NSString *deletedTitle;	// G=0x2db17bd1; 
@property(readonly, assign, nonatomic) BOOL locationChanged;	// G=0x2db17b2d; 
@property(readonly, assign, nonatomic) unsigned publicStatus;	// G=0x2db17c21; 
@property(readonly, assign, nonatomic) BOOL timeChanged;	// G=0x2db17ad5; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x2db17a81; 
@property(readonly, assign, nonatomic) BOOL titleChanged;	// G=0x2db17b01; 
@property(readonly, assign, nonatomic) NSNumber *updateCount;	// G=0x2db17b81; 
- (id)_calendarItemRelation;	// 0x2db1787d
- (id)_persistentResourceChange;	// 0x2db177a1
// declared property getter: - (BOOL)alerted;	// 0x2db17bf9
// declared property getter: - (id)calendar;	// 0x2db179fd
// declared property getter: - (id)calendarItem;	// 0x2db17a31
// declared property getter: - (unsigned)changeType;	// 0x2db17a59
// declared property getter: - (id)changedByAddress;	// 0x2db178f9
// declared property getter: - (id)changedByDisplayName;	// 0x2db17899
// declared property getter: - (id)changedByFirstName;	// 0x2db17921
// declared property getter: - (id)changedByLastName;	// 0x2db17949
- (void)clearAlertedStatus;	// 0x2db17c49
// declared property getter: - (id)createCount;	// 0x2db17b59
// declared property getter: - (BOOL)dateChanged;	// 0x2db17aa9
// declared property getter: - (id)deleteCount;	// 0x2db17ba9
// declared property getter: - (id)deletedTitle;	// 0x2db17bd1
- (id)emailAddress;	// 0x2db17981
- (id)lazyLoadRelationForKey:(id)key;	// 0x2db177b1
// declared property getter: - (BOOL)locationChanged;	// 0x2db17b2d
- (id)name;	// 0x2db17971
// declared property getter: - (unsigned)publicStatus;	// 0x2db17c21
// declared property getter: - (BOOL)timeChanged;	// 0x2db17ad5
// declared property getter: - (id)timestamp;	// 0x2db17a81
// declared property getter: - (BOOL)titleChanged;	// 0x2db17b01
// declared property getter: - (id)updateCount;	// 0x2db17b81
@end
