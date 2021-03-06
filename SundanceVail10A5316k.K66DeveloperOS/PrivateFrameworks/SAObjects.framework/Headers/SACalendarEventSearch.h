/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString, NSArray, NSURL, NSDate;

@interface SACalendarEventSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *endDate;	// G=0x32f30441; S=0x32f3045d; 
@property(copy, nonatomic) NSURL *eventId;	// G=0x32f304ad; S=0x32f30529; 
@property(retain, nonatomic) NSNumber *limit;	// G=0x32f30589; S=0x32f305a5; 
@property(copy, nonatomic) NSString *location;	// G=0x32f305c1; S=0x32f305dd; 
@property(copy, nonatomic) NSString *notes;	// G=0x32f3062d; S=0x32f30649; 
@property(copy, nonatomic) NSArray *participants;	// G=0x32f30699; S=0x32f306b5; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x32f30705; S=0x32f30721; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f30365; S=0x32f303e1; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x32f30771; S=0x32f3078d; 
@property(copy, nonatomic) NSString *title;	// G=0x32f307dd; S=0x32f307f9; 
+ (id)eventSearch;	// 0x32f302d5
+ (id)eventSearchWithDictionary:(id)dictionary context:(id)context;	// 0x32f30319
- (id)encodedClassName;	// 0x32f302c9
// declared property getter: - (id)endDate;	// 0x32f30441
// declared property getter: - (id)eventId;	// 0x32f304ad
- (id)groupIdentifier;	// 0x32f302b9
// declared property getter: - (id)limit;	// 0x32f30589
// declared property getter: - (id)location;	// 0x32f305c1
// declared property getter: - (id)notes;	// 0x32f3062d
// declared property getter: - (id)participants;	// 0x32f30699
- (BOOL)requiresResponse;	// 0x32f30849
// declared property setter: - (void)setEndDate:(id)date;	// 0x32f3045d
// declared property setter: - (void)setEventId:(id)anId;	// 0x32f30529
// declared property setter: - (void)setLimit:(id)limit;	// 0x32f305a5
// declared property setter: - (void)setLocation:(id)location;	// 0x32f305dd
// declared property setter: - (void)setNotes:(id)notes;	// 0x32f30649
// declared property setter: - (void)setParticipants:(id)participants;	// 0x32f306b5
// declared property setter: - (void)setStartDate:(id)date;	// 0x32f30721
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f303e1
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x32f3078d
// declared property setter: - (void)setTitle:(id)title;	// 0x32f307f9
// declared property getter: - (id)startDate;	// 0x32f30705
// declared property getter: - (id)targetAppId;	// 0x32f30365
// declared property getter: - (id)timeZoneId;	// 0x32f30771
// declared property getter: - (id)title;	// 0x32f307dd
@end

