/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "WebGeolocationProviderInitializationListener.h"
#import "NSObject.h"


@protocol WebGeolocationProviderInitializationListener <NSObject>
- (void)initializationAllowedWebView:(id)view provider:(id)provider;
- (void)initializationDeniedWebView:(id)view provider:(id)provider;
@end

__attribute__((visibility("hidden")))
@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {
@private
	RefPtr<WebCore::Geolocation> m_geolocation;	// 4 = 0x4
}
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x35055b05
- (id).cxx_construct;	// 0x35055e15
- (void).cxx_destruct;	// 0x35055de9
- (void)initializationAllowedWebView:(id)view provider:(id)provider;	// 0x35055b6d
- (void)initializationDeniedWebView:(id)view provider:(id)provider;	// 0x35055dd5
@end

