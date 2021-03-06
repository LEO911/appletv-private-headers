/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRAccountType, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRAccount : XXUnknownSuperclass <NSCoding> {
	int _version;	// 4 = 0x4
	NSString *_assignedGUID;	// 8 = 0x8
	NSString *_accountName;	// 12 = 0xc
	BOOL _accountOptionsSet;	// 16 = 0x10
	BOOL _isSystemAccount;	// 17 = 0x11
	NSMutableDictionary *_metadata;	// 20 = 0x14
	NSMutableDictionary *_session;	// 24 = 0x18
	BRAccountType *_accountType;	// 28 = 0x1c
	BOOL _lockedForAuthenticator;	// 32 = 0x20
}
@property(retain) NSString *accountName;	// G=0x36469d; S=0x3646ad; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x364b91; converted property
@property(retain) id type;	// G=0x364629; S=0x364661; converted property
+ (int)_currentVersion;	// 0x365021
- (id)initWithAccountName:(id)accountName;	// 0x363cdd
- (id)initWithCoder:(id)coder;	// 0x363de9
- (id)SSAccount;	// 0x364da5
- (id)_accountQuery;	// 0x364f11
- (id)_assignedGUID;	// 0x352b9d
- (id)_decryptPassword:(id)password;	// 0x365055
- (id)_encryptPassword:(id)password;	// 0x365051
- (BOOL)_isSystemAccount;	// 0x352bb1
- (id)_keychainAccessGroup;	// 0x365025
- (void)_readProtectedInfo:(id)info;	// 0x36504d
- (void)_resetSession;	// 0x365059
- (void)_setVersion:(int)version;	// 0x365039
- (int)_version;	// 0x365029
- (void)_writeProtectedInfo:(id)info;	// 0x365049
// converted property getter: - (id)accountName;	// 0x36469d
// converted property getter: - (BOOL)accountOptionsSet;	// 0x364b91
- (void)acquireAuthenticatorLock;	// 0x364d5d
- (void)dealloc;	// 0x364589
- (void)encodeWithCoder:(id)coder;	// 0x3641a5
- (BOOL)isAuthenticated;	// 0x364b49
- (void)markAccountOptionsAsSet;	// 0x364c75
- (void)markAsDirty;	// 0x364b4d
- (id)metadataValueForKey:(id)key;	// 0x364795
- (void)releaseAuthenticatorLock;	// 0x364d81
- (void)resetAccountOptions;	// 0x364ba1
- (void)resetSession;	// 0x364c99
- (id)sessionValueForKey:(id)key;	// 0x364945
// converted property setter: - (void)setAccountName:(id)name;	// 0x3646ad
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x364861
- (void)setSessionValue:(id)value forKey:(id)key;	// 0x364a11
// converted property setter: - (void)setType:(id)type;	// 0x364661
// converted property getter: - (id)type;	// 0x364629
- (void)willBeDeleted;	// 0x364fd1
@end

