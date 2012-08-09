/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, AccountsManager, ACAccountStore, NSTimer;

@interface ABRefreshController : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	ACAccountStore *_accountStore;	// 8 = 0x8
	double _refreshDelay;	// 12 = 0xc
	NSMutableDictionary *_accountGroupListsToRefreshByObserver;	// 20 = 0x14
	NSMutableDictionary *_contactsFiltersToRefreshByObserver;	// 24 = 0x18
	NSTimer *_refreshTimer;	// 28 = 0x1c
}
@property(readonly, retain) ACAccountStore *accountStore;	// G=0x30fed5b9; converted property
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x30f8e02d; converted property
+ (id)sharedInstance;	// 0x30f91ea5
- (id)init;	// 0x30f91eed
- (BOOL)_acAccountExistsForIdentifier:(id)identifier;	// 0x30fede89
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)addressBook;	// 0x30f8db51
- (void)_addObjectToRefresh:(id)refresh withObserver:(void *)observer toDictionary:(id *)dictionary;	// 0x30fed6e5
- (id)_allContactsSyncingAccounts;	// 0x30fee11d
- (void)_invalidateTimer;	// 0x30fed2fd
- (void)_postponeAllRefreshes;	// 0x30fed821
- (void)_proceedWithRefresh:(id)refresh;	// 0x30fed329
- (void)_refreshACAccountWithIdentifier:(id)identifier isUserRequested:(BOOL)requested;	// 0x30fed889
- (void)_refreshAccount:(id)account isUserRequested:(BOOL)requested;	// 0x30fed9f9
- (void)_refreshAccountGroupList:(id)list isUserRequested:(BOOL)requested;	// 0x30fedcf9
- (void)_refreshGroupListForACAccountWithIdentifier:(id)identifier isUserRequested:(BOOL)requested;	// 0x30fedb89
- (void)_resumeAllRefreshes;	// 0x30fed831
- (void)_scheduleRefreshTimerIfNeeded;	// 0x30fed205
- (void)_setAccountsManager:(id)manager;	// 0x30fed61d
- (void)_setRefreshDelay:(double)delay;	// 0x30fed6b9
// converted property getter: - (id)accountStore;	// 0x30fed5b9
- (void)accountsChanged;	// 0x30fed661
// converted property getter: - (id)accountsManager;	// 0x30f8e02d
- (BOOL)canRefreshAccountIdentifier:(id)identifier;	// 0x30f92d79
- (BOOL)canRefreshContactsFilter:(id)filter;	// 0x30f92ac9
- (BOOL)canRefreshSources:(id)sources;	// 0x30f91f8d
- (void)cancelAllScheduledRefreshesWithObserver:(void *)observer;	// 0x30f9597d
- (void)dealloc;	// 0x30fed12d
- (void)refreshAccountGroupList:(id)list;	// 0x30fee091
- (void)refreshContactsFilter:(id)filter;	// 0x30fedeb9
- (void)refreshEverythingNow;	// 0x30fee275
- (id)refreshableAccountIdentifiersForContactsFilter:(id)contactsFilter;	// 0x30f92af5
- (void)scheduleRefreshForAccountGroupList:(id)accountGroupList withObserver:(void *)observer;	// 0x30fed7b9
- (void)scheduleRefreshForContactsFilter:(id)contactsFilter withObserver:(void *)observer;	// 0x30f92a61
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)addressBook;	// 0x30f95855
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)addressBook afterDelay:(BOOL)delay;	// 0x30f95869
@end
