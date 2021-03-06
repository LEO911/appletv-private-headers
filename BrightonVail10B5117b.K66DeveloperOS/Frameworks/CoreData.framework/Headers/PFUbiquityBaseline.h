/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquitySafeSaveFile.h"

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, NSManagedObjectModel, NSPersistentStore, PFUbiquityBaselineMetadata, _PFZipFileArchive;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
	PFUbiquityLocation *_baselineStagingLocation;	// 40 = 0x28
	PFUbiquityBaselineMetadata *_metadata;	// 44 = 0x2c
	NSMutableDictionary *_storeFilenameToData;	// 48 = 0x30
	NSString *_storeFilename;	// 52 = 0x34
	NSString *_storeName;	// 56 = 0x38
	NSString *_modelVersionHash;	// 60 = 0x3c
	NSManagedObjectModel *_model;	// 64 = 0x40
	_PFZipFileArchive *_baselineArchive;	// 68 = 0x44
	NSPersistentStore *_store;	// 72 = 0x48
}
@property(readonly, assign) _PFZipFileArchive *baselineArchive;	// G=0x31012581; @synthesize=_baselineArchive
@property(readonly, assign) PFUbiquityLocation *baselineArchiveLocation;	// G=0x3100bc5d; 
@property(readonly, assign) PFUbiquityLocation *baselinePeerArchiveLocation;	// G=0x3100bc6d; 
@property(readonly, assign) PFUbiquityLocation *baselineStagingLocation;	// G=0x31012509; @synthesize=_baselineStagingLocation
@property(readonly, assign) PFUbiquityBaselineMetadata *metadata;	// G=0x3101251d; @synthesize=_metadata
@property(readonly, assign) NSString *modelVersionHash;	// G=0x3101256d; @synthesize=_modelVersionHash
@property(readonly, assign) NSPersistentStore *store;	// G=0x31012595; @synthesize=_store
@property(readonly, assign) NSString *storeFilename;	// G=0x31012531; @synthesize=_storeFilename
@property(readonly, assign) NSDictionary *storeFilenameToData;	// G=0x31012545; @synthesize=_storeFilenameToData
@property(readonly, assign) NSString *storeName;	// G=0x31012559; @synthesize=_storeName
+ (BOOL)canRollBaselineForStoreMetadata:(id)storeMetadata withStack:(id)stack andManagedObjectModel:(id)model error:(id *)error;	// 0x3100eee9
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)location forAgreementWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash error:(id *)error;	// 0x3100f659
+ (id)createArchiveWithModel:(id)model metadata:(id)metadata storeFilenameToData:(id)data storeFilename:(id)filename error:(id *)error;	// 0x310121e5
+ (id)createBaselineGCModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x31011cd1
+ (id)createBaselineOptimizedModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x31011b95
+ (id)createModelFromBaselineModelWithStoreMetadata:(id)storeMetadata;	// 0x31011e0d
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID error:(id *)error;	// 0x3100e6e5
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID andStoreURL:(id)url error:(id *)error;	// 0x3100ea15
+ (id)metadataFromBaselineArchive:(id)baselineArchive;	// 0x310121a1
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location withError:(id *)error;	// 0x31011ed5
+ (unsigned)numRequiredTransactionsForBaselineRoll;	// 0x3101243d
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)store withLocalPeerID:(id)localPeerID;	// 0x31010f39
+ (/*unknown-type-(D)*/ void*)requiredFractionOfDiskSpaceUsedForLogs;	// 0x3101245d
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned)baselineRoll;	// 0x3101244d
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(/*unknown-type-(D)*/ void*)logs;	// 0x31012471
- (id)init;	// 0x3100b699
- (id)initWithBaselineLocation:(id)baselineLocation andLocalPeerID:(id)anId;	// 0x3100b8c5
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location forStoreWithName:(id)name andManagedObjectModel:(id)model;	// 0x3100b775
// declared property getter: - (id)baselineArchive;	// 0x31012581
// declared property getter: - (id)baselineArchiveLocation;	// 0x3100bc5d
- (id)baselineMetadataData;	// 0x31011995
// declared property getter: - (id)baselinePeerArchiveLocation;	// 0x3100bc6d
// declared property getter: - (id)baselineStagingLocation;	// 0x31012509
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)knowledgeVector;	// 0x3100db41
- (BOOL)clearOutStagingLocationWithError:(id *)error;	// 0x3100bc7d
- (BOOL)constructBaselineArchive:(id *)archive;	// 0x3100c821
- (id)createManagedObjectModel;	// 0x31011a75
- (void)dealloc;	// 0x3100ba99
- (id)description;	// 0x3100bbb9
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)error;	// 0x3100c50d
- (BOOL)gatherContentsFromMigratedBaseline:(id)migratedBaseline withStoreFileURL:(id)storeFileURL error:(id *)error;	// 0x3100c321
- (BOOL)haveTransactionLogsForPeer:(id)peer between:(int)between and:(int)anAnd;	// 0x3100dffd
- (BOOL)importBaselineForStoreAtURL:(id)url ofType:(id)type options:(id)options withLocalPeerID:(id)localPeerID stack:(id)stack andPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3100fe3d
- (BOOL)initializeBaselineArchiveWithError:(id *)error;	// 0x310114a9
- (BOOL)isUploaded:(id *)uploaded;	// 0x3100e551
- (BOOL)loadFileFromLocation:(id)location error:(id *)error;	// 0x3100c93d
- (BOOL)makeCurrentBaselineWithError:(id *)error;	// 0x310100ad
// declared property getter: - (id)metadata;	// 0x3101251d
- (BOOL)metadataMatchesCurrentMetadata:(id *)metadata;	// 0x3100e61d
// declared property getter: - (id)modelVersionHash;	// 0x3101256d
- (BOOL)moveToPermanentLocation:(id *)permanentLocation;	// 0x31010ab5
- (id)optimizedModelData;	// 0x310119c9
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)persistentStore withStoreMetadata:(id)storeMetadata andLocalPeerID:(id)anId error:(id *)error;	// 0x3100be75
- (id)regularModelData;	// 0x310119fd
- (BOOL)replaceLocalPersistentStoreAtURL:(id)url ofType:(id)type withOptions:(id)options usingPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3100d675
- (void)setMetadata:(id)metadata;	// 0x31012485
// declared property getter: - (id)store;	// 0x31012595
- (id)storeData;	// 0x31011a31
// declared property getter: - (id)storeFilename;	// 0x31012531
// declared property getter: - (id)storeFilenameToData;	// 0x31012545
// declared property getter: - (id)storeName;	// 0x31012559
- (BOOL)unpackStoreFilesToStagingLocation:(id *)stagingLocation;	// 0x3100d33d
- (BOOL)writeArchiveContentsToDiskAndMonitorUploadSynchronously:(BOOL)diskAndMonitorUploadSynchronously error:(id *)error;	// 0x310103a9
@end

