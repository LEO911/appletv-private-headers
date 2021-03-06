/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDCharacterProperties;

@interface WDParagraphProperties : NSObject <NSCopying> {
	WDDocument *mDocument;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mCharacterPropertiesOverridden : 1;	// 12 = 0xc
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_niSTDD *mOriginalProperties;	// 16 = 0x10
	XXStruct_niSTDD *mTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL anchorLock;	// G=0x33c061d9; S=0x33a2ce7d; converted property
@property(retain) id baseStyle;	// G=0x33a4fa9d; S=0x33a39ff5; converted property
@property(retain) id characterProperties;	// G=0x33a513e9; S=0x33a8483d; converted property
@property(assign) XXStruct_UF3K2B dropCap;	// G=0x33c058a1; S=0x33a2c519; converted property
@property(assign) short firstLineIndent;	// G=0x33a58eb5; S=0x33a2dde1; converted property
@property(assign) int formattingChanged;	// G=0x33c07bfd; S=0x33c07c99; converted property
@property(assign) long height;	// G=0x33c059f5; S=0x33a2c6d5; converted property
@property(assign) int heightRule;	// G=0x33c05b3d; S=0x33a2c7ad; converted property
@property(assign) int horizontalAnchor;	// G=0x33aa8f55; S=0x33a2cb1d; converted property
@property(assign) long horizontalPosition;	// G=0x33b15a8d; S=0x33a2cccd; converted property
@property(assign) long horizontalSpace;	// G=0x33c05de1; S=0x33a2c95d; converted property
@property(assign) int justification;	// G=0x33a506fd; S=0x33a2deb9; converted property
@property(assign) BOOL keepLinesTogether;	// G=0x33c06f01; S=0x33ae41dd; converted property
@property(assign) BOOL keepNextParagraphTogether;	// G=0x33c06dad; S=0x33a3743d; converted property
@property(assign) BOOL kinsokuOff;	// G=0x33c07451; S=0x33c074ed; converted property
@property(assign) short leftIndent;	// G=0x33a50db9; S=0x33a2dc31; converted property
@property(assign) short lineSpacing;	// G=0x33a505b1; S=0x33a2da81; converted property
@property(assign) int lineSpacingRule;	// G=0x33a37201; S=0x33a2db59; converted property
@property(retain) id list;	// G=0x33a86385; S=0x33c05851; converted property
@property(assign) int listIndex;	// G=0x33a58b4d; S=0x33a2c441; converted property
@property(assign) unsigned char listLevel;	// G=0x33a58c7d; S=0x33a2c369; converted property
@property(assign) unsigned short outlineLevel;	// G=0x33c06c59; S=0x33a37525; converted property
@property(assign, getter=isPageBreakBefore) BOOL pageBreakBefore;	// G=0x33c056fd; S=0x33a2c281; converted property
@property(assign) int resolveMode;	// G=0x33a372fd; S=0x33a2c1e9; converted property
@property(assign) short rightIndent;	// G=0x33aa453d; S=0x33a2dd09; converted property
@property(assign) unsigned short spaceAfter;	// G=0x33a503a9; S=0x33a2d8c1; converted property
@property(assign) BOOL spaceAfterAuto;	// G=0x33c06b05; S=0x33a2d999; converted property
@property(assign) unsigned short spaceBefore;	// G=0x33a54f75; S=0x33a2d701; converted property
@property(assign) BOOL spaceBeforeAuto;	// G=0x33c069b1; S=0x33a2d7d9; converted property
@property(assign) BOOL suppressAutoHyphens;	// G=0x33c07055; S=0x33a2e075; converted property
@property(assign) BOOL suppressLineNumbers;	// G=0x33c071a9; S=0x33a2df91; converted property
@property(assign) int tabStopAddedCount;	// G=0x33c0768d; S=0x33a7d0e1; converted property
@property(assign) int tabStopDeletedPositionCount;	// G=0x33c0793d; S=0x33a7d1b9; converted property
@property(assign) unsigned short tablePart;	// G=0x33c07ab5; S=0x33b0684d; converted property
@property(retain) id tableStyle;	// G=0x33c055ad; S=0x33a454e5; converted property
@property(assign) int verticalAnchor;	// G=0x33b159f1; S=0x33a2cbf5; converted property
@property(assign) long verticalPosition;	// G=0x33b15b21; S=0x33a2cda5; converted property
@property(assign) long verticalSpace;	// G=0x33c05c91; S=0x33a2c885; converted property
@property(assign) BOOL widowControl;	// G=0x33c072fd; S=0x33a2e15d; converted property
@property(assign) long width;	// G=0x33b1fb89; S=0x33a2c5fd; converted property
@property(assign) BOOL wrap;	// G=0x33c05f31; S=0x33a2ca35; converted property
@property(assign) BOOL wrapCode;	// G=0x33c06085; S=0x33a9ee25; converted property
- (id)initWithDocument:(id)document;	// 0x33a2c141
- (void)addTabStopAdded:(XXStruct_M9LKhA *)added;	// 0x33a386f1
- (void)addTabStopDeletedPosition:(short)position;	// 0x33a45629
// converted property getter: - (BOOL)anchorLock;	// 0x33c061d9
- (id)barBorder;	// 0x33c06861
// converted property getter: - (id)baseStyle;	// 0x33a4fa9d
- (id)betweenBorder;	// 0x33c06711
- (id)bottomBorder;	// 0x33aa45d9
// converted property getter: - (id)characterProperties;	// 0x33a513e9
- (void)clearBaseStyle;	// 0x33a79461
- (void)clearChararacterProperties;	// 0x33c03c0d
- (void)copyPropertiesInto:(id)into;	// 0x33c07fe1
- (id)copyWithZone:(NSZone *)zone;	// 0x33c07e29
- (void)dealloc;	// 0x33a5a711
- (id)document;	// 0x33a36e49
// converted property getter: - (XXStruct_UF3K2B)dropCap;	// 0x33c058a1
// converted property getter: - (short)firstLineIndent;	// 0x33a58eb5
// converted property getter: - (int)formattingChanged;	// 0x33c07bfd
// converted property getter: - (long)height;	// 0x33c059f5
// converted property getter: - (int)heightRule;	// 0x33c05b3d
// converted property getter: - (int)horizontalAnchor;	// 0x33aa8f55
// converted property getter: - (long)horizontalPosition;	// 0x33b15a8d
// converted property getter: - (long)horizontalSpace;	// 0x33c05de1
- (BOOL)isAnchorLockOverridden;	// 0x33c06275
- (BOOL)isAnythingOverridden;	// 0x33c03c4d
- (BOOL)isAnythingOverriddenIn:(XXStruct_niSTDD *)anIn;	// 0x33c08299
- (BOOL)isBarBorderOverridden;	// 0x33c068f9
- (BOOL)isBaseStyleOverridden;	// 0x33a4f9e5
- (BOOL)isBetweenBorderOverridden;	// 0x33c067a9
- (BOOL)isBottomBorderOverridden;	// 0x33a50c49
- (BOOL)isCharacterPropertiesOverridden;	// 0x33a599a9
- (BOOL)isDropCapOverridden;	// 0x33c0593d
- (BOOL)isFirstLineIndentOverridden;	// 0x33a50945
- (BOOL)isFormattingChangedOverridden;	// 0x33c07d71
- (BOOL)isHeightOverridden;	// 0x33c05a8d
- (BOOL)isHeightRuleOverridden;	// 0x33c05bd9
- (BOOL)isHorizontalAnchorOverridden;	// 0x33a4f24d
- (BOOL)isHorizontalPositionOverridden;	// 0x33a37099
- (BOOL)isHorizontalSpaceOverridden;	// 0x33c05e79
- (BOOL)isJustificationOverridden;	// 0x33a5064d
- (BOOL)isKeepLinesTogetherOverridden;	// 0x33c06f9d
- (BOOL)isKeepNextParagraphTogetherOverridden;	// 0x33c06e49
- (BOOL)isKinsokuOffOverridden;	// 0x33c075d5
- (BOOL)isLeftBorderOverridden;	// 0x33c06511
- (BOOL)isLeftIndentOverridden;	// 0x33a507d5
- (BOOL)isLineSpacingOverridden;	// 0x33a504f9
- (BOOL)isLineSpacingRuleOverridden;	// 0x33a37149
- (BOOL)isListIndexOverridden;	// 0x33a509fd
- (BOOL)isListLevelOverridden;	// 0x33a50ab5
- (BOOL)isListOverridden;	// 0x33c05889
- (BOOL)isOutlineLevelOverridden;	// 0x33c06cf5
// converted property getter: - (BOOL)isPageBreakBefore;	// 0x33c056fd
- (BOOL)isPageBreakBeforeOverridden;	// 0x33c05799
- (BOOL)isRightBorderOverridden;	// 0x33c06659
- (BOOL)isRightIndentOverridden;	// 0x33a5088d
- (BOOL)isShadingOverridden;	// 0x33a50d01
- (BOOL)isSpaceAfterAutoOverridden;	// 0x33c06ba1
- (BOOL)isSpaceAfterOverridden;	// 0x33a502f9
- (BOOL)isSpaceBeforeAutoOverridden;	// 0x33c06a4d
- (BOOL)isSpaceBeforeOverridden;	// 0x33a50441
- (BOOL)isSuppressAutoHyphensOverridden;	// 0x33c070f1
- (BOOL)isSuppressLineNumbersOverridden;	// 0x33c07245
- (BOOL)isTablePartOverridden;	// 0x33c07b4d
- (BOOL)isTableStyleOverridden;	// 0x33c05645
- (BOOL)isTopBorderOverridden;	// 0x33c063c5
- (BOOL)isVerticalAnchorOverridden;	// 0x33a4f305
- (BOOL)isVerticalPositionOverridden;	// 0x33a4f3bd
- (BOOL)isVerticalSpaceOverridden;	// 0x33c05d29
- (BOOL)isWidowControlOverridden;	// 0x33c07399
- (BOOL)isWidthOverridden;	// 0x33aa94c9
- (BOOL)isWrapCodeOverridden;	// 0x33c06121
- (BOOL)isWrapOverridden;	// 0x33c05fcd
// converted property getter: - (int)justification;	// 0x33a506fd
// converted property getter: - (BOOL)keepLinesTogether;	// 0x33c06f01
// converted property getter: - (BOOL)keepNextParagraphTogether;	// 0x33c06dad
// converted property getter: - (BOOL)kinsokuOff;	// 0x33c07451
- (id)leftBorder;	// 0x33c0647d
// converted property getter: - (short)leftIndent;	// 0x33a50db9
// converted property getter: - (short)lineSpacing;	// 0x33a505b1
// converted property getter: - (int)lineSpacingRule;	// 0x33a37201
// converted property getter: - (id)list;	// 0x33a86385
// converted property getter: - (int)listIndex;	// 0x33a58b4d
// converted property getter: - (unsigned char)listLevel;	// 0x33a58c7d
- (id)mutableBarBorder;	// 0x33a2d4d5
- (id)mutableBetweenBorder;	// 0x33a2d3c1
- (id)mutableBottomBorder;	// 0x33a2d195
- (id)mutableCharacterProperties;	// 0x33a41969
- (id)mutableLeftBorder;	// 0x33a2d07d
- (id)mutableRightBorder;	// 0x33a2d2ad
- (id)mutableShading;	// 0x33a2d5ed
- (id)mutableTopBorder;	// 0x33a2cf65
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x33c03d51
// converted property getter: - (unsigned short)outlineLevel;	// 0x33c06c59
- (void)removeTabStopAddedWithPosition:(short)position;	// 0x33c07815
// converted property getter: - (int)resolveMode;	// 0x33a372fd
- (id)rightBorder;	// 0x33c065c1
// converted property getter: - (short)rightIndent;	// 0x33aa453d
// converted property setter: - (void)setAnchorLock:(BOOL)lock;	// 0x33a2ce7d
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x33a39ff5
// converted property setter: - (void)setCharacterProperties:(id)properties;	// 0x33a8483d
// converted property setter: - (void)setDropCap:(XXStruct_UF3K2B)cap;	// 0x33a2c519
// converted property setter: - (void)setFirstLineIndent:(short)indent;	// 0x33a2dde1
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x33c07c99
// converted property setter: - (void)setHeight:(long)height;	// 0x33a2c6d5
// converted property setter: - (void)setHeightRule:(int)rule;	// 0x33a2c7ad
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x33a2cb1d
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x33a2cccd
// converted property setter: - (void)setHorizontalSpace:(long)space;	// 0x33a2c95d
// converted property setter: - (void)setJustification:(int)justification;	// 0x33a2deb9
// converted property setter: - (void)setKeepLinesTogether:(BOOL)together;	// 0x33ae41dd
// converted property setter: - (void)setKeepNextParagraphTogether:(BOOL)together;	// 0x33a3743d
// converted property setter: - (void)setKinsokuOff:(BOOL)off;	// 0x33c074ed
// converted property setter: - (void)setLeftIndent:(short)indent;	// 0x33a2dc31
// converted property setter: - (void)setLineSpacing:(short)spacing;	// 0x33a2da81
// converted property setter: - (void)setLineSpacingRule:(int)rule;	// 0x33a2db59
// converted property setter: - (void)setList:(id)list;	// 0x33c05851
// converted property setter: - (void)setListIndex:(int)index;	// 0x33a2c441
// converted property setter: - (void)setListLevel:(unsigned char)level;	// 0x33a2c369
// converted property setter: - (void)setOutlineLevel:(unsigned short)level;	// 0x33a37525
// converted property setter: - (void)setPageBreakBefore:(BOOL)before;	// 0x33a2c281
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x33a2c1e9
// converted property setter: - (void)setRightIndent:(short)indent;	// 0x33a2dd09
// converted property setter: - (void)setSpaceAfter:(unsigned short)after;	// 0x33a2d8c1
// converted property setter: - (void)setSpaceAfterAuto:(BOOL)auto;	// 0x33a2d999
// converted property setter: - (void)setSpaceBefore:(unsigned short)before;	// 0x33a2d701
// converted property setter: - (void)setSpaceBeforeAuto:(BOOL)auto;	// 0x33a2d7d9
// converted property setter: - (void)setSuppressAutoHyphens:(BOOL)hyphens;	// 0x33a2e075
// converted property setter: - (void)setSuppressLineNumbers:(BOOL)numbers;	// 0x33a2df91
// converted property setter: - (void)setTabStopAddedCount:(int)count;	// 0x33a7d0e1
// converted property setter: - (void)setTabStopDeletedPositionCount:(int)count;	// 0x33a7d1b9
// converted property setter: - (void)setTablePart:(unsigned short)part;	// 0x33b0684d
// converted property setter: - (void)setTableStyle:(id)style;	// 0x33a454e5
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x33a2cbf5
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x33a2cda5
// converted property setter: - (void)setVerticalSpace:(long)space;	// 0x33a2c885
// converted property setter: - (void)setWidowControl:(BOOL)control;	// 0x33a2e15d
// converted property setter: - (void)setWidth:(long)width;	// 0x33a2c5fd
// converted property setter: - (void)setWrap:(BOOL)wrap;	// 0x33a2ca35
// converted property setter: - (void)setWrapCode:(BOOL)code;	// 0x33a9ee25
- (id)shading;	// 0x33b13f51
// converted property getter: - (unsigned short)spaceAfter;	// 0x33a503a9
// converted property getter: - (BOOL)spaceAfterAuto;	// 0x33c06b05
// converted property getter: - (unsigned short)spaceBefore;	// 0x33a54f75
// converted property getter: - (BOOL)spaceBeforeAuto;	// 0x33c069b1
// converted property getter: - (BOOL)suppressAutoHyphens;	// 0x33c07055
// converted property getter: - (BOOL)suppressLineNumbers;	// 0x33c071a9
- (XXStruct_M9LKhA *)tabStopAddedAt:(int)at;	// 0x33c07745
// converted property getter: - (int)tabStopAddedCount;	// 0x33c0768d
- (short)tabStopDeletedPositionAt:(int)at;	// 0x33c079f5
// converted property getter: - (int)tabStopDeletedPositionCount;	// 0x33c0793d
// converted property getter: - (unsigned short)tablePart;	// 0x33c07ab5
// converted property getter: - (id)tableStyle;	// 0x33c055ad
- (id)topBorder;	// 0x33c0632d
// converted property getter: - (int)verticalAnchor;	// 0x33b159f1
// converted property getter: - (long)verticalPosition;	// 0x33b15b21
// converted property getter: - (long)verticalSpace;	// 0x33c05c91
// converted property getter: - (BOOL)widowControl;	// 0x33c072fd
// converted property getter: - (long)width;	// 0x33b1fb89
// converted property getter: - (BOOL)wrap;	// 0x33c05f31
// converted property getter: - (BOOL)wrapCode;	// 0x33c06085
@end

