/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>
#import "CoreData-Structs.h"


@interface _PFRoutines : NSObject {
}
+ (id)_coalescedPrefetchKeypaths:(id)keypaths;	// 0x2d084939
+ (id)_createNicksBase64EncodedStringFromData:(id)data;	// 0x2d085ae5
+ (BOOL)_doNameAndTypeCheck:(id)check;	// 0x2d084c49
+ (unsigned)_generateHashForString:(id)string;	// 0x2d084b39
+ (BOOL)_generateObjectIDMaptableForArray:(id)array withMapping:(id *)mapping andEntries:(id *)entries;	// 0x2d083989
+ (id)_getPFBundleVersionNumber;	// 0x2d05e1fd
+ (id)_getUUID;	// 0x2d084be5
+ (id)_groupObjectsByRootEntity:(id)entity;	// 0x2d0847b9
+ (id)_newCollectionFromCollection:(id)collection forParentContext:(id)parentContext andClass:(Class)aClass;	// 0x2d087b25
+ (id)_newObjectIDsArrayWithMapping:(id)mapping andEntries:(id)entries andCoordinator:(id)coordinator;	// 0x2d0841a5
+ (BOOL)_objectsInOrderedCollection:(id)orderedCollection formSubstringInOrderedCollection:(id)orderedCollection2;	// 0x2d0866d5
+ (id)_replaceBaseline:(id)baseline inOrderedSet:(id)orderedSet withOrderedSet:(id)orderedSet3;	// 0x2d087de5
+ (void)attemptToUpdatePermissionsForFileAtPath:(const char *)path toLevel:(int)level;	// 0x2d085aa5
+ (void)cleanupExternalReferenceLink:(const char *)link;	// 0x2d085a9d
+ (BOOL)convertCString:(const char *)string toUnsignedInt64:(unsigned long long *)unsignedInt64 withBase:(int)base;	// 0x2d084cf1
+ (BOOL)createExternalReferenceLinkFromPath:(const char *)path toPath:(const char *)path2 protectionLevel:(int)level;	// 0x2d085a4d
+ (id)decodeValue:(id)value forTransformableAttribute:(id)transformableAttribute;	// 0x2d085c6d
+ (void)deleteFileForPFExternalReferenceData:(id)pfexternalReferenceData;	// 0x2d0859c5
+ (id)encodeObjectValue:(id)value forTransformableAttribute:(id)transformableAttribute;	// 0x2d085d61
+ (void)getIndexes:(unsigned *)indexes fromCollection:(id)collection forObjectsInCollection:(id)collection3;	// 0x2d085e45
+ (void)initialize;	// 0x2d046fc5
+ (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x2d088329
+ (BOOL)isUbiquitousURLDownloaded:(id)downloaded error:(id *)error;	// 0x2d0883c1
+ (BOOL)isUbiquitousURLUploaded:(id)uploaded error:(id *)error;	// 0x2d088361
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)externalReferenceLocation;	// 0x2d0859a1
+ (BOOL)moveInterimFileToPermanentLocation:(id)permanentLocation;	// 0x2d085161
+ (id)newArrayOfObjectIDsFromCollection:(id)collection;	// 0x2d0863c9
+ (id)newMappedDataForExternalReference:(id)externalReference;	// 0x2d0858ed
+ (id)newMutableArrayFromCollection:(id)collection byRemovingItems:(id)items;	// 0x2d087701
+ (id)newMutableArrayFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x2d087d19
+ (id)newMutableOrderedSetFromCollection:(id)collection;	// 0x2d086211
+ (id)newMutableOrderedSetFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x2d087da1
+ (id)newMutableSetFromCollection:(id)collection byRemovingItems:(id)items;	// 0x2d0872dd
+ (id)newMutableSetFromCollection:(id)collection forParentContext:(id)parentContext;	// 0x2d087d5d
+ (id)newOrderedSetFromCollection:(id)collection;	// 0x2d0862ed
+ (id)newOrderedSetFromCollection:(id)collection byAddingItems:(id)items;	// 0x2d086a79
+ (id)newOrderedSetFromCollection:(id)collection byInsertingItems:(id)items atIndex:(unsigned)index;	// 0x2d0867d1
+ (id)newOrderedSetFromCollection:(id)collection byRemovingItems:(id)items;	// 0x2d086eb9
+ (id)newOrderedSetOfObjectIDsFromCollection:(id)collection;	// 0x2d0865d1
+ (id)newSetOfObjectIDsFromCollection:(id)collection;	// 0x2d0864cd
+ (void)readBytesForExternalReferenceData:(id)externalReferenceData intoBuffer:(void *)buffer range:(NSRange)range;	// 0x2d08558d
+ (void *)readExternalReferenceDataFromFile:(id)file;	// 0x2d0852c1
+ (id)valueForProcessArgument:(id)processArgument;	// 0x2d0476cd
+ (id)writePFExternalReferenceDataToInterimFile:(id)interimFile;	// 0x2d084d2d
@end
