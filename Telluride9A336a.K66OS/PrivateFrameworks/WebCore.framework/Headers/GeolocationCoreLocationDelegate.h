/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "CLLocationManagerDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class CLLocationManager;

__attribute__((visibility("hidden")))
@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
@private
	double m_accuracy;	// 4 = 0x4
	GeolocationManager *m_callback;	// 12 = 0xc
	CLLocationManager *m_locationManager;	// 16 = 0x10
	BOOL m_locationDenied;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL wantsHighAccuracy;	// G=0x31c65abd; S=0x31c65b69; 
- (id)initWithCallback:(GeolocationManager *)callback;	// 0x31c65c39
- (void)createLocationManager;	// 0x31c65859
- (void)dealloc;	// 0x31c65d41
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x31c65a45
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;	// 0x31c65a31
- (void)sendError:(id)error withString:(id)string;	// 0x31c65c91
- (void)sendLocation:(id)location;	// 0x31c65cf1
// declared property setter: - (void)setWantsHighAccuracy:(BOOL)accuracy;	// 0x31c65b69
- (void)start;	// 0x31c65935
- (void)stop;	// 0x31c659e1
// declared property getter: - (BOOL)wantsHighAccuracy;	// 0x31c65abd
@end

