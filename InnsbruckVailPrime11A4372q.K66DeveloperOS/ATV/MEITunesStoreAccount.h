/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSMutableDictionary, NSString, NSDate, SSAccount, NSNumber;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *dsid;	// G=0x2afd5; S=0x2aff5; 
@property(retain) NSString *dsidHash;	// G=0x2b71d; S=0x2b731; @synthesize=_dsidHash
@property(readonly, assign) SSAccount *storeServicesAccount;	// G=0x2ac6d; 
@property(assign) BOOL storeServicesAuthenticated;	// G=0x2aa89; S=0x2ab79; converted property
+ (int)_currentVersion;	// 0x2a231
- (id)initWithAccountName:(id)accountName;	// 0x2a235
- (id)initWithCoder:(id)coder;	// 0x2a3e9
- (void).cxx_destruct;	// 0x2b741
- (id)_hashDSID:(id)dsid;	// 0x2b94d
- (void)_readProtectedInfo:(id)info;	// 0x2b4b1
- (void)_resetSession;	// 0x2aa31
- (void)_upgradeToVersion3;	// 0x2b789
- (void)_writeProtectedInfo:(id)info;	// 0x2b369
// declared property getter: - (id)dsid;	// 0x2afd5
// declared property getter: - (id)dsidHash;	// 0x2b71d
- (BOOL)isAuthenticated;	// 0x2a9c9
- (id)metadataValueForKey:(id)key;	// 0x2a525
- (void)setAuthDictionary:(id)dictionary;	// 0x2b11d
// declared property setter: - (void)setDsid:(id)dsid;	// 0x2aff5
// declared property setter: - (void)setDsidHash:(id)hash;	// 0x2b731
- (void)setLastAuthenticationDate:(id)date;	// 0x2b341
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x2a73d
// converted property setter: - (void)setStoreServicesAuthenticated:(BOOL)authenticated;	// 0x2ab79
// declared property getter: - (id)storeServicesAccount;	// 0x2ac6d
- (id)storeServicesAccountWithAccountName:(id)accountName;	// 0x2ad91
// converted property getter: - (BOOL)storeServicesAuthenticated;	// 0x2aa89
- (id)type;	// 0x2a9a9
- (void)willBeDeleted;	// 0x2b5d9
@end

