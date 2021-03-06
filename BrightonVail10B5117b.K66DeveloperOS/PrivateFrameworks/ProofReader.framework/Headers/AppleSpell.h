/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import "ProofReader-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSData, NSString, NSArray, NSMutableArray, NSMutableSet;

@interface AppleSpell : NSObject {
	void *_proofReaderConnection;	// 4 = 0x4
	CFDictionaryRef _databaseConnections;	// 8 = 0x8
	NSMutableDictionary *_bindicts;	// 12 = 0xc
	NSData *_globalBindictData;	// 16 = 0x10
	NSData *_globalNegBindictData;	// 20 = 0x14
	NSMutableDictionary *_autocorrections;	// 24 = 0x18
	NSString *_lastLanguage;	// 28 = 0x1c
	NSArray *_userPreferredLanguages;	// 32 = 0x20
	NSMutableDictionary *_learnedResponses;	// 36 = 0x24
	NSMutableArray *_diagnosticInfo;	// 40 = 0x28
	NSMutableSet *_foundNames;	// 44 = 0x2c
	double _lastFindNames;	// 48 = 0x30
	NSMutableDictionary *_lastSampleCollected;	// 56 = 0x38
	unsigned _numberOfSamplesCollected;	// 60 = 0x3c
	double _lastSampleCollection;	// 64 = 0x40
	NSMutableArray *_retainedSamples;	// 72 = 0x48
	NSMutableDictionary *_lastSampleRecorded;	// 76 = 0x4c
	double _lastSampleRecording;	// 80 = 0x50
	BOOL _userPrefersUncheckedLatinLanguage;	// 88 = 0x58
}
@property(readonly, retain) NSData *globalBindictData;	// G=0x35522a61; converted property
- (id)init;	// 0x35518061
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x35578249
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x35533fd9
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 tagger:(id)tagger taggerIndex:(unsigned)index dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection keyEventData:(id)data;	// 0x3557aed1
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x35577f95
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x35577b1d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x35577d5d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x35577c09
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x355781b5
- (unsigned)_getSplitIndexes:(unsigned *)indexes maxCount:(unsigned)count forPinyinInputString:(id)pinyinInputString;	// 0x355810cd
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x3557ad31
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x35577d81
- (id)_orthographyByModifyingOrthography:(id)orthography withLatinLanguage:(id)latinLanguage;	// 0x35534555
- (id)_pinyinStringByCombiningPinyinString:(id)string withPinyinString:(id)pinyinString;	// 0x355811dd
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString restricted:(BOOL)restricted;	// 0x35580b09
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString depth:(unsigned)depth;	// 0x35581615
- (id)_retainedAlternativesByCombiningAlternatives:(id)alternatives withAlternatives:(id)alternatives2;	// 0x35581491
- (void)addModifiedPartialPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 prePrevPrevIndex:(unsigned)index6 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score12 prevPrevScore:(unsigned)score13 lastSyllableScore:(unsigned)score14;	// 0x355802a5
- (void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score11 prevPrevScore:(unsigned)score12 lastSyllableScore:(unsigned)score13 couldBeAbbreviatedPinyin:(BOOL)pinyin;	// 0x3557e2e1
- (void)addSpecialModifiedPinyinToArray:(id)array inBuffer:(char *)buffer length:(unsigned)length atEnd:(BOOL)end;	// 0x3557daa9
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x355312d1
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x3552096d
- (id)bundle;	// 0x3551ad79
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;	// 0x35522511
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x3551a579
- (unsigned long)encodingForLanguage:(id)language;	// 0x3551a4d9
- (id)englishStringFromWordBuffer:(char *)wordBuffer length:(unsigned)length connection:(PR_DB_IO *)connection ignoreLength:(BOOL)length4;	// 0x3557d5d9
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x35533a21
// converted property getter: - (id)globalBindictData;	// 0x35522a61
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x35533db9
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x35522979
- (id)globalNegativeBindictData;	// 0x35533d19
- (id)localizationForLanguage:(id)language;	// 0x3551a1d1
- (id)localizationsForLanguage:(id)language;	// 0x35533671
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x35577589
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x355774d9
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x35577715
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x355778e1
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x35577aed
- (void)resetTimer;	// 0x355190f5
- (id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString extended:(BOOL)extended;	// 0x3558193d
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;	// 0x35581dc1
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3553552d
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x355344ed
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x35534209
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x35534741
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString;	// 0x35581df5
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3553553d
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x35534609
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x355190fd
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data appIdentifier:(id)identifier wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x35519245
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString;	// 0x35581e29
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3553554d
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x3553517d
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x3557ccd1
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x3553510d
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x3552e701
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x3552e6b9
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x35535151
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x3557cfd1
- (void)timeout:(id)timeout;	// 0x35533669
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x35522211
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x35522b01
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0x35520df5
- (BOOL)validateWordPrefixBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x35533f15
@end

