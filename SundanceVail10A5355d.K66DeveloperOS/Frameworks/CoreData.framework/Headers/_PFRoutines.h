/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


@interface _PFRoutines : NSObject {
}
+ (id)_createNicksBase64EncodedStringFromData:(id)data;	// 0x334b8281
+ (BOOL)_doNameAndTypeCheck:(id)check;	// 0x334b7585
+ (unsigned)_generateHashForString:(id)string;	// 0x334b74e9
+ (BOOL)_generateObjectIDMaptableForArray:(id)array withMapping:(id *)mapping andEntries:(id *)entries;	// 0x334b6511
+ (id)_getPFBundleVersionNumber;	// 0x334834bd
+ (id)_getUUID;	// 0x334b7521
+ (id)_groupObjectsByRootEntity:(id)entity;	// 0x334b7369
+ (id)_newCollectionFromCollection:(id)collection forParentContext:(id)parentContext andClass:(Class)aClass;	// 0x334b9fc5
+ (id)_newObjectIDsArrayWithMapping:(id)mapping andEntries:(id)entries andCoordinator:(id)coordinator;	// 0x334b6d51
+ (BOOL)_objectsInOrderedCollection:(id)orderedCollection formSubstringInOrderedCollection:(id)orderedCollection2;	// 0x334b8de9
+ (id)_replaceBaseline:(id)baseline inOrderedSet:(id)orderedSet withOrderedSet:(id)orderedSet3;	// 0x334ba281
+ (void)attemptToUpdatePermissionsForFileAtPath:(const char *)path toLevel:(int)level;	// 0x334b8241
+ (void)cleanupExternalReferenceLink:(const char *)link;	// 0x334b8239
+ (BOOL)convertCString:(const char *)string toUnsignedInt64:(unsigned long long *)unsignedInt64 withBase:(int)base;	// 0x334b762d
+ (BOOL)createExternalReferenceLinkFromPath:(const char *)path toPath:(const char *)path2 protectionLevel:(int)level;	// 0x334b81ed
+ (id)decodeValue:(id)value forTransformableAttribute:(id)transformableAttribute;	// 0x334b841d
+ (void)deleteFileForPFExternalReferenceData:(id)pfexternalReferenceData;	// 0x334b8169
+ (id)encodeObjectValue:(id)value forTransformableAttribute:(id)transformableAttribute;	// 0x334b8501
+ (void)getIndexes:(unsigned *)indexes fromCollection:(id)collection forObjectsInCollection:(id)collection3;	// 0x334b85e5
+ (void)initialize;	// 0x334a1389
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)externalReferenceLocation;	// 0x334b8145
+ (BOOL)moveInterimFileToPermanentLocation:(id)permanentLocation;	// 0x334b7b6d
+ (id)newArrayOfObjectIDsFromCollection:(id)collection;	// 0x334b8add
+ (id)newMappedDataForExternalReference:(id)externalReference;	// 0x334b8091
+ (id)newMutableArrayFromCollection:(id)collection byRemovingItems:(id)items;	// 0x334b9c3d
+ (id)newMutableArrayFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x334ba1b5
+ (id)newMutableOrderedSetFromCollection:(id)collection;	// 0x334b8925
+ (id)newMutableOrderedSetFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x334ba23d
+ (id)newMutableSetFromCollection:(id)collection byRemovingItems:(id)items;	// 0x334b98b5
+ (id)newMutableSetFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x334ba1f9
+ (id)newOrderedSetFromCollection:(id)collection;	// 0x334b8a01
+ (id)newOrderedSetFromCollection:(id)collection byAddingItems:(id)items;	// 0x334b917d
+ (id)newOrderedSetFromCollection:(id)collection byInsertingItems:(id)items atIndex:(unsigned)index;	// 0x334b8ee5
+ (id)newOrderedSetFromCollection:(id)collection byRemovingItems:(id)items;	// 0x334b952d
+ (id)newOrderedSetOfObjectIDsFromCollection:(id)collection;	// 0x334b8ce5
+ (id)newSetOfObjectIDsFromCollection:(id)collection;	// 0x334b8be1
+ (void)readBytesForExternalReferenceData:(id)externalReferenceData intoBuffer:(void *)buffer range:(NSRange)range;	// 0x334b7e65
+ (void *)readExternalReferenceDataFromFile:(id)file;	// 0x334b7c71
+ (id)valueForProcessArgument:(id)processArgument;	// 0x334b7669
+ (id)writePFExternalReferenceDataToInterimFile:(id)interimFile;	// 0x334b77f9
@end
