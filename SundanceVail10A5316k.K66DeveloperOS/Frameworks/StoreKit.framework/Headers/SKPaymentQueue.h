/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, SKPaymentQueueClient;

@interface SKPaymentQueue : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x349ff369; 
@property(readonly, assign, nonatomic) NSArray *transactions;	// G=0x349ff2c5; 
+ (BOOL)canMakePayments;	// 0x349fec65
+ (id)defaultQueue;	// 0x349fec29
- (id)init;	// 0x349feb55
- (id)initWithPaymentQueueClient:(id)paymentQueueClient;	// 0x349ff309
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x349ff3ad
- (id)_applyDownloadChangeset:(id)changeset;	// 0x349ff49d
- (void)_completeRestoreWithMessage:(id)message;	// 0x349ff671
- (id)_copyDownloadIDsForDownloads:(id)downloads;	// 0x349ff745
- (id)_copyRemovalsFromUnmergedIndexSet:(id)unmergedIndexSet;	// 0x349ff8e1
- (id)_copyTransactionsFromXPCArray:(id)xpcarray;	// 0x349ffa05
- (void)_daemonLaunchedNotification;	// 0x349ff401
- (void)_establishConnection;	// 0x349ffaf5
- (void)_establishConnectionIfNeeded;	// 0x349ffed9
- (void)_handleConnectionDisconnect;	// 0x349fff21
- (void)_handleMessage:(id)message connection:(id)connection;	// 0x34a000ad
- (id)_initSKPaymentQueue;	// 0x349fea1d
- (void)_notifyObserversAboutChanges:(id)changes sendUpdatedDownloads:(BOOL)downloads;	// 0x34a00209
- (void)_notifyObserversAboutDownloadChanges:(id)changes;	// 0x34a00435
- (void)_notifyObserversAboutRemovals:(id)removals;	// 0x34a00505
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)error;	// 0x34a005d5
- (void)_notifyObserversRestoreTransactionsFinished;	// 0x34a006a5
- (void)_processUpdates:(id)updates trimUnmatched:(BOOL)unmatched sendUpdatedDownloads:(BOOL)downloads;	// 0x34a00769
- (void)_refreshPaymentsWithPolicy:(int)policy;	// 0x34a00bb5
- (void)_removeLocalTransaction:(id)transaction;	// 0x34a00d55
- (void)_removePaymentsForMessage:(id)message;	// 0x34a00e3d
- (void)_sendCommand:(long long)command forDownloads:(id)downloads;	// 0x34a010a1
- (void)_setTransactionsWithReply:(id)reply;	// 0x34a01169
- (void)_updateDownloadsForMessage:(id)message;	// 0x34a0121d
- (void)_updatePaymentsForMessage:(id)message;	// 0x34a013b5
- (void)addPayment:(id)payment;	// 0x349fecb1
- (void)addTransactionObserver:(id)observer;	// 0x349fef09
- (void)cancelDownloads:(id)downloads;	// 0x349fefe9
- (void)dealloc;	// 0x349feb85
- (void)finishTransaction:(id)transaction;	// 0x349ff00d
- (void)pauseDownloads:(id)downloads;	// 0x349ff10d
// declared property getter: - (id)paymentQueueClient;	// 0x349ff369
- (void)removeTransactionObserver:(id)observer;	// 0x349ff131
- (void)restoreCompletedTransactions;	// 0x349ff1c9
- (void)resumeDownloads:(id)downloads;	// 0x349ff27d
- (void)startDownloads:(id)downloads;	// 0x349ff2a1
// declared property getter: - (id)transactions;	// 0x349ff2c5
@end

