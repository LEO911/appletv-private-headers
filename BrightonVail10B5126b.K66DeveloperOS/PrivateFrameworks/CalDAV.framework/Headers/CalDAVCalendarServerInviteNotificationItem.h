/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {
	CoreDAVLeafItem *_uid;	// 28 = 0x1c
	CoreDAVHrefItem *_href;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_inviteStatus;	// 36 = 0x24
	CalDAVCalendarServerAccessItem *_access;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_hostURL;	// 44 = 0x2c
	CalDAVCalendarServerOrganizerItem *_organizer;	// 48 = 0x30
	CoreDAVLeafItem *_summary;	// 52 = 0x34
	CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;	// 56 = 0x38
}
@property(retain) CalDAVCalendarServerAccessItem *access;	// G=0x335956d9; S=0x335956ed; @synthesize=_access
@property(retain) CoreDAVItemWithHrefChildItem *hostURL;	// G=0x335956fd; S=0x33595711; @synthesize=_hostURL
@property(retain) CoreDAVHrefItem *href;	// G=0x33595691; S=0x335956a5; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *inviteStatus;	// G=0x335956b5; S=0x335956c9; @synthesize=_inviteStatus
@property(retain) CalDAVCalendarServerOrganizerItem *organizer;	// G=0x33595721; S=0x33595735; @synthesize=_organizer
@property(retain) CoreDAVLeafItem *summary;	// G=0x33595745; S=0x33595759; @synthesize=_summary
@property(retain) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;	// G=0x33595769; S=0x3359577d; @synthesize=_supportedCalendarComponentSet
@property(retain) CoreDAVLeafItem *uid;	// G=0x3359566d; S=0x33595681; @synthesize=_uid
- (id)init;	// 0x33594c85
- (id)initForReplyWithUID:(id)uid href:(id)href hostURL:(id)url summary:(id)summary;	// 0x33594cb1
// declared property getter: - (id)access;	// 0x335956d9
- (id)copyParseRules;	// 0x33594fd9
- (void)dealloc;	// 0x33594edd
- (id)description;	// 0x33594fad
// declared property getter: - (id)hostURL;	// 0x335956fd
// declared property getter: - (id)href;	// 0x33595691
// declared property getter: - (id)inviteStatus;	// 0x335956b5
- (BOOL)isComponentSupportedForString:(id)string;	// 0x33595619
// declared property getter: - (id)organizer;	// 0x33595721
// declared property setter: - (void)setAccess:(id)access;	// 0x335956ed
// declared property setter: - (void)setHostURL:(id)url;	// 0x33595711
// declared property setter: - (void)setHref:(id)href;	// 0x335956a5
// declared property setter: - (void)setInviteStatus:(id)status;	// 0x335956c9
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x33595735
// declared property setter: - (void)setSummary:(id)summary;	// 0x33595759
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x3359577d
// declared property setter: - (void)setUid:(id)uid;	// 0x33595681
// declared property getter: - (id)summary;	// 0x33595745
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x33595769
// declared property getter: - (id)uid;	// 0x3359566d
@end
