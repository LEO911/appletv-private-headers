/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton> {
	unsigned _daemonLaunchCount;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_guid;	// 12 = 0xc
	double _lastFreeSpaceRequest;	// 16 = 0x10
}
@property(readonly, assign) NSString *deviceName;	// G=0x360340a9; 
@property(readonly, assign) NSString *guid;	// G=0x360340e1; 
@property(readonly, assign) NSString *hardwareName;	// G=0x360342dd; 
@property(readonly, assign) NSString *serialNumber;	// G=0x36034305; 
@property(readonly, assign) NSString *systemName;	// G=0x3603432d; 
+ (void)setSharedInstance:(id)instance;	// 0x36033c89
+ (id)sharedInstance;	// 0x36033cdd
- (id)init;	// 0x36033b41
- (int)_deviceClass;	// 0x36034755
- (BOOL)checkCapabilities:(id)capabilities withMismatches:(id *)mismatches;	// 0x36033d59
- (id)copyProtocolConditionalContext;	// 0x36033de5
- (id)copyPurchaseValidationContext;	// 0x36033eb1
- (void)dealloc;	// 0x36033bad
// declared property getter: - (id)deviceName;	// 0x360340a9
// declared property getter: - (id)guid;	// 0x360340e1
// declared property getter: - (id)hardwareName;	// 0x360342dd
- (BOOL)releasePowerAssertion:(id)assertion;	// 0x36033c21
- (void)requestFreeSpace:(unsigned long long)space atPath:(id)path withOptions:(id)options completionBlock:(id)block;	// 0x3603438d
// declared property getter: - (id)serialNumber;	// 0x36034305
- (id)supportedOfferDeviceForDevices:(id)devices;	// 0x3603465d
// declared property getter: - (id)systemName;	// 0x3603432d
- (BOOL)takePowerAssertion:(id)assertion;	// 0x36033c55
@end

