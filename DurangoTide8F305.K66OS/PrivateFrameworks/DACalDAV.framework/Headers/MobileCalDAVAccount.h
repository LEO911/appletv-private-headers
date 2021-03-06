/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSMutableSet, CalDAVPrincipalSearchPropertySet, NSDictionary, CalDAVAccount, NSString, CalDAVPrincipal, CalDAVServerVersion, NSDate, NSLock, NSSet, DAVSession, NSTimeZone;
@protocol DAValidityCheckConsumer;

@interface MobileCalDAVAccount : DAAccount {
	CalDAVAccount *_account;	// 64 = 0x40
	CalDAVPrincipal *_principal;	// 68 = 0x44
	int _preferredDaysToSync;	// 72 = 0x48
	NSMutableSet *_calendarUserAddresses;	// 76 = 0x4c
	NSMutableSet *_calendars;	// 80 = 0x50
	NSDictionary *_subscribedCalendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	NSDate *_refreshStartDate;	// 100 = 0x64
	BOOL _isSpinning;	// 104 = 0x68
	id<DAValidityCheckConsumer> _validityConsumer;	// 108 = 0x6c
	NSString *_XMPPServer;	// 112 = 0x70
	NSString *_notificationURLString;	// 116 = 0x74
	NSString *_notificationNodeName;	// 120 = 0x78
	NSString *_notificationServiceName;	// 124 = 0x7c
	BOOL _shouldUpdatePushDelegate;	// 128 = 0x80
	dispatch_queue_s *_searchQueue;	// 132 = 0x84
	NSMutableSet *_runningSearchQueries;	// 136 = 0x88
	NSLock *_searchQuerySetLock;	// 140 = 0x8c
	BOOL _searchQueriesShouldCancel;	// 144 = 0x90
}
@property(retain) NSSet *APSCollectionIDs;	// G=0x3408fe4d; S=0x3408fdb9; 
@property(retain) NSString *APSEnv;	// G=0x3408fff1; S=0x3408ff05; 
@property(retain) NSString *APSRegistrationURL;	// G=0x3408fee9; S=0x3408fe89; 
@property(retain) NSString *APSTopic;	// G=0x3409006d; S=0x3409000d; 
@property(retain) NSString *XMPPServer;	// G=0x340939ad; S=0x34093a35; @synthesize=_XMPPServer
@property(retain) CalDAVAccount *account;	// G=0x3408fa35; S=0x3408f9a1; 
@property(assign) int calDAVAccountVersion;	// G=0x34090781; S=0x34090745; 
@property(retain) NSString *calendarHomePath;	// G=0x340901a1; S=0x340924c1; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x340939f5; S=0x34093ab9; @synthesize=_calendarUserAddresses
@property(readonly, assign) NSSet *calendars;	// G=0x340929fd; 
@property(retain) NSString *collectionSetName;	// G=0x3408fd65; S=0x3408fd49; 
@property(retain) NSString *dropBoxPath;	// G=0x34090115; S=0x340900f9; 
@property(retain) NSString *fullName;	// G=0x3408fd9d; S=0x3408fd81; 
@property(retain) id host;	// G=0x34090515; S=0x34090529; converted property
@property(retain) NSString *inboxPath;	// G=0x34090185; S=0x34090169; 
@property(readonly, assign) BOOL isAutoScheduleSupported;	// G=0x3408f851; 
@property(assign) BOOL isWritable;	// G=0x3408fbf1; S=0x3408fbb1; 
@property(assign) BOOL keepOffline;	// G=0x3408fc91; S=0x3408fc51; 
@property(retain) NSString *notificationCollectionPath;	// G=0x340900a5; S=0x34090089; 
@property(retain) NSString *notificationNodeName;	// G=0x340939c5; S=0x34093a61; @synthesize=_notificationNodeName
@property(retain) NSString *notificationServiceName;	// G=0x340939dd; S=0x34093a8d; @synthesize=_notificationServiceName
@property(retain) NSString *notificationURLString;	// G=0x3408eeed; S=0x340937c5; 
@property(retain) NSString *notificationsPath;	// G=0x340900dd; S=0x340900c1; 
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x34092d1d; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x34092d55; 
@property(retain) NSString *outboxPath;	// G=0x3409014d; S=0x34090131; 
@property(assign) int overriddenPort;	// G=0x34090429; S=0x34090455; 
@property(retain) NSString *overriddenScheme;	// G=0x340903bd; S=0x340903d9; 
@property(retain) NSString *overriddenServer;	// G=0x340904a9; S=0x340904c5; 
@property(assign) int port;	// G=0x3409034d; S=0x34090381; converted property
@property(assign) int preferredDaysToSync;	// G=0x3408eeb9; S=0x3408eec9; 
@property(retain) CalDAVPrincipal *principal;	// G=0x3408f971; S=0x3408f8f1; 
@property(retain) id principalURL;	// G=0x3409023d; S=0x340901bd; converted property
@property(retain) id scheme;	// G=0x340902dd; S=0x34090311; converted property
@property(retain) CalDAVPrincipalSearchPropertySet *searchPropertySet;	// G=0x3408fd0d; S=0x3408fcbd; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x3408ef05; S=0x3408ef15; @synthesize=_searchQueriesShouldCancel
@property(retain) NSString *server;	// G=0x3409053d; S=0x34090571; 
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x3408f875; S=0x340923d9; 
@property(readonly, assign) DAVSession *session;	// G=0x3408f8b1; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRange;	// G=0x3408f80d; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x3408f7c9; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x3408ef25; S=0x34093a0d; @synthesize=_subscribedCalendars
@property(assign) BOOL useSSL;	// G=0x3409025d; S=0x34090289; converted property
@property(retain) id username;	// G=0x340906a5; S=0x340906c5; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x34092d05; 
@property(assign) BOOL wasMigrated;	// G=0x3408fb81; S=0x3408fb3d; 
+ (Class)accountClass;	// 0x340907ed
+ (Class)clientClass;	// 0x340907cd
+ (id)defaultProperties;	// 0x34090845
+ (id)supportedDataclasses;	// 0x340907ad
- (id)init;	// 0x3409080d
- (id)initWithProperties:(id)properties;	// 0x34090e51
// declared property getter: - (id)APSCollectionIDs;	// 0x3408fe4d
// declared property getter: - (id)APSEnv;	// 0x3408fff1
// declared property getter: - (id)APSRegistrationURL;	// 0x3408fee9
// declared property getter: - (id)APSTopic;	// 0x3409006d
- (id)DAVAuthStore;	// 0x3408eee1
// declared property getter: - (id)XMPPServer;	// 0x340939ad
- (void)_markRefreshEnd:(id)end withError:(id)error;	// 0x3409220d
- (void)_markRefreshStart;	// 0x3408f521
- (id)_powerAssertionContext;	// 0x3408eefd
- (id)_powerAssertionGroupIdentifier;	// 0x3408f3a5
- (void)_setSpinning:(BOOL)spinning;	// 0x340931a5
- (void)_updateCalendarStore:(BOOL)store;	// 0x34092f2d
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x34092d8d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x340927c5
// declared property getter: - (id)account;	// 0x3408fa35
- (BOOL)accountNeedsUpgrade;	// 0x340926e9
- (void)addCalendar:(id)calendar;	// 0x3408fa8d
- (void)addCalendarUserAddress:(id)address;	// 0x3408fadd
// declared property getter: - (int)calDAVAccountVersion;	// 0x34090781
// declared property getter: - (id)calendarHomePath;	// 0x340901a1
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x34090c35
// declared property getter: - (id)calendarUserAddresses;	// 0x340939f5
// declared property getter: - (id)calendars;	// 0x340929fd
- (void)cancelAllSearchQueries;	// 0x34093711
- (void)cancelRefresh;	// 0x34092361
- (void)cancelSearchQuery:(id)query;	// 0x3408f4cd
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3408f3b9
// declared property getter: - (id)collectionSetName;	// 0x3408fd65
- (id)cookieHeader;	// 0x3408eed9
- (id)dateToSyncFrom;	// 0x3408f61d
- (id)dateToSyncTo;	// 0x3408f5b5
- (void)davSessionShouldAllowTrustInfo:(id)davSession;	// 0x3408ef35
- (void)dealloc;	// 0x3409146d
// declared property getter: - (id)dropBoxPath;	// 0x34090115
- (void)dropPowerAssertions;	// 0x3408f2f9
// declared property getter: - (id)fullName;	// 0x3408fd9d
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x34090d31
// converted property getter: - (id)host;	// 0x34090515
// declared property getter: - (id)inboxPath;	// 0x34090185
// declared property getter: - (BOOL)isAutoScheduleSupported;	// 0x3408f851
- (BOOL)isCalDAVAccount;	// 0x3408ef01
- (BOOL)isEqualToAccount:(id)account;	// 0x3408f0d1
- (BOOL)isPendingRefresh;	// 0x3408f591
- (BOOL)isRefreshing;	// 0x3408f56d
// declared property getter: - (BOOL)isWritable;	// 0x3408fbf1
// declared property getter: - (BOOL)keepOffline;	// 0x3408fc91
- (int)keychainAccessibilityType;	// 0x340929d9
- (id)localizedIdenticalAccountFailureMessage;	// 0x3408f061
- (id)localizedInvalidPasswordMessage;	// 0x3408efb5
// declared property getter: - (id)notificationCollectionPath;	// 0x340900a5
// declared property getter: - (id)notificationNodeName;	// 0x340939c5
// declared property getter: - (id)notificationServiceName;	// 0x340939dd
// declared property getter: - (id)notificationURLString;	// 0x3408eeed
// declared property getter: - (id)notificationsPath;	// 0x340900dd
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x34092d1d
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x34092d55
// declared property getter: - (id)outboxPath;	// 0x3409014d
// declared property getter: - (int)overriddenPort;	// 0x34090429
// declared property getter: - (id)overriddenScheme;	// 0x340903bd
// declared property getter: - (id)overriddenServer;	// 0x340904a9
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x3409336d
// converted property getter: - (int)port;	// 0x3409034d
// declared property getter: - (int)preferredDaysToSync;	// 0x3408eeb9
// declared property getter: - (id)principal;	// 0x3408f971
// converted property getter: - (id)principalURL;	// 0x3409023d
- (id)properties;	// 0x34090bad
- (void)reattainPowerAssertions;	// 0x3408f2b1
- (void)refreshOperation:(id)operation didCompleteWithError:(id)error;	// 0x34091fb9
- (void)refreshWithContext:(id)context;	// 0x34091dfd
- (void)releasePowerAssertion;	// 0x34091571
- (void)removeCalendar:(id)calendar;	// 0x3408fa65
- (void)removeCalendarUserAddress:(id)address;	// 0x3408fab5
- (void)retainPowerAssertion;	// 0x3408f341
- (void)saveConfiguration;	// 0x3408eea9
// converted property getter: - (id)scheme;	// 0x340902dd
// declared property getter: - (id)searchPropertySet;	// 0x3408fd0d
- (BOOL)searchQueriesRunning;	// 0x3408f479
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x3408ef05
// declared property getter: - (id)server;	// 0x3409053d
- (id)serverBaseURL;	// 0x34090609
// declared property getter: - (id)serverVersion;	// 0x3408f875
// declared property getter: - (id)session;	// 0x3408f8b1
- (id)sessionWithURL:(id)url;	// 0x3408f8d1
// declared property setter: - (void)setAPSCollectionIDs:(id)ids;	// 0x3408fdb9
// declared property setter: - (void)setAPSEnv:(id)env;	// 0x3408ff05
// declared property setter: - (void)setAPSRegistrationURL:(id)url;	// 0x3408fe89
// declared property setter: - (void)setAPSTopic:(id)topic;	// 0x3409000d
// declared property setter: - (void)setAccount:(id)account;	// 0x3408f9a1
- (void)setAccountDescription:(id)description;	// 0x34090aa9
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x34090745
// declared property setter: - (void)setCalendarHomePath:(id)path;	// 0x340924c1
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x34093ab9
// declared property setter: - (void)setCollectionSetName:(id)name;	// 0x3408fd49
// declared property setter: - (void)setDropBoxPath:(id)path;	// 0x340900f9
// declared property setter: - (void)setFullName:(id)name;	// 0x3408fd81
// converted property setter: - (void)setHost:(id)host;	// 0x34090529
// declared property setter: - (void)setInboxPath:(id)path;	// 0x34090169
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x3408fbb1
// declared property setter: - (void)setKeepOffline:(BOOL)offline;	// 0x3408fc51
// declared property setter: - (void)setNotificationCollectionPath:(id)path;	// 0x34090089
// declared property setter: - (void)setNotificationNodeName:(id)name;	// 0x34093a61
// declared property setter: - (void)setNotificationServiceName:(id)name;	// 0x34093a8d
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x340937c5
// declared property setter: - (void)setNotificationsPath:(id)path;	// 0x340900c1
// declared property setter: - (void)setOutboxPath:(id)path;	// 0x34090131
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x34090455
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x340903d9
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x340904c5
- (void)setPassword:(id)password;	// 0x34090ae9
// converted property setter: - (void)setPort:(int)port;	// 0x34090381
// declared property setter: - (void)setPreferredDaysToSync:(int)sync;	// 0x3408eec9
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x3408f8f1
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x340901bd
// converted property setter: - (void)setScheme:(id)scheme;	// 0x34090311
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x3408fcbd
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x3408ef15
// declared property setter: - (void)setServer:(id)server;	// 0x34090571
// declared property setter: - (void)setServerVersion:(id)version;	// 0x340923d9
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x34093a0d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x34090289
// converted property setter: - (void)setUsername:(id)username;	// 0x340906c5
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x3408fb3d
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x34093a35
// declared property getter: - (BOOL)shouldFilterSyncTimeRange;	// 0x3408f80d
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x3408f7c9
- (BOOL)shouldUseCookieStorage;	// 0x3408eee5
- (void)shutdown;	// 0x3408eee9
// declared property getter: - (id)subscribedCalendars;	// 0x3408ef25
- (BOOL)supportsDataclass:(int)dataclass;	// 0x3408eead
- (BOOL)upgradeAccount;	// 0x34090b31
- (id)urlForKeychain;	// 0x34091ce5
// converted property getter: - (BOOL)useSSL;	// 0x3409025d
// converted property getter: - (id)username;	// 0x340906a5
- (BOOL)usesTokenAuth;	// 0x3408eedd
- (void)verifyOperationSucceeded:(BOOL)succeeded error:(id)error;	// 0x34091601
// declared property getter: - (id)viewedTimeZone;	// 0x34092d05
// declared property getter: - (BOOL)wasMigrated;	// 0x3408fb81
@end

