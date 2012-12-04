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
@property(assign) BOOL isInitialSync;	// G=0x338dded1; S=0x338ddee9; @synthesize=_isInitialSync
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x338dddc5
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x338ddd61
- (Class)bulkChangeTaskClass;	// 0x338ddeb5
- (id)copyGetTaskWithURL:(id)url;	// 0x338dde71
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x338dde15
- (id)dataContentType;	// 0x338ddea9
// declared property getter: - (BOOL)isInitialSync;	// 0x338dded1
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x338ddee9
@end
