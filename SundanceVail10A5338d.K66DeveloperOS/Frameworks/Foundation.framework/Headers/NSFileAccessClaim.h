/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, NSString, NSError;
@protocol OS_xpc_object, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject {
	NSObject<OS_xpc_object> *_client;	// 4 = 0x4
	NSString *_claimID;	// 8 = 0x8
	NSString *_purposeIDOrNil;	// 12 = 0xc
	BOOL _cameFromSuperarbiter;	// 16 = 0x10
	unsigned _blockageCount;	// 20 = 0x14
	BOOL _didWait;	// 24 = 0x18
	BOOL _isRevoked;	// 25 = 0x19
	unsigned _claimerBlockageCount;	// 28 = 0x1c
	NSError *_claimerError;	// 32 = 0x20
	NSMutableOrderedSet *_pendingClaims;	// 36 = 0x24
	NSMutableSet *_blockingClaims;	// 40 = 0x28
	NSMutableSet *_blockingReactorIDs;	// 44 = 0x2c
	id _providerCancellationProcedure;	// 48 = 0x30
	NSMutableDictionary *_reacquisitionProceduresByPresenterID;	// 52 = 0x34
	NSMutableArray *_revocationProcedures;	// 56 = 0x38
	id _claimerOrNil;	// 60 = 0x3c
	NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;	// 64 = 0x40
	BOOL _didMakePresentersRelinquishToWriter;	// 68 = 0x44
	BOOL _revokingIsInexorable;	// 69 = 0x45
}
@property(readonly, assign) BOOL cameFromSuperarbiter;	// G=0x3741e495; converted property
@property(readonly, retain) NSString *claimID;	// G=0x3741e40d; converted property
@property(retain) NSError *claimerError;	// G=0x3741e5e5; S=0x3741e5a1; converted property
@property(readonly, assign) BOOL didWait;	// G=0x3741e535; converted property
@property(readonly, assign) BOOL isRevoked;	// G=0x3741f725; converted property
@property(readonly, retain) NSMutableOrderedSet *pendingClaims;	// G=0x3741eaf5; converted property
+ (BOOL)canReadingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x3741e0b5
+ (BOOL)canWritingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;	// 0x3741e111
- (id)initWithClient:(id)client claimID:(id)anId purposeID:(id)anId3;	// 0x3741e199
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x3741e285
- (void)addPendingClaim:(id)claim;	// 0x3741e9fd
- (void)block;	// 0x3741e4a5
- (void)blockClaimer;	// 0x3741e545
// converted property getter: - (BOOL)cameFromSuperarbiter;	// 0x3741e495
- (void)cancelled;	// 0x3741f629
// converted property getter: - (id)claimID;	// 0x3741e40d
// converted property getter: - (id)claimerError;	// 0x3741e5e5
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)anId;	// 0x3741e6a5
- (id)client;	// 0x3741e3fd
- (void)dealloc;	// 0x3741e289
- (id)description;	// 0x3741fb19
- (id)descriptionWithIndenting:(id)indenting;	// 0x3741f739
- (void)devalueOldClaim:(id)claim;	// 0x3741f6f1
- (void)devalueSelf;	// 0x3741f455
// converted property getter: - (BOOL)didWait;	// 0x3741e535
- (void)evaluateNewClaim:(id)claim;	// 0x3741e885
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x3741e61d
- (void)finalize;	// 0x3741e3b9
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x3741e47d
- (void)granted;	// 0x3741ec35
- (void)ifSymbolicLinkAtURL:(id)url withResolutionCount:(int *)resolutionCount thenReevaluateSelf:(id)aSelf elseInvokeClaimer:(id)claimer;	// 0x3741fb35
- (void)invokeClaimer;	// 0x3741f39d
- (BOOL)isBlockedByClaimWithPurposeID:(id)purposeID;	// 0x3741e7a1
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x3741ec2d
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x3741ec31
- (BOOL)isGranted;	// 0x3741f6f5
// converted property getter: - (BOOL)isRevoked;	// 0x3741f725
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x3741f735
- (void)makePresentersOfItemAtLocation:(id)location orContainedItem:(BOOL)item relinquishUsingProcedureGetter:(id)getter;	// 0x3741eea5
- (void)makeProviderOfItemAtLocation:(id)location provideThenContinue:(id)aContinue;	// 0x3741ec39
- (id)newClaimerWaiter;	// 0x3741f3a1
// converted property getter: - (id)pendingClaims;	// 0x3741eaf5
- (id)purposeID;	// 0x3741e445
- (id)purposeIDOfClaimOnItemAtLocation:(id)location forMessagingPresenter:(id)messagingPresenter;	// 0x3741fd4d
- (void)removePendingClaims:(id)claims;	// 0x3741eb2d
- (void)revoked;	// 0x3741f415
- (void)setCameFromSuperarbiter;	// 0x3741e481
// converted property setter: - (void)setClaimerError:(id)error;	// 0x3741e5a1
- (void)unblock;	// 0x3741e4d5
- (void)unblockClaimer;	// 0x3741e575
- (void)whenRevokedPerformProcedure:(id)procedure;	// 0x3741e621
- (BOOL)willBeRevoked;	// 0x3741f3f5
@end

