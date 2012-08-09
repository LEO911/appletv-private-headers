/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, BRAccountType;

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
@property(retain) NSString *accountName;	// G=0x34f285; S=0x34f295; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x34f779; converted property
@property(retain) id type;	// G=0x34f211; S=0x34f249; converted property
+ (int)_currentVersion;	// 0x34fc09
- (id)initWithAccountName:(id)accountName;	// 0x34e8c5
- (id)initWithCoder:(id)coder;	// 0x34e9d1
- (id)SSAccount;	// 0x34f98d
- (id)_accountQuery;	// 0x34faf9
- (id)_assignedGUID;	// 0x33eb31
- (id)_decryptPassword:(id)password;	// 0x34fc3d
- (id)_encryptPassword:(id)password;	// 0x34fc39
- (BOOL)_isSystemAccount;	// 0x33eb45
- (id)_keychainAccessGroup;	// 0x34fc0d
- (void)_readProtectedInfo:(id)info;	// 0x34fc35
- (void)_resetSession;	// 0x34fc41
- (void)_setVersion:(int)version;	// 0x34fc21
- (int)_version;	// 0x34fc11
- (void)_writeProtectedInfo:(id)info;	// 0x34fc31
// converted property getter: - (id)accountName;	// 0x34f285
// converted property getter: - (BOOL)accountOptionsSet;	// 0x34f779
- (void)acquireAuthenticatorLock;	// 0x34f945
- (void)dealloc;	// 0x34f171
- (void)encodeWithCoder:(id)coder;	// 0x34ed8d
- (BOOL)isAuthenticated;	// 0x34f731
- (void)markAccountOptionsAsSet;	// 0x34f85d
- (void)markAsDirty;	// 0x34f735
- (id)metadataValueForKey:(id)key;	// 0x34f37d
- (void)releaseAuthenticatorLock;	// 0x34f969
- (void)resetAccountOptions;	// 0x34f789
- (void)resetSession;	// 0x34f881
- (id)sessionValueForKey:(id)key;	// 0x34f52d
// converted property setter: - (void)setAccountName:(id)name;	// 0x34f295
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x34f449
- (void)setSessionValue:(id)value forKey:(id)key;	// 0x34f5f9
// converted property setter: - (void)setType:(id)type;	// 0x34f249
// converted property getter: - (id)type;	// 0x34f211
- (void)willBeDeleted;	// 0x34fbb9
@end
