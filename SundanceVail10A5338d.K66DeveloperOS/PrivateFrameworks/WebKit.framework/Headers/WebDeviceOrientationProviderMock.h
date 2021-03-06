/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebDeviceOrientationProvider.h"

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
	WebDeviceOrientationProviderMockInternal *m_internal;	// 4 = 0x4
}
+ (id)shared;	// 0x31688eb9
- (id)init;	// 0x31688f19
- (void)dealloc;	// 0x31688f81
- (id)lastOrientation;	// 0x3168902d
- (void)setController:(DeviceOrientationController *)controller;	// 0x31688e99
- (void)setOrientation:(id)orientation;	// 0x31688fcd
- (void)startUpdating;	// 0x31688fed
- (void)stopUpdating;	// 0x3168900d
@end

