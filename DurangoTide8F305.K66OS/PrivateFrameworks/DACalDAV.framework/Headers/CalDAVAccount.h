/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CalNetworkChangeNotificationListener.h"
#import "DACalDAV-Structs.h"

@class MobileCalDAVAccount, NSRecursiveLock, NSHTTPCookieStorage, NSString, CalDAVPrincipal, NSArray, NSError, DAVSession, CalDAVOperationQueue;

@interface CalDAVAccount : NSObject <CalNetworkChangeNotificationListener> {
	CalDAVPrincipal *_principal;	// 4 = 0x4
	MobileCalDAVAccount *_mobileAccount;	// 8 = 0x8
	BOOL _isDelegate;	// 12 = 0xc
	BOOL _isWritable;	// 13 = 0xd
	NSString *_principalPath;	// 16 = 0x10
	NSString *_userDisplayName;	// 20 = 0x14
	NSString *_uid;	// 24 = 0x18
	DAVSession *_session;	// 28 = 0x1c
	NSError *_lastOperationError;	// 32 = 0x20
	NSArray *_tempCalendarList;	// 36 = 0x24
	int _queryOfficeHoursRunning;	// 40 = 0x28
	NSRecursiveLock *_connectedStateLock;	// 44 = 0x2c
	int _connectedState;	// 48 = 0x30
	BOOL _userPrefersOffline;	// 52 = 0x34
	NSError *_connectionError;	// 56 = 0x38
	CalDAVOperationQueue *_operationQueue;	// 60 = 0x3c
	BOOL _checkingCredentials;	// 64 = 0x40
	NSHTTPCookieStorage *_cookieStorage;	// 68 = 0x44
}
@property(assign) int connectedState;	// G=0x340a1779; S=0x340a2869; converted property
@property(readonly, retain) NSHTTPCookieStorage *cookieStorage;	// G=0x340a1971; converted property
@property(retain) id displayName;	// G=0x340a0f39; S=0x340a1ba5; converted property
@property(retain) id fullPrincipalAddress;	// G=0x340a1d15; S=0x340a1c15; converted property
@property(assign) BOOL isDelegate;	// G=0x340a0ee9; S=0x340a0ef9; converted property
@property(assign) BOOL isWritable;	// G=0x340a0f09; S=0x340a0f19; converted property
@property(retain) NSError *lastOperationError;	// G=0x340a0f59; S=0x340a1b41; converted property
@property(retain) MobileCalDAVAccount *mobileAccount;	// G=0x340a221d; S=0x340a0ebd; converted property
@property(readonly, retain) CalDAVOperationQueue *operationQueue;	// G=0x340a0ed9; converted property
@property(retain) CalDAVPrincipal *principal;	// G=0x340a224d; S=0x340a0ead; converted property
@property(retain) NSString *principalPath;	// G=0x340a0f29; S=0x340a1e75; converted property
@property(readonly, retain) DAVSession *session;	// G=0x340a17e5; converted property
@property(retain) NSString *uid;	// G=0x340a0f49; S=0x340a24c5; converted property
@property(assign) BOOL userPrefersOffline;	// G=0x340a16dd; S=0x340a1699; converted property
- (id)init;	// 0x340a2205
- (id)initWithConfiguration:(id)configuration;	// 0x340a2369
- (id)_icalendarVersionString;	// 0x340a1a89
- (id)_systemVersionString;	// 0x340a2725
- (id)_userAgentString;	// 0x340a19dd
- (void)attemptAutomaticConnect;	// 0x340a20d1
- (void)attemptAutomaticConnectOnBackgroundThread;	// 0x340a1ff1
- (void)automaticConnectDone:(id)done;	// 0x340a1ef1
- (void)cancelRefresh;	// 0x340a27e9
- (id)collectionSetName;	// 0x340a1659
- (id)configuration;	// 0x340a2161
// converted property getter: - (int)connectedState;	// 0x340a1779
// converted property getter: - (id)cookieStorage;	// 0x340a1971
- (id)copyWithZone:(NSZone *)zone;	// 0x340a1b91
- (void)dealloc;	// 0x340a227d
// converted property getter: - (id)displayName;	// 0x340a0f39
- (void)doneCheckingCredentials:(BOOL)credentials;	// 0x340a14d1
// converted property getter: - (id)fullPrincipalAddress;	// 0x340a1d15
- (id)getStringForState:(int)state;	// 0x340a0f69
- (void)goOfflineAfterError:(BOOL)error;	// 0x340a13ed
- (void)invalidateSession;	// 0x340a17bd
- (BOOL)isBusy;	// 0x340a1721
- (BOOL)isConnectionError:(id)error;	// 0x340a11d9
- (BOOL)isConnectionErrorForAYError:(id)ayerror;	// 0x340a0fe1
- (BOOL)isConnectionErrorForAYNetDBError:(id)aynetDBError;	// 0x340a0fed
- (BOOL)isConnectionErrorForCFNetworkHTTPError:(id)cfnetworkHTTPError;	// 0x340a0ff5
- (BOOL)isConnectionErrorForDAVError:(id)daverror;	// 0x340a11b9
- (BOOL)isConnectionErrorForGenericError:(id)genericError;	// 0x340a1111
- (BOOL)isConnectionErrorForNSPosixError:(id)nsposixError;	// 0x340a0fe9
- (BOOL)isConnectionErrorForOSStatusError:(id)osstatusError;	// 0x340a0fe5
- (BOOL)isConnectionErrorForStreamSocketSSLError:(id)streamSocketSSLError;	// 0x340a0ff1
// converted property getter: - (BOOL)isDelegate;	// 0x340a0ee9
- (BOOL)isOffline;	// 0x340a0fc1
- (BOOL)isPendingRefresh;	// 0x340a0ff9
- (BOOL)isRefreshing;	// 0x340a1079
- (BOOL)isTransientError:(id)error;	// 0x340a131d
// converted property getter: - (BOOL)isWritable;	// 0x340a0f09
- (id)key;	// 0x340a1b7d
// converted property getter: - (id)lastOperationError;	// 0x340a0f59
- (void)logError:(id)error;	// 0x340a2525
// converted property getter: - (id)mobileAccount;	// 0x340a221d
// converted property getter: - (id)operationQueue;	// 0x340a0ed9
// converted property getter: - (id)principal;	// 0x340a224d
// converted property getter: - (id)principalPath;	// 0x340a0f29
- (void)refreshAllSources;	// 0x340a149d
- (void)refreshWithContext:(id)context;	// 0x340a2981
- (id)searchPropertySet;	// 0x340a1679
// converted property getter: - (id)session;	// 0x340a17e5
- (id)sessionWithURL:(id)url;	// 0x340a1811
// converted property setter: - (void)setConnectedState:(int)state;	// 0x340a2869
// converted property setter: - (void)setDisplayName:(id)name;	// 0x340a1ba5
// converted property setter: - (void)setFullPrincipalAddress:(id)address;	// 0x340a1c15
// converted property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x340a0ef9
// converted property setter: - (void)setIsWritable:(BOOL)writable;	// 0x340a0f19
// converted property setter: - (void)setLastOperationError:(id)error;	// 0x340a1b41
// converted property setter: - (void)setMobileAccount:(id)account;	// 0x340a0ebd
// converted property setter: - (void)setPrincipal:(id)principal;	// 0x340a0ead
// converted property setter: - (void)setPrincipalPath:(id)path;	// 0x340a1e75
- (void)setSourceError:(id)error;	// 0x340a1519
// converted property setter: - (void)setUid:(id)uid;	// 0x340a24c5
// converted property setter: - (void)setUserPrefersOffline:(BOOL)offline;	// 0x340a1699
- (void)setupSources;	// 0x340a2105
- (int)statusForConnectedState;	// 0x340a1745
- (void)systemDidWake;	// 0x340a0ed5
- (void)systemNetworkDidChange;	// 0x340a0ecd
- (void)systemWillSleep;	// 0x340a0ed1
// converted property getter: - (id)uid;	// 0x340a0f49
- (void)updateSessionTimeout:(id)timeout;	// 0x340a2671
// converted property getter: - (BOOL)userPrefersOffline;	// 0x340a16dd
@end

