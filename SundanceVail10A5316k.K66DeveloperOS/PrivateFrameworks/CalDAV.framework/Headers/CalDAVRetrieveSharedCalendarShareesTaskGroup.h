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
@property(retain) NSSet *sharees;	// G=0x36e55da9; S=0x36e55dbd; @synthesize=_sharees
@property(retain) NSURL *url;	// G=0x36e55d85; S=0x36e55d99; @synthesize=_url
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x36e55aa9
- (id)initWithCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x36e55af1
- (void)dealloc;	// 0x36e55b55
// declared property setter: - (void)setSharees:(id)sharees;	// 0x36e55dbd
// declared property setter: - (void)setUrl:(id)url;	// 0x36e55d99
// declared property getter: - (id)sharees;	// 0x36e55da9
- (void)startTaskGroup;	// 0x36e55bad
- (void)task:(id)task didFinishWithError:(id)error;	// 0x36e55d0d
// declared property getter: - (id)url;	// 0x36e55d85
@end
