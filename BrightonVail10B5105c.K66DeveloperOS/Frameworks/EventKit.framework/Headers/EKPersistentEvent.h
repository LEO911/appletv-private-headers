/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentCalendarItem.h"

@class NSString, NSURL, NSDate;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;	// 28 = 0x1c
}
@property(copy, nonatomic) NSURL *URL;	// G=0x35b2549d; S=0x35b93b01; 
@property(retain) id actions;	// G=0x35b940b5; S=0x35b940e9; converted property
@property(assign, nonatomic) int availability;	// G=0x35b25d3d; S=0x35b93e6d; 
@property(readonly, assign, nonatomic) int birthdayID;	// G=0x35b1de49; 
@property(readonly, assign, nonatomic) double duration;	// G=0x35b93b3d; 
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;	// G=0x35b1f4b9; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x35b94165; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x35b1f37d; S=0x35b2dcb9; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x35b23e05; 
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;	// G=0x35b26501; 
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;	// G=0x35b259d1; 
@property(readonly, assign, nonatomic) unsigned invitationChangedProperties;	// G=0x35b93e51; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x35b93e19; S=0x35b93e35; 
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;	// G=0x35b93ba5; 
@property(assign, nonatomic) unsigned modifiedProperties;	// G=0x35b93c01; S=0x35b93c1d; 
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;	// G=0x35b93c39; S=0x35b93c59; 
@property(copy, nonatomic) NSDate *originalStartDate;	// G=0x35b93ef9; S=0x35b93f15; 
@property(assign, nonatomic) int participationStatus;	// G=0x35b93c75; S=0x35b93ca5; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x35b93cd9; 
@property(assign, nonatomic) unsigned privacyLevel;	// G=0x35b93e89; S=0x35b93ea5; 
@property(copy, nonatomic) NSString *responseComment;	// G=0x35b93ec1; S=0x35b93edd; 
@property(assign, nonatomic) int status;	// G=0x35b1edc5; S=0x35b93be5; 
+ (id)defaultPropertiesToLoad;	// 0x35b1b941
+ (id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;	// 0x35b2ecd1
+ (id)relations;	// 0x35b1ba55
- (id)initCommon;	// 0x35b1b8e9
// declared property getter: - (id)URL;	// 0x35b2549d
- (void)_adjustForNewCalendar;	// 0x35b2e74d
- (BOOL)_areDurationUnitsCached;	// 0x35b1f5f5
- (BOOL)_hasExternalIDOrDeliverySource;	// 0x35b9407d
- (void)_invalidateCachedDurationUnits;	// 0x35b1b92d
// converted property getter: - (id)actions;	// 0x35b940b5
- (void)addAction:(id)action;	// 0x35b9412d
- (BOOL)allowsParticipationStatusModifications;	// 0x35b257f9
// declared property getter: - (int)availability;	// 0x35b25d3d
// declared property getter: - (int)birthdayID;	// 0x35b1de49
- (int)birthdayId;	// 0x35b93d09
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;	// 0x35b2dcd5
- (id)committedStartDate;	// 0x35b93f31
- (id)copyWithZone:(NSZone *)zone;	// 0x35b94979
- (void)dealloc;	// 0x35b274cd
- (void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;	// 0x35b94361
- (id)description;	// 0x35b941d1
- (id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x35b94b79
// declared property getter: - (double)duration;	// 0x35b93b3d
// declared property getter: - (XXStruct_mY3THC)durationUnits;	// 0x35b1f4b9
// declared property getter: - (id)endDate;	// 0x35b1f37d
- (int)entityType;	// 0x35b264a5
// declared property getter: - (id)eventIdentifier;	// 0x35b23e05
- (id)exportToICS;	// 0x35b93a3d
- (void)filterExceptionDates;	// 0x35b95671
- (BOOL)hasValidEventAction;	// 0x35b93f99
// declared property getter: - (unsigned)invitationChangedProperties;	// 0x35b93e51
// declared property getter: - (unsigned)invitationStatus;	// 0x35b93e19
// declared property getter: - (BOOL)isEditable;	// 0x35b94165
// declared property getter: - (BOOL)isFloating;	// 0x35b26501
// declared property getter: - (BOOL)isInvitation;	// 0x35b259d1
// declared property getter: - (BOOL)isMeeting;	// 0x35b93ba5
// declared property getter: - (unsigned)modifiedProperties;	// 0x35b93c01
// declared property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x35b93c39
- (id)organizer;	// 0x35b1fde1
// declared property getter: - (id)originalStartDate;	// 0x35b93ef9
// declared property getter: - (int)participationStatus;	// 0x35b93c75
// declared property getter: - (int)pendingParticipationStatus;	// 0x35b93cd9
- (void)primitiveValueChangedForKey:(id)key;	// 0x35b26299
// declared property getter: - (unsigned)privacyLevel;	// 0x35b93e89
- (BOOL)refresh;	// 0x35b304e5
- (void)removeAction:(id)action;	// 0x35b94149
// declared property getter: - (id)responseComment;	// 0x35b93ec1
- (BOOL)responseMustApplyToAll;	// 0x35b93d25
// converted property setter: - (void)setActions:(id)actions;	// 0x35b940e9
// declared property setter: - (void)setAvailability:(int)availability;	// 0x35b93e6d
// declared property setter: - (void)setEndDate:(id)date;	// 0x35b2dcb9
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x35b93e35
// declared property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x35b93c1d
// declared property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x35b93c59
// declared property setter: - (void)setOriginalStartDate:(id)date;	// 0x35b93f15
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x35b93ca5
// declared property setter: - (void)setPrivacyLevel:(unsigned)level;	// 0x35b93ea5
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x35b93edd
// declared property setter: - (void)setStatus:(int)status;	// 0x35b93be5
// declared property setter: - (void)setURL:(id)url;	// 0x35b93b01
// declared property getter: - (int)status;	// 0x35b1edc5
- (BOOL)validate:(id *)validate;	// 0x35b2e295
@end

