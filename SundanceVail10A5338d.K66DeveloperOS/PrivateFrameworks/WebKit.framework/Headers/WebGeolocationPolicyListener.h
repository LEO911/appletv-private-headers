/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebAllowDenyPolicyListener.h"


@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
	id _denyCallback;	// 8 = 0x8
}
@property(copy, nonatomic) id denyCallback;	// G=0x316a6669; S=0x316a667d; @synthesize=_denyCallback
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x316a6579
- (id).cxx_construct;	// 0x316a66b9
- (void).cxx_destruct;	// 0x316a668d
- (void)allow;	// 0x316a65e5
- (void)dealloc;	// 0x316a6535
- (void)deny;	// 0x316a65f9
// declared property getter: - (id)denyCallback;	// 0x316a6669
// declared property setter: - (void)setDenyCallback:(id)callback;	// 0x316a667d
- (BOOL)shouldClearCache;	// 0x316a662d
@end

