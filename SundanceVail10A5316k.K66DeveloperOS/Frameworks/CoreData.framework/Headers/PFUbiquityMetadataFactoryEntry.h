/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityMetadataFactoryFilePresenter;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryEntry : NSObject {
@private
	PFUbiquityLocation *_metadataStoreFileLocation;	// 4 = 0x4
	NSPersistentStoreCoordinator *_psc;	// 8 = 0x8
	NSPersistentStore *_store;	// 12 = 0xc
	PFUbiquityMetadataFactoryFilePresenter *_filePresenter;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) PFUbiquityMetadataFactoryFilePresenter *filePresenter;	// G=0x32e57d71; @synthesize=_filePresenter
@property(readonly, assign, nonatomic) PFUbiquityLocation *metadataStoreFileLocation;	// G=0x32e57d61; @synthesize=_metadataStoreFileLocation
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *psc;	// G=0x32e57d81; @synthesize=_psc
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x32e57d91; @synthesize=_store
- (id)init;	// 0x32e574e9
- (id)initWithMetadataStoreFileLocation:(id)metadataStoreFileLocation;	// 0x32e57555
- (void)dealloc;	// 0x32e575d5
- (id)description;	// 0x32e57675
// declared property getter: - (id)filePresenter;	// 0x32e57d71
- (BOOL)initializePersistentStoreCoordinator:(id *)coordinator;	// 0x32e57719
// declared property getter: - (id)metadataStoreFileLocation;	// 0x32e57d61
// declared property getter: - (id)psc;	// 0x32e57d81
// declared property getter: - (id)store;	// 0x32e57d91
@end
