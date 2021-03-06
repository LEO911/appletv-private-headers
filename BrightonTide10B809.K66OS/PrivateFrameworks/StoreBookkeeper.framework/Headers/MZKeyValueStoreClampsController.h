/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MZKeyValueStoreClampsController : NSObject <NSCoding> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSMutableDictionary *_transactionClamps;	// 8 = 0x8
	double _dsidCheckTimestamp;	// 12 = 0xc
	double _authenticationNeededTimestamp;	// 20 = 0x14
	double _userAcceptedSyncTimestamp;	// 28 = 0x1c
	double _networkingBlockedUntil;	// 36 = 0x24
	double _backOffUntil;	// 44 = 0x2c
	double _userCancelledSignInBackOffUntil;	// 52 = 0x34
	NSData *_pendingUserDefaultArchivedData;	// 60 = 0x3c
	double _nextUserCancelBackOffInterval;	// 64 = 0x40
}
@property(assign) double authenticationNeededTimestamp;	// G=0x3548d049; S=0x3548d07d; @synthesize=_authenticationNeededTimestamp
@property(assign) double backOffUntil;	// G=0x3548d181; S=0x3548d1b5; @synthesize=_backOffUntil
@property(assign) double dsidCheckTimestamp;	// G=0x3548cfe1; S=0x3548d015; @synthesize=_dsidCheckTimestamp
@property(assign) double networkingBlockedUntil;	// G=0x3548d119; S=0x3548d14d; @synthesize=_networkingBlockedUntil
@property(assign) double nextUserCancelBackOffInterval;	// G=0x3548d275; S=0x3548d2a9; @synthesize=_nextUserCancelBackOffInterval
@property(retain) NSData *pendingUserDefaultArchivedData;	// G=0x3548d251; S=0x3548d265; @synthesize=_pendingUserDefaultArchivedData
@property(retain, nonatomic) NSMutableDictionary *transactionClamps;	// G=0x3548cfc1; S=0x3548cfd1; @synthesize=_transactionClamps
@property(assign) double userAcceptedSyncTimestamp;	// G=0x3548d0b1; S=0x3548d0e5; @synthesize=_userAcceptedSyncTimestamp
@property(assign) double userCancelledSignInBackOffUntil;	// G=0x3548d1e9; S=0x3548d21d; @synthesize=_userCancelledSignInBackOffUntil
+ (id)sharedClampsController;	// 0x3548b599
- (id)init;	// 0x3548b695
- (id)initWithCoder:(id)coder;	// 0x3548b89d
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)networkingBlocked error:(id *)error;	// 0x3548cab9
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)off error:(id *)error;	// 0x3548ccb9
- (BOOL)_canScheduleTransactionBasedOnDSIDCheck:(id)check error:(id *)error;	// 0x3548cbc9
- (BOOL)_canScheduleTransactionBasedOnType:(id)type error:(id *)error;	// 0x3548c941
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)anIn error:(id *)error;	// 0x3548ce39
- (id)_keyForTransaction:(id)transaction;	// 0x3548c89d
- (double)_rightNow;	// 0x3548c869
// declared property getter: - (double)authenticationNeededTimestamp;	// 0x3548d049
- (void)backOffForTimeInterval:(double)timeInterval;	// 0x3548c6e1
// declared property getter: - (double)backOffUntil;	// 0x3548d181
- (BOOL)canScheduleTransaction:(id)transaction error:(id *)error;	// 0x3548bf59
- (void)clearAuthenticationRequest;	// 0x3548c2a1
- (void)clearBackOff;	// 0x3548c739
- (void)clearDSIDCheckTimestamp;	// 0x3548c219
- (void)clearNetworkingBlocked;	// 0x3548c7d1
- (void)clearTimestampForTransaction:(id)transaction;	// 0x3548c179
- (void)clearUserAcceptedSyncTimestamp;	// 0x3548c451
- (void)clearUserCancelledSignIn;	// 0x3548c681
- (void)dealloc;	// 0x3548bd69
- (id)description;	// 0x3548bdf1
// declared property getter: - (double)dsidCheckTimestamp;	// 0x3548cfe1
- (void)encodeWithCoder:(id)coder;	// 0x3548b72d
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)transaction error:(id *)error;	// 0x3548c2e1
- (BOOL)hasUserRecentlyAcceptedSync;	// 0x3548c491
- (BOOL)isNetworkingBlocked;	// 0x3548c7f1
// declared property getter: - (double)networkingBlockedUntil;	// 0x3548d119
// declared property getter: - (double)nextUserCancelBackOffInterval;	// 0x3548d275
// declared property getter: - (id)pendingUserDefaultArchivedData;	// 0x3548d251
- (void)reset;	// 0x3548bff5
- (void)saveToUserDefaults;	// 0x3548b9d1
// declared property setter: - (void)setAuthenticationNeededTimestamp:(double)timestamp;	// 0x3548d07d
- (void)setAuthenticationRequest;	// 0x3548c259
// declared property setter: - (void)setBackOffUntil:(double)until;	// 0x3548d1b5
- (void)setDSIDCheckTimestamp;	// 0x3548c1d1
// declared property setter: - (void)setDsidCheckTimestamp:(double)timestamp;	// 0x3548d015
- (void)setNetworkingBlocked;	// 0x3548c779
// declared property setter: - (void)setNetworkingBlockedUntil:(double)until;	// 0x3548d14d
// declared property setter: - (void)setNextUserCancelBackOffInterval:(double)interval;	// 0x3548d2a9
// declared property setter: - (void)setPendingUserDefaultArchivedData:(id)data;	// 0x3548d265
- (void)setTimestampForTransaction:(id)transaction;	// 0x3548c115
// declared property setter: - (void)setTransactionClamps:(id)clamps;	// 0x3548cfd1
- (void)setUserAcceptedSyncTimestamp;	// 0x3548c40d
// declared property setter: - (void)setUserAcceptedSyncTimestamp:(double)timestamp;	// 0x3548d0e5
- (void)setUserCancelledSignIn;	// 0x3548c539
// declared property setter: - (void)setUserCancelledSignInBackOffUntil:(double)backOffUntil;	// 0x3548d21d
// declared property getter: - (id)transactionClamps;	// 0x3548cfc1
// declared property getter: - (double)userAcceptedSyncTimestamp;	// 0x3548d0b1
// declared property getter: - (double)userCancelledSignInBackOffUntil;	// 0x3548d1e9
@end

