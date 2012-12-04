/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "ASDynamicAccountClassLoader.h"
#import <BasicAccount.h> // Unknown library

@class NSOperationQueue, NSLock, NSString, ACAccountStore, ACAccount, NSArray, NSDictionary;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
	NSString *_cachedPassword;	// 24 = 0x18
	NSString *_cachedToken;	// 28 = 0x1c
	NSString *_cachedCommerceToken;	// 32 = 0x20
	NSString *_cachedFMIPToken;	// 36 = 0x24
	NSOperationQueue *_requesterQueue;	// 40 = 0x28
	NSLock *_tokenLock;	// 44 = 0x2c
	NSLock *_passwordLock;	// 48 = 0x30
	NSLock *_fmipTokenLock;	// 52 = 0x34
	NSString *_appleIDAccountIdentifier;	// 56 = 0x38
	ACAccountStore *_accountStore;	// 60 = 0x3c
	ACAccount *_appleIDAccount;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x35ade8bd; 
@property(readonly, retain) ACAccount *appleIDAccount;	// G=0x35adde09; converted property
@property(readonly, assign, nonatomic) NSString *appleIDAccountIdentifier;	// G=0x35ade175; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x35ade779; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x35ade26d; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x35ade719; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x35ade6e1; 
@property(readonly, assign, nonatomic) NSString *fmipToken;	// G=0x35ade4cd; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x35ade6fd; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x35ade901; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x35ade869; 
@property(copy, nonatomic) NSString *password;	// G=0x35add7bd; S=0x35ae4299; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x35ade6c5; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x35ade735; S=0x35ade795; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x35ade805; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x35ade821; 
@property(readonly, assign, nonatomic) NSString *protocolVersion;	// G=0x35ade6a9; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x35ade9d5; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x35adeac1; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x35adeb29; 
@property(copy, nonatomic) NSString *username;	// G=0x35add70d; S=0x35add72d; 
+ (id)accountTypeString;	// 0x35add495
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x35add039
+ (id)basicAccountProperties;	// 0x35add4c5
+ (id)classicAccountTypeString;	// 0x35add4ad
+ (id)configuredSyncAccountName;	// 0x35ae1ea5
+ (id)dataclassesBoundToPrimaryAccount;	// 0x35ae2011
+ (id)dataclassesBoundToSingleAccount;	// 0x35ae20f9
+ (id)dataclassesBoundToSyncAccount;	// 0x35ae209d
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x35ae1de5
+ (BOOL)isAOSEnabled;	// 0x35ae21c1
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x35ae4241
+ (id)propertiesWhichRequireValidation;	// 0x35ae41f5
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x35ae21e5
+ (id)supportedDataclasses;	// 0x35add4f5
- (id)initWithProperties:(id)properties;	// 0x35add0d5
- (void).cxx_destruct;	// 0x35ae42a9
- (id)_accountStore;	// 0x35add5ad
- (void)_accountStoreChanged:(id)changed;	// 0x35add449
- (id)_createNewAppleIDAccount;	// 0x35add8e5
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x35ae22d9
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x35ae26f1
- (id)_mailChildAccountProperties;	// 0x35ae2559
- (void)_migrateMobileMeMailChildAccount;	// 0x35ae2c25
- (void)_performiCloudMigration;	// 0x35ae2edd
- (BOOL)_removeChildAccountsOfType:(id)type;	// 0x35ae3609
- (BOOL)_removeChildAccountsOfTypes:(id)types;	// 0x35ae3655
- (BOOL)_requestAccessToAppleIDAccount;	// 0x35addbe1
- (void)_setFMIPToken:(id)token;	// 0x35ae24d5
- (void)_setToken:(id)token;	// 0x35ae2435
- (void)_updateAccountRequestWithHandler:(id)handler;	// 0x35adf2dd
- (id)accountFirstDisplayAlert;	// 0x35ae1099
- (id)accountFooterButton;	// 0x35ae1035
- (id)accountFooterText;	// 0x35ae0fd1
// declared property getter: - (int)accountServiceType;	// 0x35ade8bd
- (void)addChildAccount:(id)account;	// 0x35ae37ed
// converted property getter: - (id)appleIDAccount;	// 0x35adde09
// declared property getter: - (id)appleIDAccountIdentifier;	// 0x35ade175
// declared property getter: - (id)appleIDAliases;	// 0x35ade779
// declared property getter: - (id)authToken;	// 0x35ade26d
- (void)authenticateWithHandler:(id)handler;	// 0x35adf4d9
- (BOOL)becomeConfiguredSyncAccount;	// 0x35ae1f2d
- (void)cancelNetworkActivity;	// 0x35adfb45
- (void)configureAppleIDCerts;	// 0x35ae2a69
// declared property getter: - (id)dataclassProperties;	// 0x35ade719
- (void)dealloc;	// 0x35add515
- (id)description;	// 0x35add605
- (id)displayName;	// 0x35add695
// declared property getter: - (id)firstName;	// 0x35ade6e1
- (BOOL)fixPartialiCloudMigration;	// 0x35ae2c7d
- (void)flushCachedPassword;	// 0x35ae0f81
- (void)flushCachedTokens;	// 0x35ae0f31
// declared property getter: - (id)fmipToken;	// 0x35ade4cd
- (BOOL)isConfiguredSyncAccount;	// 0x35ae225d
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x35ade979
// declared property getter: - (id)lastName;	// 0x35ade6fd
- (void)lookupEmailAddresses:(id)addresses withHandler:(id)handler;	// 0x35adf979
// declared property getter: - (int)mobileMeAccountStatus;	// 0x35ade901
- (BOOL)needsEmailConfiguration;	// 0x35ae1581
// declared property getter: - (BOOL)needsRegistration;	// 0x35ade869
- (void)notifyUserOfQuotaDepletion;	// 0x35adfb7d
// declared property getter: - (id)password;	// 0x35add7bd
// declared property getter: - (id)personID;	// 0x35ade6c5
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x35ae0569
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x35ae0115
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x35ae00fd
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x35adfbf1
// declared property getter: - (BOOL)primaryAccount;	// 0x35ade735
// declared property getter: - (id)primaryEmail;	// 0x35ade805
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x35ade821
- (id)propertiesForDataclass:(id)dataclass;	// 0x35ade911
// declared property getter: - (id)protocolVersion;	// 0x35ade6a9
// declared property getter: - (id)provisionedDataclasses;	// 0x35ade9d5
- (void)refreshTokensWithHandler:(id)handler;	// 0x35ae3f29
- (void)registerWithHandler:(id)handler;	// 0x35adef4d
- (void)removeAppleIDAccount;	// 0x35ae3a7d
- (void)removeAppleIDCerts;	// 0x35ae2bad
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x35ae38d5
- (void)removePasswordFromKeychain;	// 0x35ae0da1
- (void)removeTokensFromKeychain;	// 0x35ae0985
- (void)renewCredentialsForAppleIDWithHandler:(id)handler;	// 0x35ae3c4d
- (void)resendVerificationEmail:(id)email;	// 0x35adf825
- (void)saveFMIPTokenInKeychain;	// 0x35ae057d
- (void)savePasswordInKeychain;	// 0x35ae0bd1
- (void)saveTokensInKeychain;	// 0x35ae07a9
// declared property getter: - (BOOL)serviceUnavailable;	// 0x35adeac1
// declared property getter: - (id)serviceUnavailableInfo;	// 0x35adeb29
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x35adea01
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x35ae1d85
// declared property setter: - (void)setPassword:(id)password;	// 0x35ae4299
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x35ade795
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x35adebf9
// declared property setter: - (void)setUsername:(id)username;	// 0x35add72d
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x35ae1649
- (void)signInWithHandler:(id)handler;	// 0x35adecd5
- (id)syncStoreIdentifier;	// 0x35ae1ed9
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x35adef5d
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x35ae10fd
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x35adeb8d
// declared property getter: - (id)username;	// 0x35add70d
- (void)verifyCredentialsForAppleIDWithHandler:(id)handler;	// 0x35ae3db1
@end
