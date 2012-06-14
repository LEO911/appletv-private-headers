/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObject *source;	// G=0x32d36e15; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d366fd
+ (id)alloc;	// 0x32d36a6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32d36a75
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x32d36859
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x32d36701
- (BOOL)_isDeallocating;	// 0x32d36a41
- (BOOL)_isIdenticalFault:(id)fault;	// 0x32d377dd
- (BOOL)_shouldProcessKVOChange;	// 0x32d36d85
- (BOOL)_tryRetain;	// 0x32d369f1
- (void)addObject:(id)object;	// 0x32d3730d
- (void)addObjectsFromArray:(id)array;	// 0x32d37a3d
- (id)allObjects;	// 0x32d37519
- (id)anyObject;	// 0x32d37555
- (Class)classForArchiver;	// 0x32d37e61
- (Class)classForCoder;	// 0x32d37e1d
- (BOOL)containsObject:(id)object;	// 0x32d375e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32d36e65
- (unsigned)count;	// 0x32d3726d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d373dd
- (void)dealloc;	// 0x32d36a7d
- (id)description;	// 0x32d370d9
- (id)descriptionWithLocale:(id)locale;	// 0x32d371a1
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32d37421
- (void)getObjects:(id *)objects;	// 0x32d374e5
- (void)intersectSet:(id)set;	// 0x32d37c05
- (BOOL)intersectsSet:(id)set;	// 0x32d3765d
- (BOOL)isEqual:(id)equal;	// 0x32d37799
- (BOOL)isEqualToSet:(id)set;	// 0x32d376a1
- (BOOL)isFault;	// 0x32d36b09
- (BOOL)isSubsetOfSet:(id)set;	// 0x32d378a1
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x32d378e5
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x32d37925
- (id)member:(id)member;	// 0x32d3729d
- (void)minusSet:(id)set;	// 0x32d37c49
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32d37061
- (id)objectEnumerator;	// 0x32d374a9
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32d37465
- (id)relationship;	// 0x32d36e25
- (oneway void)release;	// 0x32d36965
- (void)removeAllObjects;	// 0x32d37ca1
- (void)removeObject:(id)object;	// 0x32d37969
- (id)replacementObjectForCoder:(id)coder;	// 0x32d37e39
- (id)retain;	// 0x32d3692d
- (unsigned)retainCount;	// 0x32d369dd
- (void)setSet:(id)set;	// 0x32d37d15
- (void)setValue:(id)value forKey:(id)key;	// 0x32d37d59
// converted property getter: - (id)source;	// 0x32d36e15
- (void)turnIntoFault;	// 0x32d36d89
- (void)unionSet:(id)set;	// 0x32d37cd1
- (id)valueForKey:(id)key;	// 0x32d37d9d
- (id)valueForKeyPath:(id)keyPath;	// 0x32d37ddd
- (void)willRead;	// 0x32d36b1d
@end
