/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshotCollection : NSObject {
@private
	NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;	// 4 = 0x4
	NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;	// 8 = 0x8
	NSMutableDictionary *_kvToSnapshot;	// 12 = 0xc
	NSMutableArray *_peerSnapshots;	// 16 = 0x10
	BOOL _needSort;	// 20 = 0x14
}
- (id)init;	// 0x3407d901
- (void)addSnapshot:(id)snapshot;	// 0x3407df11
- (id)allPeerIDs;	// 0x3407e2bd
- (BOOL)calculateSnapshotDiffsWithError:(id *)error;	// 0x3407d9fd
- (void)dealloc;	// 0x3407e2dd
- (id)knowledgeVectorsForTransactionNumber:(id)transactionNumber exportedByPeerWithID:(id)anId;	// 0x3407deb9
- (id)snapshotForKnowledgeVector:(id)knowledgeVector;	// 0x3407deed
- (id)snapshotForPeerID:(id)peerID andTransactionNumber:(id)number;	// 0x3407de89
@end

