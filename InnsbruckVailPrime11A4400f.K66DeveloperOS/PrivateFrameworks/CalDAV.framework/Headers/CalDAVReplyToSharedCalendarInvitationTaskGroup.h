/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import "CoreDAVPostTaskDelegate.h"

@class CalDAVCalendarServerInviteNotificationItem, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	CalDAVCalendarServerInviteNotificationItem *_invitation;	// 44 = 0x2c
	BOOL _acceptInvitation;	// 48 = 0x30
	NSURL *_calendarHomeURL;	// 52 = 0x34
	NSURL *_sharedAs;	// 56 = 0x38
}
@property(assign) BOOL acceptInvitation;	// G=0x302734c9; S=0x302734e1; @synthesize=_acceptInvitation
@property(retain) NSURL *calendarHomeURL;	// G=0x302734f9; S=0x3027350d; @synthesize=_calendarHomeURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CalDAVCalendarServerInviteNotificationItem *invitation;	// G=0x302734a5; S=0x302734b9; @synthesize=_invitation
@property(retain, nonatomic) NSURL *sharedAs;	// G=0x3027351d; S=0x3027352d; @synthesize=_sharedAs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x30272efd
- (id)initWithInvitation:(id)invitation acceptInvitation:(BOOL)invitation2 atCalendarHomeURL:(id)calendarHomeURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x30272f45
// declared property getter: - (BOOL)acceptInvitation;	// 0x302734c9
// declared property getter: - (id)calendarHomeURL;	// 0x302734f9
- (void)dealloc;	// 0x30272fc9
- (id)description;	// 0x30273035
- (id)generateReply;	// 0x3027314d
// declared property getter: - (id)invitation;	// 0x302734a5
// declared property setter: - (void)setAcceptInvitation:(BOOL)invitation;	// 0x302734e1
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x3027350d
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x302734b9
// declared property setter: - (void)setSharedAs:(id)as;	// 0x3027352d
// declared property getter: - (id)sharedAs;	// 0x3027351d
- (void)startTaskGroup;	// 0x30273061
- (void)task:(id)task didFinishWithError:(id)error;	// 0x302733b1
@end
