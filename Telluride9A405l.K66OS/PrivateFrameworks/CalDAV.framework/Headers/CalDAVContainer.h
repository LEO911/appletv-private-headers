/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainer.h> // Unknown library

@class ICSDuration, NSURL, NSSet, NSString, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {
	NSString *_calendarDescription;	// 76 = 0x4c
	NSString *_ctag;	// 80 = 0x50
	NSString *_calendarColor;	// 84 = 0x54
	NSString *_calendarOrder;	// 88 = 0x58
	NSString *_xmppURI;	// 92 = 0x5c
	NSString *_xmppServer;	// 96 = 0x60
	NSSet *_supportedCalendarComponentSet;	// 100 = 0x64
	BOOL _subscribedStripAlarms;	// 104 = 0x68
	BOOL _subscribedStripTodos;	// 105 = 0x69
	BOOL _subscribedStripAttachments;	// 106 = 0x6a
	ICSDuration *_subscribedRefreshRate;	// 108 = 0x6c
	NSURL *_publishURL;	// 112 = 0x70
	BOOL _isScheduleTransparent;	// 116 = 0x74
	NSTimeZone *_timeZone;	// 120 = 0x78
	BOOL _canBePublished;	// 124 = 0x7c
	NSURL *_source;	// 128 = 0x80
	NSSet *_freeBusySet;	// 132 = 0x84
	NSURL *_scheduleDefaultCalendarURL;	// 136 = 0x88
}
@property(retain) NSString *calendarColor;	// G=0x35156c35; S=0x35156c11; @synthesize=_calendarColor
@property(retain) NSString *calendarDescription;	// G=0x35156bbd; S=0x35156b99; @synthesize=_calendarDescription
@property(retain) NSString *calendarOrder;	// G=0x35156c71; S=0x35156c4d; @synthesize=_calendarOrder
@property(assign) BOOL canBePublished;	// G=0x35156211; S=0x35156221; @synthesize=_canBePublished
@property(retain) NSString *ctag;	// G=0x35156bf9; S=0x35156bd5; @synthesize=_ctag
@property(retain) NSSet *freeBusySet;	// G=0x35156e51; S=0x35156e2d; @synthesize=_freeBusySet
@property(readonly, assign) BOOL isCalendar;	// G=0x351562ed; 
@property(readonly, assign) BOOL isEventContainer;	// G=0x351564ad; 
@property(readonly, assign) BOOL isNotification;	// G=0x351563ad; 
@property(readonly, assign) BOOL isScheduleInbox;	// G=0x3515632d; 
@property(readonly, assign) BOOL isScheduleOutbox;	// G=0x3515636d; 
@property(assign) BOOL isScheduleTransparent;	// G=0x35156231; S=0x35156241; @synthesize=_isScheduleTransparent
@property(readonly, assign) BOOL isShared;	// G=0x3515646d; 
@property(readonly, assign) BOOL isSharedOwner;	// G=0x3515642d; 
@property(readonly, assign) BOOL isSubscribed;	// G=0x351563ed; 
@property(readonly, assign) BOOL isTaskContainer;	// G=0x351564d1; 
@property(retain) NSURL *publishURL;	// G=0x35156d9d; S=0x35156d79; @synthesize=_publishURL
@property(retain) NSURL *scheduleDefaultCalendarURL;	// G=0x35156e8d; S=0x35156e69; @synthesize=_scheduleDefaultCalendarURL
@property(retain) NSURL *source;	// G=0x35156e15; S=0x35156df1; @synthesize=_source
@property(retain) ICSDuration *subscribedRefreshRate;	// G=0x35156d61; S=0x35156d3d; @synthesize=_subscribedRefreshRate
@property(assign) BOOL subscribedStripAlarms;	// G=0x35156291; S=0x351562a1; @synthesize=_subscribedStripAlarms
@property(assign) BOOL subscribedStripAttachments;	// G=0x35156251; S=0x35156261; @synthesize=_subscribedStripAttachments
@property(assign) BOOL subscribedStripTodos;	// G=0x35156271; S=0x35156281; @synthesize=_subscribedStripTodos
@property(retain) NSSet *supportedCalendarComponentSet;	// G=0x35156d25; S=0x35156d01; @synthesize=_supportedCalendarComponentSet
@property(readonly, assign) BOOL supportsFreebusy;	// G=0x351564f5; 
@property(retain) NSTimeZone *timeZone;	// G=0x35156dd9; S=0x35156db5; @synthesize=_timeZone
@property(retain) NSString *xmppServer;	// G=0x35156ce9; S=0x35156cc5; @synthesize=_xmppServer
@property(retain) NSString *xmppURI;	// G=0x35156cad; S=0x35156c89; @synthesize=_xmppURI
+ (id)copyPropertyMappingsForParser;	// 0x35156515
- (BOOL)_isComponentSupportedForString:(id)string;	// 0x351562b1
- (void)_setTimeZoneFromProperties:(id)properties onCalendar:(id)calendar;	// 0x35156ea5
- (void)applyParsedProperties:(id)properties;	// 0x35157101
// declared property getter: - (id)calendarColor;	// 0x35156c35
// declared property getter: - (id)calendarDescription;	// 0x35156bbd
// declared property getter: - (id)calendarOrder;	// 0x35156c71
// declared property getter: - (BOOL)canBePublished;	// 0x35156211
// declared property getter: - (id)ctag;	// 0x35156bf9
- (void)dealloc;	// 0x35156a55
- (id)description;	// 0x351575b9
// declared property getter: - (id)freeBusySet;	// 0x35156e51
// declared property getter: - (BOOL)isCalendar;	// 0x351562ed
// declared property getter: - (BOOL)isEventContainer;	// 0x351564ad
// declared property getter: - (BOOL)isNotification;	// 0x351563ad
// declared property getter: - (BOOL)isScheduleInbox;	// 0x3515632d
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x3515636d
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x35156231
// declared property getter: - (BOOL)isShared;	// 0x3515646d
// declared property getter: - (BOOL)isSharedOwner;	// 0x3515642d
// declared property getter: - (BOOL)isSubscribed;	// 0x351563ed
// declared property getter: - (BOOL)isTaskContainer;	// 0x351564d1
// declared property getter: - (id)publishURL;	// 0x35156d9d
// declared property getter: - (id)scheduleDefaultCalendarURL;	// 0x35156e8d
// declared property setter: - (void)setCalendarColor:(id)color;	// 0x35156c11
// declared property setter: - (void)setCalendarDescription:(id)description;	// 0x35156b99
// declared property setter: - (void)setCalendarOrder:(id)order;	// 0x35156c4d
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x35156221
// declared property setter: - (void)setCtag:(id)ctag;	// 0x35156bd5
// declared property setter: - (void)setFreeBusySet:(id)set;	// 0x35156e2d
// declared property setter: - (void)setIsScheduleTransparent:(BOOL)transparent;	// 0x35156241
// declared property setter: - (void)setPublishURL:(id)url;	// 0x35156d79
// declared property setter: - (void)setScheduleDefaultCalendarURL:(id)url;	// 0x35156e69
// declared property setter: - (void)setSource:(id)source;	// 0x35156df1
// declared property setter: - (void)setSubscribedRefreshRate:(id)rate;	// 0x35156d3d
// declared property setter: - (void)setSubscribedStripAlarms:(BOOL)alarms;	// 0x351562a1
// declared property setter: - (void)setSubscribedStripAttachments:(BOOL)attachments;	// 0x35156261
// declared property setter: - (void)setSubscribedStripTodos:(BOOL)todos;	// 0x35156281
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x35156d01
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x35156db5
// declared property setter: - (void)setXmppServer:(id)server;	// 0x35156cc5
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x35156c89
// declared property getter: - (id)source;	// 0x35156e15
// declared property getter: - (id)subscribedRefreshRate;	// 0x35156d61
// declared property getter: - (BOOL)subscribedStripAlarms;	// 0x35156291
// declared property getter: - (BOOL)subscribedStripAttachments;	// 0x35156251
// declared property getter: - (BOOL)subscribedStripTodos;	// 0x35156271
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x35156d25
// declared property getter: - (BOOL)supportsFreebusy;	// 0x351564f5
// declared property getter: - (id)timeZone;	// 0x35156dd9
// declared property getter: - (id)xmppServer;	// 0x35156ce9
// declared property getter: - (id)xmppURI;	// 0x35156cad
@end
