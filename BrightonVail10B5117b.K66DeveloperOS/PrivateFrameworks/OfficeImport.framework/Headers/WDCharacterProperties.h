/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument;

@interface WDCharacterProperties : NSObject {
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_F4yHWB *mOriginalProperties;	// 12 = 0xc
	XXStruct_F4yHWB *mTrackedProperties;	// 16 = 0x10
}
@property(retain) id baseStyle;	// G=0x34ae03f1; S=0x34ac1a45; converted property
@property(assign) int bold;	// G=0x34adbde5; S=0x34ab2755; converted property
@property(assign) int bracketTwoLinesInOne;	// G=0x34c888a1; S=0x34c8893d; converted property
@property(assign) int caps;	// G=0x34adfbed; S=0x34ab32f9; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x34bae941; S=0x34b31a35; converted property
@property(retain) id color;	// G=0x34abf0f1; S=0x34ab2de1; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x34c86ff5; S=0x34abf189; converted property
@property(assign) BOOL compressHorizontalInVertical;	// G=0x34c884dd; S=0x34c88579; converted property
@property(assign) int deleted;	// G=0x34ba0311; S=0x34ba01ed; converted property
@property(assign) int doubleStrikeThrough;	// G=0x34ba1da9; S=0x34ab2c39; converted property
@property(assign) int edited;	// G=0x34c873e1; S=0x34ba0141; converted property
@property(assign) BOOL embeddedObject;	// G=0x34c87b9d; S=0x34c87c39; converted property
@property(assign) int embossed;	// G=0x34c8589d; S=0x34ab2955; converted property
@property(assign) int emphasisMark;	// G=0x34c86e21; S=0x34c86ebd; converted property
@property(retain) id extendedFont;	// G=0x34c850f9; S=0x34ab37d1; converted property
@property(retain) id farEastFont;	// G=0x34c85249; S=0x34ab3725; converted property
@property(retain) id font;	// G=0x34adb9a5; S=0x34ab3679; converted property
@property(assign) unsigned short fontSize;	// G=0x34adb799; S=0x34ab3579; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x34c87a49; S=0x34b25dd5; converted property
@property(assign) int formattingChanged;	// G=0x34c87535; S=0x34c875d1; converted property
@property(assign) int hidden;	// G=0x34b2cb99; S=0x34ab3379; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x34c86111; S=0x34b873d1; converted property
@property(assign) int highlightColor;	// G=0x34c86259; S=0x34ab31f9; converted property
@property(assign) BOOL horizontalInVertical;	// G=0x34c882f9; S=0x34c88395; converted property
@property(assign) int imprint;	// G=0x34c859e5; S=0x34ab29d5; converted property
@property(assign) int italic;	// G=0x34b0d959; S=0x34ab27d5; converted property
@property(assign) unsigned short kerning;	// G=0x34c85fbd; S=0x34ab35f9; converted property
@property(assign) int languageForBiText;	// G=0x34c878f9; S=0x34ab3a29; converted property
@property(assign) int languageForDefaultText;	// G=0x34c87149; S=0x34ab3929; converted property
@property(assign) int languageForFarEast;	// G=0x34c877a5; S=0x34ab39a9; converted property
@property(assign) int ligature;	// G=0x34c863ad; S=0x34c86449; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x34b31ab5; S=0x34b319a5; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x34c86581; S=0x34c8661d; converted property
@property(assign) long objectIDForOle2;	// G=0x34c87f65; S=0x34c87ff9; converted property
@property(assign) long offsetToPictureData;	// G=0x34c88129; S=0x34c881c1; converted property
@property(assign) BOOL ole2;	// G=0x34c87d81; S=0x34c87e1d; converted property
@property(assign) int outline;	// G=0x34c85749; S=0x34ab2855; converted property
@property(assign) short position;	// G=0x34c868a9; S=0x34ab3479; converted property
@property(retain) id reflection;	// G=0x34c869f9; S=0x34c86a91; converted property
@property(assign) int resolveMode;	// G=0x34c8390d; S=0x34ab26e9; converted property
@property(assign) int rightToLeft;	// G=0x34c8728d; S=0x34b70289; converted property
@property(assign) int shadow;	// G=0x34c85b39; S=0x34ab28d5; converted property
@property(retain) id shadow2010;	// G=0x34c86bd9; S=0x34c86c71; converted property
@property(assign) float shadow2010Opacity;	// G=0x34c85c8d; S=0x34c85d31; converted property
@property(assign) int smallCaps;	// G=0x34b71561; S=0x34ab3279; converted property
@property(assign) short spacing;	// G=0x34c86765; S=0x34ab33f9; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x34c87651; S=0x34acaf31; converted property
@property(assign) int strikeThrough;	// G=0x34b8e821; S=0x34ab2bb9; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x34c855f5; S=0x34b1fd35; converted property
@property(retain) id symbolFont;	// G=0x34c85399; S=0x34ab387d; converted property
@property(assign) BOOL twoLinesInOne;	// G=0x34c886c1; S=0x34c8875d; converted property
@property(assign) int underline;	// G=0x34ac0149; S=0x34ab2a55; converted property
@property(retain) id underlineColor;	// G=0x34c85e6d; S=0x34ab2b11; converted property
@property(assign) int verticalAlign;	// G=0x34ae1371; S=0x34ab34f9; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x34c855b1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x34c8556d
+ (int)languageFromString:(id)string;	// 0x34abc065
+ (BOOL)languageIsArabicOrHebrew:(int)hebrew;	// 0x34c88fa5
+ (BOOL)languageIsCJK:(int)cjk;	// 0x34c88f75
+ (BOOL)languageIsChinese:(int)chinese;	// 0x34c88f29
- (id)initWithDocument:(id)document;	// 0x34ab2651
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x34c83955
// converted property getter: - (id)baseStyle;	// 0x34ae03f1
// converted property getter: - (int)bold;	// 0x34adbde5
- (id)border;	// 0x34c84fa9
// converted property getter: - (int)bracketTwoLinesInOne;	// 0x34c888a1
// converted property getter: - (int)caps;	// 0x34adfbed
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x34bae941
- (void)clearBaseStyle;	// 0x34b00cf1
// converted property getter: - (id)color;	// 0x34abf0f1
// converted property getter: - (BOOL)compressHorizontalInVertical;	// 0x34c884dd
- (void)copyPropertiesInto:(id)into;	// 0x34c88c59
- (id)copyWithZone:(NSZone *)zone;	// 0x34c88a75
- (void)dealloc;	// 0x34ae21c5
// converted property getter: - (int)deleted;	// 0x34ba0311
- (id)document;	// 0x34abc045
// converted property getter: - (int)doubleStrikeThrough;	// 0x34ba1da9
// converted property getter: - (int)edited;	// 0x34c873e1
// converted property getter: - (BOOL)embeddedObject;	// 0x34c87b9d
// converted property getter: - (int)embossed;	// 0x34c8589d
// converted property getter: - (int)emphasisMark;	// 0x34c86e21
// converted property getter: - (id)extendedFont;	// 0x34c850f9
// converted property getter: - (id)farEastFont;	// 0x34c85249
// converted property getter: - (id)font;	// 0x34adb9a5
- (id)fontForLanguageType:(int)languageType;	// 0x34c854dd
// converted property getter: - (unsigned short)fontSize;	// 0x34adb799
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x34c87a49
// converted property getter: - (int)formattingChanged;	// 0x34c87535
// converted property getter: - (int)hidden;	// 0x34b2cb99
// converted property getter: - (int)highlightColor;	// 0x34c86259
// converted property getter: - (BOOL)horizontalInVertical;	// 0x34c882f9
// converted property getter: - (int)imprint;	// 0x34c859e5
- (BOOL)isAnythingOverridden;	// 0x34c83859
- (BOOL)isAnythingOverriddenIn:(XXStruct_F4yHWB *)anIn;	// 0x34c89085
- (BOOL)isBaseStyleOverridden;	// 0x34adaacd
- (BOOL)isBoldOverridden;	// 0x34adb401
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x34c89161
- (BOOL)isBorderOverridden;	// 0x34c85041
- (BOOL)isBracketTwoLinesInOneOverridden;	// 0x34c889bd
- (BOOL)isCapsOverridden;	// 0x34adbbbd
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x34bae891
// converted property getter: - (BOOL)isColorAuto;	// 0x34c86ff5
- (BOOL)isColorAutoOverridden;	// 0x34c87091
- (BOOL)isColorOverridden;	// 0x34adbc75
- (BOOL)isCompressHorizontalInVerticalOverridden;	// 0x34c88609
- (BOOL)isDeletedOverridden;	// 0x34adc2c9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x34adb629
- (BOOL)isEditedOverridden;	// 0x34c8747d
- (BOOL)isEmbeddedObjectOverridden;	// 0x34c87cc9
- (BOOL)isEmbossedOverridden;	// 0x34c85935
- (BOOL)isEmphasisMarkOverridden;	// 0x34c86f3d
- (BOOL)isExtendedFontOverridden;	// 0x34c85191
- (BOOL)isFarEastFontOverridden;	// 0x34c852e1
- (BOOL)isFontOverridden;	// 0x34adb8ed
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x34c85521
- (BOOL)isFontSizeForBiTextOverridden;	// 0x34c87ae5
- (BOOL)isFontSizeOverridden;	// 0x34adb6e1
- (BOOL)isFormattingChangedOverridden;	// 0x34abd501
- (BOOL)isHiddenOverridden;	// 0x34adc381
// converted property getter: - (BOOL)isHighlight;	// 0x34c86111
- (BOOL)isHighlightColorOverridden;	// 0x34c862f5
- (BOOL)isHighlightOverridden;	// 0x34c861a9
- (BOOL)isHorizontalInVerticalOverridden;	// 0x34c88425
- (BOOL)isImprintOverridden;	// 0x34c85a81
- (BOOL)isItalicOverridden;	// 0x34adb4b9
- (BOOL)isKerningOverridden;	// 0x34c86059
- (BOOL)isLanguageForBiTextOverridden;	// 0x34c87991
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x34c871dd
- (BOOL)isLanguageForFarEastOverridden;	// 0x34c87841
- (BOOL)isLigatureOverridden;	// 0x34c864c9
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x34b31ab5
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x34b04bf9
// converted property getter: - (BOOL)isLowerCase;	// 0x34c86581
- (BOOL)isLowerCaseOverridden;	// 0x34c866ad
- (BOOL)isObjectIDForOle2Overridden;	// 0x34c88079
- (BOOL)isOffsetToPictureDataOverridden;	// 0x34c88241
- (BOOL)isOle2Overridden;	// 0x34c87ead
- (BOOL)isOutlineOverridden;	// 0x34c857e5
- (BOOL)isPositionOverridden;	// 0x34c86941
- (BOOL)isReflectionOverridden;	// 0x34c86b21
- (BOOL)isRightToLeftOverridden;	// 0x34c87329
- (BOOL)isShadingOverridden;	// 0x34adbd2d
- (BOOL)isShadow2010OpacityOverridden;	// 0x34c85db5
- (BOOL)isShadow2010Overridden;	// 0x34c86d69
- (BOOL)isShadowOverridden;	// 0x34c85bd5
- (BOOL)isSmallCapsOverridden;	// 0x34adbb05
- (BOOL)isSpacingOverridden;	// 0x34c867f9
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x34c87651
- (BOOL)isSpecialCharacterOverridden;	// 0x34c876ed
- (BOOL)isStrikeThroughOverridden;	// 0x34adb571
- (BOOL)isSymbolCharacterOverridden;	// 0x34c85691
- (BOOL)isSymbolFontOverridden;	// 0x34c8542d
- (BOOL)isTwoLinesInOneOverridden;	// 0x34c887e9
- (BOOL)isUnderlineColorOverridden;	// 0x34c85f05
- (BOOL)isUnderlineOverridden;	// 0x34adba4d
- (BOOL)isVerticalAlignOverridden;	// 0x34adb835
// converted property getter: - (int)italic;	// 0x34b0d959
// converted property getter: - (unsigned short)kerning;	// 0x34c85fbd
// converted property getter: - (int)languageForBiText;	// 0x34c878f9
// converted property getter: - (int)languageForDefaultText;	// 0x34c87149
// converted property getter: - (int)languageForFarEast;	// 0x34c877a5
// converted property getter: - (int)ligature;	// 0x34c863ad
- (id)mutableBorder;	// 0x34ab2cb9
- (id)mutableShading;	// 0x34ab2e89
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x34abc485
// converted property getter: - (long)objectIDForOle2;	// 0x34c87f65
// converted property getter: - (long)offsetToPictureData;	// 0x34c88129
// converted property getter: - (BOOL)ole2;	// 0x34c87d81
// converted property getter: - (int)outline;	// 0x34c85749
// converted property getter: - (short)position;	// 0x34c868a9
// converted property getter: - (id)reflection;	// 0x34c869f9
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x34c8457d
// converted property getter: - (int)resolveMode;	// 0x34c8390d
- (int)reverseBooleanProperty:(int)property;	// 0x34c89185
// converted property getter: - (int)rightToLeft;	// 0x34c8728d
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x34ac1a45
// converted property setter: - (void)setBold:(int)bold;	// 0x34ab2755
// converted property setter: - (void)setBracketTwoLinesInOne:(int)one;	// 0x34c8893d
// converted property setter: - (void)setCaps:(int)caps;	// 0x34ab32f9
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x34b31a35
// converted property setter: - (void)setColor:(id)color;	// 0x34ab2de1
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x34abf189
// converted property setter: - (void)setCompressHorizontalInVertical:(BOOL)vertical;	// 0x34c88579
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x34ba01ed
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x34ab2c39
// converted property setter: - (void)setEdited:(int)edited;	// 0x34ba0141
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x34c87c39
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x34ab2955
// converted property setter: - (void)setEmphasisMark:(int)mark;	// 0x34c86ebd
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x34ab37d1
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x34ab3725
// converted property setter: - (void)setFont:(id)font;	// 0x34ab3679
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x34ab3579
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x34b25dd5
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x34c875d1
// converted property setter: - (void)setHidden:(int)hidden;	// 0x34ab3379
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x34b873d1
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x34ab31f9
// converted property setter: - (void)setHorizontalInVertical:(BOOL)vertical;	// 0x34c88395
// converted property setter: - (void)setImprint:(int)imprint;	// 0x34ab29d5
// converted property setter: - (void)setItalic:(int)italic;	// 0x34ab27d5
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x34ab35f9
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x34ab3a29
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x34ab3929
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x34ab39a9
// converted property setter: - (void)setLigature:(int)ligature;	// 0x34c86449
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x34b319a5
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x34c8661d
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x34c87ff9
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x34c881c1
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x34c87e1d
// converted property setter: - (void)setOutline:(int)outline;	// 0x34ab2855
// converted property setter: - (void)setPosition:(short)position;	// 0x34ab3479
// converted property setter: - (void)setReflection:(id)reflection;	// 0x34c86a91
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34ab26e9
// converted property setter: - (void)setRightToLeft:(int)left;	// 0x34b70289
// converted property setter: - (void)setShadow2010:(id)a2010;	// 0x34c86c71
// converted property setter: - (void)setShadow2010Opacity:(float)opacity;	// 0x34c85d31
// converted property setter: - (void)setShadow:(int)shadow;	// 0x34ab28d5
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x34ab3279
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x34ab33f9
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x34acaf31
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x34ab2bb9
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x34b1fd35
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x34ab387d
// converted property setter: - (void)setTwoLinesInOne:(BOOL)one;	// 0x34c8875d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x34ab2a55
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x34ab2b11
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x34ab34f9
- (id)shading;	// 0x34ba0279
// converted property getter: - (int)shadow;	// 0x34c85b39
// converted property getter: - (id)shadow2010;	// 0x34c86bd9
// converted property getter: - (float)shadow2010Opacity;	// 0x34c85c8d
// converted property getter: - (int)smallCaps;	// 0x34b71561
// converted property getter: - (short)spacing;	// 0x34c86765
// converted property getter: - (int)strikeThrough;	// 0x34b8e821
// converted property getter: - (unsigned short)symbolCharacter;	// 0x34c855f5
// converted property getter: - (id)symbolFont;	// 0x34c85399
// converted property getter: - (BOOL)twoLinesInOne;	// 0x34c886c1
// converted property getter: - (int)underline;	// 0x34ac0149
// converted property getter: - (id)underlineColor;	// 0x34c85e6d
// converted property getter: - (int)verticalAlign;	// 0x34ae1371
@end
