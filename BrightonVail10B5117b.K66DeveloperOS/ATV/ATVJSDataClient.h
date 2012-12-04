/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataClient.h"
#import "AppleTV-Structs.h"

@class ATVMerchant, ATVJSContext, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVJSDataClient : ATVDataClient {
	ATVJSContext *_jsContext;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_jsContextAccessQueue;	// 8 = 0x8
	NSObject<OS_dispatch_source> *_jsContextPurgeTimer;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *jsContext;	// G=0x3e3b3d; S=0x3e3b4d; @synthesize=_jsContext
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *jsContextAccessQueue;	// G=0x3e3b75; S=0x3e3b85; @synthesize=_jsContextAccessQueue
@property(retain, nonatomic) NSObject<OS_dispatch_source> *jsContextPurgeTimer;	// G=0x3e3bad; S=0x3e3bbd; @synthesize=_jsContextPurgeTimer
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3e3be5; S=0x3e3bf5; @synthesize=_merchant
+ (id)dataPropertyToFeedProperty:(id)feedProperty;	// 0x3e1e69
+ (id)dataTypeFromFeedType:(id)feedType;	// 0x3e1da5
+ (id)dataTypeToFeedType:(id)feedType;	// 0x3e1ca1
- (id)initWithMerchant:(id)merchant;	// 0x3e1f91
- (void).cxx_destruct;	// 0x3e3c1d
- (void)_accessJSContextWithSuccessBlock:(id)successBlock failureBlock:(id)block;	// 0x3e2ecd
- (id)_makeJSContext;	// 0x3e3391
- (id)_queryDictionaryForQuery:(id)query;	// 0x3e3645
- (void)concreteDataClientConnect;	// 0x3e2301
- (void)concreteDataClientDisconnect;	// 0x3e2315
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3e2441
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x3e2075
// declared property getter: - (id)jsContext;	// 0x3e3b3d
// declared property getter: - (id)jsContextAccessQueue;	// 0x3e3b75
// declared property getter: - (id)jsContextPurgeTimer;	// 0x3e3bad
// declared property getter: - (id)merchant;	// 0x3e3be5
- (BOOL)processQueryAsync:(id)async;	// 0x3e243d
// declared property setter: - (void)setJsContext:(id)context;	// 0x3e3b4d
// declared property setter: - (void)setJsContextAccessQueue:(id)queue;	// 0x3e3b85
// declared property setter: - (void)setJsContextPurgeTimer:(id)timer;	// 0x3e3bbd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3e3bf5
@end
