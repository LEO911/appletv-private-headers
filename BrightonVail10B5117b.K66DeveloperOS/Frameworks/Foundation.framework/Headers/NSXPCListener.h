/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
	void *_xconnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_userQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_internalQueue;	// 12 = 0xc
	id<NSXPCListenerDelegate> _delegate;	// 16 = 0x10
	NSString *_serviceName;	// 20 = 0x14
	unsigned long long _state;	// 24 = 0x18
	id _reserved1;	// 32 = 0x20
	id _reserved2;	// 36 = 0x24
}
@property(assign) id<NSXPCListenerDelegate> delegate;	// G=0x31aa93f9; S=0x31aa940d; @synthesize=_delegate
@property(readonly, retain) NSString *serviceName;	// G=0x31aa8f8d; converted property
+ (id)_UUID;	// 0x31aa9379
+ (id)anonymousListener;	// 0x31aa874d
+ (void)enableTransactions;	// 0x31aa9351
+ (id)serviceListener;	// 0x31aa86a5
- (id)initWithMachServiceName:(id)machServiceName;	// 0x31aa8935
- (id)initWithServiceName:(id)serviceName;	// 0x31aa879d
- (id)_initShared;	// 0x31aa8635
- (void)dealloc;	// 0x31aa8aad
// declared property getter: - (id)delegate;	// 0x31aa93f9
- (id)endpoint;	// 0x31aa8fc5
- (void)finalize;	// 0x31aa8b09
- (void)invalidate;	// 0x31aa8e41
- (void)resume;	// 0x31aa8bf1
// converted property getter: - (id)serviceName;	// 0x31aa8f8d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31aa940d
- (void)setOptions:(unsigned)options;	// 0x31aa9259
- (void)stop;	// 0x31aa8e11
- (void)suspend;	// 0x31aa8b65
@end

