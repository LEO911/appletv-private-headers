/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class NSDate, NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	NSString *_defaultNamingContext;	// 20 = 0x14
	NSDate *_dateConnectionWentOut;	// 24 = 0x18
}
- (id)_copyDefaultNamingContextFromLDAPElement:(ldapmsg *)ldapelement;	// 0x303a382d
- (id)_initializeServer;	// 0x303a32f9
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x303a3d95
- (id)_performQuery;	// 0x303a39b5
- (void)dealloc;	// 0x303a3295
- (void)finishWithError:(id)error;	// 0x303a3d9d
- (int)numDownloadedElements;	// 0x303a3ef9
- (void)performTaskInBackground;	// 0x303a3ced
@end

