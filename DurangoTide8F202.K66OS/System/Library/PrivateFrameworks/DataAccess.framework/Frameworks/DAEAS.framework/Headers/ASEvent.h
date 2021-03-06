/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSNumber, NSString, ASRecurrence, ASEventUID, ASTimeZone, NSDate, NSArray;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {
	void *_calRecord;	// 64 = 0x40
	ASTimeZone *_timeZone;	// 68 = 0x44
	NSNumber *_allDayEvent;	// 72 = 0x48
	NSString *_body;	// 76 = 0x4c
	NSNumber *_bodyTruncated;	// 80 = 0x50
	NSNumber *_busyStatus;	// 84 = 0x54
	NSDate *_dTStamp;	// 88 = 0x58
	NSDate *_endTime;	// 92 = 0x5c
	NSString *_location;	// 96 = 0x60
	NSNumber *_meetingStatus;	// 100 = 0x64
	NSString *_organizerEmail;	// 104 = 0x68
	NSString *_organizerName;	// 108 = 0x6c
	NSNumber *_reminderMinsBefore;	// 112 = 0x70
	NSNumber *_sensitivity;	// 116 = 0x74
	NSString *_subject;	// 120 = 0x78
	NSDate *_startTime;	// 124 = 0x7c
	ASEventUID *_eventUID;	// 128 = 0x80
	NSArray *_attendees;	// 132 = 0x84
	NSArray *_attendeesPendingDeletion;	// 136 = 0x88
	ASRecurrence *_recurrence;	// 140 = 0x8c
	NSArray *_exceptions;	// 144 = 0x90
	NSNumber *_responseRequested;	// 148 = 0x94
	int _meetingResponseToEmailAbout;	// 152 = 0x98
	BOOL _calculateNextStatusAsIfMeetingRequest;	// 156 = 0x9c
	BOOL _shouldUpdateStatus;	// 157 = 0x9d
	BOOL _cachedOrganizerIsSelf;	// 158 = 0x9e
	BOOL _haveCheckedOrganizerEmail;	// 159 = 0x9f
	BOOL _isAttendeeUpdateOnly;	// 160 = 0xa0
	BOOL _isDTStampUpdateOnly;	// 161 = 0xa1
	NSNumber *_responseType;	// 164 = 0xa4
}
@property(retain) NSNumber *allDayEvent;	// G=0x32f000cd; S=0x32f002d9; @synthesize=_allDayEvent
@property(retain) NSArray *attendees;	// G=0x32f0021d; S=0x32f00515; @synthesize=_attendees
@property(retain) NSArray *attendeesPendingDeletion;	// G=0x32f00265; S=0x32f00541; @synthesize=_attendeesPendingDeletion
@property(retain) NSString *body;	// G=0x32f000e5; S=0x32ef9655; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x32f000fd; S=0x32f00305; @synthesize=_bodyTruncated
@property(retain) NSNumber *busyStatus;	// G=0x32f00115; S=0x32f00331; @synthesize=_busyStatus
@property(assign) void *calEvent;	// G=0x32ef92dd; S=0x32efd81d; converted property
@property(retain) NSDate *dTStamp;	// G=0x32f0012d; S=0x32f0035d; @synthesize=_dTStamp
@property(retain) NSDate *endTime;	// G=0x32f00145; S=0x32f00389; @synthesize=_endTime
@property(retain) ASEventUID *eventUID;	// G=0x32ef9725; S=0x32ef96a1; @synthesize=_eventUID
@property(retain) id exceptionDate;	// G=0x32ef92ed; S=0x32ef92f1; converted property
@property(retain) NSArray *exceptions;	// G=0x32f0024d; S=0x32efd065; @synthesize=_exceptions
@property(retain) NSString *location;	// G=0x32f0015d; S=0x32f003b5; @synthesize=_location
@property(assign) int meetingResponseForEmail;	// G=0x32efa22d; S=0x32ef92c5; converted property
@property(retain) NSNumber *meetingStatus;	// G=0x32f00175; S=0x32f003e1; @synthesize=_meetingStatus
@property(retain) NSString *organizerEmail;	// G=0x32f0018d; S=0x32f0040d; @synthesize=_organizerEmail
@property(retain) NSString *organizerName;	// G=0x32f001a5; S=0x32f00439; @synthesize=_organizerName
@property(retain) ASRecurrence *recurrence;	// G=0x32f00235; S=0x32ef947d; @synthesize=_recurrence
@property(retain) NSNumber *reminderMinsBefore;	// G=0x32f001bd; S=0x32f00465; @synthesize=_reminderMinsBefore
@property(retain) NSNumber *responseRequested;	// G=0x32f0027d; S=0x32f0056d; @synthesize=_responseRequested
@property(retain) NSNumber *responseType;	// G=0x32f00295; S=0x32f00599; @synthesize=_responseType
@property(retain) NSNumber *sensitivity;	// G=0x32f001d5; S=0x32f00491; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x32f00205; S=0x32f004e9; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x32f001ed; S=0x32f004bd; @synthesize=_subject
@property(retain) ASTimeZone *timeZone;	// G=0x32f000b5; S=0x32f002ad; @synthesize=_timeZone
+ (void)_setFakeDTStampDateForUnitTests:(id)unitTests;	// 0x32ef985d
+ (BOOL)acceptsTopLevelLeaves;	// 0x32efa7b9
+ (id)eventWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x32efa41d
+ (BOOL)frontingBasicTypes;	// 0x32efa6e1
+ (BOOL)notifyOfUnknownTokens;	// 0x32efa699
+ (BOOL)parsingLeafNode;	// 0x32efa771
+ (BOOL)parsingWithSubItems;	// 0x32efa729
+ (void)setSystemTimeZoneNameForUnitTests:(id)unitTests;	// 0x32efa801
- (id)init;	// 0x32efb1d9
- (id)initWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x32efb135
- (id)initWithCoder:(id)coder;	// 0x32efabf9
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x32ef92d5
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x32efefc1
- (void)_loadAttributesFromCalEvent:(void *)calEvent forAccount:(id)account;	// 0x32efc4dd
- (int)_meetingResponseShouldFilterForEmail:(BOOL)_meetingResponse;	// 0x32efcfc5
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x32efa271
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x32efa2b5
- (int)_nextEventStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x32efa309
- (int)_nextEventStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x32efa349
- (void)_sanitizeLocalExceptionsForAccount:(id)account;	// 0x32efec29
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)event account:(id)account;	// 0x32efbfed
- (id)_transformedEndDateForActiveSync:(id)activeSync;	// 0x32efa4d9
- (id)_transformedEndDateForCalFramework:(id)calFramework startDate:(id)date;	// 0x32efa5a1
- (id)_transformedStartDateForActiveSync:(id)activeSync;	// 0x32efa551
- (id)_transformedStartDateForCalFramework:(id)calFramework;	// 0x32efa65d
// declared property getter: - (id)allDayEvent;	// 0x32f000cd
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x32eff1ed
- (id)asParseRules;	// 0x32efb23d
// declared property getter: - (id)attendees;	// 0x32f0021d
// declared property getter: - (id)attendeesPendingDeletion;	// 0x32f00265
// declared property getter: - (id)body;	// 0x32f000e5
// declared property getter: - (id)bodyTruncated;	// 0x32f000fd
// declared property getter: - (id)busyStatus;	// 0x32f00115
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x32ef9615
- (int)calAttendeePendingStatus;	// 0x32efcf7d
- (int)calAttendeeStatus;	// 0x32efcf4d
// converted property getter: - (void *)calEvent;	// 0x32ef92dd
- (int)calEventStatus;	// 0x32efcfad
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x32efc35d
// declared property getter: - (id)dTStamp;	// 0x32f0012d
- (int)dataclass;	// 0x32ef92c1
- (void)dealloc;	// 0x32efb739
- (BOOL)deleteFromCalendar;	// 0x32eff125
- (BOOL)deleteFromContainer:(void *)container;	// 0x32ef950d
- (id)description;	// 0x32efa391
- (void)encodeWithCoder:(id)coder;	// 0x32efa885
- (id)endDateForCalFramework;	// 0x32ef9775
// declared property getter: - (id)endTime;	// 0x32f00145
- (id)eventByMergingInEvent:(id)event account:(id)account;	// 0x32ef94d5
- (id)eventByMergingInLosingEvent:(id)losingEvent account:(id)account;	// 0x32efd135
// declared property getter: - (id)eventUID;	// 0x32ef9725
// converted property getter: - (id)exceptionDate;	// 0x32ef92ed
// declared property getter: - (id)exceptions;	// 0x32f0024d
- (id)fullOrganizerString;	// 0x32ef95d1
- (BOOL)hasOccurrenceInTheFuture;	// 0x32effdf1
- (void)informExceptionsThatParentIsReadyForAccount:(id)account;	// 0x32efd919
- (BOOL)isEqualToEvent:(id)event;	// 0x32efba3d
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x32effae9
- (void)loadClientIDs;	// 0x32efd715
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x32ef953d
// declared property getter: - (id)location;	// 0x32f0015d
- (int)meetingResponse;	// 0x32efa259
// converted property getter: - (int)meetingResponseForEmail;	// 0x32efa22d
// declared property getter: - (id)meetingStatus;	// 0x32f00175
// declared property getter: - (id)organizerEmail;	// 0x32f0018d
// declared property getter: - (id)organizerName;	// 0x32f001a5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32efb085
- (void)postProcessApplicationData;	// 0x32ef9895
- (BOOL)purgeAttendeesPendingDeletion;	// 0x32effc61
// declared property getter: - (id)recurrence;	// 0x32f00235
// declared property getter: - (id)reminderMinsBefore;	// 0x32f001bd
// declared property getter: - (id)responseRequested;	// 0x32f0027d
// declared property getter: - (id)responseType;	// 0x32f00295
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32ef9569
- (BOOL)saveDetachedEventsWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32efd9cd
- (BOOL)saveServerIDToCalendar;	// 0x32efd031
- (BOOL)saveServerIDToExistingItem;	// 0x32ef9525
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32efdac5
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x32ef959d
// declared property getter: - (id)sensitivity;	// 0x32f001d5
// declared property setter: - (void)setAllDayEvent:(id)event;	// 0x32f002d9
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x32f00515
// declared property setter: - (void)setAttendeesPendingDeletion:(id)deletion;	// 0x32f00541
// declared property setter: - (void)setBody:(id)body;	// 0x32ef9655
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x32f00305
// declared property setter: - (void)setBusyStatus:(id)status;	// 0x32f00331
// converted property setter: - (void)setCalEvent:(void *)event;	// 0x32efd81d
- (void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)request;	// 0x32ef92f5
// declared property setter: - (void)setDTStamp:(id)stamp;	// 0x32f0035d
// declared property setter: - (void)setEndTime:(id)time;	// 0x32f00389
// declared property setter: - (void)setEventUID:(id)uid;	// 0x32ef96a1
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x32ef92f1
// declared property setter: - (void)setExceptions:(id)exceptions;	// 0x32efd065
- (void)setLocalItem:(void *)item;	// 0x32ef9555
// declared property setter: - (void)setLocation:(id)location;	// 0x32f003b5
// converted property setter: - (void)setMeetingResponseForEmail:(int)email;	// 0x32ef92c5
// declared property setter: - (void)setMeetingStatus:(id)status;	// 0x32f003e1
// declared property setter: - (void)setOrganizerEmail:(id)email;	// 0x32f0040d
// declared property setter: - (void)setOrganizerName:(id)name;	// 0x32f00439
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x32ef947d
// declared property setter: - (void)setReminderMinsBefore:(id)before;	// 0x32f00465
// declared property setter: - (void)setResponseRequested:(id)requested;	// 0x32f0056d
// declared property setter: - (void)setResponseType:(id)type;	// 0x32f00599
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x32f00491
- (void)setShouldUpdateStatus:(BOOL)updateStatus;	// 0x32ef9305
// declared property setter: - (void)setStartTime:(id)time;	// 0x32f004e9
// declared property setter: - (void)setSubject:(id)subject;	// 0x32f004bd
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x32f002ad
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x32ef92d9
- (id)startDateForCalFramework;	// 0x32ef9801
// declared property getter: - (id)startTime;	// 0x32f00205
// declared property getter: - (id)subject;	// 0x32f001ed
// declared property getter: - (id)timeZone;	// 0x32f000b5
- (id)timeZoneNameForCalFramework;	// 0x32efa461
- (id)uidForCalFramework;	// 0x32ef9755
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x32efb915
- (BOOL)verifyExternalIds;	// 0x32eff96d
@end

