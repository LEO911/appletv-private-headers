/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class ICSDateTimeUTCValue, NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}
@property(retain) ICSDateTimeUTCValue *acknowledged;	// G=0x36865bd1; S=0x36865c19; 
@property(assign) int action;	// G=0x36865ac1; S=0x36865b19; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *relatedTo;	// G=0x36865c49; S=0x36865c91; 
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(assign) BOOL x_apple_default_alarm;	// G=0x36865d99; S=0x36865d19; 
@property(assign) BOOL x_apple_local_default_alarm;	// G=0x36865e6d; S=0x36865ded; 
@property(retain) NSString *x_apple_proximity;	// G=0x36865cb1; S=0x36865cf9; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x36865b69; S=0x36865bb1; 
+ (id)ICSStringFromAction:(int)action;	// 0x368658f1
+ (int)actionFromICSString:(id)icsstring;	// 0x3686584d
+ (id)createNoneAlarm;	// 0x368659fd
+ (id)name;	// 0x36865841
+ (id)parseableDocumentFromICS:(id)ics;	// 0x3686593d
// declared property getter: - (id)acknowledged;	// 0x36865bd1
// declared property getter: - (int)action;	// 0x36865ac1
- (void)fixAlarm;	// 0x3683ef65
// declared property getter: - (id)relatedTo;	// 0x36865c49
// declared property setter: - (void)setAcknowledged:(id)acknowledged;	// 0x36865c19
// declared property setter: - (void)setAction:(int)action;	// 0x36865b19
// declared property setter: - (void)setRelatedTo:(id)to;	// 0x36865c91
// declared property setter: - (void)setX_apple_default_alarm:(BOOL)alarm;	// 0x36865d19
// declared property setter: - (void)setX_apple_local_default_alarm:(BOOL)alarm;	// 0x36865ded
// declared property setter: - (void)setX_apple_proximity:(id)proximity;	// 0x36865cf9
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x36865bb1
// declared property getter: - (BOOL)x_apple_default_alarm;	// 0x36865d99
// declared property getter: - (BOOL)x_apple_local_default_alarm;	// 0x36865e6d
// declared property getter: - (id)x_apple_proximity;	// 0x36865cb1
// declared property getter: - (id)x_wr_alarmuid;	// 0x36865b69
@end

