/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"

@class NSSet, NSMutableArray, NSMutableDictionary, NSURL, NSDictionary, NSMutableSet;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
	NSSet *_sourceURLs;	// 44 = 0x2c
	NSURL *_destinationURL;	// 48 = 0x30
	int _overwrite;	// 52 = 0x34
	BOOL _useFallback;	// 56 = 0x38
	NSDictionary *_sourceEntityDataPayloads;	// 60 = 0x3c
	NSDictionary *_sourceEntityDataContentTypes;	// 64 = 0x40
	NSDictionary *_sourceEntityETags;	// 68 = 0x44
	NSMutableSet *_destinationURLs;	// 72 = 0x48
	NSMutableDictionary *_destinationEntityETags;	// 76 = 0x4c
	NSMutableArray *_outstandingSourceURLsToMove;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSMutableDictionary *destinationEntityETags;	// G=0x303e4ce1; @synthesize=_destinationEntityETags
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x303e4c81; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) NSMutableSet *destinationURLs;	// G=0x303e4cf1; @synthesize=_destinationURLs
@property(retain) NSMutableArray *outstandingSourceURLsToMove;	// G=0x303e4d01; S=0x303e4d15; @synthesize=_outstandingSourceURLsToMove
@property(readonly, assign, nonatomic) int overwrite;	// G=0x303e4c91; @synthesize=_overwrite
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataContentTypes;	// G=0x303e4cc1; @synthesize=_sourceEntityDataContentTypes
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataPayloads;	// G=0x303e4cb1; @synthesize=_sourceEntityDataPayloads
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityETags;	// G=0x303e4cd1; @synthesize=_sourceEntityETags
@property(readonly, assign, nonatomic) NSSet *sourceURLs;	// G=0x303e4c71; @synthesize=_sourceURLs
@property(readonly, assign, nonatomic) BOOL useFallback;	// G=0x303e4ca1; @synthesize=_useFallback
- (id)initWithSourceURLs:(id)sourceURLs destinationURL:(id)url overwrite:(BOOL)overwrite useFallback:(BOOL)fallback sourceEntityDataPayloads:(id)payloads sourceEntityDataContentTypes:(id)types sourceEntityETags:(id)tags accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x303e39e9
- (void)_completedMoveTask:(id)task sourceURL:(id)url;	// 0x303e4401
- (void)_completedPutTask:(id)task sourceURL:(id)url;	// 0x303e4895
- (id)_eTagFromTaskResponseHeaders:(id)taskResponseHeaders;	// 0x303e43dd
- (void)_setTagsForDestinationEntityAtURL:(id)url fromTaskResponseHeaders:(id)taskResponseHeaders completionBlock:(id)block;	// 0x303e4345
- (void)dealloc;	// 0x303e3db1
- (id)description;	// 0x303e3e8d
// declared property getter: - (id)destinationEntityETags;	// 0x303e4ce1
// declared property getter: - (id)destinationURL;	// 0x303e4c81
// declared property getter: - (id)destinationURLs;	// 0x303e4cf1
- (id)filenameFromURL:(id)url;	// 0x303e3fa1
- (id)fullDestinationURLFromSourceURL:(id)sourceURL;	// 0x303e3f4d
// declared property getter: - (id)outstandingSourceURLsToMove;	// 0x303e4d01
// declared property getter: - (int)overwrite;	// 0x303e4c91
- (void)processOutstandingTasks;	// 0x303e4031
// declared property setter: - (void)setOutstandingSourceURLsToMove:(id)move;	// 0x303e4d15
// declared property getter: - (id)sourceEntityDataContentTypes;	// 0x303e4cc1
// declared property getter: - (id)sourceEntityDataPayloads;	// 0x303e4cb1
// declared property getter: - (id)sourceEntityETags;	// 0x303e4cd1
// declared property getter: - (id)sourceURLs;	// 0x303e4c71
- (void)startTaskGroup;	// 0x303e3fb5
// declared property getter: - (BOOL)useFallback;	// 0x303e4ca1
@end

