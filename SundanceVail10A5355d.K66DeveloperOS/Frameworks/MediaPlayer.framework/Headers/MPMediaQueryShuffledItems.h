/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"

@class MPReshuffledArrayIndexMap, NSArray, MPMediaQuery, NSMutableArray;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPReshuffledArrayIndexMap *_indexMap;	// 16 = 0x10
	MPMediaQuery *_sourceMediaQuery;	// 20 = 0x14
	NSArray *_sourceMediaQueryItems;	// 24 = 0x18
}
@property(assign, nonatomic) NSRange focusedRange;	// G=0x3375dcc9; S=0x3375dca9; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x3375d98d; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x3375d599; 
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x3375ec05; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x3375d2fd
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x3375d24d
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items indexMap:(id)map shuffleType:(unsigned)type;	// 0x3375d125
- (BOOL)_getFixedItemCount:(unsigned *)count;	// 0x3375d5a9
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x3375e0a5
- (void)_rebuildCaches;	// 0x3375e121
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned)initialSourceIndex;	// 0x3375e135
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x3375e1d5
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x3375e7b1
- (void)_resetCaches;	// 0x3375eabd
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned)initialIndex;	// 0x3375eb11
- (id)copyWithZone:(NSZone *)zone;	// 0x3375d511
- (unsigned)count;	// 0x3375d7ed
- (void)dealloc;	// 0x3375d271
- (void)encodeWithCoder:(id)coder;	// 0x3375d455
// declared property getter: - (NSRange)focusedRange;	// 0x3375dcc9
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x3375d891
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID greaterThanOrEqualToIndex:(unsigned)index;	// 0x3375d819
- (unsigned)indexOfObject:(id)object;	// 0x3375d92d
- (unsigned)indexOfObject:(id)object greaterThanOrEqualToIndex:(unsigned)index;	// 0x3375d8b5
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x3375d941
// declared property getter: - (id)items;	// 0x3375d98d
- (unsigned)nonGrowingCount;	// 0x3375d78d
- (unsigned)nonRepeatingCount;	// 0x3375d661
- (id)objectAtIndex:(unsigned)index;	// 0x3375daf5
// declared property getter: - (unsigned)realShuffleType;	// 0x3375d599
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x3375dca9
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x3375dcf9
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x3375deed
// declared property getter: - (id)sourceMediaQuery;	// 0x3375ec05
- (void)unshuffle;	// 0x3375e085
@end

