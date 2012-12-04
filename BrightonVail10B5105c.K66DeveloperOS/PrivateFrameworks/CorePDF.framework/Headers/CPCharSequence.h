/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x30246165; converted property
@property(readonly, assign) unsigned length;	// G=0x30246105; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x302467f9; converted property
- (id)initSuper;	// 0x30245df5
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x30245d9d
- (id)initWithSizeFor:(unsigned)aFor;	// 0x30245d35
- (void)addChar:(CPPDFChar *)aChar;	// 0x30246175
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x302461dd
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3024624d
- (void)addCharsFromSequence:(id)sequence;	// 0x302462e5
- (CGRect)bounds;	// 0x30247059
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x30247095
// converted property getter: - (CPPDFChar **)charArray;	// 0x30246165
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x30246115
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x30246b71
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x30246c0d
- (id)copyWithZone:(NSZone *)zone;	// 0x30245ef9
- (void)dealloc;	// 0x30245e99
- (void)dispose;	// 0x30245e21
- (void)finalize;	// 0x30245e59
// converted property getter: - (unsigned)length;	// 0x30246105
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x30246da1
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x30246f6d
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x30246ec1
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30246f11
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x30246e41
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30246ded
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x30246729
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x3024670d
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x302466f1
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x30246809
- (void)removeAllChars;	// 0x30246389
- (void)removeChar;	// 0x30246345
- (void)removeCharAtIndex:(unsigned)index;	// 0x3024647d
- (void)removeFrom:(unsigned)from;	// 0x30246529
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x30246a55
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x30246ca9
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x30246405
- (void)resize:(unsigned)resize;	// 0x30245fdd
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x30246691
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x30246609
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x30246581
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x30246949
// converted property getter: - (BOOL)wasMerged;	// 0x302467f9
@end
