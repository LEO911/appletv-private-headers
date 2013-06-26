/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "WebBookmarksXPCConnectionDelegate.h"
#import </libobjc.A.h>

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {
	WebBookmarksXPCConnection *_connection;	// 4 = 0x4
}
- (id)init;	// 0x32e63fbd
- (void)_clearConnection;	// 0x32e640c9
- (void)connection:(id)connection didCloseWithError:(id)error;	// 0x32e6407d
- (void)dealloc;	// 0x32e6403d
- (void)deleteAllSafariSecurityOrigins;	// 0x32e6446d
- (void)deleteSafariPersistentURLCacheStorage;	// 0x32e6453d
- (void)deleteSafariSecurityOrigin:(id)origin;	// 0x32e644b9
- (void)getCellularReadingListAllowedWithCompletion:(id)completion;	// 0x32e64105
- (void)getSafariWebDataUsageWithCompletion:(id)completion;	// 0x32e64239
- (void)setCellularReadingListAllowed:(BOOL)allowed;	// 0x32e641c5
@end
