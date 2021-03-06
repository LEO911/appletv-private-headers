/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	NSSet *_notificationTypeNamesToFetch;	// 140 = 0x8c
}
@property(retain) NSSet *notificationTypeNamesToFetch;	// G=0x3359133d; S=0x33591351; @synthesize=_notificationTypeNamesToFetch
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33591135
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x335912c5
- (id)copyGetTaskWithURL:(id)url;	// 0x3359122d
- (void)dealloc;	// 0x335911e1
// declared property getter: - (id)notificationTypeNamesToFetch;	// 0x3359133d
// declared property setter: - (void)setNotificationTypeNamesToFetch:(id)fetch;	// 0x33591351
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x33591265
@end

