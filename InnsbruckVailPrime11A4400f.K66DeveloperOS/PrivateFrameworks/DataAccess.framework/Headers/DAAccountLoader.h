/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject {
	NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;	// 4 = 0x4
	NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;	// 8 = 0x8
	NSMutableDictionary *_acAccountTypeToClassNames;	// 12 = 0xc
	NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x30814c71
- (id)init;	// 0x30815011
- (void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;	// 0x30814d55
- (BOOL)_loadFrameworkAtSubpath:(id)subpath;	// 0x308154f9
- (Class)accountClassForACAccount:(id)acaccount;	// 0x30815741
- (Class)agentClassForACAccount:(id)acaccount;	// 0x30815ce9
- (Class)clientAccountClassForACAccount:(id)acaccount;	// 0x308158e9
- (Class)daemonAccountClassForACAccount:(id)acaccount;	// 0x30815ad1
- (Class)daemonAppropriateAccountClassForACAccount:(id)acaccount;	// 0x30815e91
- (void)loadDaemonBundleForACAccountType:(id)acaccountType;	// 0x308156ed
- (void)loadFrameworkForACAccountType:(id)acaccountType;	// 0x3081560d
@end

