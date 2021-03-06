/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty {
}
@property(retain) NSString *x_calendarserver_attendee_ref;	// G=0x33c53825; S=0x33c53805; 
@property(retain) ICSDateValue *x_calendarserver_dtstamp;	// G=0x33c53865; S=0x33c53845; 
- (id)initWithComment:(id)comment;	// 0x33c537c1
- (void)setComment:(id)comment;	// 0x33c537f1
// declared property setter: - (void)setX_calendarserver_attendee_ref:(id)ref;	// 0x33c53805
// declared property setter: - (void)setX_calendarserver_dtstamp:(id)dtstamp;	// 0x33c53845
// declared property getter: - (id)x_calendarserver_attendee_ref;	// 0x33c53825
// declared property getter: - (id)x_calendarserver_dtstamp;	// 0x33c53865
@end

