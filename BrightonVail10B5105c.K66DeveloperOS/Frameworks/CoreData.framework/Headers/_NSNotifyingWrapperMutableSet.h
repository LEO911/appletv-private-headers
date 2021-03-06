/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x3626113d
- (void)addObject:(id)object;	// 0x362614d5
- (void)addObjectsFromArray:(id)array;	// 0x3626159d
- (id)allObjects;	// 0x362612a9
- (id)anyObject;	// 0x362612c9
- (BOOL)containsObject:(id)object;	// 0x362612e9
- (id)copyWithZone:(NSZone *)zone;	// 0x362611d9
- (unsigned)count;	// 0x36261415
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36261475
- (void)dealloc;	// 0x362610ad
- (id)description;	// 0x36261269
- (id)descriptionWithLocale:(id)locale;	// 0x36261289
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x36261495
- (void)getObjects:(id *)objects;	// 0x36261331
- (void)intersectSet:(id)set;	// 0x36261665
- (BOOL)isEqualToSet:(id)set;	// 0x3626130d
- (BOOL)isSubsetOfSet:(id)set;	// 0x36261351
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x36261375
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x36261395
- (id)member:(id)member;	// 0x36261435
- (void)minusSet:(id)set;	// 0x362616e9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36261221
- (id)objectEnumerator;	// 0x36261455
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x362614b5
- (void)removeAllObjects;	// 0x3626176d
- (void)removeObject:(id)object;	// 0x362617fd
- (void)setSet:(id)set;	// 0x362618c5
- (void)setValue:(id)value forKey:(id)key;	// 0x362613b5
- (void)unionSet:(id)set;	// 0x36261949
- (id)valueForKey:(id)key;	// 0x362613d5
- (id)valueForKeyPath:(id)keyPath;	// 0x362613f5
@end

