/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : EKPredicate {
	NSDate *_startDate;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSString *_uuid;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x30c40181; 
@property(readonly, assign, nonatomic) NSString *eventUUID;	// G=0x30c40191; 
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x30c40171; 
@property(readonly, assign, nonatomic) NSTimeZone *timeZone;	// G=0x30c401a1; 
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x30bfbdd5
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x30c40019
- (id)initWithCoder:(id)coder;	// 0x30c4007d
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x30bfbe31
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x30bfbe61
- (id)copyWithZone:(NSZone *)zone;	// 0x30c40335
- (void)dealloc;	// 0x30bfc89d
- (void)encodeWithCoder:(id)coder;	// 0x30bfbfb9
// declared property getter: - (id)endDate;	// 0x30c40181
- (BOOL)evaluateWithObject:(id)object;	// 0x30c401b1
// declared property getter: - (id)eventUUID;	// 0x30c40191
- (BOOL)isEqual:(id)equal;	// 0x30c4044d
- (id)predicateFormat;	// 0x30c40345
// declared property getter: - (id)startDate;	// 0x30c40171
// declared property getter: - (id)timeZone;	// 0x30c401a1
@end

