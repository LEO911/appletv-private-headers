/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import "CoreDAVAccountInfoProvider.h"
#import "CalDAVPrincipal.h"
#import <NSObject.h> // Unknown library

@class NSString, MobileCalDAVAccount, NSSet, NSURL, NSDictionary, NSMutableDictionary, NSNumber, CalDAVRefreshContext;
@protocol CalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CalDAVPrincipal> {
	NSString *_uid;	// 4 = 0x4
	MobileCalDAVAccount *_account;	// 8 = 0x8
	NSSet *_calendarUserAddresses;	// 12 = 0xc
	NSMutableDictionary *_calendarUserAddressesPerCalendar;	// 16 = 0x10
	NSURL *_preferredCalendarUserAddress;	// 20 = 0x14
	NSString *_preferredCalendarEmailAddress;	// 24 = 0x18
	NSString *_fullName;	// 28 = 0x1c
	NSURL *_calendarHomeURL;	// 32 = 0x20
	NSURL *_principalURL;	// 36 = 0x24
	NSURL *_defaultCalendarURL;	// 40 = 0x28
	NSURL *_notificationCollectionURL;	// 44 = 0x2c
	NSString *_notificationCollectionCTag;	// 48 = 0x30
	NSURL *_inboxURL;	// 52 = 0x34
	NSString *_inboxCTag;	// 56 = 0x38
	NSURL *_outboxURL;	// 60 = 0x3c
	NSURL *_dropBoxURL;	// 64 = 0x40
	NSString *_notificationURLString;	// 68 = 0x44
	NSDictionary *_pushTransports;	// 72 = 0x48
	NSString *_calendarHomePushKey;	// 76 = 0x4c
	NSString *_XMPPServer;	// 80 = 0x50
	NSNumber *_quotaFreeBytes;	// 84 = 0x54
	NSString *_supportedCalendarComponentSets;	// 88 = 0x58
	BOOL _isDelegate;	// 92 = 0x5c
	BOOL _isWritable;	// 93 = 0x5d
	BOOL _isEnabled;	// 94 = 0x5e
	BOOL _isExpandPropertyReportSupported;	// 95 = 0x5f
	BOOL _supportsFreebusy;	// 96 = 0x60
	BOOL _supportsSyncToken;	// 97 = 0x61
	BOOL _supportsPush;	// 98 = 0x62
	BOOL _shouldRefreshPrincipalSearchProperties;	// 99 = 0x63
	BOOL _shouldUpdatePushDelegate;	// 100 = 0x64
	BOOL _isDirty;	// 101 = 0x65
	BOOL _calendarsAreDirty;	// 102 = 0x66
	int _calendarChangeIndex;	// 104 = 0x68
}
@property(readonly, assign) NSString *APSEnv;	// G=0x339984c9; 
@property(readonly, assign) NSURL *APSSubscriptionURL;	// G=0x33998439; 
@property(readonly, assign) NSString *APSTopic;	// G=0x339983f1; 
@property(retain) NSString *XMPPServer;	// G=0x3399725d; S=0x3399726d; 
@property(readonly, assign) id<CalDAVAccount> account;	// G=0x3399661d; 
@property(retain) NSString *calendarHomePushKey;	// G=0x339971dd; S=0x339971ed; 
@property(retain) NSURL *calendarHomeURL;	// G=0x33996a85; S=0x33996ab1; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x33996949; S=0x33996959; 
@property(readonly, assign) NSSet *calendars;	// G=0x33997a1d; 
@property(assign) BOOL calendarsAreDirty;	// G=0x33998305; S=0x3399822d; @synthesize=_calendarsAreDirty
@property(retain) NSURL *defaultCalendarURL;	// G=0x33996bfd; S=0x33996c29; 
@property(retain) NSURL *dropBoxURL;	// G=0x33996ff1; S=0x3399701d; 
@property(retain) NSString *fullName;	// G=0x33996a05; S=0x33996a15; 
@property(retain) NSString *inboxCTag;	// G=0x33996eb1; S=0x33996ec1; 
@property(retain) NSURL *inboxURL;	// G=0x33996df5; S=0x33996e21; 
@property(assign) BOOL isDelegate;	// G=0x339973b9; S=0x339973c9; 
@property(assign) BOOL isDirty;	// G=0x339990a5; S=0x339990bd; @synthesize=_isDirty
@property(assign) BOOL isEnabled;	// G=0x33997449; S=0x33997459; 
@property(assign) BOOL isExpandPropertyReportSupported;	// G=0x33997925; S=0x33997935; 
@property(assign) BOOL isWritable;	// G=0x33997401; S=0x33997411; 
@property(retain) NSString *notificationCollectionCTag;	// G=0x33996d75; S=0x33996d85; 
@property(retain) NSURL *notificationCollectionURL;	// G=0x33996cb9; S=0x33996ce5; 
@property(retain) NSString *notificationURLString;	// G=0x339970ad; S=0x339970bd; 
@property(retain) NSURL *outboxURL;	// G=0x33996f31; S=0x33996f5d; 
@property(readonly, assign) NSString *preferredCalendarEmailAddress;	// G=0x33998761; 
@property(readonly, assign) NSURL *preferredCalendarUserAddress;	// G=0x339986dd; 
@property(retain) NSURL *principalURL;	// G=0x33996b41; S=0x33996b6d; 
@property(readonly, assign) NSSet *pushKeys;	// G=0x339985c1; 
@property(retain) NSDictionary *pushTransports;	// G=0x33997141; S=0x33997151; 
@property(retain) NSNumber *quotaFreeBytes;	// G=0x339972dd; S=0x339972ed; 
@property(readonly, assign) CalDAVRefreshContext *refreshContext;	// G=0x339979fd; 
@property(assign) BOOL shouldRefreshPrincipalSearchProperties;	// G=0x33999045; S=0x3399905d; @synthesize=_shouldRefreshPrincipalSearchProperties
@property(assign) BOOL shouldUpdatePushDelegate;	// G=0x33999075; S=0x3399908d; @synthesize=_shouldUpdatePushDelegate
@property(retain) NSString *supportedCalendarComponentSets;	// G=0x339973a9; S=0x33997349; 
@property(readonly, assign) BOOL supportsExtendedCalendarQuery;	// G=0x3399756d; 
@property(assign) BOOL supportsFreebusy;	// G=0x3399796d; S=0x3399797d; 
@property(assign) BOOL supportsPush;	// G=0x339990d5; S=0x339990ed; @synthesize=_supportsPush
@property(assign) BOOL supportsSyncToken;	// G=0x339979b5; S=0x339979c5; 
@property(readonly, assign) NSString *uid;	// G=0x33999031; @synthesize=_uid
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x33994c89
- (id)init;	// 0x33994ea1
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x339950a5
// declared property getter: - (id)APSEnv;	// 0x339984c9
// declared property getter: - (id)APSSubscriptionURL;	// 0x33998439
// declared property getter: - (id)APSTopic;	// 0x339983f1
// declared property getter: - (id)XMPPServer;	// 0x3399725d
- (id)_sharedSyncEndDate;	// 0x339975a1
- (id)_startDateFromDaysToSync:(int)sync;	// 0x33997695
- (BOOL)_userAddressSet:(id)set isEqualToSet:(id)set2;	// 0x3399663d
// declared property getter: - (id)account;	// 0x3399661d
- (id)accountID;	// 0x33998c89
- (id)additionalHeaderValues;	// 0x33998cb1
// declared property getter: - (id)calendarHomePushKey;	// 0x339971dd
// declared property getter: - (id)calendarHomeURL;	// 0x33996a85
- (id)calendarOfType:(int)type atURL:(id)url withOptions:(id)options;	// 0x33997f4d
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x339989b9
// declared property getter: - (id)calendarUserAddresses;	// 0x33996949
- (id)calendarUserAddressesForCalendar:(id)calendar;	// 0x3399814d
// declared property getter: - (id)calendars;	// 0x33997a1d
// declared property getter: - (BOOL)calendarsAreDirty;	// 0x33998305
- (BOOL)clearCalendarChanges;	// 0x33997efd
- (id)configuration;	// 0x33995c3d
- (CFURLStorageSessionRef)copyStorageSession;	// 0x33998e45
- (void)dealloc;	// 0x33994eb5
// declared property getter: - (id)defaultCalendarURL;	// 0x33996bfd
- (id)defaultEventCalendarTitle;	// 0x33998105
- (id)defaultTodoCalendarTitle;	// 0x33998111
- (id)deletedCalendarURLs;	// 0x33997a3d
// declared property getter: - (id)dropBoxURL;	// 0x33996ff1
- (id)eventFilterEndDate;	// 0x3399781d
- (id)eventFilterStartDate;	// 0x339977c5
// declared property getter: - (id)fullName;	// 0x33996a05
- (BOOL)handleCertificateError:(id)error;	// 0x33998e39
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x33998e11
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x33998891
- (id)host;	// 0x33998b01
- (id)identityPersist;	// 0x33998c69
// declared property getter: - (id)inboxCTag;	// 0x33996eb1
// declared property getter: - (id)inboxURL;	// 0x33996df5
// declared property getter: - (BOOL)isDelegate;	// 0x339973b9
// declared property getter: - (BOOL)isDirty;	// 0x339990a5
// declared property getter: - (BOOL)isEnabled;	// 0x33997449
- (BOOL)isEnabledForEvents;	// 0x339974b5
- (BOOL)isEnabledForTodos;	// 0x33997511
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x33997925
- (BOOL)isMergeSync;	// 0x33997491
// declared property getter: - (BOOL)isWritable;	// 0x33997401
- (void)noteFailedNetworkRequest;	// 0x33998f81
- (void)noteFailedProtocolRequest;	// 0x33998fb9
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x33998b41
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x33998f45
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x33998ff1
// declared property getter: - (id)notificationCollectionCTag;	// 0x33996d75
// declared property getter: - (id)notificationCollectionURL;	// 0x33996cb9
// declared property getter: - (id)notificationURLString;	// 0x339970ad
- (id)oauthToken;	// 0x33998d29
// declared property getter: - (id)outboxURL;	// 0x33996f31
- (id)password;	// 0x33998c49
- (int)port;	// 0x33998b21
// declared property getter: - (id)preferredCalendarEmailAddress;	// 0x33998761
// declared property getter: - (id)preferredCalendarUserAddress;	// 0x339986dd
- (void)prepareCalendarsForSyncWithCompletionBlock:(id)completionBlock;	// 0x33997b81
// declared property getter: - (id)principalURL;	// 0x33996b41
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x33998d71
// declared property getter: - (id)pushKeys;	// 0x339985c1
// declared property getter: - (id)pushTransports;	// 0x33997141
// declared property getter: - (id)quotaFreeBytes;	// 0x339972dd
// declared property getter: - (id)refreshContext;	// 0x339979fd
- (void)removeCalendar:(id)calendar;	// 0x3399811d
- (id)scheme;	// 0x33998ae1
- (id)serverComplianceClasses;	// 0x33998ca9
- (id)serverRoot;	// 0x33998c25
- (void)setAccount:(id)account;	// 0x3399662d
// declared property setter: - (void)setCalendarHomePushKey:(id)key;	// 0x339971ed
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x33996ab1
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x33996959
- (void)setCalendarUserAddresses:(id)addresses forCalendar:(id)calendar;	// 0x33998189
// declared property setter: - (void)setCalendarsAreDirty:(BOOL)dirty;	// 0x3399822d
// declared property setter: - (void)setDefaultCalendarURL:(id)url;	// 0x33996c29
// declared property setter: - (void)setDropBoxURL:(id)url;	// 0x3399701d
// declared property setter: - (void)setFullName:(id)name;	// 0x33996a15
// declared property setter: - (void)setInboxCTag:(id)tag;	// 0x33996ec1
// declared property setter: - (void)setInboxURL:(id)url;	// 0x33996e21
// declared property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x339973c9
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x339990bd
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x33997459
// declared property setter: - (void)setIsExpandPropertyReportSupported:(BOOL)supported;	// 0x33997935
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x33997411
// declared property setter: - (void)setNotificationCollectionCTag:(id)tag;	// 0x33996d85
// declared property setter: - (void)setNotificationCollectionURL:(id)url;	// 0x33996ce5
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x339970bd
// declared property setter: - (void)setOutboxURL:(id)url;	// 0x33996f5d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x33996b6d
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x33997151
// declared property setter: - (void)setQuotaFreeBytes:(id)bytes;	// 0x339972ed
// declared property setter: - (void)setShouldRefreshPrincipalSearchProperties:(BOOL)refreshPrincipalSearchProperties;	// 0x3399905d
// declared property setter: - (void)setShouldUpdatePushDelegate:(BOOL)updatePushDelegate;	// 0x3399908d
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x33997349
// declared property setter: - (void)setSupportsFreebusy:(BOOL)freebusy;	// 0x3399797d
// declared property setter: - (void)setSupportsPush:(BOOL)push;	// 0x339990ed
// declared property setter: - (void)setSupportsSyncToken:(BOOL)token;	// 0x339979c5
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x3399726d
- (BOOL)shouldCompressRequests;	// 0x33998ec1
- (BOOL)shouldFailAllTasks;	// 0x33998e3d
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x33998e41
// declared property getter: - (BOOL)shouldRefreshPrincipalSearchProperties;	// 0x33999045
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x33998e65
// declared property getter: - (BOOL)shouldUpdatePushDelegate;	// 0x33999075
- (BOOL)shouldUseOpportunisticSockets;	// 0x33998f21
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x339973a9
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x3399756d
// declared property getter: - (BOOL)supportsFreebusy;	// 0x3399796d
// declared property getter: - (BOOL)supportsPush;	// 0x339990d5
// declared property getter: - (BOOL)supportsSyncToken;	// 0x339979b5
- (id)taskManager;	// 0x33998ac1
- (id)todoFilterEndDate;	// 0x339978e1
- (id)todoFilterStartDate;	// 0x33997889
// declared property getter: - (id)uid;	// 0x33999031
- (id)user;	// 0x33998c29
- (id)userAgentHeader;	// 0x33998cad
@end
