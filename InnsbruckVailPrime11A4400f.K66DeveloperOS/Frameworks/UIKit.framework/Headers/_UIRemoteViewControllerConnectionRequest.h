/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray, NSError, NSString, _UIRemoteViewControllerConnectionInfo, _UIAsyncInvocation;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject {
	BOOL _useXPCObjects;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	NSString *_viewServiceBundleIdentifier;	// 12 = 0xc
	NSString *_viewControllerClassName;	// 16 = 0x10
	NSArray *_serializedAppearanceCustomizations;	// 20 = 0x14
	id _exportedHostingObject;	// 24 = 0x18
	id<_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;	// 28 = 0x1c
	_UIAsyncInvocation *_cancelInvocationForCurrentOperation;	// 32 = 0x20
	_UIRemoteViewControllerConnectionInfo *_connectionInfo;	// 36 = 0x24
	NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
	BOOL _isCancelledOrComplete;	// 44 = 0x2c
	NSError *_error;	// 48 = 0x30
	_UIAsyncInvocation *_requestCancellationInvocation;	// 52 = 0x34
}
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier serializedAppearanceCustomizations:(id)customizations useXPCObjects:(BOOL)objects exportedHostingObject:(id)object serviceViewControllerDeputyInterface:(id)interface connectionHandler:(id)handler;	// 0x2f88788d
- (void)_cancelUnconditionallyThen:(id)then;	// 0x2f8880b5
- (id)_cancelWithError:(id)error;	// 0x2f889d19
- (void)_connectToDeputyWithInterface:(id)interface orType:(id)type fromExportedHostingObject:(id)exportedHostingObject successHandler:(id)handler;	// 0x2f8884b1
- (void)_connectToServiceViewController;	// 0x2f889a0d
- (void)_connectToTextEffectsOperator;	// 0x2f889435
- (void)_connectToViewControllerControlMessageDeputy;	// 0x2f889b8d
- (void)_connectToViewControllerOperator;	// 0x2f888bd5
- (void)_connectToViewService;	// 0x2f8887c1
- (void)_didFinishEstablishingConnection;	// 0x2f889c8d
- (void)_sendServiceTextEffectsRequest;	// 0x2f8896e1
- (void)_sendServiceViewControllerRequest;	// 0x2f888e81
- (void)dealloc;	// 0x2f887f85
@end
