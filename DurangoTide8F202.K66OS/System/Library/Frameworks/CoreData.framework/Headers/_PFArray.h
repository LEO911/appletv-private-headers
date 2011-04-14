/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_array;	// 12 = 0xc
	PFArrayFlags _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x330d9dc5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3311a3f1
+ (void)initialize;	// 0x33100e9d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3311aa01
- (id)initWithObjects:(id *)objects count:(unsigned)count andFlags:(unsigned)flags;	// 0x330d9915
- (unsigned)_flags;	// 0x3311a455
- (id *)_objectsPointer;	// 0x330ddf21
- (void)_setShouldRelease:(BOOL)_set;	// 0x331010a5
- (void)_setShouldUseExtendedRelease:(BOOL)_set;	// 0x331010d1
- (id)arrayFromObjectIDs;	// 0x3311a9dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3311a7c1
// converted property getter: - (unsigned)count;	// 0x330d9dc5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x330da09d
- (void)dealloc;	// 0x330dbf2d
- (void)getObjects:(id *)objects;	// 0x3311ab49
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3311b1b9
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3311a879
- (unsigned)indexOfObject:(id)object;	// 0x3311bd01
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x3311a939
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x3311bd59
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x3311a3f5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x3311a809
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3311a779
- (id)newArrayFromObjectIDs;	// 0x3311adad
- (id)objectAtIndex:(unsigned)index;	// 0x3311b26d
- (void)release;	// 0x330d9b59
- (id)retain;	// 0x330d9b3d
- (unsigned)retainCount;	// 0x3311a445
- (id)subarrayWithRange:(NSRange)range;	// 0x3311aa91
@end
