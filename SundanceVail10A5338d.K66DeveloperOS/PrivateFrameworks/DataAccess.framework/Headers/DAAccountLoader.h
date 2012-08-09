/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "ASDynamicAccountClassLoader.h"

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject <ASDynamicAccountClassLoader> {
	NSMutableDictionary *_accountTypeToAccountFrameworkSubpath;	// 4 = 0x4
	NSMutableDictionary *_accountTypeToAccountDaemonBundleSubpath;	// 8 = 0x8
	NSMutableDictionary *_accountTypeToClassNames;	// 12 = 0xc
	NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;	// 16 = 0x10
	NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;	// 20 = 0x14
	NSMutableDictionary *_acAccountTypeToClassNames;	// 24 = 0x18
	NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;	// 28 = 0x1c
}
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x30962e0d
+ (id)sharedInstance;	// 0x309616ed
- (id)init;	// 0x30961b51
- (void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;	// 0x30961805
- (BOOL)_loadFrameworkAtSubpath:(id)subpath;	// 0x309620a1
- (Class)accountClassForACAccount:(id)acaccount;	// 0x30962231
- (Class)accountClassForAccountType:(id)accountType;	// 0x309629c1
- (Class)agentClassForACAccount:(id)acaccount;	// 0x30962719
- (Class)agentClassForAccountType:(id)accountType;	// 0x30962cb5
- (Class)clientAccountClassForACAccount:(id)acaccount;	// 0x309623a5
- (Class)clientAccountClassForAccountType:(id)accountType;	// 0x30962a9d
- (Class)daemonAccountClassForACAccount:(id)acaccount;	// 0x30962551
- (Class)daemonAccountClassForAccountType:(id)accountType;	// 0x30962b9d
- (Class)daemonAppropriateAccountClassForACAccount:(id)acaccount;	// 0x3096288d
- (Class)daemonAppropriateAccountClassForAccountType:(id)accountType;	// 0x30962d91
- (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x30962dc9
- (void)loadDaemonBundleForACAccountType:(id)acaccountType;	// 0x309621dd
- (void)loadDaemonBundleForAccountType:(id)accountType;	// 0x30962985
- (void)loadFrameworkForACAccountType:(id)acaccountType;	// 0x30962109
- (void)loadFrameworkForAccountType:(id)accountType;	// 0x309628c5
@end
