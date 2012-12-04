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
@property(readonly, assign) NSString *APSEnv;	// G=0x378ae521; 
@property(readonly, assign) NSURL *APSSubscriptionURL;	// G=0x378ae491; 
@property(readonly, assign) NSString *APSTopic;	// G=0x378ae449; 
@property(retain) NSString *XMPPServer;	// G=0x378ad2b5; S=0x378ad2c5; 
@property(readonly, assign) id<CalDAVAccount> account;	// G=0x378ac675; 
@property(retain) NSString *calendarHomePushKey;	// G=0x378ad235; S=0x378ad245; 
@property(retain) NSURL *calendarHomeURL;	// G=0x378acadd; S=0x378acb09; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x378ac9a1; S=0x378ac9b1; 
@property(readonly, assign) NSSet *calendars;	// G=0x378ada75; 
@property(assign) BOOL calendarsAreDirty;	// G=0x378ae35d; S=0x378ae285; @synthesize=_calendarsAreDirty
@property(retain) NSURL *defaultCalendarURL;	// G=0x378acc55; S=0x378acc81; 
@property(retain) NSURL *dropBoxURL;	// G=0x378ad049; S=0x378ad075; 
@property(retain) NSString *fullName;	// G=0x378aca5d; S=0x378aca6d; 
@property(retain) NSString *inboxCTag;	// G=0x378acf09; S=0x378acf19; 
@property(retain) NSURL *inboxURL;	// G=0x378ace4d; S=0x378ace79; 
@property(assign) BOOL isDelegate;	// G=0x378ad411; S=0x378ad421; 
@property(assign) BOOL isDirty;	// G=0x378af0ed; S=0x378af105; @synthesize=_isDirty
@property(assign) BOOL isEnabled;	// G=0x378ad4a1; S=0x378ad4b1; 
@property(assign) BOOL isExpandPropertyReportSupported;	// G=0x378ad97d; S=0x378ad98d; 
@property(assign) BOOL isWritable;	// G=0x378ad459; S=0x378ad469; 
@property(retain) NSString *notificationCollectionCTag;	// G=0x378acdcd; S=0x378acddd; 
@property(retain) NSURL *notificationCollectionURL;	// G=0x378acd11; S=0x378acd3d; 
@property(retain) NSString *notificationURLString;	// G=0x378ad105; S=0x378ad115; 
@property(retain) NSURL *outboxURL;	// G=0x378acf89; S=0x378acfb5; 
@property(readonly, assign) NSString *preferredCalendarEmailAddress;	// G=0x378ae7a9; 
@property(readonly, assign) NSURL *preferredCalendarUserAddress;	// G=0x378ae735; 
@property(retain) NSURL *principalURL;	// G=0x378acb99; S=0x378acbc5; 
@property(readonly, assign) NSSet *pushKeys;	// G=0x378ae619; 
@property(retain) NSDictionary *pushTransports;	// G=0x378ad199; S=0x378ad1a9; 
@property(retain) NSNumber *quotaFreeBytes;	// G=0x378ad335; S=0x378ad345; 
@property(readonly, assign) CalDAVRefreshContext *refreshContext;	// G=0x378ada55; 
@property(assign) BOOL shouldRefreshPrincipalSearchProperties;	// G=0x378af08d; S=0x378af0a5; @synthesize=_shouldRefreshPrincipalSearchProperties
@property(assign) BOOL shouldUpdatePushDelegate;	// G=0x378af0bd; S=0x378af0d5; @synthesize=_shouldUpdatePushDelegate
@property(retain) NSString *supportedCalendarComponentSets;	// G=0x378ad401; S=0x378ad3a1; 
@property(readonly, assign) BOOL supportsExtendedCalendarQuery;	// G=0x378ad5c5; 
@property(assign) BOOL supportsFreebusy;	// G=0x378ad9c5; S=0x378ad9d5; 
@property(assign) BOOL supportsPush;	// G=0x378af11d; S=0x378af135; @synthesize=_supportsPush
@property(assign) BOOL supportsSyncToken;	// G=0x378ada0d; S=0x378ada1d; 
@property(readonly, assign) NSString *uid;	// G=0x378af079; @synthesize=_uid
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x378aace1
- (id)init;	// 0x378aaef9
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x378ab0fd
// declared property getter: - (id)APSEnv;	// 0x378ae521
// declared property getter: - (id)APSSubscriptionURL;	// 0x378ae491
// declared property getter: - (id)APSTopic;	// 0x378ae449
// declared property getter: - (id)XMPPServer;	// 0x378ad2b5
- (id)_sharedSyncEndDate;	// 0x378ad5f9
- (id)_startDateFromDaysToSync:(int)sync;	// 0x378ad6ed
- (BOOL)_userAddressSet:(id)set isEqualToSet:(id)set2;	// 0x378ac695
// declared property getter: - (id)account;	// 0x378ac675
- (id)accountID;	// 0x378aecd1
- (id)additionalHeaderValues;	// 0x378aecf9
// declared property getter: - (id)calendarHomePushKey;	// 0x378ad235
// declared property getter: - (id)calendarHomeURL;	// 0x378acadd
- (id)calendarOfType:(int)type atURL:(id)url withOptions:(id)options;	// 0x378adfa5
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x378aea01
// declared property getter: - (id)calendarUserAddresses;	// 0x378ac9a1
- (id)calendarUserAddressesForCalendar:(id)calendar;	// 0x378ae1a5
// declared property getter: - (id)calendars;	// 0x378ada75
// declared property getter: - (BOOL)calendarsAreDirty;	// 0x378ae35d
- (BOOL)clearCalendarChanges;	// 0x378adf55
- (id)configuration;	// 0x378abc95
- (CFURLStorageSessionRef)copyStorageSession;	// 0x378aee8d
- (void)dealloc;	// 0x378aaf0d
// declared property getter: - (id)defaultCalendarURL;	// 0x378acc55
- (id)defaultEventCalendarTitle;	// 0x378ae15d
- (id)defaultTodoCalendarTitle;	// 0x378ae169
- (id)deletedCalendarURLs;	// 0x378ada95
// declared property getter: - (id)dropBoxURL;	// 0x378ad049
- (id)eventFilterEndDate;	// 0x378ad875
- (id)eventFilterStartDate;	// 0x378ad81d
// declared property getter: - (id)fullName;	// 0x378aca5d
- (BOOL)handleCertificateError:(id)error;	// 0x378aee81
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x378aee59
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x378ae8d9
- (id)host;	// 0x378aeb49
- (id)identityPersist;	// 0x378aecb1
// declared property getter: - (id)inboxCTag;	// 0x378acf09
// declared property getter: - (id)inboxURL;	// 0x378ace4d
// declared property getter: - (BOOL)isDelegate;	// 0x378ad411
// declared property getter: - (BOOL)isDirty;	// 0x378af0ed
// declared property getter: - (BOOL)isEnabled;	// 0x378ad4a1
- (BOOL)isEnabledForEvents;	// 0x378ad50d
- (BOOL)isEnabledForTodos;	// 0x378ad569
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x378ad97d
- (BOOL)isMergeSync;	// 0x378ad4e9
// declared property getter: - (BOOL)isWritable;	// 0x378ad459
- (void)noteFailedNetworkRequest;	// 0x378aefc9
- (void)noteFailedProtocolRequest;	// 0x378af001
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x378aeb89
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x378aef8d
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x378af039
// declared property getter: - (id)notificationCollectionCTag;	// 0x378acdcd
// declared property getter: - (id)notificationCollectionURL;	// 0x378acd11
// declared property getter: - (id)notificationURLString;	// 0x378ad105
- (id)oauthToken;	// 0x378aed71
// declared property getter: - (id)outboxURL;	// 0x378acf89
- (id)password;	// 0x378aec91
- (int)port;	// 0x378aeb69
// declared property getter: - (id)preferredCalendarEmailAddress;	// 0x378ae7a9
// declared property getter: - (id)preferredCalendarUserAddress;	// 0x378ae735
- (void)prepareCalendarsForSyncWithCompletionBlock:(id)completionBlock;	// 0x378adbd9
// declared property getter: - (id)principalURL;	// 0x378acb99
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x378aedb9
// declared property getter: - (id)pushKeys;	// 0x378ae619
// declared property getter: - (id)pushTransports;	// 0x378ad199
// declared property getter: - (id)quotaFreeBytes;	// 0x378ad335
// declared property getter: - (id)refreshContext;	// 0x378ada55
- (void)removeCalendar:(id)calendar;	// 0x378ae175
- (id)scheme;	// 0x378aeb29
- (id)serverComplianceClasses;	// 0x378aecf1
- (id)serverRoot;	// 0x378aec6d
- (void)setAccount:(id)account;	// 0x378ac685
// declared property setter: - (void)setCalendarHomePushKey:(id)key;	// 0x378ad245
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x378acb09
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x378ac9b1
- (void)setCalendarUserAddresses:(id)addresses forCalendar:(id)calendar;	// 0x378ae1e1
// declared property setter: - (void)setCalendarsAreDirty:(BOOL)dirty;	// 0x378ae285
// declared property setter: - (void)setDefaultCalendarURL:(id)url;	// 0x378acc81
// declared property setter: - (void)setDropBoxURL:(id)url;	// 0x378ad075
// declared property setter: - (void)setFullName:(id)name;	// 0x378aca6d
// declared property setter: - (void)setInboxCTag:(id)tag;	// 0x378acf19
// declared property setter: - (void)setInboxURL:(id)url;	// 0x378ace79
// declared property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x378ad421
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x378af105
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x378ad4b1
// declared property setter: - (void)setIsExpandPropertyReportSupported:(BOOL)supported;	// 0x378ad98d
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x378ad469
// declared property setter: - (void)setNotificationCollectionCTag:(id)tag;	// 0x378acddd
// declared property setter: - (void)setNotificationCollectionURL:(id)url;	// 0x378acd3d
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x378ad115
// declared property setter: - (void)setOutboxURL:(id)url;	// 0x378acfb5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x378acbc5
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x378ad1a9
// declared property setter: - (void)setQuotaFreeBytes:(id)bytes;	// 0x378ad345
// declared property setter: - (void)setShouldRefreshPrincipalSearchProperties:(BOOL)refreshPrincipalSearchProperties;	// 0x378af0a5
// declared property setter: - (void)setShouldUpdatePushDelegate:(BOOL)updatePushDelegate;	// 0x378af0d5
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x378ad3a1
// declared property setter: - (void)setSupportsFreebusy:(BOOL)freebusy;	// 0x378ad9d5
// declared property setter: - (void)setSupportsPush:(BOOL)push;	// 0x378af135
// declared property setter: - (void)setSupportsSyncToken:(BOOL)token;	// 0x378ada1d
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x378ad2c5
- (BOOL)shouldCompressRequests;	// 0x378aef09
- (BOOL)shouldFailAllTasks;	// 0x378aee85
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x378aee89
// declared property getter: - (BOOL)shouldRefreshPrincipalSearchProperties;	// 0x378af08d
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x378aeead
// declared property getter: - (BOOL)shouldUpdatePushDelegate;	// 0x378af0bd
- (BOOL)shouldUseOpportunisticSockets;	// 0x378aef69
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x378ad401
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x378ad5c5
// declared property getter: - (BOOL)supportsFreebusy;	// 0x378ad9c5
// declared property getter: - (BOOL)supportsPush;	// 0x378af11d
// declared property getter: - (BOOL)supportsSyncToken;	// 0x378ada0d
- (id)taskManager;	// 0x378aeb09
- (id)todoFilterEndDate;	// 0x378ad939
- (id)todoFilterStartDate;	// 0x378ad8e1
// declared property getter: - (id)uid;	// 0x378af079
- (id)user;	// 0x378aec71
- (id)userAgentHeader;	// 0x378aecf5
@end
