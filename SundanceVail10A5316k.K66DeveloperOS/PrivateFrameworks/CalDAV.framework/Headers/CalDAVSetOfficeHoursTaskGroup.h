/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"

@class ICSDocument, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	NSURL *_inboxURL;	// 44 = 0x2c
	ICSDocument *_calendarAvailability;	// 48 = 0x30
}
@property(retain) ICSDocument *calendarAvailability;	// G=0x36e4f3a5; S=0x36e4f3b9; @synthesize=_calendarAvailability
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSURL *inboxURL;	// G=0x36e4f381; S=0x36e4f395; @synthesize=_inboxURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url calendarAvailability:(id)availability taskManager:(id)manager;	// 0x36e4f129
// declared property getter: - (id)calendarAvailability;	// 0x36e4f3a5
- (void)dealloc;	// 0x36e4f0d1
// declared property getter: - (id)inboxURL;	// 0x36e4f381
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x36e4f33d
// declared property setter: - (void)setCalendarAvailability:(id)availability;	// 0x36e4f3b9
// declared property setter: - (void)setInboxURL:(id)url;	// 0x36e4f395
- (void)startTaskGroup;	// 0x36e4f189
@end

