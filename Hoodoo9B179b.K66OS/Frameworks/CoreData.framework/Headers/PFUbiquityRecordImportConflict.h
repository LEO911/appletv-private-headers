/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, NSDate, NSDictionary, NSManagedObject, NSArray, PFUbiquityImportContext, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordImportConflict : NSObject {
@private
	NSString *_conflictingObjectGlobalIDStr;	// 4 = 0x4
	NSManagedObject *_sourceObject;	// 8 = 0x8
	NSDictionary *_conflictingLogContent;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 20 = 0x14
	int _conflictingLogTransactionType;	// 24 = 0x18
	NSDate *_conflictLogDate;	// 28 = 0x1c
	NSNumber *_conflictingLogTransactionNumber;	// 32 = 0x20
	NSArray *_transactionHistory;	// 36 = 0x24
	NSDictionary *_globalIDIndexToLocalIDURIMap;	// 40 = 0x28
	PFUbiquityImportContext *_importContext;	// 44 = 0x2c
}
@property(retain, nonatomic) NSDate *conflictLogDate;	// G=0x32c05ab1; S=0x32c0689d; @synthesize=_conflictLogDate
@property(retain, nonatomic) NSDictionary *conflictingLogContent;	// G=0x32c05ae1; S=0x32c06875; @synthesize=_conflictingLogContent
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;	// G=0x32c05a71; S=0x32c06915; @synthesize=_conflictingLogKnowledgeVector
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber;	// G=0x32c05a61; S=0x32c0693d; @synthesize=_conflictingLogTransactionNumber
@property(assign, nonatomic) int conflictingLogTransactionType;	// G=0x32c05ac1; S=0x32c05ad1; @synthesize=_conflictingLogTransactionType
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr;	// G=0x32c05b01; S=0x32c06825; @synthesize=_conflictingObjectGlobalIDStr
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x32c05a51; S=0x32c06965; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;	// G=0x32c05a91; S=0x32c068c5; @synthesize=_globalIDIndexToLocalIDURIMap
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x32c05a81; S=0x32c068ed; @synthesize=_importContext
@property(retain, nonatomic) NSManagedObject *sourceObject;	// G=0x32c05af1; S=0x32c0684d; @synthesize=_sourceObject
@property(retain, nonatomic) NSArray *transactionHistory;	// G=0x32c05aa1; S=0x32c05bad; @synthesize=_transactionHistory
+ (id)createArrayOfLogURLsForTransactionEntries:(id)transactionEntries;	// 0x32c05cd9
+ (id)createTransactionLogForTransactionEntry:(id)transactionEntry withError:(id *)error;	// 0x32c05e81
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)knowledgeVector withExportingPeerID:(id)exportingPeerID fromPeerSnapshotCollection:(id)peerSnapshotCollection;	// 0x32c06461
+ (void)initialize;	// 0x32c067c1
+ (int)resolvedTypeForConflictingLogType:(int)conflictingLogType andLatestTransactionEntry:(id)entry skipObject:(BOOL *)object;	// 0x32c060f9
- (id)init;	// 0x32c08ce9
- (id)_newNormalizedSnapshot:(id)snapshot forObject:(id)object;	// 0x32c08a51
// declared property getter: - (id)conflictLogDate;	// 0x32c05ab1
// declared property getter: - (id)conflictingLogContent;	// 0x32c05ae1
// declared property getter: - (id)conflictingLogKnowledgeVector;	// 0x32c05a71
// declared property getter: - (id)conflictingLogTransactionNumber;	// 0x32c05a61
// declared property getter: - (int)conflictingLogTransactionType;	// 0x32c05ac1
// declared property getter: - (id)conflictingObjectGlobalIDStr;	// 0x32c05b01
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)relationship withValue:(id)value withGlobalIDToLocalIDURIMap:(id)localIDURIMap andTransactionLog:(id)log;	// 0x32c06aa1
- (id)createSnapshotDictionaryForObjectWithEntry:(id)entry inTransactionLog:(id)transactionLog withError:(id *)error;	// 0x32c06f85
- (id)createSnapshotDictionaryFromLogEntry:(id)logEntry withError:(id *)error;	// 0x32c05c5d
- (id)createSnapshotFromLogContent:(id)logContent withTransactionLog:(id)transactionLog;	// 0x32c06d1d
- (id)createSnapshotFromManagedObject:(id)managedObject;	// 0x32c071b5
// declared property getter: - (id)currentKnowledgeVector;	// 0x32c05a51
- (void)dealloc;	// 0x32c08bf5
- (id)description;	// 0x32c0698d
// declared property getter: - (id)globalIDIndexToLocalIDURIMap;	// 0x32c05a91
// declared property getter: - (id)importContext;	// 0x32c05a81
- (BOOL)resolveConflict:(id *)conflict;	// 0x32c074f5
- (BOOL)resolveMergeConflictForLogContent:(id)logContent previousSnapshot:(id)snapshot andAncestorSnapshot:(id)snapshot3 withOldVersion:(unsigned)oldVersion andNewVersion:(unsigned)version error:(id *)error;	// 0x32c0884d
// declared property setter: - (void)setConflictLogDate:(id)date;	// 0x32c0689d
// declared property setter: - (void)setConflictingLogContent:(id)content;	// 0x32c06875
// declared property setter: - (void)setConflictingLogKnowledgeVector:(id)vector;	// 0x32c06915
// declared property setter: - (void)setConflictingLogTransactionNumber:(id)number;	// 0x32c0693d
// declared property setter: - (void)setConflictingLogTransactionType:(int)type;	// 0x32c05ad1
// declared property setter: - (void)setConflictingObjectGlobalIDStr:(id)str;	// 0x32c06825
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x32c06965
// declared property setter: - (void)setGlobalIDIndexToLocalIDURIMap:(id)localIDURIMap;	// 0x32c068c5
// declared property setter: - (void)setImportContext:(id)context;	// 0x32c068ed
// declared property setter: - (void)setSourceObject:(id)object;	// 0x32c0684d
// declared property setter: - (void)setTransactionHistory:(id)history;	// 0x32c05bad
// declared property getter: - (id)sourceObject;	// 0x32c05af1
// declared property getter: - (id)transactionHistory;	// 0x32c05aa1
@end

