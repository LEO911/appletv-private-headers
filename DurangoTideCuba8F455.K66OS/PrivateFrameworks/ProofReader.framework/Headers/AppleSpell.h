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
}
@property(readonly, retain) NSData *globalBindictData;	// G=0x34183111; converted property
- (id)init;	// 0x34178e15
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x341da8dd
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x34194b51
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 auxiliary:(id)auxiliary dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection;	// 0x3418d775
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x341d9fc1
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x341da4c9
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x341d9db1
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x341da5b5
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x341d9d2d
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x341dd731
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x341da6ed
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x3418d64d
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x341816d5
- (id)bundle;	// 0x3417b755
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language index:(unsigned)index;	// 0x34182bf9
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x3417b091
- (unsigned long)encodingForLanguage:(id)language;	// 0x3417b009
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x3419419d
// converted property getter: - (id)globalBindictData;	// 0x34183111
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language;	// 0x341919c9
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language;	// 0x3418301d
- (id)globalNegativeBindictData;	// 0x34191ac5
- (id)localizationForLanguage:(id)language;	// 0x3417ae01
- (id)localizationsForLanguage:(id)language;	// 0x341943a1
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x341da1ad
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x341da111
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x341da329
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x341d9e15
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x341d9de5
- (void)resetTimer;	// 0x34179ff9
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x341948f9
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x34194d79
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x34194a75
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x34194959
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x34179ffd
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x3417a121
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x341945c5
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x341dd039
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x3419410d
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x341dd889
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x34194155
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x341940d1
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x341dd2fd
- (void)timeout:(id)timeout;	// 0x341940cd
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x34182ac9
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x341831a5
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0x34181b31
@end
