/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "MZKeyValueStoreOperationDelegate.h"
#import "MZKeyValueStoreDeserializeOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSOperationQueue, MZKeyValueStoreAuthenticationController, MZKeyValueStoreTransaction, MZTaskAssertion, MZKeyValueStoreDeserializer, NSURL, NSString;
@protocol MZKeyValueStoreControllerDelegate, OS_dispatch_queue;

@interface MZKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate> {
	id<MZKeyValueStoreControllerDelegate> _delegate;	// 4 = 0x4
	NSURL *_defaultGetURL;	// 8 = 0x8
	NSURL *_defaultSetURL;	// 12 = 0xc
	NSString *_defaultDomain;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
	MZKeyValueStoreAuthenticationController *_authenticationController;	// 24 = 0x18
	NSMutableArray *_pendingTransactions;	// 28 = 0x1c
	MZKeyValueStoreTransaction *_currentTransaction;	// 32 = 0x20
	NSOperationQueue *_operationQueue;	// 36 = 0x24
	BOOL _resolvingError;	// 40 = 0x28
	MZKeyValueStoreDeserializer *_currentDeserializer;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
	MZTaskAssertion *_backgroundTaskAssertion;	// 52 = 0x34
}
@property(retain) MZKeyValueStoreAuthenticationController *authenticationController;	// G=0x300ea095; S=0x300ea0a9; @synthesize=_authenticationController
@property(retain, nonatomic) MZTaskAssertion *backgroundTaskAssertion;	// G=0x300ea1a9; S=0x300ea1b9; @synthesize=_backgroundTaskAssertion
@property(retain, nonatomic) MZKeyValueStoreDeserializer *currentDeserializer;	// G=0x300ea169; S=0x300ea179; @synthesize=_currentDeserializer
@property(retain, nonatomic) MZKeyValueStoreTransaction *currentTransaction;	// G=0x300ea109; S=0x300ea119; @synthesize=_currentTransaction
@property(copy) NSString *defaultDomain;	// G=0x300ea071; S=0x300ea085; @synthesize=_defaultDomain
@property(retain) NSURL *defaultGetURL;	// G=0x300ea029; S=0x300ea03d; @synthesize=_defaultGetURL
@property(retain) NSURL *defaultSetURL;	// G=0x300ea04d; S=0x300ea061; @synthesize=_defaultSetURL
@property(assign) id<MZKeyValueStoreControllerDelegate> delegate;	// G=0x300e9ffd; S=0x300ea011; @synthesize=_delegate
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;	// G=0x300ea189; S=0x300ea199; @synthesize=_dispatchQueue
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x300ea0b9; S=0x300ea0d1; @synthesize=_enabled
@property(retain, nonatomic) NSOperationQueue *operationQueue;	// G=0x300ea129; S=0x300ea139; @synthesize=_operationQueue
@property(retain, nonatomic) NSMutableArray *pendingTransactions;	// G=0x300ea0e9; S=0x300ea0f9; @synthesize=_pendingTransactions
@property(assign, nonatomic, getter=isResolvingError) BOOL resolvingError;	// G=0x300ea149; S=0x300ea159; @synthesize=_resolvingError
- (id)initWithDomain:(id)domain baseURLForGETAll:(id)getall baseURLForPUTAll:(id)putall;	// 0x300e68f1
- (void)_addPendingTransaction:(id)transaction;	// 0x300e82d9
- (BOOL)_authenticationCanProcessTransaction:(id)transaction error:(id *)error;	// 0x300e8491
- (void)_beginBackgroundTask;	// 0x300e96c1
- (BOOL)_canScheduleTransaction:(id)transaction error:(id *)error;	// 0x300e8341
- (void)_cancelAllTransactions:(id)transactions;	// 0x300e7b35
- (void)_cancelTransaction:(id)transaction error:(id)error;	// 0x300e7c79
- (BOOL)_clampsCanScheduleTransaction:(id)transaction error:(id *)error;	// 0x300e8461
- (void)_currentTransactionDidFinish;	// 0x300e860d
- (BOOL)_delegateShouldScheduleTransaction:(id)_delegate error:(id *)error;	// 0x300e9335
- (void)_delegateTransactionDidCancel:(id)_delegateTransaction withError:(id)error;	// 0x300e94cd
- (BOOL)_delegateTransactionDidFail:(id)_delegateTransaction withError:(id)error;	// 0x300e93cd
- (void)_delegateTransactionDidFinish:(id)_delegateTransaction;	// 0x300e95c9
- (void)_endBackgroundTask;	// 0x300e9945
- (void)_errorResolutionCancel:(id)cancel;	// 0x300e9251
- (void)_errorResolutionDefault:(id)aDefault;	// 0x300e92b5
- (void)_errorResolutionRetry:(id)retry;	// 0x300e9145
- (BOOL)_isEnabledForTransaction:(id)transaction error:(id *)error;	// 0x300e83a5
- (BOOL)_isTransactionValid:(id)valid error:(id *)error;	// 0x300e83f1
- (void)_processCurrentTransaction;	// 0x300e7fd5
- (void)_processOperationOutput:(id)output operationAuthenticated:(BOOL)authenticated;	// 0x300e8a6d
- (void)_processPendingTransactions;	// 0x300e7e31
- (id)_requestForTransaction:(id)transaction;	// 0x300e8125
- (void)_resolveError:(id)error resolution:(int)resolution;	// 0x300e9065
- (void)_scheduleTransaction:(id)transaction;	// 0x300e81fd
- (id)_scheduleTransactionWithType:(int)type sinceDomainVersion:(id)version URL:(id)url keys:(id)keys processor:(id)processor;	// 0x300e8555
- (void)_transactionDidCancel:(id)_transaction withError:(id)error;	// 0x300e88e5
- (void)_transactionDidFail:(id)_transaction withError:(id)error;	// 0x300e8739
// declared property getter: - (id)authenticationController;	// 0x300ea095
// declared property getter: - (id)backgroundTaskAssertion;	// 0x300ea1a9
- (void)cancelAllTransactions;	// 0x300e7491
- (void)cancelAllTransactionsCancelCode:(int)code;	// 0x300e7649
- (void)cancelScheduledTransaction:(id)transaction;	// 0x300e73b9
- (id)clampsController;	// 0x300e71f9
- (void)clearWeakReferencesInOperation:(id)operation;	// 0x300e7135
// declared property getter: - (id)currentDeserializer;	// 0x300ea169
// declared property getter: - (id)currentTransaction;	// 0x300ea109
- (void)dealloc;	// 0x300e6b01
// declared property getter: - (id)defaultDomain;	// 0x300ea071
// declared property getter: - (id)defaultGetURL;	// 0x300ea029
// declared property getter: - (id)defaultSetURL;	// 0x300ea04d
// declared property getter: - (id)delegate;	// 0x300e9ffd
- (void)deserializeOperationDidFinish:(id)deserializeOperation shouldReschedule:(BOOL)reschedule;	// 0x300e9f75
// declared property getter: - (id)dispatchQueue;	// 0x300ea189
// declared property getter: - (BOOL)isEnabled;	// 0x300ea0b9
- (BOOL)isIdle;	// 0x300e7955
// declared property getter: - (BOOL)isResolvingError;	// 0x300ea149
- (void)keyValueStoreOperation:(id)operation scheduleURLOperation:(id)operation2;	// 0x300e9f09
- (void)keyValueStoreOperationOperationDidFinish:(id)keyValueStoreOperationOperation;	// 0x300e9f65
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x300e6d7d
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x300e9af5
- (void)operation:(id)operation failedWithError:(id)error;	// 0x300e9c25
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x300e9a15
// declared property getter: - (id)operationQueue;	// 0x300ea129
- (void)operationQueue:(id)queue willAddOperation:(id)operation;	// 0x300e718d
- (void)operationQueue:(id)queue willRemoveOperation:(id)operation;	// 0x300e71e5
// declared property getter: - (id)pendingTransactions;	// 0x300ea0e9
- (void)performBlock:(id)block;	// 0x300e7af5
- (void)performBlockAndWait:(id)wait;	// 0x300e7b15
- (void)reset;	// 0x300e78c1
- (void)resolveError:(id)error resolution:(int)resolution;	// 0x300e780d
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)sinceDomainVersion processor:(id)processor;	// 0x300e7215
- (id)scheduleGetTransactionWithKeys:(id)keys processor:(id)processor;	// 0x300e7255
- (id)scheduleSetTransactionWithKeys:(id)keys processor:(id)processor;	// 0x300e7295
- (void)scheduleTransaction:(id)transaction;	// 0x300e72d5
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x300ea0a9
// declared property setter: - (void)setBackgroundTaskAssertion:(id)assertion;	// 0x300ea1b9
// declared property setter: - (void)setCurrentDeserializer:(id)deserializer;	// 0x300ea179
// declared property setter: - (void)setCurrentTransaction:(id)transaction;	// 0x300ea119
// declared property setter: - (void)setDefaultDomain:(id)domain;	// 0x300ea085
// declared property setter: - (void)setDefaultGetURL:(id)url;	// 0x300ea03d
// declared property setter: - (void)setDefaultSetURL:(id)url;	// 0x300ea061
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300ea011
// declared property setter: - (void)setDispatchQueue:(id)queue;	// 0x300ea199
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300ea0d1
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x300ea139
// declared property setter: - (void)setPendingTransactions:(id)transactions;	// 0x300ea0f9
// declared property setter: - (void)setResolvingError:(BOOL)error;	// 0x300ea159
@end
