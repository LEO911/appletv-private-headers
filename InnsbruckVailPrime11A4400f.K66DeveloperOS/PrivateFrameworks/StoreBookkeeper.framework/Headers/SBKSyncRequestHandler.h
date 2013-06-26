/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "SBKSyncTransactionProcessing.h"
#import "SBKRequestHandler.h"

@class NSMutableDictionary, NSObject, SBKSyncBagContext, SBKTransactionController, SBKSyncResponseData, NSString, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSString *_overrideResponseDomainVersion;	// 8 = 0x8
	SBKSyncResponseData *_responseData;	// 12 = 0xc
	NSMutableArray *_responseUpdatedKeys;	// 16 = 0x10
	NSMutableArray *_responseDeletedKeys;	// 20 = 0x14
	NSMutableArray *_responseConflictedKeys;	// 24 = 0x18
	NSMutableDictionary *_responseDataByKey;	// 28 = 0x1c
	SBKSyncBagContext *_bagContext;	// 32 = 0x20
	SBKTransactionController *_transactionController;	// 36 = 0x24
}
@property(readonly, assign) SBKSyncBagContext *bagContext;	// G=0x327c2d1d; @synthesize=_bagContext
@property(readonly, assign) NSArray *responseConflictedKeys;	// G=0x327c2201; @synthesize=_responseConflictedKeys
@property(readonly, assign) SBKSyncResponseData *responseData;	// G=0x327c2d09; @synthesize=_responseData
@property(readonly, assign) NSArray *responseDeletedKeys;	// G=0x327c20d9; @synthesize=_responseDeletedKeys
@property(copy) NSString *responseDomainVersion;	// G=0x327c1e7d; S=0x327c1d59; 
@property(readonly, assign) NSArray *responseUpdatedKeys;	// G=0x327c1fb1; @synthesize=_responseUpdatedKeys
@property(readonly, assign) SBKTransactionController *transactionController;	// G=0x327c2d31; @synthesize=_transactionController
+ (int)conflictDetectionType;	// 0x327c1d55
- (id)initWithBagContext:(id)bagContext;	// 0x327c1b59
- (void).cxx_destruct;	// 0x327c2d45
- (void)_onQueue_clearTransactionResponseData;	// 0x327c24a5
// declared property getter: - (id)bagContext;	// 0x327c2d1d
- (void)clearTransactionResponseData;	// 0x327c2535
// declared property getter: - (id)responseConflictedKeys;	// 0x327c2201
// declared property getter: - (id)responseData;	// 0x327c2d09
- (id)responseDataForResponseKey:(id)responseKey;	// 0x327c2329
// declared property getter: - (id)responseDeletedKeys;	// 0x327c20d9
// declared property getter: - (id)responseDomainVersion;	// 0x327c1e7d
// declared property getter: - (id)responseUpdatedKeys;	// 0x327c1fb1
// declared property setter: - (void)setResponseDomainVersion:(id)version;	// 0x327c1d59
- (void)startTransactionWithSyncAnchor:(id)syncAnchor keysToUpdate:(id)update keysToDelete:(id)aDelete finishedBlock:(id)block;	// 0x327c25b5
- (void)transaction:(id)transaction didProcessResponseData:(id)data;	// 0x327c2a09
- (id)transaction:(id)transaction keyValuePairForUpdatedKey:(id)updatedKey;	// 0x327c2c69
- (void)transaction:(id)transaction processDeletedKey:(id)key isDirty:(BOOL *)dirty;	// 0x327c2b85
- (void)transaction:(id)transaction processUpdatedKey:(id)key data:(id)data conflict:(BOOL)conflict isDirty:(BOOL *)dirty;	// 0x327c2a0d
- (void)transaction:(id)transaction willProcessResponseData:(id)data;	// 0x327c2851
// declared property getter: - (id)transactionController;	// 0x327c2d31
@end
