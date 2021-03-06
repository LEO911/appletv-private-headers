/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	NSURL *_url;	// 44 = 0x2c
	NSSet *_sharees;	// 48 = 0x30
}
@property(retain) NSSet *sharees;	// G=0x335955f5; S=0x33595609; @synthesize=_sharees
@property(retain) NSURL *url;	// G=0x335955d1; S=0x335955e5; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x335952f5
- (id)initWithCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3359533d
- (void)dealloc;	// 0x335953a1
// declared property setter: - (void)setSharees:(id)sharees;	// 0x33595609
// declared property setter: - (void)setUrl:(id)url;	// 0x335955e5
// declared property getter: - (id)sharees;	// 0x335955f5
- (void)startTaskGroup;	// 0x335953f9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33595559
// declared property getter: - (id)url;	// 0x335955d1
@end

