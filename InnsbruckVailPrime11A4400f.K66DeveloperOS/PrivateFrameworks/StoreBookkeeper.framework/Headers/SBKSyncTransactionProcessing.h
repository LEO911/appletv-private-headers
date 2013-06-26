/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "NSObject.h"


@protocol SBKSyncTransactionProcessing <NSObject>
@optional
- (id)transaction:(id)transaction conflictDetectionOrdinalForKey:(id)key;
- (int)transaction:(id)transaction conflictDetectionTypeForTransactionDetectionType:(int)transactionDetectionType;
@required
- (void)transaction:(id)transaction didProcessResponseData:(id)data;
- (id)transaction:(id)transaction keyValuePairForUpdatedKey:(id)updatedKey;
@optional
- (id)transaction:(id)transaction keysForTransactionForTransactionKeysToDelete:(id)aDelete;
- (id)transaction:(id)transaction keysForTransactionForTransactionKeysToUpdate:(id)update;
@required
- (void)transaction:(id)transaction processDeletedKey:(id)key isDirty:(BOOL *)dirty;
- (void)transaction:(id)transaction processUpdatedKey:(id)key data:(id)data conflict:(BOOL)conflict isDirty:(BOOL *)dirty;
@optional
- (id)transaction:(id)transaction syncAnchorForTransactionSyncAnchor:(id)transactionSyncAnchor;
@required
- (void)transaction:(id)transaction willProcessResponseData:(id)data;
@end
