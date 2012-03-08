/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentParticipant.h"
#import "EventKit-Structs.h"


@interface EKPersistentAttendee : EKPersistentParticipant {
}
@property(retain) id owner;	// G=0x30c6366d; S=0x30c63651; converted property
@property(assign, nonatomic) int participantRole;	// G=0x30c635a9; S=0x30c635c5; 
@property(assign, nonatomic) int participantStatus;	// G=0x30c63449; S=0x30c63499; 
@property(assign, nonatomic) int participantType;	// G=0x30c635e1; S=0x30c635fd; 
@property(assign, nonatomic) int pendingStatus;	// G=0x30c63619; S=0x30c63635; 
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30c63101
+ (id)attendeeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x30c630b9
+ (id)relations;	// 0x30c63029
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30c63141
- (id)initWithExternalID:(id)externalID name:(id)name;	// 0x30c631e5
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x30c63189
- (id)copyWithZone:(NSZone *)zone;	// 0x30c63231
- (id)description;	// 0x30c63371
- (int)entityType;	// 0x30c6322d
// converted property getter: - (id)owner;	// 0x30c6366d
// declared property getter: - (int)participantRole;	// 0x30c635a9
// declared property getter: - (int)participantStatus;	// 0x30c63449
// declared property getter: - (int)participantType;	// 0x30c635e1
// declared property getter: - (int)pendingStatus;	// 0x30c63619
// converted property setter: - (void)setOwner:(id)owner;	// 0x30c63651
// declared property setter: - (void)setParticipantRole:(int)role;	// 0x30c635c5
// declared property setter: - (void)setParticipantStatus:(int)status;	// 0x30c63499
// declared property setter: - (void)setParticipantType:(int)type;	// 0x30c635fd
// declared property setter: - (void)setPendingStatus:(int)status;	// 0x30c63635
@end
