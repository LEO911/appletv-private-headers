/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKCalendarItem.h"

@class NSString, EKCalendarDate, NSNumber, NSDate, EKParticipant;

@interface EKEvent : EKCalendarItem {
	EKCalendarDate *_occurrenceStartDate;	// 40 = 0x28
	EKCalendarDate *_occurrenceEndDate;	// 44 = 0x2c
	BOOL _occurrenceIsAllDay;	// 48 = 0x30
	EKCalendarDate *_originalOccurrenceStartDate;	// 52 = 0x34
	EKCalendarDate *_originalOccurrenceEndDate;	// 56 = 0x38
	NSNumber *_originalOccurrenceIsAllDay;	// 60 = 0x3c
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x35b1de01; S=0x35b27f69; 
@property(assign, nonatomic) int availability;	// G=0x35b25ce9; S=0x35b6743d; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x35b1de11; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x35b1f275; S=0x35b28529; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x35b23ddd; 
@property(assign) unsigned invitationStatus;	// G=0x35b674dd; S=0x35b67511; converted property
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x35b27165; 
@property(assign) unsigned modifiedProperties;	// G=0x35b67061; S=0x35b67095; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x35b670d9; S=0x35b670fd; converted property
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x35b1f29d; S=0x35b1fa99; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x35b6ad21; S=0x35b1c1b5; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x35b1e935; S=0x35b1c041; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x35b1fd71; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x35b27f2d; S=0x35b2846d; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x35b27f55; S=0x35b26521; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x35b27f09; S=0x35b2845d; @synthesize=_originalOccurrenceStartDate
@property(assign) int participationStatus;	// G=0x35b20085; S=0x35b67141; converted property
@property(retain) id recurrenceRule;	// G=0x35b6738d; S=0x35b673d9; converted property
@property(retain) id responseComment;	// G=0x35b674a5; S=0x35b674c1; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x35b1f255; S=0x35b28231; 
@property(readonly, assign, nonatomic) int status;	// G=0x35b1ed9d; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x35b28aa9
- (id)init;	// 0x35b66b4d
- (id)initWithEventStore:(id)eventStore;	// 0x35b25e79
- (id)initWithPersistentObject:(id)persistentObject;	// 0x35b66b89
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x35b1bd89
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x35b69ec1
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x35b2b025
- (id)_dateForNextOccurrence;	// 0x35b67ff9
- (void)_deleteThisOccurrence;	// 0x35b69539
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x35b69399
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x35b6a26d
- (id)_effectiveTimeZone;	// 0x35b2847d
- (XXStruct_lQVxyC)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)calendarDate orNSDate:(id)date;	// 0x35b20cad
- (BOOL)_isAlarmAcknowledgedPropertyDirty;	// 0x35b2ab2d
- (BOOL)_isAllDay;	// 0x35b1c061
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x35b6a049
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x35b68f8d
- (int)_parentParticipationStatus;	// 0x35b672fd
- (id)_persistentEvent;	// 0x35b1de39
- (void)_sendModifiedNote;	// 0x35b66e15
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x35b691e1
- (BOOL)_shouldDeclineInsteadOfDelete;	// 0x35b692cd
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x35b68361
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x35b2ac2d
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x35b68165
- (int)alarmCount;	// 0x35b67365
- (BOOL)allowsAlarmModifications;	// 0x35b67aa1
- (BOOL)allowsCalendarModifications;	// 0x35b67915
- (BOOL)allowsRecurrenceModifications;	// 0x35b270dd
- (id)attachments;	// 0x35b24229
- (int)attendeeCount;	// 0x35b6733d
- (id)attendees;	// 0x35b24901
// declared property getter: - (int)availability;	// 0x35b25ce9
// declared property getter: - (int)birthdayPersonID;	// 0x35b1de11
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x35b1de65
- (BOOL)canBeRespondedTo;	// 0x35b257d1
- (BOOL)canDetachSingleOccurrence;	// 0x35b679b1
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x35b676dd
- (BOOL)canSetAvailability;	// 0x35b25c9d
- (void)clearInvitationStatus;	// 0x35b67555
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x35b2b381
- (id)committedValueForKey:(id)key;	// 0x35b26939
- (int)compareStartDateWithEvent:(id)event;	// 0x35b2893d
- (BOOL)dateChanged;	// 0x35b67589
- (void)dealloc;	// 0x35b23459
- (id)description;	// 0x35b67ae9
- (void)didCommit;	// 0x35b2f849
- (id)dirtyPropertiesToSkip;	// 0x35b67e95
- (double)duration;	// 0x35b66e59
- (id)endCalendarDate;	// 0x35b20075
// declared property getter: - (id)endDate;	// 0x35b1f275
- (XXStruct_lQVxyC)endDateGr;	// 0x35b25b21
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x35b66fed
// declared property getter: - (id)eventIdentifier;	// 0x35b23ddd
- (id)eventStore;	// 0x35b1ec45
- (id)exportToICS;	// 0x35b66ccd
- (id)externalId;	// 0x35b67a25
- (id)externalURI;	// 0x35b66b9d
- (id)externalURL;	// 0x35b66bad
- (BOOL)hasSelfAttendee;	// 0x35b67a75
- (unsigned)hash;	// 0x35b1e8d9
- (id)initialEndDate;	// 0x35b66f0d
- (id)initialStartDate;	// 0x35b66eb1
// converted property getter: - (unsigned)invitationStatus;	// 0x35b674dd
// declared property getter: - (BOOL)isAllDay;	// 0x35b1de01
- (BOOL)isAllDayDirty;	// 0x35b66d55
// declared property getter: - (BOOL)isDetached;	// 0x35b27165
- (BOOL)isDirtyIgnoringCalendar;	// 0x35b66d75
- (BOOL)isEndDateDirty;	// 0x35b66d35
- (BOOL)isEqual:(id)equal;	// 0x35b1e949
- (BOOL)isStartDateDirty;	// 0x35b66d15
- (BOOL)isStatusDirty;	// 0x35b66cf5
- (BOOL)isTentative;	// 0x35b67639
- (BOOL)locationChanged;	// 0x35b6760d
// converted property getter: - (unsigned)modifiedProperties;	// 0x35b67061
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x35b670d9
- (id)occurrenceDate;	// 0x35b270a5
// declared property getter: - (id)occurrenceEndDate;	// 0x35b1f29d
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x35b6ad21
// declared property getter: - (id)occurrenceStartDate;	// 0x35b1e935
// declared property getter: - (id)organizer;	// 0x35b1fd71
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x35b27f2d
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x35b27f55
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x35b27f09
// converted property getter: - (int)participationStatus;	// 0x35b20085
- (int)pendingParticipationStatus;	// 0x35b679fd
// converted property getter: - (id)recurrenceRule;	// 0x35b6738d
- (BOOL)refresh;	// 0x35b67c29
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x35b6a135
- (BOOL)requiresDetach;	// 0x35b2a005
// converted property getter: - (id)responseComment;	// 0x35b674a5
- (BOOL)responseMustApplyToAll;	// 0x35b67989
- (void)revert;	// 0x35b67eed
- (void)rollback;	// 0x35b279d9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x35b27f69
// declared property setter: - (void)setAvailability:(int)availability;	// 0x35b6743d
// declared property setter: - (void)setEndDate:(id)date;	// 0x35b28529
// converted property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x35b67511
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x35b67095
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x35b670fd
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x35b1fa99
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x35b1c1b5
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x35b1c041
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x35b2846d
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x35b26521
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x35b2845d
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x35b67141
// converted property setter: - (void)setRecurrenceRule:(id)rule;	// 0x35b673d9
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x35b674c1
// declared property setter: - (void)setStartDate:(id)date;	// 0x35b28231
- (void)setTimeZone:(id)zone;	// 0x35b26531
- (id)startCalendarDate;	// 0x35b1ddf1
// declared property getter: - (id)startDate;	// 0x35b1f255
- (XXStruct_lQVxyC)startDateGr;	// 0x35b20c51
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x35b66f85
// declared property getter: - (int)status;	// 0x35b1ed9d
- (BOOL)timeChanged;	// 0x35b675b5
- (BOOL)titleChanged;	// 0x35b675e1
- (id)uniqueId;	// 0x35b67a4d
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x35b2a225
@end
