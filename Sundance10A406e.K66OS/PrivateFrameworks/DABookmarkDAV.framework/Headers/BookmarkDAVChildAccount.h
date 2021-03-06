/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import "BookmarkDAVAccount.h"

@class BasicAccount;

@interface BookmarkDAVChildAccount : BookmarkDAVAccount {
	BasicAccount *_parent;	// 72 = 0x48
}
+ (Class)accountClass;	// 0x32e1b129
+ (Class)clientClass;	// 0x32e1b139
+ (id)supportedDataclasses;	// 0x32e1b155
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x32e1abf1
- (id)accountPropertyForKey:(id)key;	// 0x32e1b071
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x32e1acc9
- (void)dealloc;	// 0x32e1b0dd
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x32e1b191
- (BOOL)isChildAccount;	// 0x32e1ac49
- (BOOL)isDisabled;	// 0x32e1b18d
- (id)localizedInvalidPasswordMessage;	// 0x32e1b1cd
- (id)password;	// 0x32e1ac85
- (id)persistentUUID;	// 0x32e1b19d
- (void)removeAccountPropertyForKey:(id)key;	// 0x32e1b025
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x32e1aca5
- (void)saveAccountProperties;	// 0x32e1aea1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x32e1ada9
- (id)scheduleIdentifier;	// 0x32e1b1ad
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32e1af11
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x32e1acc5
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32e1b181
- (id)username;	// 0x32e1ac4d
@end

