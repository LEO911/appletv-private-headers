/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSUserAddress : ICSProperty {
}
@property(retain) NSString *cn;	// G=0x3506ada9; S=0x3506acf9; 
@property(assign) int cutype;	// G=0x3506aebd; S=0x3506ae4d; 
@property(retain) NSString *dir;	// G=0x3506af2d; S=0x3506af0d; 
@property(retain) NSString *email;	// G=0x3506b4d5; S=0x3506b495; 
@property(assign) int partstat;	// G=0x3506afbd; S=0x3506af4d; 
@property(assign) int role;	// G=0x3506b2bd; S=0x3506b24d; 
@property(assign) BOOL rsvp;	// G=0x3506b381; S=0x3506b30d; 
@property(assign) int scheduleagent;	// G=0x3506b13d; S=0x3506b0cd; 
@property(assign) int scheduleforcesend;	// G=0x3506b1fd; S=0x3506b18d; 
@property(assign) int schedulestatus;	// G=0x3506b07d; S=0x3506b00d; 
@property(assign) BOOL x_apple_self_invited;	// G=0x3506b445; S=0x3506b3d1; 
@property(retain) id x_calendarserver_email;	// G=0x3506b52d; S=0x3506b51d; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x3506a62d
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x3506a67d
+ (id)ICSStringFromRole:(int)role;	// 0x3506a7d9
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x3506a701
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x3506a7b5
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x3506a725
+ (id)URLForNoMail;	// 0x3506b57d
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x3506a215
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x3506a2b5
+ (int)roleFromICSString:(id)icsstring;	// 0x3506a58d
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x3506a4f5
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x3506a541
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x3506a3c5
- (id)initWithEmailAddress:(id)emailAddress;	// 0x3506a87d
- (id)initWithURL:(id)url;	// 0x3506a829
// declared property getter: - (id)cn;	// 0x3506ada9
// declared property getter: - (int)cutype;	// 0x3506aebd
// declared property getter: - (id)dir;	// 0x3506af2d
- (id)displayName;	// 0x3506ac11
// declared property getter: - (id)email;	// 0x3506b4d5
- (id)emailAddress;	// 0x3506ab9d
- (void)fixAddress;	// 0x350682e9
- (BOOL)hasEmailAddress;	// 0x3506aa19
- (BOOL)isEmailAddress;	// 0x3506aa59
- (BOOL)isHTTPAddress;	// 0x3506aac5
- (BOOL)isHTTPSAddress;	// 0x3506ab31
// declared property getter: - (int)partstat;	// 0x3506afbd
// declared property getter: - (int)role;	// 0x3506b2bd
// declared property getter: - (BOOL)rsvp;	// 0x3506b381
// declared property getter: - (int)scheduleagent;	// 0x3506b13d
// declared property getter: - (int)scheduleforcesend;	// 0x3506b1fd
// declared property getter: - (int)schedulestatus;	// 0x3506b07d
// declared property setter: - (void)setCn:(id)cn;	// 0x3506acf9
// declared property setter: - (void)setCutype:(int)cutype;	// 0x3506ae4d
// declared property setter: - (void)setDir:(id)dir;	// 0x3506af0d
// declared property setter: - (void)setEmail:(id)email;	// 0x3506b495
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x3506af4d
// declared property setter: - (void)setRole:(int)role;	// 0x3506b24d
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x3506b30d
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x3506b0cd
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x3506b18d
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x3506b00d
- (void)setURL:(id)url;	// 0x3506b53d
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x3506b3d1
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x3506b51d
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x3506b445
// converted property getter: - (id)x_calendarserver_email;	// 0x3506b52d
@end

