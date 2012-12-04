/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x3626b815
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x3626b71d
- (BOOL)_isDeallocating;	// 0x3626bb41
- (void)_rehash;	// 0x3626bb81
- (BOOL)_tryRetain;	// 0x3626baf1
- (void)addObject:(id)object;	// 0x3626c135
- (id)arrayFromObjectIDs;	// 0x3626c021
- (unsigned)count;	// 0x3626bb6d
- (void)dealloc;	// 0x3626b971
- (void)finalize;	// 0x3626b9e9
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3626bf99
- (unsigned)indexOfObject:(id)object;	// 0x3626be65
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x3626be9d
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x3626bed5
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x3626bf0d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3626c23d
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x3626bdd9
- (id)newArrayFromObjectIDs;	// 0x3626c049
- (id)objectAtIndex:(unsigned)index;	// 0x3626bd65
- (oneway void)release;	// 0x3626ba65
- (void)removeLastObject;	// 0x3626c195
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3626c2a1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3626c335
- (id)retain;	// 0x3626ba2d
- (unsigned)retainCount;	// 0x3626badd
- (id)subarrayWithRange:(NSRange)range;	// 0x3626b84d
@end
