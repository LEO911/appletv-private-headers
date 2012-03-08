/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_US4JpD *mOriginalProperties;	// 12 = 0xc
	XXStruct_US4JpD *mTrackedProperties;	// 16 = 0x10
}
@property(retain) id baseStyle;	// G=0x30d25c3d; S=0x30d1d39d; converted property
@property(assign) int bold;	// G=0x30c822bd; S=0x30cfe9fd; converted property
@property(assign) int caps;	// G=0x30d38795; S=0x30cff8f1; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x30d3c36d; S=0x30d3bfd1; converted property
@property(retain) id color;	// G=0x30d25431; S=0x30cff455; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x30e6aa9d; S=0x30d1d2a1; converted property
@property(assign) int deleted;	// G=0x30d9f849; S=0x30d00529; converted property
@property(assign) int doubleStrikeThrough;	// G=0x30dcbb65; S=0x30cff1d1; converted property
@property(assign) int edited;	// G=0x30e6ad5d; S=0x30d005f1; converted property
@property(assign) BOOL embeddedObject;	// G=0x30e6b43d; S=0x30e6c22d; converted property
@property(assign) int embossed;	// G=0x30e69ce1; S=0x30cfed4d; converted property
@property(retain) id extendedFont;	// G=0x30e69595; S=0x30d000a5; converted property
@property(retain) id farEastFont;	// G=0x30e696f1; S=0x30cfff89; converted property
@property(retain) id font;	// G=0x30d18f25; S=0x30cffe6d; converted property
@property(assign) unsigned short fontSize;	// G=0x30c8057d; S=0x30cffcd1; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x30e6b2dd; S=0x30d31d15; converted property
@property(assign) int formattingChanged;	// G=0x30d6f091; S=0x30d006b9; converted property
@property(assign) int hidden;	// G=0x30da4a39; S=0x30cff9b9; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x30e6a3b5; S=0x30db8979; converted property
@property(assign) int highlightColor;	// G=0x30e6a519; S=0x30cff761; converted property
@property(assign) int imprint;	// G=0x30e69e41; S=0x30cfee21; converted property
@property(assign) int italic;	// G=0x30d25575; S=0x30cfead1; converted property
@property(assign) unsigned short kerning;	// G=0x30e6a255; S=0x30cffd99; converted property
@property(assign) int languageForBiText;	// G=0x30e6b181; S=0x30d00465; converted property
@property(assign) int languageForDefaultText;	// G=0x30e6ac01; S=0x30d002dd; converted property
@property(assign) int languageForFarEast;	// G=0x30e6b021; S=0x30d003a1; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x30d3c095; S=0x30d3befd; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x30e6a679; S=0x30e6c301; converted property
@property(assign) long objectIDForOle2;	// G=0x30e6b6f9; S=0x30e6c06d; converted property
@property(assign) long offsetToPictureData;	// G=0x30e6b855; S=0x30e6bf9d; converted property
@property(assign) BOOL ole2;	// G=0x30e6b591; S=0x30e6c13d; converted property
@property(assign) int outline;	// G=0x30e69b81; S=0x30cfeba5; converted property
@property(assign) short position;	// G=0x30e6a93d; S=0x30cffb45; converted property
@property(assign) int resolveMode;	// G=0x30e693f1; S=0x30cfe989; converted property
@property(assign) int shadow;	// G=0x30e69fa1; S=0x30cfec79; converted property
@property(assign) int smallCaps;	// G=0x30d9adb9; S=0x30cff829; converted property
@property(assign) short spacing;	// G=0x30e6a7dd; S=0x30cffa81; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x30e6aebd; S=0x30d1d611; converted property
@property(assign) int strikeThrough;	// G=0x30dcbac9; S=0x30cff109; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x30e69a21; S=0x30d9aa15; converted property
@property(retain) id symbolFont;	// G=0x30e6984d; S=0x30d001c1; converted property
@property(assign) int underline;	// G=0x30d18fcd; S=0x30cfeef5; converted property
@property(retain) id underlineColor;	// G=0x30e6a101; S=0x30cfeff1; converted property
@property(assign) int verticalAlign;	// G=0x30d2a00d; S=0x30cffc09; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x30e699e1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x30e699a1
- (id)initWithDocument:(id)document;	// 0x30cfe8f1
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x30e6cddd
// converted property getter: - (id)baseStyle;	// 0x30d25c3d
// converted property getter: - (int)bold;	// 0x30c822bd
- (id)border;	// 0x30e69439
// converted property getter: - (int)caps;	// 0x30d38795
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x30d3c36d
- (void)clearBaseStyle;	// 0x30d0ebe5
// converted property getter: - (id)color;	// 0x30d25431
- (void)copyPropertiesInto:(id)into;	// 0x30e6ba95
- (id)copyWithZone:(NSZone *)zone;	// 0x30e6bd91
- (void)dealloc;	// 0x30c843e9
// converted property getter: - (int)deleted;	// 0x30d9f849
- (id)document;	// 0x30d6dbf9
// converted property getter: - (int)doubleStrikeThrough;	// 0x30dcbb65
// converted property getter: - (int)edited;	// 0x30e6ad5d
// converted property getter: - (BOOL)embeddedObject;	// 0x30e6b43d
// converted property getter: - (int)embossed;	// 0x30e69ce1
// converted property getter: - (id)extendedFont;	// 0x30e69595
// converted property getter: - (id)farEastFont;	// 0x30e696f1
// converted property getter: - (id)font;	// 0x30d18f25
- (id)fontForLanguageType:(int)languageType;	// 0x30e6c421
// converted property getter: - (unsigned short)fontSize;	// 0x30c8057d
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x30e6b2dd
// converted property getter: - (int)formattingChanged;	// 0x30d6f091
// converted property getter: - (int)hidden;	// 0x30da4a39
// converted property getter: - (int)highlightColor;	// 0x30e6a519
// converted property getter: - (int)imprint;	// 0x30e69e41
- (BOOL)isAnythingOverridden;	// 0x30e6da3d
- (BOOL)isAnythingOverriddenIn:(XXStruct__HyEsA *)anIn;	// 0x30e6b9b1
- (BOOL)isBaseStyleOverridden;	// 0x30c7f889
- (BOOL)isBoldOverridden;	// 0x30c801a9
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x30e6ba51
- (BOOL)isBorderOverridden;	// 0x30e694d1
- (BOOL)isCapsOverridden;	// 0x30c80929
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x30d3c2a9
// converted property getter: - (BOOL)isColorAuto;	// 0x30e6aa9d
- (BOOL)isColorAutoOverridden;	// 0x30e6ab3d
- (BOOL)isColorOverridden;	// 0x30c809ed
- (BOOL)isDeletedOverridden;	// 0x30c766f9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x30c803f5
- (BOOL)isEditedOverridden;	// 0x30e6adf9
- (BOOL)isEmbeddedObjectOverridden;	// 0x30e6b4d9
- (BOOL)isEmbossedOverridden;	// 0x30e69d7d
- (BOOL)isExtendedFontOverridden;	// 0x30e6962d
- (BOOL)isFarEastFontOverridden;	// 0x30e69789
- (BOOL)isFontOverridden;	// 0x30c806dd
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x30e6c3d5
- (BOOL)isFontSizeForBiTextOverridden;	// 0x30e6b379
- (BOOL)isFontSizeOverridden;	// 0x30c804b9
- (BOOL)isFormattingChangedOverridden;	// 0x30d6efcd
- (BOOL)isHiddenOverridden;	// 0x30c80f55
// converted property getter: - (BOOL)isHighlight;	// 0x30e6a3b5
- (BOOL)isHighlightColorOverridden;	// 0x30e6a5b5
- (BOOL)isHighlightOverridden;	// 0x30e6a455
- (BOOL)isImprintOverridden;	// 0x30e69edd
- (BOOL)isItalicOverridden;	// 0x30c8026d
- (BOOL)isKerningOverridden;	// 0x30e6a2f1
- (BOOL)isLanguageForBiTextOverridden;	// 0x30e6b219
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x30e6ac99
- (BOOL)isLanguageForFarEastOverridden;	// 0x30e6b0bd
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x30d3c095
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x30d1c549
// converted property getter: - (BOOL)isLowerCase;	// 0x30e6a679
- (BOOL)isLowerCaseOverridden;	// 0x30e6a719
- (BOOL)isObjectIDForOle2Overridden;	// 0x30e6b791
- (BOOL)isOffsetToPictureDataOverridden;	// 0x30e6b8ed
- (BOOL)isOle2Overridden;	// 0x30e6b635
- (BOOL)isOutlineOverridden;	// 0x30e69c1d
- (BOOL)isPositionOverridden;	// 0x30e6a9d9
- (BOOL)isShadingOverridden;	// 0x30c80ab1
- (BOOL)isShadowOverridden;	// 0x30e6a03d
- (BOOL)isSmallCapsOverridden;	// 0x30c80865
- (BOOL)isSpacingOverridden;	// 0x30e6a879
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x30e6aebd
- (BOOL)isSpecialCharacterOverridden;	// 0x30e6af5d
- (BOOL)isStrikeThroughOverridden;	// 0x30c80331
- (BOOL)isSymbolCharacterOverridden;	// 0x30e69abd
- (BOOL)isSymbolFontOverridden;	// 0x30e698e1
- (BOOL)isUnderlineColorOverridden;	// 0x30e6a195
- (BOOL)isUnderlineOverridden;	// 0x30c807a1
- (BOOL)isVerticalAlignOverridden;	// 0x30c80619
// converted property getter: - (int)italic;	// 0x30d25575
// converted property getter: - (unsigned short)kerning;	// 0x30e6a255
// converted property getter: - (int)languageForBiText;	// 0x30e6b181
// converted property getter: - (int)languageForDefaultText;	// 0x30e6ac01
// converted property getter: - (int)languageForFarEast;	// 0x30e6b021
- (id)mutableBorder;	// 0x30cff299
- (id)mutableShading;	// 0x30cff565
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x30d6de45
// converted property getter: - (long)objectIDForOle2;	// 0x30e6b6f9
// converted property getter: - (long)offsetToPictureData;	// 0x30e6b855
// converted property getter: - (BOOL)ole2;	// 0x30e6b591
// converted property getter: - (int)outline;	// 0x30e69b81
// converted property getter: - (short)position;	// 0x30e6a93d
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x30e6c465
// converted property getter: - (int)resolveMode;	// 0x30e693f1
- (int)reverseBooleanProperty:(int)property;	// 0x30e6ba75
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x30d1d39d
// converted property setter: - (void)setBold:(int)bold;	// 0x30cfe9fd
// converted property setter: - (void)setCaps:(int)caps;	// 0x30cff8f1
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x30d3bfd1
// converted property setter: - (void)setColor:(id)color;	// 0x30cff455
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x30d1d2a1
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x30d00529
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x30cff1d1
// converted property setter: - (void)setEdited:(int)edited;	// 0x30d005f1
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x30e6c22d
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x30cfed4d
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x30d000a5
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x30cfff89
// converted property setter: - (void)setFont:(id)font;	// 0x30cffe6d
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x30cffcd1
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x30d31d15
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x30d006b9
// converted property setter: - (void)setHidden:(int)hidden;	// 0x30cff9b9
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x30db8979
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x30cff761
// converted property setter: - (void)setImprint:(int)imprint;	// 0x30cfee21
// converted property setter: - (void)setItalic:(int)italic;	// 0x30cfead1
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x30cffd99
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x30d00465
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x30d002dd
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x30d003a1
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x30d3befd
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x30e6c301
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x30e6c06d
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x30e6bf9d
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x30e6c13d
// converted property setter: - (void)setOutline:(int)outline;	// 0x30cfeba5
// converted property setter: - (void)setPosition:(short)position;	// 0x30cffb45
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x30cfe989
// converted property setter: - (void)setShadow:(int)shadow;	// 0x30cfec79
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x30cff829
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x30cffa81
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x30d1d611
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x30cff109
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x30d9aa15
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x30d001c1
// converted property setter: - (void)setUnderline:(int)underline;	// 0x30cfeef5
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x30cfeff1
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x30cffc09
- (id)shading;	// 0x30db397d
// converted property getter: - (int)shadow;	// 0x30e69fa1
// converted property getter: - (int)smallCaps;	// 0x30d9adb9
// converted property getter: - (short)spacing;	// 0x30e6a7dd
// converted property getter: - (int)strikeThrough;	// 0x30dcbac9
// converted property getter: - (unsigned short)symbolCharacter;	// 0x30e69a21
// converted property getter: - (id)symbolFont;	// 0x30e6984d
// converted property getter: - (int)underline;	// 0x30d18fcd
// converted property getter: - (id)underlineColor;	// 0x30e6a101
// converted property getter: - (int)verticalAlign;	// 0x30d2a00d
@end
