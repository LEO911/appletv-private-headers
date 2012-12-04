/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebAllowDenyPolicyListener.h"
#import <NSObject.h> // Unknown library


@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
	id _denyCallback;	// 8 = 0x8
}
@property(copy, nonatomic) id denyCallback;	// G=0x350848e5; S=0x350848f9; @synthesize=_denyCallback
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x350847c5
- (id).cxx_construct;	// 0x35084935
- (void).cxx_destruct;	// 0x35084909
- (void)allow;	// 0x35084831
- (void)dealloc;	// 0x35084781
- (void)deny;	// 0x35084845
// declared property getter: - (id)denyCallback;	// 0x350848e5
- (void)denyOnlyThisRequest;	// 0x35084879
// declared property setter: - (void)setDenyCallback:(id)callback;	// 0x350848f9
- (BOOL)shouldClearCache;	// 0x350848a9
@end
