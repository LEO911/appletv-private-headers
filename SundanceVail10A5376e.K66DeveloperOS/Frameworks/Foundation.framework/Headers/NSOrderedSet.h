/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOrderedSet.h> // Unknown library


@interface NSOrderedSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x34dae425
- (id)_countForKeyPath:(id)keyPath;	// 0x34dae495
- (id)_maxForKeyPath:(id)keyPath;	// 0x34dae4cd
- (id)_minForKeyPath:(id)keyPath;	// 0x34dae54d
- (id)_sumForKeyPath:(id)keyPath;	// 0x34dae341
- (void)setValue:(id)value forKey:(id)key;	// 0x34dae8ad
- (id)valueForKey:(id)key;	// 0x34dae5cd
- (id)valueForKeyPath:(id)keyPath;	// 0x34dae96d
@end

@interface NSOrderedSet (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34dafa69
- (id)_mutableOrderedSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34dafa99
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34dafac9
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34dafaf9
- (BOOL)_validateValue:(inout id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(out id *)error;	// 0x34dafb2d
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x34dafa39
@end

@interface NSOrderedSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x34db64b9
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x34db6559
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x34db6509
@end

@interface NSOrderedSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x34dd3219
@end

@interface NSOrderedSet (NSPredicateSupport)
- (id)filteredOrderedSetUsingPredicate:(id)predicate;	// 0x34e0e54d
@end
