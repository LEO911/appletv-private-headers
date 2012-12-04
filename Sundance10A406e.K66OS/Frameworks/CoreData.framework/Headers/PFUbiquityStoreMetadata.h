/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSSet, NSDictionary, PFUbiquityLocation, NSData, NSURL;

@interface PFUbiquityStoreMetadata : NSManagedObject {
}
@property(retain, nonatomic) NSString *modelVersionHashString;	// @dynamic
@property(retain, nonatomic) NSSet *peerStates;	// @dynamic
@property(retain, nonatomic) NSSet *primaryKeyRanges;	// @dynamic
@property(retain, nonatomic) NSString *storeIdentifier;	// @dynamic
@property(retain, nonatomic) NSDictionary *storeOptions;	// G=0x33dd7e11; S=0x33dd7e6d; 
@property(retain, nonatomic) NSData *storeOptionsBinaryPlistData;	// @dynamic
@property(retain, nonatomic) NSString *storeType;	// @dynamic
@property(retain, nonatomic) NSString *storeURLString;	// @dynamic
@property(retain, nonatomic) NSSet *transactionEntries;	// @dynamic
@property(retain, nonatomic) NSString *ubiquityName;	// @dynamic
@property(retain, nonatomic) NSString *ubiquityRelativePath;	// @dynamic
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x33dd7dc9; 
@property(readonly, assign, nonatomic) NSURL *ubiquityRootURL;	// G=0x33dd7d79; 
@property(retain, nonatomic) NSString *ubiquityRootURLString;	// @dynamic
+ (id)addMetadataForPersistentStore:(id)persistentStore withLocalPeerID:(id)localPeerID inManagedObjectContext:(id)managedObjectContext;	// 0x33dd6bb1
+ (id)allStoreMetadataInManagedObjectContext:(id)managedObjectContext;	// 0x33dd6a49
+ (id)baselineGCModelURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x33dd7b9d
+ (id)baselineMetaFileURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x33dd7bd1
+ (id)baselineModelURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x33dd7b69
+ (id)baselineRootDirectoryForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x33dd7c05
+ (id)baselineStoreURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x33dd7b35
+ (BOOL)isBaselineRootURL:(id)url;	// 0x33dd7d45
+ (id)metadataForStoreWithName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33dd6b69
+ (id)storeMetadatasWithName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33dd6ac5
- (id)initWithUbiquityName:(id)ubiquityName andUbiquityRootLocation:(id)location insertIntoManagedObjectContext:(id)context;	// 0x33dd6969
- (id)createKnowledgeVectorForBaseline;	// 0x33dd7351
- (id)createPeerRangesForBaselineWithLocalPeerID:(id)localPeerID;	// 0x33dd7389
- (void)loadFromBaselineMetadata:(id)baselineMetadata withLocalPeerID:(id)localPeerID;	// 0x33dd6f81
- (id)peerStateForPeerID:(id)peerID;	// 0x33dd7691
- (id)peerStoreURLForPeerIdentifier:(id)peerIdentifier;	// 0x33dd7af1
- (id)peerURLForPeerIdentifier:(id)peerIdentifier;	// 0x33dd7aa5
// declared property setter: - (void)setStoreOptions:(id)options;	// 0x33dd7e6d
// declared property getter: - (id)storeOptions;	// 0x33dd7e11
// declared property getter: - (id)ubiquityRootLocation;	// 0x33dd7dc9
// declared property getter: - (id)ubiquityRootURL;	// 0x33dd7d79
- (void)updatePeerStatesToMatchKnowledgeVector:(id)matchKnowledgeVector;	// 0x33dd78d5
- (void)updateWithStore:(id)store;	// 0x33dd6d85
@end
