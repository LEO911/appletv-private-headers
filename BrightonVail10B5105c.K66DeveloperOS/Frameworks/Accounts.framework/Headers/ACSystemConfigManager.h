/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"


@interface ACSystemConfigManager : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
	BOOL _notifyForExternalChangeOnly;	// 8 = 0x8
	int _applySkipCount;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x3418aff9
- (id)init;	// 0x3418b079
- (void)_keepAlive;	// 0x3418b141
- (void)_tearDown;	// 0x3418b1bd
- (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x3418b1f1
- (int)countOfAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x3418b311
- (void)dealloc;	// 0x3418b0d1
- (void *)getValueForKey:(id)key;	// 0x3418b665
- (void)initializeSCPrefs:(id)prefs;	// 0x3418b42d
- (BOOL)lockPrefs;	// 0x3418b679
- (void)notifyTarget:(unsigned)target;	// 0x3418b565
- (void)setAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier exist:(BOOL)exist;	// 0x3418b269
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x3418b775
- (void)setCountOfAccounts:(int)accounts withAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x3418b38d
- (void)setValue:(void *)value forKey:(id)key;	// 0x3418b6dd
- (void)synchronize;	// 0x3418b5a5
- (void)unlockPrefs;	// 0x3418b6c9
@end
