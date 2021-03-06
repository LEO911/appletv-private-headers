/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "SKPaymentTransactionObserver.h"

@class NSMutableSet, ATVJSContext;

__attribute__((visibility("hidden")))
@interface JSSKPaymentQueueTransactionObserver : NSObject <SKPaymentTransactionObserver> {
@private
	ATVJSContext *_atvContext;	// 4 = 0x4
	NSMutableSet *_jsObservers;	// 8 = 0x8
}
- (id)initWithContext:(id)context thisObject:(OpaqueJSValue *)object;	// 0x3319ecd5
- (void)_callObserversUsingFunctionName:(id)name withOptionalArgument:(id)optionalArgument;	// 0x3319ee65
- (void)addJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x3319edb5
- (void)dealloc;	// 0x3319ed55
- (void)paymentQueue:(id)queue removedTransactions:(id)transactions;	// 0x3319f0c5
- (void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;	// 0x3319f145
- (void)paymentQueue:(id)queue updatedTransactions:(id)transactions;	// 0x3319f045
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;	// 0x3319f161
- (void)removeJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x3319ee0d
@end

