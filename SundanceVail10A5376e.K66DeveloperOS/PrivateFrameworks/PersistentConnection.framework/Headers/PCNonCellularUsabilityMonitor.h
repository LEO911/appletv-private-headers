/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSString, NSMutableArray;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
	dispatch_queue_s *_delegateQueue;	// 4 = 0x4
	dispatch_queue_s *_ivarQueue;	// 8 = 0x8
	dispatch_queue_s *_monitorDelegateQueue;	// 12 = 0xc
	CUTWeakReference *_delegateReference;	// 16 = 0x10
	BOOL _demoOverride;	// 20 = 0x14
	int _previousLinkQuality;	// 24 = 0x18
	BOOL _trackUsability;	// 28 = 0x1c
	unsigned _thresholdOffTransitionCount;	// 32 = 0x20
	double _trackedTimeInterval;	// 36 = 0x24
	NSMutableArray *_interfaceMonitors;	// 44 = 0x2c
}
@property(assign, nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;	// G=0x35176b45; S=0x35176d19; 
@property(readonly, assign, nonatomic) int interfaceIdentifier;	// G=0x35176405; 
@property(readonly, assign, nonatomic) BOOL isInterfaceHistoricallyUsable;	// G=0x35176775; 
@property(readonly, assign, nonatomic) BOOL isInterfaceUsable;	// G=0x351765c5; 
@property(readonly, assign, nonatomic) BOOL isInternetReachable;	// G=0x35176925; 
@property(readonly, assign, nonatomic) BOOL isPoorLinkQuality;	// G=0x35176b0d; 
@property(readonly, assign, nonatomic) int linkQuality;	// G=0x351764f1; 
@property(readonly, assign, nonatomic) NSString *linkQualityString;	// G=0x35176ad5; 
- (id)initWithDelegateQueue:(dispatch_queue_s *)delegateQueue;	// 0x35175d01
- (void)_addMonitorWithInterfaceName:(id)interfaceName;	// 0x35176001
- (void)_callDelegateOnIvarQueueWithBlock:(id)block;	// 0x35176e19
- (void)_forwardConfigurationOnIvarQueue;	// 0x35176099
- (int)_linkQualityOnIvarQueue;	// 0x35176409
- (void)dealloc;	// 0x35175ea9
// declared property getter: - (id)delegate;	// 0x35176b45
// declared property getter: - (int)interfaceIdentifier;	// 0x35176405
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x35176eed
- (void)interfaceReachabilityChanged:(id)changed;	// 0x3517707d
// declared property getter: - (BOOL)isInterfaceHistoricallyUsable;	// 0x35176775
// declared property getter: - (BOOL)isInterfaceUsable;	// 0x351765c5
// declared property getter: - (BOOL)isInternetReachable;	// 0x35176925
// declared property getter: - (BOOL)isPoorLinkQuality;	// 0x35176b0d
// declared property getter: - (int)linkQuality;	// 0x351764f1
// declared property getter: - (id)linkQualityString;	// 0x35176ad5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35176d19
- (void)setThresholdOffTransitionCount:(unsigned)count;	// 0x351762ad
- (void)setTrackUsability:(BOOL)usability;	// 0x351761c5
- (void)setTrackedTimeInterval:(double)interval;	// 0x35176351
@end
