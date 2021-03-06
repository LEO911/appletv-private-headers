/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityStoreMetadata, NSURL, NSDate, PFUbiquityPeer;

@interface PFUbiquityTransactionEntry : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *actingPeer;	// @dynamic
@property(retain, nonatomic) NSString *globalIDStr;	// @dynamic
@property(retain, nonatomic) NSString *knowledgeVectorString;	// @dynamic
@property(retain, nonatomic) NSString *localIDStr;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// @dynamic
@property(retain, nonatomic) NSDate *transactionDate;	// @dynamic
@property(retain, nonatomic) NSString *transactionLogFilename;	// @dynamic
@property(readonly, assign) NSURL *transactionLogURL;	// G=0x33e2af11; 
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
@property(assign) int transactionType;	// G=0x33e2ae81; S=0x33e2aead; 
@property(retain, nonatomic) NSNumber *transactionTypeNum;	// @dynamic
+ (BOOL)canMergeKnowledgeVector:(id)vector withKnowledgeVector:(id)knowledgeVector;	// 0x33e2ba5d
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)vector toKnowledgeVector:(id)knowledgeVector;	// 0x33e2b3a5
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)peerDictionary;	// 0x33e2b695
+ (id)createPeerCodeDictionaryFromVector:(id)vector;	// 0x33e2b935
+ (id)createSumForKnowlegeVectorString:(id)knowlegeVectorString;	// 0x33e2b815
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)compressedObjectIDs withTransactionType:(int)transactionType withImportContext:(id)importContext;	// 0x33e2b269
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)compressedGlobalID withTransactionType:(int)transactionType importContext:(id)context;	// 0x33e2b019
+ (id)transactionEntriesAfterPeerState:(id)state forStoreName:(id)storeName inManagedObjectContext:(id)managedObjectContext;	// 0x33e2be3d
+ (id)transactionEntriesForGlobalIDStrings:(id)globalIDStrings beforePeerState:(id)state inManagedObjectContext:(id)managedObjectContext;	// 0x33e2c151
+ (id)transactionEntriesForPeerID:(id)peerID beforeTransacationNumber:(id)number forStoreNamed:(id)storeNamed inManagedObjectContext:(id)managedObjectContext;	// 0x33e2c621
+ (id)transactionEntriesForPeerID:(id)peerID withTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x33e2c4a1
+ (id)transactionEntriesMatchingGlobalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x33e2bc55
+ (id)transactionEntriesMatchingLocalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x33e2bd49
+ (id)transactionEntryForGlobalIDString:(id)globalIDString withActingPeerID:(id)actingPeerID atTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x33e2c795
- (id)initAndInsertIntoManagedObjectContext:(id)context;	// 0x33e2ae25
// declared property setter: - (void)setTransactionType:(int)type;	// 0x33e2aead
// declared property getter: - (id)transactionLogURL;	// 0x33e2af11
// declared property getter: - (int)transactionType;	// 0x33e2ae81
@end

