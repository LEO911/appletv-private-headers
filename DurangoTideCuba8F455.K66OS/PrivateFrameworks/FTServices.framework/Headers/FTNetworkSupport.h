/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSTimer, APSConnection;

@interface FTNetworkSupport : NSObject {
	Class _APSConnectionClass;	// 4 = 0x4
	APSConnection *_apsConnection;	// 8 = 0x8
	NSTimer *_reliabilityAttemptTimer;	// 12 = 0xc
	BOOL _enableCriticalReliability;	// 16 = 0x10
	BOOL _criticalReliabilityEnabledState;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) BOOL allowAnyNetwork;	// G=0x33faf9b9; 
@property(assign, nonatomic) BOOL enableCriticalReliability;	// G=0x33faf791; S=0x33fafcd5; 
@property(readonly, assign, nonatomic) BOOL validNetworkActive;	// G=0x33faf88d; 
@property(readonly, assign, nonatomic) BOOL validNetworkEnabled;	// G=0x33faf939; 
@property(readonly, assign, nonatomic) BOOL validNetworkReachable;	// G=0x33faf831; 
@property(readonly, assign, nonatomic) BOOL willSearchForNetwork;	// G=0x33faf7a1; 
+ (id)sharedInstance;	// 0x33fb003d
- (void)_clearReliabilityTimeoutInterval;	// 0x33fafc69
- (void)_createAPSConnectionIfNeeded;	// 0x33fafa61
- (void)_reallySetCriticalReliability:(BOOL)reliability;	// 0x33fafb09
- (void)_setReliabilityTimeoutInterval;	// 0x33fafb95
- (void)_tryToEnableReliability;	// 0x33fafe05
// declared property getter: - (BOOL)allowAnyNetwork;	// 0x33faf9b9
- (id)autorelease;	// 0x33faf78d
// declared property getter: - (BOOL)enableCriticalReliability;	// 0x33faf791
- (oneway void)release;	// 0x33faf781
- (unsigned)retainCount;	// 0x33faf785
// declared property setter: - (void)setEnableCriticalReliability:(BOOL)reliability;	// 0x33fafcd5
// declared property getter: - (BOOL)validNetworkActive;	// 0x33faf88d
// declared property getter: - (BOOL)validNetworkEnabled;	// 0x33faf939
// declared property getter: - (BOOL)validNetworkReachable;	// 0x33faf831
// declared property getter: - (BOOL)willSearchForNetwork;	// 0x33faf7a1
@end

