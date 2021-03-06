/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSRunStorage : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	unsigned _elementSize;	// 8 = 0x8
	unsigned _numBlocks;	// 12 = 0xc
	unsigned _maxBlocks;	// 16 = 0x10
	unsigned _indexDeltaStartBlock;	// 20 = 0x14
	int _indexDelta;	// 24 = 0x18
	NSRunBlock *_runs;	// 28 = 0x1c
	unsigned _cachedBlock;	// 32 = 0x20
	NSRange _cachedBlockRange;	// 36 = 0x24
	unsigned _gapBlockIndex;	// 44 = 0x2c
}
@property(readonly, assign) unsigned count;	// G=0x35ab47f5; converted property
@property(readonly, assign) unsigned elementSize;	// G=0x35ab4805; converted property
+ (void)_setConsistencyCheckingEnabled:(BOOL)enabled superCheckEnabled:(BOOL)enabled2;	// 0x35ab6081
+ (void)initialize;	// 0x35ab44f5
- (id)init;	// 0x35ab4699
- (id)initWithElementSize:(unsigned)elementSize capacity:(unsigned)capacity;	// 0x35ab4595
- (id)initWithRunStorage:(id)runStorage;	// 0x35ab46ad
- (void)_allocData:(unsigned long)data;	// 0x35ab4535
- (void)_consistencyCheck:(int)check;	// 0x35ab60d1
- (void)_consistencyError:(int)error startAtZeroError:(BOOL)zeroError cacheError:(BOOL)error3 inconsistentBlockError:(BOOL)error4;	// 0x35ab62d5
- (void)_deallocData;	// 0x35ab4575
- (void)_ensureCapacity:(unsigned)capacity;	// 0x35ab5e8d
- (void)_moveGapAndMergeWithBlockRange:(NSRange)blockRange;	// 0x35ab6029
- (void)_moveGapToBlockIndex:(unsigned)blockIndex;	// 0x35ab5f69
- (void)_reallocData:(unsigned long)data;	// 0x35ab4555
- (id)copyWithZone:(NSZone *)zone;	// 0x35ab47b1
// converted property getter: - (unsigned)count;	// 0x35ab47f5
- (void)dealloc;	// 0x35ab4761
- (id)description;	// 0x35ab5c65
- (void *)elementAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35ab4815
// converted property getter: - (unsigned)elementSize;	// 0x35ab4805
- (void)insertElement:(void *)element range:(NSRange)range coalesceRuns:(BOOL)runs;	// 0x35ab5c25
- (void)removeElementsInRange:(NSRange)range coalesceRuns:(BOOL)runs;	// 0x35ab5c49
- (void)replaceElementsInRange:(NSRange)range withElement:(void *)element coalesceRuns:(BOOL)runs;	// 0x35ab4bbd
@end

