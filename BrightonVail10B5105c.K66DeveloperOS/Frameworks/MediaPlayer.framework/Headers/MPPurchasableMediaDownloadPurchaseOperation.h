/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSDownloadManagerObserver.h"
#import <NSOperation.h> // Unknown library

@class NSString, NSObject, NSDictionary, SSPurchase, SSPurchaseRequest;
@protocol OS_dispatch_queue, MPPurchasableMediaDownloadPurchaseOperationDelegate;

@interface MPPurchasableMediaDownloadPurchaseOperation : NSOperation <SSDownloadManagerObserver> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 12 = 0xc
	SSPurchase *_purchase;	// 16 = 0x10
	SSPurchaseRequest *_purchaseRequest;	// 20 = 0x14
	BOOL _backgroundRequest;	// 24 = 0x18
	BOOL _shouldPurgeIfNeeded;	// 25 = 0x19
	NSString *_buyParameters;	// 28 = 0x1c
	id<MPPurchasableMediaDownloadPurchaseOperationDelegate> _delegate;	// 32 = 0x20
	NSDictionary *_purchaseValuesForDownloadProperties;	// 36 = 0x24
	int _options;	// 40 = 0x28
	int _purchaseType;	// 44 = 0x2c
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x350720c1; S=0x35072355; @synthesize=_backgroundRequest
@property(readonly, assign, nonatomic) NSString *buyParameters;	// G=0x350735c9; @synthesize=_buyParameters
@property(readonly, assign, nonatomic) id<MPPurchasableMediaDownloadPurchaseOperationDelegate> delegate;	// G=0x350735d9; @synthesize=_delegate
@property(readonly, assign, nonatomic) int options;	// G=0x350735f9; @synthesize=_options
@property(readonly, assign, nonatomic) SSPurchase *purchase;	// G=0x35072191; 
@property(readonly, assign, nonatomic) int purchaseType;	// G=0x35073609; @synthesize=_purchaseType
@property(readonly, assign, nonatomic) NSDictionary *purchaseValuesForDownloadProperties;	// G=0x350735e9; @synthesize=_purchaseValuesForDownloadProperties
@property(assign, nonatomic) BOOL shouldPurgeIfNeeded;	// G=0x35072455; S=0x350723d5; @synthesize=_shouldPurgeIfNeeded
- (id)initWithPurchaseType:(int)purchaseType options:(int)options buyParameters:(id)parameters purchaseValuesForDownloadProperties:(id)downloadProperties delegate:(id)delegate;	// 0x35071ea1
// declared property getter: - (id)buyParameters;	// 0x350735c9
- (void)cancel;	// 0x3507336d
- (void)dealloc;	// 0x3507200d
// declared property getter: - (id)delegate;	// 0x350735d9
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x350720c1
- (void)main;	// 0x35072525
// declared property getter: - (int)options;	// 0x350735f9
// declared property getter: - (id)purchase;	// 0x35072191
// declared property getter: - (int)purchaseType;	// 0x35073609
// declared property getter: - (id)purchaseValuesForDownloadProperties;	// 0x350735e9
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x35072355
// declared property setter: - (void)setShouldPurgeIfNeeded:(BOOL)purgeIfNeeded;	// 0x350723d5
// declared property getter: - (BOOL)shouldPurgeIfNeeded;	// 0x35072455
@end
