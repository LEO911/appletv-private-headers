/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSThread;

@interface MSSearch : MSMailDefaultService {
	NSThread *_originalThread;	// 24 = 0x18
}
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x31f0f091
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x31f0f0c9
+ (void)setUnitTestingResultsArray:(id)array;	// 0x31f0f8f9
+ (id)smi_serverCommandName;	// 0x31f0f085
- (id)_didFindMessageData:(id)data userInfo:(id)info;	// 0x31f0f4e1
- (id)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x31f0f269
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x31f0f7ad
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x31f0f7e1
- (id)_initWithDelegate:(id)delegate;	// 0x31f0f179
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x31f0f3d9
- (BOOL)_unitTestsAreEnabled;	// 0x31f0f79d
- (void)dealloc;	// 0x31f0f209
@end
