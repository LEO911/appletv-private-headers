/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskDelegate.h"

@class NSString, NSDictionary, NSMutableDictionary, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSURL *_folderURL;	// 44 = 0x2c
	NSString *_lastKnownCTag;	// 48 = 0x30
	BOOL _validCTag;	// 52 = 0x34
	void *_context;	// 56 = 0x38
	unsigned _multiPutBatchMaxNumResources;	// 60 = 0x3c
	unsigned _multiPutBatchMaxSize;	// 64 = 0x40
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 68 = 0x44
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 72 = 0x48
	NSMutableDictionary *_uuidToHREF;	// 76 = 0x4c
	NSMutableDictionary *_hrefToETag;	// 80 = 0x50
	NSMutableDictionary *_uuidToErrorItems;	// 84 = 0x54
	NSMutableDictionary *_hrefToErrorItems;	// 88 = 0x58
}
@property(readonly, assign) void *context;	// G=0x3007f829; @synthesize=_context
@property(readonly, assign) NSURL *folderURL;	// G=0x3007f819; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *hrefToETag;	// G=0x3007f891; @synthesize=_hrefToETag
@property(readonly, assign) NSDictionary *hrefToErrorItems;	// G=0x3007f8b1; @synthesize=_hrefToErrorItems
@property(assign) unsigned multiPutBatchMaxNumResources;	// G=0x3007f7d9; S=0x3007f7e9; @synthesize=_multiPutBatchMaxNumResources
@property(assign) unsigned multiPutBatchMaxSize;	// G=0x3007f7f9; S=0x3007f809; @synthesize=_multiPutBatchMaxSize
@property(retain) NSString *nextCTag;	// G=0x3007f849; S=0x3007f85d; @synthesize=_lastKnownCTag
@property(readonly, assign) NSDictionary *uuidToErrorItems;	// G=0x3007f8a1; @synthesize=_uuidToErrorItems
@property(readonly, assign) NSDictionary *uuidToHREF;	// G=0x3007f881; @synthesize=_uuidToHREF
@property(readonly, assign) BOOL validCTag;	// G=0x3007f839; @synthesize=_validCTag
- (id)initWithFolderURL:(id)folderURL checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3007eaf9
- (void)_sendNextBatch;	// 0x3007ef29
// declared property getter: - (void *)context;	// 0x3007f829
- (void)dealloc;	// 0x3007ed25
- (id)description;	// 0x3007edfd
// declared property getter: - (id)folderURL;	// 0x3007f819
// declared property getter: - (id)hrefToETag;	// 0x3007f891
// declared property getter: - (id)hrefToErrorItems;	// 0x3007f8b1
// declared property getter: - (unsigned)multiPutBatchMaxNumResources;	// 0x3007f7d9
// declared property getter: - (unsigned)multiPutBatchMaxSize;	// 0x3007f7f9
- (Class)multiPutTaskClass;	// 0x3007eee5
// declared property getter: - (id)nextCTag;	// 0x3007f849
// declared property setter: - (void)setMultiPutBatchMaxNumResources:(unsigned)resources;	// 0x3007f7e9
// declared property setter: - (void)setMultiPutBatchMaxSize:(unsigned)size;	// 0x3007f809
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x3007f85d
- (void)startTaskGroup;	// 0x3007f541
- (void)syncAway;	// 0x3007f551
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3007f561
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3007ee91
// declared property getter: - (id)uuidToErrorItems;	// 0x3007f8a1
// declared property getter: - (id)uuidToHREF;	// 0x3007f881
// declared property getter: - (BOOL)validCTag;	// 0x3007f839
@end
