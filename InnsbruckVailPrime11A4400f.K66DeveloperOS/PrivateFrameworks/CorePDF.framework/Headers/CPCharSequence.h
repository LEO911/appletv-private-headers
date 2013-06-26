/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"
#import </libobjc.A.h>
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
@property(readonly, assign) CPPDFChar **charArray;	// G=0x305ff0dd; converted property
@property(readonly, assign) unsigned length;	// G=0x305ff079; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x305ff7b5; converted property
- (id)initSuper;	// 0x305fed25
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x305feccd
- (id)initWithSizeFor:(unsigned)aFor;	// 0x305fec65
- (void)addChar:(CPPDFChar *)aChar;	// 0x305ff0ed
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x305ff14d
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x305ff1bd
- (void)addCharsFromSequence:(id)sequence;	// 0x305ff269
- (CGRect)bounds;	// 0x3060005d
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x30600099
// converted property getter: - (CPPDFChar **)charArray;	// 0x305ff0dd
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x305ff089
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x305ffb2d
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x305ffbdd
- (id)copyWithZone:(NSZone *)zone;	// 0x305fee29
- (void)dealloc;	// 0x305fedc9
- (void)dispose;	// 0x305fed51
- (void)finalize;	// 0x305fed89
// converted property getter: - (unsigned)length;	// 0x305ff079
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x305ffd91
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x305fff6d
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x305ffebd
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x305fff0d
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x305ffe39
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x305ffddd
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x305ff6b1
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x305ff695
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x305ff679
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x305ff7c5
- (void)removeAllChars;	// 0x305ff311
- (void)removeChar;	// 0x305ff2cd
- (void)removeCharAtIndex:(unsigned)index;	// 0x305ff409
- (void)removeFrom:(unsigned)from;	// 0x305ff4b1
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x305ffa19
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x305ffc7d
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x305ff38d
- (void)resize:(unsigned)resize;	// 0x305fef25
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x305ff619
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x305ff591
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x305ff509
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x305ff90d
// converted property getter: - (BOOL)wasMerged;	// 0x305ff7b5
@end
