/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSMutableDictionary, NSDate, SSAccount, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *dsid;	// G=0xcfbd; S=0xcfdd; 
@property(retain) NSString *dsidHash;	// G=0xd675; S=0xd689; @synthesize=_dsidHash
@property(readonly, assign) SSAccount *storeServicesAccount;	// G=0xccbd; 
@property(assign) BOOL storeServicesAuthenticated;	// G=0xcad9; S=0xcbc9; converted property
+ (int)_currentVersion;	// 0xc365
- (id)initWithAccountName:(id)accountName;	// 0xc369
- (id)initWithCoder:(id)coder;	// 0xc4a5
- (void).cxx_destruct;	// 0xd699
- (id)_hashDSID:(id)dsid;	// 0xd88d
- (void)_readProtectedInfo:(id)info;	// 0xd42d
- (void)_resetSession;	// 0xca81
- (void)_upgradeToVersion3;	// 0xd6e1
- (void)_writeProtectedInfo:(id)info;	// 0xd311
// declared property getter: - (id)dsid;	// 0xcfbd
// declared property getter: - (id)dsidHash;	// 0xd675
- (BOOL)isAuthenticated;	// 0xca19
- (id)metadataValueForKey:(id)key;	// 0xc5e1
- (void)setAuthDictionary:(id)dictionary;	// 0xd0fd
// declared property setter: - (void)setDsid:(id)dsid;	// 0xcfdd
// declared property setter: - (void)setDsidHash:(id)hash;	// 0xd689
- (void)setLastAuthenticationDate:(id)date;	// 0xd2e9
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0xc7c1
// converted property setter: - (void)setStoreServicesAuthenticated:(BOOL)authenticated;	// 0xcbc9
// declared property getter: - (id)storeServicesAccount;	// 0xccbd
- (id)storeServicesAccountWithAccountName:(id)accountName;	// 0xcdb5
// converted property getter: - (BOOL)storeServicesAuthenticated;	// 0xcad9
- (id)type;	// 0xc9f9
- (void)willBeDeleted;	// 0xd539
@end
