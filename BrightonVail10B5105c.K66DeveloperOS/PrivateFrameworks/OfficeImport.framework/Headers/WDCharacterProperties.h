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
@property(retain) id baseStyle;	// G=0x379a93f1; S=0x3798aa45; converted property
@property(assign) int bold;	// G=0x379a4de5; S=0x3797b755; converted property
@property(assign) int bracketTwoLinesInOne;	// G=0x37b518a1; S=0x37b5193d; converted property
@property(assign) int caps;	// G=0x379a8bed; S=0x3797c2f9; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x37a77941; S=0x379faa35; converted property
@property(retain) id color;	// G=0x379880f1; S=0x3797bde1; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x37b4fff5; S=0x37988189; converted property
@property(assign) BOOL compressHorizontalInVertical;	// G=0x37b514dd; S=0x37b51579; converted property
@property(assign) int deleted;	// G=0x37a69311; S=0x37a691ed; converted property
@property(assign) int doubleStrikeThrough;	// G=0x37a6ada9; S=0x3797bc39; converted property
@property(assign) int edited;	// G=0x37b503e1; S=0x37a69141; converted property
@property(assign) BOOL embeddedObject;	// G=0x37b50b9d; S=0x37b50c39; converted property
@property(assign) int embossed;	// G=0x37b4e89d; S=0x3797b955; converted property
@property(assign) int emphasisMark;	// G=0x37b4fe21; S=0x37b4febd; converted property
@property(retain) id extendedFont;	// G=0x37b4e0f9; S=0x3797c7d1; converted property
@property(retain) id farEastFont;	// G=0x37b4e249; S=0x3797c725; converted property
@property(retain) id font;	// G=0x379a49a5; S=0x3797c679; converted property
@property(assign) unsigned short fontSize;	// G=0x379a4799; S=0x3797c579; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x37b50a49; S=0x379eedd5; converted property
@property(assign) int formattingChanged;	// G=0x37b50535; S=0x37b505d1; converted property
@property(assign) int hidden;	// G=0x379f5b99; S=0x3797c379; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x37b4f111; S=0x37a503d1; converted property
@property(assign) int highlightColor;	// G=0x37b4f259; S=0x3797c1f9; converted property
@property(assign) BOOL horizontalInVertical;	// G=0x37b512f9; S=0x37b51395; converted property
@property(assign) int imprint;	// G=0x37b4e9e5; S=0x3797b9d5; converted property
@property(assign) int italic;	// G=0x379d6959; S=0x3797b7d5; converted property
@property(assign) unsigned short kerning;	// G=0x37b4efbd; S=0x3797c5f9; converted property
@property(assign) int languageForBiText;	// G=0x37b508f9; S=0x3797ca29; converted property
@property(assign) int languageForDefaultText;	// G=0x37b50149; S=0x3797c929; converted property
@property(assign) int languageForFarEast;	// G=0x37b507a5; S=0x3797c9a9; converted property
@property(assign) int ligature;	// G=0x37b4f3ad; S=0x37b4f449; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x379faab5; S=0x379fa9a5; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x37b4f581; S=0x37b4f61d; converted property
@property(assign) long objectIDForOle2;	// G=0x37b50f65; S=0x37b50ff9; converted property
@property(assign) long offsetToPictureData;	// G=0x37b51129; S=0x37b511c1; converted property
@property(assign) BOOL ole2;	// G=0x37b50d81; S=0x37b50e1d; converted property
@property(assign) int outline;	// G=0x37b4e749; S=0x3797b855; converted property
@property(assign) short position;	// G=0x37b4f8a9; S=0x3797c479; converted property
@property(retain) id reflection;	// G=0x37b4f9f9; S=0x37b4fa91; converted property
@property(assign) int resolveMode;	// G=0x37b4c90d; S=0x3797b6e9; converted property
@property(assign) int rightToLeft;	// G=0x37b5028d; S=0x37a39289; converted property
@property(assign) int shadow;	// G=0x37b4eb39; S=0x3797b8d5; converted property
@property(retain) id shadow2010;	// G=0x37b4fbd9; S=0x37b4fc71; converted property
@property(assign) float shadow2010Opacity;	// G=0x37b4ec8d; S=0x37b4ed31; converted property
@property(assign) int smallCaps;	// G=0x37a3a561; S=0x3797c279; converted property
@property(assign) short spacing;	// G=0x37b4f765; S=0x3797c3f9; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x37b50651; S=0x37993f31; converted property
@property(assign) int strikeThrough;	// G=0x37a57821; S=0x3797bbb9; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x37b4e5f5; S=0x379e8d35; converted property
@property(retain) id symbolFont;	// G=0x37b4e399; S=0x3797c87d; converted property
@property(assign) BOOL twoLinesInOne;	// G=0x37b516c1; S=0x37b5175d; converted property
@property(assign) int underline;	// G=0x37989149; S=0x3797ba55; converted property
@property(retain) id underlineColor;	// G=0x37b4ee6d; S=0x3797bb11; converted property
@property(assign) int verticalAlign;	// G=0x379aa371; S=0x3797c4f9; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x37b4e5b1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x37b4e56d
+ (int)languageFromString:(id)string;	// 0x37985065
+ (BOOL)languageIsArabicOrHebrew:(int)hebrew;	// 0x37b51fa5
+ (BOOL)languageIsCJK:(int)cjk;	// 0x37b51f75
+ (BOOL)languageIsChinese:(int)chinese;	// 0x37b51f29
- (id)initWithDocument:(id)document;	// 0x3797b651
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x37b4c955
// converted property getter: - (id)baseStyle;	// 0x379a93f1
// converted property getter: - (int)bold;	// 0x379a4de5
- (id)border;	// 0x37b4dfa9
// converted property getter: - (int)bracketTwoLinesInOne;	// 0x37b518a1
// converted property getter: - (int)caps;	// 0x379a8bed
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x37a77941
- (void)clearBaseStyle;	// 0x379c9cf1
// converted property getter: - (id)color;	// 0x379880f1
// converted property getter: - (BOOL)compressHorizontalInVertical;	// 0x37b514dd
- (void)copyPropertiesInto:(id)into;	// 0x37b51c59
- (id)copyWithZone:(NSZone *)zone;	// 0x37b51a75
- (void)dealloc;	// 0x379ab1c5
// converted property getter: - (int)deleted;	// 0x37a69311
- (id)document;	// 0x37985045
// converted property getter: - (int)doubleStrikeThrough;	// 0x37a6ada9
// converted property getter: - (int)edited;	// 0x37b503e1
// converted property getter: - (BOOL)embeddedObject;	// 0x37b50b9d
// converted property getter: - (int)embossed;	// 0x37b4e89d
// converted property getter: - (int)emphasisMark;	// 0x37b4fe21
// converted property getter: - (id)extendedFont;	// 0x37b4e0f9
// converted property getter: - (id)farEastFont;	// 0x37b4e249
// converted property getter: - (id)font;	// 0x379a49a5
- (id)fontForLanguageType:(int)languageType;	// 0x37b4e4dd
// converted property getter: - (unsigned short)fontSize;	// 0x379a4799
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x37b50a49
// converted property getter: - (int)formattingChanged;	// 0x37b50535
// converted property getter: - (int)hidden;	// 0x379f5b99
// converted property getter: - (int)highlightColor;	// 0x37b4f259
// converted property getter: - (BOOL)horizontalInVertical;	// 0x37b512f9
// converted property getter: - (int)imprint;	// 0x37b4e9e5
- (BOOL)isAnythingOverridden;	// 0x37b4c859
- (BOOL)isAnythingOverriddenIn:(XXStruct_F4yHWB *)anIn;	// 0x37b52085
- (BOOL)isBaseStyleOverridden;	// 0x379a3acd
- (BOOL)isBoldOverridden;	// 0x379a4401
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x37b52161
- (BOOL)isBorderOverridden;	// 0x37b4e041
- (BOOL)isBracketTwoLinesInOneOverridden;	// 0x37b519bd
- (BOOL)isCapsOverridden;	// 0x379a4bbd
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x37a77891
// converted property getter: - (BOOL)isColorAuto;	// 0x37b4fff5
- (BOOL)isColorAutoOverridden;	// 0x37b50091
- (BOOL)isColorOverridden;	// 0x379a4c75
- (BOOL)isCompressHorizontalInVerticalOverridden;	// 0x37b51609
- (BOOL)isDeletedOverridden;	// 0x379a52c9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x379a4629
- (BOOL)isEditedOverridden;	// 0x37b5047d
- (BOOL)isEmbeddedObjectOverridden;	// 0x37b50cc9
- (BOOL)isEmbossedOverridden;	// 0x37b4e935
- (BOOL)isEmphasisMarkOverridden;	// 0x37b4ff3d
- (BOOL)isExtendedFontOverridden;	// 0x37b4e191
- (BOOL)isFarEastFontOverridden;	// 0x37b4e2e1
- (BOOL)isFontOverridden;	// 0x379a48ed
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x37b4e521
- (BOOL)isFontSizeForBiTextOverridden;	// 0x37b50ae5
- (BOOL)isFontSizeOverridden;	// 0x379a46e1
- (BOOL)isFormattingChangedOverridden;	// 0x37986501
- (BOOL)isHiddenOverridden;	// 0x379a5381
// converted property getter: - (BOOL)isHighlight;	// 0x37b4f111
- (BOOL)isHighlightColorOverridden;	// 0x37b4f2f5
- (BOOL)isHighlightOverridden;	// 0x37b4f1a9
- (BOOL)isHorizontalInVerticalOverridden;	// 0x37b51425
- (BOOL)isImprintOverridden;	// 0x37b4ea81
- (BOOL)isItalicOverridden;	// 0x379a44b9
- (BOOL)isKerningOverridden;	// 0x37b4f059
- (BOOL)isLanguageForBiTextOverridden;	// 0x37b50991
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x37b501dd
- (BOOL)isLanguageForFarEastOverridden;	// 0x37b50841
- (BOOL)isLigatureOverridden;	// 0x37b4f4c9
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x379faab5
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x379cdbf9
// converted property getter: - (BOOL)isLowerCase;	// 0x37b4f581
- (BOOL)isLowerCaseOverridden;	// 0x37b4f6ad
- (BOOL)isObjectIDForOle2Overridden;	// 0x37b51079
- (BOOL)isOffsetToPictureDataOverridden;	// 0x37b51241
- (BOOL)isOle2Overridden;	// 0x37b50ead
- (BOOL)isOutlineOverridden;	// 0x37b4e7e5
- (BOOL)isPositionOverridden;	// 0x37b4f941
- (BOOL)isReflectionOverridden;	// 0x37b4fb21
- (BOOL)isRightToLeftOverridden;	// 0x37b50329
- (BOOL)isShadingOverridden;	// 0x379a4d2d
- (BOOL)isShadow2010OpacityOverridden;	// 0x37b4edb5
- (BOOL)isShadow2010Overridden;	// 0x37b4fd69
- (BOOL)isShadowOverridden;	// 0x37b4ebd5
- (BOOL)isSmallCapsOverridden;	// 0x379a4b05
- (BOOL)isSpacingOverridden;	// 0x37b4f7f9
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x37b50651
- (BOOL)isSpecialCharacterOverridden;	// 0x37b506ed
- (BOOL)isStrikeThroughOverridden;	// 0x379a4571
- (BOOL)isSymbolCharacterOverridden;	// 0x37b4e691
- (BOOL)isSymbolFontOverridden;	// 0x37b4e42d
- (BOOL)isTwoLinesInOneOverridden;	// 0x37b517e9
- (BOOL)isUnderlineColorOverridden;	// 0x37b4ef05
- (BOOL)isUnderlineOverridden;	// 0x379a4a4d
- (BOOL)isVerticalAlignOverridden;	// 0x379a4835
// converted property getter: - (int)italic;	// 0x379d6959
// converted property getter: - (unsigned short)kerning;	// 0x37b4efbd
// converted property getter: - (int)languageForBiText;	// 0x37b508f9
// converted property getter: - (int)languageForDefaultText;	// 0x37b50149
// converted property getter: - (int)languageForFarEast;	// 0x37b507a5
// converted property getter: - (int)ligature;	// 0x37b4f3ad
- (id)mutableBorder;	// 0x3797bcb9
- (id)mutableShading;	// 0x3797be89
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x37985485
// converted property getter: - (long)objectIDForOle2;	// 0x37b50f65
// converted property getter: - (long)offsetToPictureData;	// 0x37b51129
// converted property getter: - (BOOL)ole2;	// 0x37b50d81
// converted property getter: - (int)outline;	// 0x37b4e749
// converted property getter: - (short)position;	// 0x37b4f8a9
// converted property getter: - (id)reflection;	// 0x37b4f9f9
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x37b4d57d
// converted property getter: - (int)resolveMode;	// 0x37b4c90d
- (int)reverseBooleanProperty:(int)property;	// 0x37b52185
// converted property getter: - (int)rightToLeft;	// 0x37b5028d
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x3798aa45
// converted property setter: - (void)setBold:(int)bold;	// 0x3797b755
// converted property setter: - (void)setBracketTwoLinesInOne:(int)one;	// 0x37b5193d
// converted property setter: - (void)setCaps:(int)caps;	// 0x3797c2f9
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x379faa35
// converted property setter: - (void)setColor:(id)color;	// 0x3797bde1
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x37988189
// converted property setter: - (void)setCompressHorizontalInVertical:(BOOL)vertical;	// 0x37b51579
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x37a691ed
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x3797bc39
// converted property setter: - (void)setEdited:(int)edited;	// 0x37a69141
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x37b50c39
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x3797b955
// converted property setter: - (void)setEmphasisMark:(int)mark;	// 0x37b4febd
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x3797c7d1
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x3797c725
// converted property setter: - (void)setFont:(id)font;	// 0x3797c679
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x3797c579
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x379eedd5
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x37b505d1
// converted property setter: - (void)setHidden:(int)hidden;	// 0x3797c379
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x37a503d1
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x3797c1f9
// converted property setter: - (void)setHorizontalInVertical:(BOOL)vertical;	// 0x37b51395
// converted property setter: - (void)setImprint:(int)imprint;	// 0x3797b9d5
// converted property setter: - (void)setItalic:(int)italic;	// 0x3797b7d5
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x3797c5f9
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x3797ca29
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x3797c929
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x3797c9a9
// converted property setter: - (void)setLigature:(int)ligature;	// 0x37b4f449
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x379fa9a5
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x37b4f61d
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x37b50ff9
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x37b511c1
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x37b50e1d
// converted property setter: - (void)setOutline:(int)outline;	// 0x3797b855
// converted property setter: - (void)setPosition:(short)position;	// 0x3797c479
// converted property setter: - (void)setReflection:(id)reflection;	// 0x37b4fa91
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x3797b6e9
// converted property setter: - (void)setRightToLeft:(int)left;	// 0x37a39289
// converted property setter: - (void)setShadow2010:(id)a2010;	// 0x37b4fc71
// converted property setter: - (void)setShadow2010Opacity:(float)opacity;	// 0x37b4ed31
// converted property setter: - (void)setShadow:(int)shadow;	// 0x3797b8d5
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x3797c279
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x3797c3f9
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x37993f31
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x3797bbb9
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x379e8d35
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x3797c87d
// converted property setter: - (void)setTwoLinesInOne:(BOOL)one;	// 0x37b5175d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x3797ba55
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x3797bb11
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x3797c4f9
- (id)shading;	// 0x37a69279
// converted property getter: - (int)shadow;	// 0x37b4eb39
// converted property getter: - (id)shadow2010;	// 0x37b4fbd9
// converted property getter: - (float)shadow2010Opacity;	// 0x37b4ec8d
// converted property getter: - (int)smallCaps;	// 0x37a3a561
// converted property getter: - (short)spacing;	// 0x37b4f765
// converted property getter: - (int)strikeThrough;	// 0x37a57821
// converted property getter: - (unsigned short)symbolCharacter;	// 0x37b4e5f5
// converted property getter: - (id)symbolFont;	// 0x37b4e399
// converted property getter: - (BOOL)twoLinesInOne;	// 0x37b516c1
// converted property getter: - (int)underline;	// 0x37989149
// converted property getter: - (id)underlineColor;	// 0x37b4ee6d
// converted property getter: - (int)verticalAlign;	// 0x379aa371
@end
