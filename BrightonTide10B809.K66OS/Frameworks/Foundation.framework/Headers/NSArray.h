/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSArray.h> // Unknown library


@interface NSArray (NSArray)
+ (id)arrayWithContentsOfFile:(id)file;	// 0x318ec3a9
+ (id)arrayWithContentsOfURL:(id)url;	// 0x3190774d
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x318ec3e9
- (id)initWithCoder:(id)coder;	// 0x318ddbad
- (id)initWithContentsOfFile:(id)file;	// 0x3190778d
- (id)initWithContentsOfURL:(id)url;	// 0x319077c9
- (id)_stringToWrite;	// 0x319074cd
- (Class)classForCoder;	// 0x318bd05d
- (id)debugDescription;	// 0x31906f99
- (void)encodeWithCoder:(id)coder;	// 0x318bb8c1
- (id)sortedArrayHint;	// 0x31907115
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context hint:(id)hint;	// 0x31907221
- (id)sortedArrayUsingSelector:(SEL)selector hint:(id)hint;	// 0x31907445
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3190752d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3190763d
@end

@interface NSArray (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x3192e071
- (id)_countForKeyPath:(id)keyPath;	// 0x3192e0e1
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x3192e3d5
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x3192e41d
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x3192e465
- (id)_maxForKeyPath:(id)keyPath;	// 0x3192e119
- (id)_minForKeyPath:(id)keyPath;	// 0x3192e199
- (id)_sumForKeyPath:(id)keyPath;	// 0x3192df8d
- (id)_unionOfArraysForKeyPath:(id)keyPath;	// 0x3192e2a9
- (id)_unionOfObjectsForKeyPath:(id)keyPath;	// 0x3192e219
- (id)_unionOfSetsForKeyPath:(id)keyPath;	// 0x3192e339
- (void)setValue:(id)value forKey:(id)key;	// 0x3192e505
- (id)valueForKey:(id)key;	// 0x318ea989
- (id)valueForKeyPath:(id)keyPath;	// 0x3192e5c5
@end

@interface NSArray (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31930105
- (id)_mutableOrderedSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31930135
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31930165
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31930195
- (BOOL)_validateValue:(inout id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(out id *)error;	// 0x319301c9
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x319300d5
@end

@interface NSArray (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31936b91
- (void)addObserver:(id)observer toObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31936571
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x31936c31
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x31936be1
- (void)removeObserver:(id)observer fromObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath;	// 0x319369c9
- (void)removeObserver:(id)observer fromObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath context:(void *)context;	// 0x31936749
@end

@interface NSArray (NSArrayPathExtensions)
- (id)pathsMatchingExtensions:(id)extensions;	// 0x31948f85
- (id)stringsByAppendingPathComponent:(id)component;	// 0x31949069
@end

@interface NSArray (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x318cb581
@end

@interface NSArray (NSPredicateSupport)
- (id)filteredArrayUsingPredicate:(id)predicate;	// 0x318e8a7d
@end

@interface NSArray (NSArrayPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31a04339
@end

