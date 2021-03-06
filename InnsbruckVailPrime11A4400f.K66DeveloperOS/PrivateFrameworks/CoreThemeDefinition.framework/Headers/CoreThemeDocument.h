/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import "TDPersistentDocument.h"
#import "CoreThemeDefinition-Structs.h"

@class NSManagedObjectModel, TDHistorian, TDThreadMOCOrganizer, NSURL, NSString, NSMutableDictionary;
@protocol TDAssetManagementDelegate;

@interface CoreThemeDocument : TDPersistentDocument {
	NSMutableDictionary *constantArrayControllers;	// 28 = 0x1c
	NSMutableDictionary *cachedConstantArrays;	// 32 = 0x20
	int cachedMaxIdentifierInUse;	// 36 = 0x24
	TDHistorian *m_historian;	// 40 = 0x28
	TDThreadMOCOrganizer *m_mocOrganizer;	// 44 = 0x2c
	NSManagedObjectModel *m_managedObjectModel;	// 48 = 0x30
	NSString *pathToRepresentedDocument;	// 52 = 0x34
	NSString *_relativePathToProductionData;	// 56 = 0x38
	NSString *_targetPlatform;	// 60 = 0x3c
	BOOL m_didMigrate;	// 64 = 0x40
	int _updateVersionMetadataState;	// 68 = 0x44
	id<TDAssetManagementDelegate> _assetManagementDelegate;	// 72 = 0x48
}
@property(retain) id artworkFormat;	// G=0x3073a319; S=0x3073a34d; converted property
@property(assign, nonatomic) id<TDAssetManagementDelegate> assetManagementDelegate;	// G=0x3073d4bd; S=0x3073d4cd; @synthesize=_assetManagementDelegate
@property(readonly, assign) BOOL didMigrate;	// G=0x3073a7fd; converted property
@property(readonly, retain) TDHistorian *historian;	// G=0x30731535; converted property
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x3073142d; converted property
@property(readonly, retain) TDThreadMOCOrganizer *mocOrganizer;	// G=0x30731525; converted property
@property(copy) NSString *pathToRepresentedDocument;	// G=0x3073d499; S=0x3073d4ad; @synthesize
@property(retain) NSString *relativePathToProductionData;	// G=0x30739f75; S=0x30739fd5; converted property
@property(assign) int targetPlatform;	// G=0x3073a471; S=0x3073a405; converted property
@property(readonly, assign, nonatomic) NSURL *themeBitSourceURL;	// G=0x3073d36d; 
@property(retain) id uuid;	// G=0x3073a1e9; S=0x3073a251; converted property
+ (void)_addThemeDocument:(id)document;	// 0x3072fe05
+ (id)_imageAssetURLsByCopyingFileURLs:(id)urls toManagedLocationAtURL:(id)url error:(id *)error;	// 0x307379d5
+ (id)_sharedDocumentList;	// 0x3072fd91
+ (void)closeMigrationProgress;	// 0x3073a7e9
+ (id)createConfiguredDocumentAtURL:(id)url error:(id *)error;	// 0x30730111
+ (id)dataModelNameForVersion:(int)version;	// 0x3073a779
+ (int)dataModelVersion;	// 0x3073a775
+ (int)dataModelVersionFromMetadata:(id)metadata;	// 0x307301cd
+ (int)defaultTargetPlatform;	// 0x3073a46d
+ (id)defaultThemeBitSourceURLForDocumentURL:(id)documentURL;	// 0x3073d2c9
+ (void)doneWithColorConversion;	// 0x3073ab61
+ (id)migrateDocumentAtURL:(id)url ofType:(id)type error:(id *)error;	// 0x30730221
+ (id)persistentStringForPlatform:(int)platform;	// 0x3073a369
+ (int)platformForPersistentString:(id)persistentString;	// 0x3073a38d
+ (void)presentMigrationProgress;	// 0x3073a7d5
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned)identifier toIdentifier:(unsigned)identifier2 error:(id *)error;	// 0x3073a845
+ (unsigned)standardColorSpaceID;	// 0x3073a80d
+ (int)targetPlatformForMOC:(id)moc;	// 0x3073a4c5
- (id)init;	// 0x3072fe3d
- (id)initWithContentsOfURL:(id)url ofType:(id)type error:(id *)error;	// 0x307300c9
- (id)initWithType:(id)type error:(id *)error;	// 0x30730085
- (id)initWithType:(id)type targetPlatform:(int)platform error:(id *)error;	// 0x3072ffe9
- (id)_addAssetsAtFileURLs:(id)fileURLs createProductions:(BOOL)productions referenceFiles:(BOOL)files bitSource:(id)source customInfos:(id)infos sortedCustomInfos:(id *)infos6;	// 0x30738fe9
- (id)_cachedConstantsForEntity:(id)entity;	// 0x30731589
- (void)_configureAfterFirstSave;	// 0x3073d1c9
- (id)_createNamedElementWithIdentifier:(int)identifier;	// 0x307362dd
- (id)_createNamedElementWithNextAvailableIdentifier;	// 0x30736105
- (id)_createPhotoshopElementProductionWithAsset:(id)asset;	// 0x30735ea1
- (id)_customizedSchemaDefinitionsForEntity:(id)entity;	// 0x3073ac11
- (id)_genericPartDefinition;	// 0x30738b59
- (void)_getFilename:(id *)filename scaleFactor:(unsigned *)factor category:(id *)category bitSource:(id *)source forFileURL:(id)fileURL;	// 0x3072fa51
- (id)_namedImageEffectPartDefinition;	// 0x30735d11
- (id)_namedImagePartDefinition;	// 0x3073606d
- (id)_namedTextEffectPartDefinition;	// 0x30735c79
- (void)_normalizeRenditionKeySpec:(id)spec forSchemaRendition:(id)schemaRendition;	// 0x30735711
- (id)_predicateForRenditionKeySpec:(id)renditionKeySpec;	// 0x3072f6f1
- (id)_themeBitSource:(id *)source;	// 0x307334ad
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)urls createIfNecessary:(BOOL)necessary;	// 0x30733621
- (id)addAssetsAtFileURLs:(id)fileURLs;	// 0x30738f61
- (id)addAssetsAtFileURLs:(id)fileURLs createProductions:(BOOL)productions;	// 0x30738f85
- (id)addAssetsAtFileURLs:(id)fileURLs createProductions:(BOOL)productions referenceFiles:(BOOL)files bitSource:(id)source customInfos:(id)infos;	// 0x30738fb1
- (void)addThemeBitSourceAtPath:(id)path;	// 0x3073d485
- (void)addThemeBitSourceAtPath:(id)path createProductions:(BOOL)productions;	// 0x3073d3b1
- (id)allObjectsForEntity:(id)entity withSortDescriptors:(id)sortDescriptors;	// 0x30732401
- (id)allObjectsForEntity:(id)entity withSortDescriptors:(id)sortDescriptors error:(id *)error;	// 0x307324c1
- (id)artworkDraftTypeWithIdentifier:(int)identifier;	// 0x307321bd
// converted property getter: - (id)artworkFormat;	// 0x3073a319
- (id)assetAtFileURL:(id)fileURL;	// 0x30738e5d
- (id)assetAtPath:(id)path;	// 0x30738e21
// declared property getter: - (id)assetManagementDelegate;	// 0x3073d4bd
- (void)buildModel;	// 0x3073a5c1
- (void)changedObjectsNotification:(id)notification;	// 0x3072f5d1
- (BOOL)checkCompatibilityOfDocumentAtURL:(id)url ofType:(id)type error:(id *)error;	// 0x3073ccf9
- (void)checkVersionsAndUpdateIfNecessary;	// 0x307304c1
- (unsigned)checksum;	// 0x3073a28d
- (unsigned)colorSpaceID;	// 0x3073a811
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)url ofType:(id)type modelConfiguration:(id)configuration storeOptions:(id)options error:(id *)error;	// 0x3073cad9
- (id)constantWithName:(id)name forIdentifier:(int)identifier;	// 0x30731f71
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned)identifier toIdentifier:(unsigned)identifier2;	// 0x3073a8d9
- (unsigned)countForEntity:(id)entity withPredicate:(id)predicate;	// 0x307326b1
- (unsigned)countOfRenditionsMatchingRenditionKeySpec:(id)renditionsMatchingRenditionKeySpec;	// 0x3073a0b5
- (unsigned)countOfRenditionsMatchingRenditionKeySpecs:(id)renditionsMatchingRenditionKeySpecs;	// 0x3073a0f1
- (id)createAssetWithName:(id)name fileType:(id)type scaleFactor:(unsigned)factor inCategory:(id)category forThemeBitSource:(id)themeBitSource;	// 0x30738d19
- (id)createAssetWithName:(id)name inCategory:(id)category forThemeBitSource:(id)themeBitSource;	// 0x30738c81
- (id)createAssetWithName:(id)name scaleFactor:(unsigned)factor inCategory:(id)category forThemeBitSource:(id)themeBitSource;	// 0x30738cd5
- (id)createEffectStyleProductionForPartDefinition:(id)partDefinition;	// 0x30735889
- (id)createEffectStyleProductionForPartDefinition:(id)partDefinition withNameIdentifier:(id)nameIdentifier;	// 0x3073589d
- (id)createElementProductionWithAsset:(id)asset;	// 0x30738be9
- (id)createNamedArtworkProductionsForAssets:(id)assets customInfos:(id)infos error:(id *)error;	// 0x30736495
- (id)createNamedEffectProductionWithName:(id)name isText:(BOOL)text;	// 0x30735da9
- (BOOL)createPSDReferenceArtworkForRenditionGroup:(id)renditionGroup atDestination:(id)destination error:(id *)error;	// 0x30733d61
- (id)createProductionWithRenditionGroup:(id)renditionGroup forPartDefinition:(id)partDefinition artworkFormat:(id)format shouldReplaceExisting:(BOOL)existing error:(id *)error;	// 0x30733fb1
- (id)createReferencePNGForSchemaRendition:(id)schemaRendition withPartDefinition:(id)partDefinition atLocation:(id)location error:(id *)error;	// 0x3073330d
- (BOOL)customizationExistsForSchemaDefinition:(id)schemaDefinition;	// 0x3073ad61
- (BOOL)customizeSchemaEffectDefinition:(id)definition shouldReplaceExisting:(BOOL)existing error:(id *)error;	// 0x3073b009
- (BOOL)customizeSchemaElementDefinition:(id)definition usingArtworkFormat:(id)format shouldReplaceExisting:(BOOL)existing error:(id *)error;	// 0x3073af25
- (BOOL)customizeSchemaPartDefinition:(id)definition usingArtworkFormat:(id)format shouldReplaceExisting:(BOOL)existing error:(id *)error;	// 0x3073b189
- (id)customizedSchemaEffectDefinitions;	// 0x3073abf5
- (id)customizedSchemaElementDefinitions;	// 0x3073abd9
- (void)dealloc;	// 0x307303e1
- (id)defaultBaseFileNameForSchemaRendition:(id)schemaRendition withPartDefinition:(id)partDefinition;	// 0x30732f6d
- (id)defaultPNGFileNameForSchemaRendition:(id)schemaRendition withPartDefinition:(id)partDefinition;	// 0x30732f39
- (id)defaultPathComponentsForPartDefinition:(id)partDefinition;	// 0x307332a1
- (void)deleteNamedAssets:(id)assets shouldDeleteAssetFiles:(BOOL)files completionHandler:(id)handler;	// 0x30738705
- (void)deleteObject:(id)object;	// 0x30732a21
- (void)deleteObjects:(id)objects;	// 0x307328f5
- (void)deleteProduction:(id)production shouldDeleteAssetFiles:(BOOL)files;	// 0x30732b11
- (void)deleteProductions:(id)productions shouldDeleteAssetFiles:(BOOL)files;	// 0x30732b45
// converted property getter: - (BOOL)didMigrate;	// 0x3073a7fd
- (id)directionWithIdentifier:(int)identifier;	// 0x30731841
- (id)drawingLayerWithIdentifier:(int)identifier;	// 0x307318b1
- (id)effectComponentWithType:(unsigned)type inRendition:(id)rendition createIfNeeded:(BOOL)needed;	// 0x30731ce9
- (id)effectParameterTypeWithIdentifier:(unsigned)identifier;	// 0x3073193d
- (id)effectParameterValueWithType:(unsigned)type inComponent:(id)component createIfNeeded:(BOOL)needed;	// 0x30731959
- (id)effectTypeWithIdentifier:(unsigned)identifier;	// 0x30731921
- (id)elementWithIdentifier:(int)identifier;	// 0x307317ed
- (void)exportColorsToURL:(id)url;	// 0x3073b53d
- (void)exportCursorsToURL:(id)url;	// 0x3073c1a5
- (id)folderNameFromRenditionKey:(id)renditionKey forPartDefinition:(id)partDefinition;	// 0x30732c99
- (id)handCraftedAssetURLForFileName:(id)fileName;	// 0x30733ac1
// converted property getter: - (id)historian;	// 0x30731535
- (id)idiomWithIdentifier:(int)identifier;	// 0x307318cd
- (void)importColorsFromURL:(id)url valuesOnly:(BOOL)only getUnusedColorNames:(id *)names;	// 0x3073b951
- (void)importCursorsFromURL:(id)url getUnusedImportedCursors:(id *)cursors getUnupdatedCursors:(id *)cursors3;	// 0x3073c3dd
- (void)importNamedAssetsFromFileURLs:(id)fileURLs referenceFiles:(BOOL)files completionHandler:(id)handler;	// 0x30737bed
- (void)importNamedAssetsWithImportInfos:(id)importInfos completionHandler:(id)handler;	// 0x30738185
- (void)importNamedAssetsWithImportInfos:(id)importInfos referenceFiles:(BOOL)files completionHandler:(id)handler;	// 0x307381a5
- (BOOL)isCustomLook;	// 0x3073a035
- (id)iterationTypeWithIdentifier:(int)identifier;	// 0x30731f55
- (id)lookWithIdentifier:(int)identifier;	// 0x307318e9
// converted property getter: - (id)managedObjectModel;	// 0x3073142d
- (id)mappingForPhotoshopLayerIndex:(int)photoshopLayerIndex themeDrawingLayerIdentifier:(int)identifier;	// 0x307322a9
- (id)metadatumForKey:(id)key;	// 0x30739b25
- (id)migrateFromWindowFormat14ToWindowFormat15:(id *)windowFormat15;	// 0x307304c5
- (id)minimalDisplayNameForThemeConstant:(id)themeConstant;	// 0x30732c01
// converted property getter: - (id)mocOrganizer;	// 0x30731525
- (id)namedArtworkProductionWithName:(id)name;	// 0x30736361
- (id)namedArtworkProductions;	// 0x3073b4b5
- (id)namedEffectProductionWithName:(id)name;	// 0x30735b45
- (id)namedEffectProductions;	// 0x3073b4f9
- (id)newObjectForEntity:(id)entity;	// 0x307327a1
- (id)objectsForEntity:(id)entity withPredicate:(id)predicate sortDescriptors:(id)descriptors;	// 0x307324e5
- (id)objectsForEntity:(id)entity withPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x307325a9
- (id)partWithIdentifier:(int)identifier;	// 0x30731809
- (id)pathToAsset:(id)asset;	// 0x30739ea9
// declared property getter: - (id)pathToRepresentedDocument;	// 0x3073d499
- (id)persistentStoreTypeForFileType:(id)fileType;	// 0x3073c721
- (id)presentationStateWithIdentifier:(int)identifier;	// 0x30731879
- (void)primeArrayControllers;	// 0x3073a6a1
- (id)psdImageRefForAsset:(id)asset;	// 0x30732015
- (BOOL)readFromURL:(id)url ofType:(id)type error:(id *)error;	// 0x3073d00d
- (void)recacheThemeConstant:(id)constant;	// 0x30731585
// converted property getter: - (id)relativePathToProductionData;	// 0x30739f75
- (void)removeCustomizationForSchemaDefinition:(id)schemaDefinition shouldDeleteAssetFiles:(BOOL)files;	// 0x3073ae41
- (const renditionkeyfmt *)renditionKeyFormat;	// 0x3073ab65
- (int)renditionKeySemantics;	// 0x3073ab85
- (int)renditionKeySpecAttributeCount;	// 0x3073aba5
- (id)renditionSubtypeWithIdentifier:(unsigned)identifier;	// 0x30731f39
- (id)renditionTypeWithIdentifier:(int)identifier;	// 0x30731f1d
- (id)renditionsMatchingRenditionKeySpec:(id)spec;	// 0x3073a075
- (void)resetThemeConstants;	// 0x3073a641
- (id)rootPathForProductionData;	// 0x30739eed
- (id)schemaCategoryWithIdentifier:(int)identifier;	// 0x30731905
- (id)schemaDefinitionWithElementID:(int)elementID;	// 0x3073b271
- (id)schemaPartDefinitionWithElementID:(int)elementID partID:(int)anId;	// 0x3073b389
// converted property setter: - (void)setArtworkFormat:(id)format;	// 0x3073a34d
// declared property setter: - (void)setAssetManagementDelegate:(id)delegate;	// 0x3073d4cd
- (void)setMetadatum:(id)metadatum forKey:(id)key;	// 0x30739c5d
// declared property setter: - (void)setPathToRepresentedDocument:(id)representedDocument;	// 0x3073d4ad
// converted property setter: - (void)setRelativePathToProductionData:(id)productionData;	// 0x30739fd5
// converted property setter: - (void)setTargetPlatform:(int)platform;	// 0x3073a405
// converted property setter: - (void)setUuid:(id)uuid;	// 0x3073a251
- (BOOL)shouldGeneratePSDAssetFromArtFile:(id)artFile;	// 0x30733b25
- (id)sizeWithIdentifier:(int)identifier;	// 0x30731825
- (id)stateWithIdentifier:(int)identifier;	// 0x3073185d
// converted property getter: - (int)targetPlatform;	// 0x3073a471
// declared property getter: - (id)themeBitSourceURL;	// 0x3073d36d
- (id)themeConstant:(id)constant withIdentifier:(int)identifier;	// 0x30731661
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id *)embeddedSchemaVersion2AndReturnAlertString;	// 0x30731151
- (id)updateToSchemaVersion3AndReturnAlertString:(id *)schemaVersion3AndReturnAlertString;	// 0x30730ab5
- (id)updateToSchemaVersion4AndReturnAlertString:(id *)schemaVersion4AndReturnAlertString;	// 0x30730cd9
- (id)updatedVersionsMetadataFromMetadata:(id)metadata;	// 0x3073c80d
- (BOOL)usesCUISystemThemeRenditionKey;	// 0x3073abbd
// converted property getter: - (id)uuid;	// 0x3073a1e9
- (id)valueWithIdentifier:(int)identifier;	// 0x30731895
- (id)zeroCodeArtworkInfoWithIdentifier:(int)identifier;	// 0x307320d1
@end

