/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADCharacterProperties.h"

@class OADBulletFont, OADTextSpacing, NSMutableArray, OADBulletProperties, OADBulletSize, OADBulletColor;

@interface OADParagraphProperties : OADCharacterProperties {
	OADBulletSize *mBulletSize;	// 100 = 0x64
	OADBulletColor *mBulletColor;	// 104 = 0x68
	OADBulletFont *mBulletFont;	// 108 = 0x6c
	OADBulletProperties *mBulletProperties;	// 112 = 0x70
	OADTextSpacing *mLineSpacing;	// 116 = 0x74
	OADTextSpacing *mBeforeSpacing;	// 120 = 0x78
	OADTextSpacing *mAfterSpacing;	// 124 = 0x7c
	NSMutableArray *mTabStops;	// 128 = 0x80
	double mLeftMargin;	// 132 = 0x84
	double mRightMargin;	// 140 = 0x8c
	double mIndent;	// 148 = 0x94
	double mDefaultTab;	// 156 = 0x9c
	int mLevel;	// 164 = 0xa4
	int mBulletCharSet;	// 168 = 0xa8
	unsigned char mAlign;	// 172 = 0xac
	unsigned char mWrap;	// 173 = 0xad
	unsigned char mFontAlign;	// 174 = 0xae
	unsigned mIsRightToLeft : 1;	// 175 = 0xaf
	unsigned mIsLatinLineBreak : 1;	// 175 = 0xaf
	unsigned mIsHangingPunctuation : 1;	// 175 = 0xaf
	unsigned mHasTabStops : 1;	// 175 = 0xaf
	unsigned mHasLeftMargin : 1;	// 175 = 0xaf
	unsigned mHasRightMargin : 1;	// 175 = 0xaf
	unsigned mHasLevel : 1;	// 175 = 0xaf
	unsigned mHasIndent : 1;	// 175 = 0xaf
	unsigned mHasAlign : 1;	// 176 = 0xb0
	unsigned mHasDefaultTab : 1;	// 176 = 0xb0
	unsigned mHasIsRightToLeft : 1;	// 176 = 0xb0
	unsigned mHasWrap : 1;	// 176 = 0xb0
	unsigned mHasFontAlign : 1;	// 176 = 0xb0
	unsigned mHasIsLatinLineBreak : 1;	// 176 = 0xb0
	unsigned mHasIsHangingPunctuation : 1;	// 176 = 0xb0
	unsigned mHasBulletCharSet : 1;	// 176 = 0xb0
}
@property(retain) id afterSpacing;	// G=0x33973451; S=0x339590f9; converted property
@property(assign) int align;	// G=0x33973655; S=0x339591dd; converted property
@property(retain) id beforeSpacing;	// G=0x339733e9; S=0x339590b9; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x33ae0201; S=0x33a8b5b1; 
@property(retain) id bulletColor;	// G=0x339738c1; S=0x33959351; converted property
@property(retain) id bulletFont;	// G=0x33973929; S=0x33959391; converted property
@property(retain) id bulletProperties;	// G=0x33973991; S=0x339593d1; converted property
@property(retain) id bulletSize;	// G=0x33973859; S=0x33959311; converted property
@property(assign) double defaultTab;	// G=0x339736c1; S=0x33959201; converted property
@property(assign) int fontAlign;	// G=0x33ba2cf9; S=0x33959289; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x339739c5; S=0x33a8b595; 
@property(assign) double indent;	// G=0x339735e1; S=0x339591b1; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x33ba2d61; S=0x339592ed; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x33ba2d2d; S=0x339592b1; converted property
@property(assign) BOOL isRightToLeft;	// G=0x33ba2c8d; S=0x33959231; converted property
@property(assign) double leftMargin;	// G=0x33972bbd; S=0x33959135; converted property
@property(assign) int level;	// G=0x33973575; S=0x3395918d; converted property
@property(retain) id lineSpacing;	// G=0x33973381; S=0x33959039; converted property
@property(assign) double rightMargin;	// G=0x33ba2c51; S=0x33959161; converted property
@property(assign) int wrap;	// G=0x33ba2cc5; S=0x33959265; converted property
+ (id)defaultProperties;	// 0x3396e8b1
- (id)init;	// 0x3396e881
- (id)initWithDefaults;	// 0x33958121
- (id)addTabStop;	// 0x33add789
// converted property getter: - (id)afterSpacing;	// 0x33973451
// converted property getter: - (int)align;	// 0x33973655
// converted property getter: - (id)beforeSpacing;	// 0x339733e9
// declared property getter: - (int)bulletCharSet;	// 0x33ae0201
// converted property getter: - (id)bulletColor;	// 0x339738c1
// converted property getter: - (id)bulletFont;	// 0x33973929
// converted property getter: - (id)bulletProperties;	// 0x33973991
// converted property getter: - (id)bulletSize;	// 0x33973859
- (void)clearTabStops;	// 0x33ba2be1
- (void)dealloc;	// 0x33971f09
// converted property getter: - (double)defaultTab;	// 0x339736c1
// converted property getter: - (int)fontAlign;	// 0x33ba2cf9
- (BOOL)hasAfterSpacing;	// 0x3397341d
- (BOOL)hasAlign;	// 0x3397361d
- (BOOL)hasBeforeSpacing;	// 0x339733b5
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x339739c5
- (BOOL)hasBulletColor;	// 0x3397388d
- (BOOL)hasBulletFont;	// 0x339738f5
- (BOOL)hasBulletProperties;	// 0x3397395d
- (BOOL)hasBulletSize;	// 0x33973825
- (BOOL)hasDefaultTab;	// 0x33973689
- (BOOL)hasFontAlign;	// 0x33973771
- (BOOL)hasIndent;	// 0x339735a9
- (BOOL)hasIsHangingPunctuation;	// 0x339737e9
- (BOOL)hasIsLatinLineBreak;	// 0x339737ad
- (BOOL)hasIsRightToLeft;	// 0x339736fd
- (BOOL)hasLeftMargin;	// 0x33972c6d
- (BOOL)hasLevel;	// 0x3397353d
- (BOOL)hasLineSpacing;	// 0x3397334d
- (BOOL)hasRightMargin;	// 0x33973499
- (BOOL)hasTabStops;	// 0x33973485
- (BOOL)hasWrap;	// 0x33973735
- (unsigned)hash;	// 0x33ba2d95
// converted property getter: - (double)indent;	// 0x339735e1
- (BOOL)isEqual:(id)equal;	// 0x33ba2fe9
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x33ba2d61
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x33ba2d2d
// converted property getter: - (BOOL)isRightToLeft;	// 0x33ba2c8d
// converted property getter: - (double)leftMargin;	// 0x33972bbd
// converted property getter: - (int)level;	// 0x33973575
// converted property getter: - (id)lineSpacing;	// 0x33973381
- (double)nonOveridenLeftMargin;	// 0x339d1d21
- (void)overrideWithProperties:(id)properties;	// 0x33972ca9
- (void)removeUnnecessaryOverrides;	// 0x339c2e91
// converted property getter: - (double)rightMargin;	// 0x33ba2c51
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x339590f9
// converted property setter: - (void)setAlign:(int)align;	// 0x339591dd
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x339590b9
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x33a8b5b1
// converted property setter: - (void)setBulletColor:(id)color;	// 0x33959351
// converted property setter: - (void)setBulletFont:(id)font;	// 0x33959391
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x339593d1
// converted property setter: - (void)setBulletSize:(id)size;	// 0x33959311
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x33959201
// converted property setter: - (void)setFontAlign:(int)align;	// 0x33959289
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x33a8b595
// converted property setter: - (void)setIndent:(double)indent;	// 0x339591b1
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x339592ed
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x339592b1
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x33959231
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x33959135
// converted property setter: - (void)setLevel:(int)level;	// 0x3395918d
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x33959039
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x33959161
// converted property setter: - (void)setWrap:(int)wrap;	// 0x33959265
- (id)tabStopAtIndex:(unsigned)index;	// 0x33ba2bc1
- (unsigned)tabStopCount;	// 0x33ba2ba1
- (id)tabStops;	// 0x33ae302d
// converted property getter: - (int)wrap;	// 0x33ba2cc5
@end

