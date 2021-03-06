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
@property(readonly, retain) ACAccountStore *accountStore;	// G=0x3766a519; converted property
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x3760af25; converted property
+ (id)sharedInstance;	// 0x3760ed9d
- (id)init;	// 0x3760ede5
- (BOOL)_acAccountExistsForIdentifier:(id)identifier;	// 0x3766ade9
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)addressBook;	// 0x3760aa49
- (void)_addObjectToRefresh:(id)refresh withObserver:(void *)observer toDictionary:(id *)dictionary;	// 0x3766a645
- (id)_allContactsSyncingAccounts;	// 0x3766b07d
- (void)_invalidateTimer;	// 0x3766a25d
- (void)_postponeAllRefreshes;	// 0x3766a781
- (void)_proceedWithRefresh:(id)refresh;	// 0x3766a289
- (void)_refreshACAccountWithIdentifier:(id)identifier isUserRequested:(BOOL)requested;	// 0x3766a7e9
- (void)_refreshAccount:(id)account isUserRequested:(BOOL)requested;	// 0x3766a959
- (void)_refreshAccountGroupList:(id)list isUserRequested:(BOOL)requested;	// 0x3766ac59
- (void)_refreshGroupListForACAccountWithIdentifier:(id)identifier isUserRequested:(BOOL)requested;	// 0x3766aae9
- (void)_resumeAllRefreshes;	// 0x3766a791
- (void)_scheduleRefreshTimerIfNeeded;	// 0x3766a165
- (void)_setAccountsManager:(id)manager;	// 0x3766a57d
- (void)_setRefreshDelay:(double)delay;	// 0x3766a619
// converted property getter: - (id)accountStore;	// 0x3766a519
- (void)accountsChanged;	// 0x3766a5c1
// converted property getter: - (id)accountsManager;	// 0x3760af25
- (BOOL)canRefreshAccountIdentifier:(id)identifier;	// 0x3760fc71
- (BOOL)canRefreshContactsFilter:(id)filter;	// 0x3760f9c1
- (BOOL)canRefreshSources:(id)sources;	// 0x3760ee85
- (void)cancelAllScheduledRefreshesWithObserver:(void *)observer;	// 0x37612875
- (void)dealloc;	// 0x3766a08d
- (void)refreshAccountGroupList:(id)list;	// 0x3766aff1
- (void)refreshContactsFilter:(id)filter;	// 0x3766ae19
- (void)refreshEverythingNow;	// 0x3766b1d5
- (id)refreshableAccountIdentifiersForContactsFilter:(id)contactsFilter;	// 0x3760f9ed
- (void)scheduleRefreshForAccountGroupList:(id)accountGroupList withObserver:(void *)observer;	// 0x3766a719
- (void)scheduleRefreshForContactsFilter:(id)contactsFilter withObserver:(void *)observer;	// 0x3760f959
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)addressBook;	// 0x3761274d
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)addressBook afterDelay:(BOOL)delay;	// 0x37612761
@end

