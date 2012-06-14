/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSDictionary *_originalProperties;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	id<AccountFullAccountProtocol> _fullAccount;	// 12 = 0xc
	id<AccountRefreshProtocol> _syncAccount;	// 16 = 0x10
	BasicAccount *_parentAccount;	// 20 = 0x14
}
@property(retain) id accountClass;	// G=0x30927105; S=0x30927125; converted property
@property(retain) id displayName;	// G=0x30927185; S=0x30928fd1; converted property
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0x30926e8d; S=0x309283a1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0x30926e75; S=0x309270a5; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x30926e65; converted property
+ (id)_accountCreationMap;	// 0x309290e5
+ (id)_creatorsInfo;	// 0x30928d89
+ (id)_dataclassesProperties;	// 0x30928e25
+ (BOOL)_isValidAccountType:(id)type;	// 0x30928d41
+ (id)accountWithProperties:(id)properties;	// 0x309276d5
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x30927695
+ (id)allSupportedDataclasses;	// 0x30927721
+ (id)createNewAccountUID;	// 0x309297e9
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x30927a21
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x30927b45
+ (void)initialize;	// 0x30927c0d
+ (BOOL)isMultitaskingEnabled;	// 0x30928359
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x30927ba9
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x3092789d
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x30927a59
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x30927865
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x309279b1
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x30927941
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x30927ae1
- (id)init;	// 0x30926e9d
- (id)initWithProperties:(id)properties;	// 0x309287c1
- (id)_cachedSyncAccount;	// 0x309292b5
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x30929375
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x30928ec1
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x30928eed
- (id)_initWithType:(id)type class:(id)aClass;	// 0x309289b9
- (id)_orderedDataclasses:(id)dataclasses;	// 0x3092912d
- (id)_profileRestrictedDataclasses;	// 0x30928bf1
// converted property getter: - (id)accountClass;	// 0x30927105
- (id)accountPropertyForKey:(id)key;	// 0x30926fc9
- (void)dealloc;	// 0x30928725
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x3092757d
// converted property getter: - (id)displayName;	// 0x30927185
- (id)enabledDataclasses;	// 0x3092734d
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x30929091
- (id)fullAccountUsingLoader:(id)loader;	// 0x309283ed
- (id)identifier;	// 0x30927059
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x30927445
// declared property getter: - (id)originalProperties;	// 0x30926e8d
// converted property getter: - (id)parentAccount;	// 0x30926e75
- (id)parentAccountIdentifier;	// 0x30927079
// converted property getter: - (id)properties;	// 0x30926e65
- (id)propertiesToSave;	// 0x30927029
- (id)provisionedDataclasses;	// 0x30927259
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x30927665
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x309275e1
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x30927641
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x309275a9
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x3092767d
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x30927611
- (void)removeAccountPropertyForKey:(id)key;	// 0x30926fa5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x30926e85
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x30927125
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x30926f29
// converted property setter: - (void)setDisplayName:(id)name;	// 0x30928fd1
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x30927471
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x30928655
- (void)setFullAccount:(id)account;	// 0x30929049
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x309283a1
// converted property setter: - (void)setParentAccount:(id)account;	// 0x309270a5
- (id)shortTypeString;	// 0x309271c5
- (id)supportedDataclasses;	// 0x309271e5
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x309290b9
- (id)syncStoreIdentifier;	// 0x309270e5
- (id)type;	// 0x30927039
- (id)typeString;	// 0x309271a5
@end
