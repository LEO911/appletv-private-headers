/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSCharacterSet, AXDialectMap, NSString, NSArray, NSLocale;

@interface AXLanguageManager : NSObject {
	AXDialectMap *_dialectForSystemLanguage;	// 4 = 0x4
	AXDialectMap *_dialectForCurrentLocale;	// 8 = 0x8
	NSArray *_langMaps;	// 12 = 0xc
	NSCharacterSet *_commonCharacters;	// 16 = 0x10
	NSLocale *_userLocale;	// 20 = 0x14
}
@property(retain, nonatomic) NSCharacterSet *commonCharacters;	// G=0x33395e39; S=0x33395e49; @synthesize=_commonCharacters
@property(assign, nonatomic) AXDialectMap *dialectForCurrentLocale;	// G=0x33394c61; S=0x33394c95; 
@property(assign, nonatomic) AXDialectMap *dialectForSystemLanguage;	// G=0x33394bd5; S=0x33394c09; 
@property(retain, nonatomic) NSArray *langMaps;	// G=0x33395e19; S=0x33395e29; @synthesize=_langMaps
@property(readonly, assign, nonatomic) NSString *systemLanguageID;	// G=0x33394b59; 
@property(copy, nonatomic) NSLocale *userLocale;	// G=0x33395e59; S=0x33395e6d; @synthesize=_userLocale
+ (id)commonPunctuationCharacters;	// 0x33394291
+ (id)nonlocalizedNameForLanguage:(id)language;	// 0x33394155
+ (id)sharedInstance;	// 0x333940e9
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)emojiDescriptions;	// 0x33394305
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)basicCharacters;	// 0x3339432d
- (id)init;	// 0x33394455
- (void)_handleUserLocaleDidChange:(id)_handleUserLocale;	// 0x33395dcd
- (id)_loadLangMaps;	// 0x333957ed
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;	// 0x333955e1
- (id)ambiguousDialectsFromUserKeyboardPreferences;	// 0x33395095
- (id)basicDescription;	// 0x3339487d
// declared property getter: - (id)commonCharacters;	// 0x33395e39
- (void)dealloc;	// 0x333947a1
- (id)debugDescription;	// 0x333948d9
- (id)description;	// 0x3339486d
- (id)descriptionOfWord:(id)word forLanguage:(id)language;	// 0x33395519
// declared property getter: - (id)dialectForCurrentLocale;	// 0x33394c61
- (id)dialectForLanguageID:(id)languageID;	// 0x33394ced
// declared property getter: - (id)dialectForSystemLanguage;	// 0x33394bd5
- (id)dialectThatCanSpeakCharacter:(unsigned short)character;	// 0x33394f5d
- (BOOL)isCharacterCommon:(unsigned short)common;	// 0x333951c9
// declared property getter: - (id)langMaps;	// 0x33395e19
// declared property setter: - (void)setCommonCharacters:(id)characters;	// 0x33395e49
// declared property setter: - (void)setDialectForCurrentLocale:(id)currentLocale;	// 0x33394c95
// declared property setter: - (void)setDialectForSystemLanguage:(id)systemLanguage;	// 0x33394c09
// declared property setter: - (void)setLangMaps:(id)maps;	// 0x33395e29
// declared property setter: - (void)setUserLocale:(id)locale;	// 0x33395e6d
// declared property getter: - (id)systemLanguageID;	// 0x33394b59
- (void)updateCachedDialects;	// 0x333951f5
// declared property getter: - (id)userLocale;	// 0x33395e59
@end

