/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


@interface NSMemoryObjectStore : NSMappedObjectStore {
}
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x35c5f0b1
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x35c5f069
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x35c5ed29
- (id)_archivedData;	// 0x35c5f0f9
- (void)_preflightCrossCheck;	// 0x35c5f119
- (void)saveDocumentToPath:(id)path;	// 0x35c5f055
- (id)type;	// 0x35c5f059
@end

