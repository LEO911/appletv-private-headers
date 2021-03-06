/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerSyncTaskGroup.h"


@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	BOOL _isInitialSync;	// 137 = 0x89
}
@property(assign) BOOL isInitialSync;	// G=0x35f568e9; S=0x35f56901; @synthesize=_isInitialSync
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x35f567dd
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x35f56779
- (Class)bulkChangeTaskClass;	// 0x35f568cd
- (id)copyGetTaskWithURL:(id)url;	// 0x35f56889
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x35f5682d
- (id)dataContentType;	// 0x35f568c1
// declared property getter: - (BOOL)isInitialSync;	// 0x35f568e9
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x35f56901
@end

