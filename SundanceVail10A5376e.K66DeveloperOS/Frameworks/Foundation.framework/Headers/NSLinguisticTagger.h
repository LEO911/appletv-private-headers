/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
	NSArray *_schemes;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	NSString *_string;	// 12 = 0xc
	id _orthographyArray;	// 16 = 0x10
	id _tokenArray;	// 20 = 0x14
	id _reserved;	// 24 = 0x18
}
@property(retain) NSString *string;	// G=0x34e5a2bd; S=0x34e5a231; converted property
+ (id)availableTagSchemesForLanguage:(id)language;	// 0x34e59979
+ (BOOL)supportsLanguage:(id)language;	// 0x34e5a1a5
- (id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;	// 0x34e59a41
- (BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken *)tokens count:(unsigned)count tokenIndex:(unsigned)index;	// 0x34e5da6d
- (void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;	// 0x34e5e06d
- (void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;	// 0x34e5e229
- (void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;	// 0x34e5e911
- (void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;	// 0x34e5ea19
- (void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;	// 0x34e5e199
- (BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(NSRange)misspelledRange word:(id)word tags:(id *)tags frequencies:(id *)frequencies;	// 0x34e5aa99
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;	// 0x34e5aa69
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id *)frequencies baseFrequencies:(id *)frequencies4;	// 0x34e5a911
- (id)_tagSchemeForScheme:(id)scheme;	// 0x34e5a071
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x34e5fe6d
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range tagScheme:(id)scheme;	// 0x34e5ff51
- (id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x34e5f119
- (void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x34e5fccd
- (void)dealloc;	// 0x34e59f15
- (id)description;	// 0x34e59fa1
- (void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;	// 0x34e60009
- (id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34e5a639
- (id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4 scores:(id *)scores;	// 0x34e5bfb1
- (NSRange)sentenceRangeForRange:(NSRange)range;	// 0x34e5a781
- (void)setOrthography:(id)orthography range:(NSRange)range;	// 0x34e5a471
// converted property setter: - (void)setString:(id)string;	// 0x34e5a231
// converted property getter: - (id)string;	// 0x34e5a2bd
- (void)stringEditedInRange:(NSRange)range changeInLength:(int)length;	// 0x34e5a2cd
- (id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4;	// 0x34e5aac1
- (id)tagSchemes;	// 0x34e5a061
- (id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id *)ranges;	// 0x34e5d7e9
@end
