/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class AXDialectMap, NSString, NSArray, NSLocale, NSCharacterSet;

@interface AXLanguageManager : NSObject {
	AXDialectMap *_dialectForSystemLanguage;	// 4 = 0x4
	AXDialectMap *_dialectForCurrentLocale;	// 8 = 0x8
	NSArray *_langMaps;	// 12 = 0xc
	NSCharacterSet *_commonCharacters;	// 16 = 0x10
	NSLocale *_userLocale;	// 20 = 0x14
}
@property(retain, nonatomic) NSCharacterSet *commonCharacters;	// G=0x341b0f89; S=0x341b0f99; @synthesize=_commonCharacters
@property(assign, nonatomic) AXDialectMap *dialectForCurrentLocale;	// G=0x341afe5d; S=0x341afe91; 
@property(assign, nonatomic) AXDialectMap *dialectForSystemLanguage;	// G=0x341afdd1; S=0x341afe05; 
@property(retain, nonatomic) NSArray *langMaps;	// G=0x341b0f69; S=0x341b0f79; @synthesize=_langMaps
@property(readonly, assign, nonatomic) NSString *systemLanguageID;	// G=0x341afd55; 
@property(copy, nonatomic) NSLocale *userLocale;	// G=0x341b0fa9; S=0x341b0fbd; @synthesize=_userLocale
+ (id)commonPunctuationCharacters;	// 0x341af48d
+ (id)nonlocalizedNameForLanguage:(id)language;	// 0x341af351
+ (id)sharedInstance;	// 0x341af2e5
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)emojiDescriptions;	// 0x341af501
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)basicCharacters;	// 0x341af529
- (id)init;	// 0x341af651
- (void)_handleUserLocaleDidChange:(id)_handleUserLocale;	// 0x341b0f1d
- (id)_loadLangMaps;	// 0x341b0955
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;	// 0x341b0749
- (id)ambiguousDialectsFromUserKeyboardPreferences;	// 0x341b0291
- (id)basicDescription;	// 0x341afa79
// declared property getter: - (id)commonCharacters;	// 0x341b0f89
- (void)dealloc;	// 0x341af99d
- (id)debugDescription;	// 0x341afad5
- (id)description;	// 0x341afa69
- (id)descriptionOfWord:(id)word forLanguage:(id)language;	// 0x341b0681
// declared property getter: - (id)dialectForCurrentLocale;	// 0x341afe5d
- (id)dialectForLanguageID:(id)languageID;	// 0x341afee9
// declared property getter: - (id)dialectForSystemLanguage;	// 0x341afdd1
- (id)dialectThatCanSpeakCharacter:(unsigned short)character;	// 0x341b0159
- (BOOL)isCharacterCommon:(unsigned short)common;	// 0x341b03c5
// declared property getter: - (id)langMaps;	// 0x341b0f69
// declared property setter: - (void)setCommonCharacters:(id)characters;	// 0x341b0f99
// declared property setter: - (void)setDialectForCurrentLocale:(id)currentLocale;	// 0x341afe91
// declared property setter: - (void)setDialectForSystemLanguage:(id)systemLanguage;	// 0x341afe05
// declared property setter: - (void)setLangMaps:(id)maps;	// 0x341b0f79
// declared property setter: - (void)setUserLocale:(id)locale;	// 0x341b0fbd
// declared property getter: - (id)systemLanguageID;	// 0x341afd55
- (void)updateCachedDialects;	// 0x341b03f1
// declared property getter: - (id)userLocale;	// 0x341b0fa9
@end

