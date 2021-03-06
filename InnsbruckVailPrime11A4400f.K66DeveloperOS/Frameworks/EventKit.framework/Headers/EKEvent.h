/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"
#import "EventKit-Structs.h"

@class NSURL, EKParticipant, NSNumber, EKEventStore, NSDate, EKCalendarDate, NSString, NSArray;

@interface EKEvent : EKCalendarItem {
	BOOL _occurrenceIsAllDay;	// 52 = 0x34
	BOOL _requiresDetachDueToSnoozedAlarm;	// 53 = 0x35
	EKCalendarDate *_occurrenceStartDate;	// 56 = 0x38
	EKCalendarDate *_occurrenceEndDate;	// 60 = 0x3c
	EKCalendarDate *_originalOccurrenceStartDate;	// 64 = 0x40
	EKCalendarDate *_originalOccurrenceEndDate;	// 68 = 0x44
	NSNumber *_originalOccurrenceIsAllDay;	// 72 = 0x48
	int _attendeeCount;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) NSString *UUID;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x2da8f1e9; S=0x2da98e49; 
@property(readonly, assign, nonatomic) NSArray *attachments;	// G=0x2da95261; 
@property(readonly, assign) int attendeeCount;	// G=0x2daddd4d; @synthesize=_attendeeCount
@property(assign, nonatomic) int availability;	// G=0x2da96bad; S=0x2dada179; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x2da8f1f9; 
@property(readonly, assign, nonatomic) BOOL canBeRespondedTo;	// G=0x2da96699; 
@property(readonly, assign) BOOL canDetachSingleOccurrence;	// G=0x2dada6f5; 
@property(readonly, assign, nonatomic) BOOL canSetAvailability;	// G=0x2da96b61; 
@property(readonly, assign, nonatomic) BOOL dateChanged;	// G=0x2dada2c5; 
@property(readonly, assign) double duration;	// G=0x2dad9be1; 
@property(readonly, assign, nonatomic) EKCalendarDate *endCalendarDate;	// G=0x2da91349; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x2da905c1; S=0x2da99419; 
@property(readonly, assign, nonatomic) XXStruct_lQVxyC endDateGr;	// G=0x2da969e9; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x2da94de5; 
@property(readonly, assign, nonatomic) EKEventStore *eventStore;	// G=0x2da8ff55; 
@property(readonly, assign, nonatomic) NSURL *externalURL;	// G=0x2dad943d; 
@property(readonly, assign) NSDate *initialEndDate;	// G=0x2dad9c99; 
@property(readonly, assign) NSDate *initialStartDate;	// G=0x2dad9c39; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x2dada219; S=0x2dada24d; 
@property(readonly, assign) BOOL isAllDayDirty;	// G=0x2dad95e9; 
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x2da980a9; 
@property(readonly, assign) BOOL isEditable;
@property(readonly, assign) BOOL isEndDateDirty;	// G=0x2dad95c9; 
@property(readonly, assign) BOOL isStartDateDirty;	// G=0x2dad95a9; 
@property(readonly, assign) BOOL isStatusDirty;	// G=0x2dad9589; 
@property(readonly, assign, nonatomic) BOOL locationChanged;	// G=0x2dada349; 
@property(assign) unsigned modifiedProperties;	// G=0x2dad9de5; S=0x2dad9e19; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x2dad9e5d; S=0x2dad9e81; converted property
@property(readonly, assign, nonatomic) NSDate *occurrenceDate;	// G=0x2da97fe9; 
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x2da905e9; S=0x2da90d51; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x2daddd19; S=0x2da8d7c1; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x2da8fc45; S=0x2da8d6c1; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x2da9102d; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x2da98e09; S=0x2da99351; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x2da98e31; S=0x2da97305; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x2da98de5; S=0x2da99341; @synthesize=_originalOccurrenceStartDate
@property(assign, nonatomic) int participationStatus;	// G=0x2da9135d; S=0x2dad9ec5; 
@property(readonly, assign, nonatomic) NSDate *participationStatusModifiedDate;	// G=0x2dada819; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x2dada7f1; 
@property(retain) id recurrenceRule;	// G=0x2dada0c5; S=0x2dada111; converted property
@property(assign, nonatomic) BOOL requiresDetachDueToSnoozedAlarm;	// G=0x2daddd2d; S=0x2daddd3d; @synthesize=_requiresDetachDueToSnoozedAlarm
@property(copy) NSString *responseComment;	// G=0x2dada1e1; S=0x2dada1fd; 
@property(readonly, assign, nonatomic) BOOL responseMustApplyToAll;	// G=0x2dada6cd; 
@property(readonly, assign, nonatomic) EKCalendarDate *startCalendarDate;	// G=0x2da8f1d9; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x2da905a1; S=0x2da99119; 
@property(readonly, assign, nonatomic) XXStruct_lQVxyC startDateGr;	// G=0x2da91f3d; 
@property(readonly, assign, nonatomic) int status;	// G=0x2da900ad; 
@property(readonly, assign, nonatomic) BOOL timeChanged;	// G=0x2dada2f1; 
@property(readonly, assign, nonatomic) BOOL titleChanged;	// G=0x2dada31d; 
@property(readonly, assign, nonatomic) NSString *uniqueId;	// G=0x2dada841; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x2da99981
- (id)init;	// 0x2dad93d5
- (id)initWithEventStore:(id)eventStore;	// 0x2da96d61
- (id)initWithPersistentObject:(id)persistentObject;	// 0x2dad9415
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x2da8d409
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x2dadcead
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x2da9bd41
- (id)_dateForNextOccurrence;	// 0x2dadaff5
- (void)_deleteThisOccurrence;	// 0x2dadc531
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x2dadc38d
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x2dadd251
- (id)_effectiveTimeZone;	// 0x2da99365
- (XXStruct_lQVxyC)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)calendarDate orNSDate:(id)date;	// 0x2da91f99
- (BOOL)_isAllDay;	// 0x2da8d6e9
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x2dadd035
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x2dadbfa1
- (int)_parentParticipationStatus;	// 0x2dada081
- (id)_persistentEvent;	// 0x2da8f225
- (void)_sendModifiedNote;	// 0x2dad96a9
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x2dadc1ed
- (BOOL)_shouldDeclineInsteadOfDelete;	// 0x2dadc2c1
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x2dadb369
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x2da9b931
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x2dadb161
- (BOOL)allowsAlarmModifications;	// 0x2dada899
- (BOOL)allowsCalendarModifications;	// 0x2dada659
- (BOOL)allowsRecurrenceModifications;	// 0x2da98021
// declared property getter: - (id)attachments;	// 0x2da95261
// declared property getter: - (int)attendeeCount;	// 0x2daddd4d
- (id)attendees;	// 0x2da957d9
// declared property getter: - (int)availability;	// 0x2da96bad
// declared property getter: - (int)birthdayPersonID;	// 0x2da8f1f9
// declared property getter: - (BOOL)canBeRespondedTo;	// 0x2da96699
// declared property getter: - (BOOL)canDetachSingleOccurrence;	// 0x2dada6f5
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x2dada419
// declared property getter: - (BOOL)canSetAvailability;	// 0x2da96b61
- (BOOL)changingAllDayPropertyIsAllowed;	// 0x2dada759
- (void)clearInvitationStatus;	// 0x2dada291
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x2da9c0e5
- (id)committedValueForKey:(id)key;	// 0x2da97725
- (int)compareStartDateWithEvent:(id)event;	// 0x2da99825
// declared property getter: - (BOOL)dateChanged;	// 0x2dada2c5
- (void)dealloc;	// 0x2da9447d
- (id)description;	// 0x2dada8e1
- (void)didCommit;	// 0x2daa0081
- (id)dirtyPropertiesToSkip;	// 0x2dadae89
// declared property getter: - (double)duration;	// 0x2dad9be1
// declared property getter: - (id)endCalendarDate;	// 0x2da91349
// declared property getter: - (id)endDate;	// 0x2da905c1
// declared property getter: - (XXStruct_lQVxyC)endDateGr;	// 0x2da969e9
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x2dad9d79
// declared property getter: - (id)eventIdentifier;	// 0x2da94de5
// declared property getter: - (id)eventStore;	// 0x2da8ff55
- (id)exportToICS;	// 0x2dad955d
- (id)externalURI;	// 0x2dad942d
// declared property getter: - (id)externalURL;	// 0x2dad943d
- (BOOL)hasSelfAttendee;	// 0x2dada86d
- (unsigned)hash;	// 0x2da8fbe5
// declared property getter: - (id)initialEndDate;	// 0x2dad9c99
// declared property getter: - (id)initialStartDate;	// 0x2dad9c39
// declared property getter: - (unsigned)invitationStatus;	// 0x2dada219
// declared property getter: - (BOOL)isAllDay;	// 0x2da8f1e9
// declared property getter: - (BOOL)isAllDayDirty;	// 0x2dad95e9
// declared property getter: - (BOOL)isDetached;	// 0x2da980a9
- (BOOL)isDirtyIgnoringCalendar;	// 0x2dad9609
// declared property getter: - (BOOL)isEndDateDirty;	// 0x2dad95c9
- (BOOL)isEqual:(id)equal;	// 0x2da8fc5d
// declared property getter: - (BOOL)isStartDateDirty;	// 0x2dad95a9
// declared property getter: - (BOOL)isStatusDirty;	// 0x2dad9589
- (BOOL)isTentative;	// 0x2dada375
// declared property getter: - (BOOL)locationChanged;	// 0x2dada349
// converted property getter: - (unsigned)modifiedProperties;	// 0x2dad9de5
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x2dad9e5d
// declared property getter: - (id)occurrenceDate;	// 0x2da97fe9
// declared property getter: - (id)occurrenceEndDate;	// 0x2da905e9
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x2daddd19
// declared property getter: - (id)occurrenceStartDate;	// 0x2da8fc45
// declared property getter: - (id)organizer;	// 0x2da9102d
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x2da98e09
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x2da98e31
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x2da98de5
// declared property getter: - (int)participationStatus;	// 0x2da9135d
// declared property getter: - (id)participationStatusModifiedDate;	// 0x2dada819
// declared property getter: - (int)pendingParticipationStatus;	// 0x2dada7f1
// converted property getter: - (id)recurrenceRule;	// 0x2dada0c5
- (BOOL)refresh;	// 0x2dadaa25
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x2dadd119
- (BOOL)requiresDetach;	// 0x2da9adf5
// declared property getter: - (BOOL)requiresDetachDueToSnoozedAlarm;	// 0x2daddd2d
// declared property getter: - (id)responseComment;	// 0x2dada1e1
// declared property getter: - (BOOL)responseMustApplyToAll;	// 0x2dada6cd
- (void)revert;	// 0x2dadaee5
- (void)rollback;	// 0x2da98961
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x2da98e49
// declared property setter: - (void)setAvailability:(int)availability;	// 0x2dada179
// declared property setter: - (void)setEndDate:(id)date;	// 0x2da99419
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x2dada24d
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x2dad9e19
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x2dad9e81
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x2da90d51
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x2da8d7c1
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x2da8d6c1
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x2da99351
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x2da97305
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x2da99341
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x2dad9ec5
// converted property setter: - (void)setRecurrenceRule:(id)rule;	// 0x2dada111
// declared property setter: - (void)setRequiresDetachDueToSnoozedAlarm:(BOOL)snoozedAlarm;	// 0x2daddd3d
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x2dada1fd
// declared property setter: - (void)setStartDate:(id)date;	// 0x2da99119
- (void)setTimeZone:(id)zone;	// 0x2da97315
- (void)snoozeAlarm:(id)alarm withTimeIntervalFromNow:(double)now;	// 0x2dadac99
// declared property getter: - (id)startCalendarDate;	// 0x2da8f1d9
// declared property getter: - (id)startDate;	// 0x2da905a1
// declared property getter: - (XXStruct_lQVxyC)startDateGr;	// 0x2da91f3d
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x2dad9d15
// declared property getter: - (int)status;	// 0x2da900ad
// declared property getter: - (BOOL)timeChanged;	// 0x2dada2f1
- (id)title;	// 0x2dad96ed
// declared property getter: - (BOOL)titleChanged;	// 0x2dada31d
// declared property getter: - (id)uniqueId;	// 0x2dada841
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x2da9b019
@end

