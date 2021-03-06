/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSSearchDelegate;

@interface MSSearch : MSMailDefaultService {
	NSObject<OS_dispatch_queue> *_resultsQueue;	// 32 = 0x20
	NSObject<MSSearchDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x336c298d; S=0x336c22f1; @synthesize=_delegate
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x336c2149
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x336c2181
+ (void)setUnitTestingResultsArray:(id)array;	// 0x336c299d
- (void)_delegateDidFindResults:(id)_delegate;	// 0x336c2795
- (void)_delegateDidFinishWithError:(id)_delegate;	// 0x336c2731
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x336c2495
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x336c2819
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x336c284d
- (id)_initWithDelegate:(id)delegate;	// 0x336c21f5
- (BOOL)_unitTestsAreEnabled;	// 0x336c2809
- (void)dealloc;	// 0x336c22a1
// declared property getter: - (id)delegate;	// 0x336c298d
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x336c2325
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x336c2379
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x336c22f1
@end

