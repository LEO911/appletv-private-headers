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
@property(retain) id afterSpacing;	// G=0x3481ddb9; S=0x34803a61; converted property
@property(assign) int align;	// G=0x3481dfbd; S=0x34803b45; converted property
@property(retain) id beforeSpacing;	// G=0x3481dd51; S=0x34803a21; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x3498ab41; S=0x34935f19; 
@property(retain) id bulletColor;	// G=0x3481e229; S=0x34803cb9; converted property
@property(retain) id bulletFont;	// G=0x3481e291; S=0x34803cf9; converted property
@property(retain) id bulletProperties;	// G=0x3481e2f9; S=0x34803d39; converted property
@property(retain) id bulletSize;	// G=0x3481e1c1; S=0x34803c79; converted property
@property(assign) double defaultTab;	// G=0x3481e029; S=0x34803b69; converted property
@property(assign) int fontAlign;	// G=0x34a4d6c9; S=0x34803bf1; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x3481e32d; S=0x34935efd; 
@property(assign) double indent;	// G=0x3481df49; S=0x34803b19; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x34a4d731; S=0x34803c55; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x34a4d6fd; S=0x34803c19; converted property
@property(assign) BOOL isRightToLeft;	// G=0x34a4d65d; S=0x34803b99; converted property
@property(assign) double leftMargin;	// G=0x3481d525; S=0x34803a9d; converted property
@property(assign) int level;	// G=0x3481dedd; S=0x34803af5; converted property
@property(retain) id lineSpacing;	// G=0x3481dce9; S=0x348039a1; converted property
@property(assign) double rightMargin;	// G=0x34a4d621; S=0x34803ac9; converted property
@property(assign) int wrap;	// G=0x34a4d695; S=0x34803bcd; converted property
+ (id)defaultProperties;	// 0x34819219
- (id)init;	// 0x348191e9
- (id)initWithDefaults;	// 0x34802a89
- (id)addTabStop;	// 0x349880c9
// converted property getter: - (id)afterSpacing;	// 0x3481ddb9
// converted property getter: - (int)align;	// 0x3481dfbd
// converted property getter: - (id)beforeSpacing;	// 0x3481dd51
// declared property getter: - (int)bulletCharSet;	// 0x3498ab41
// converted property getter: - (id)bulletColor;	// 0x3481e229
// converted property getter: - (id)bulletFont;	// 0x3481e291
// converted property getter: - (id)bulletProperties;	// 0x3481e2f9
// converted property getter: - (id)bulletSize;	// 0x3481e1c1
- (void)clearTabStops;	// 0x34a4d5b1
- (void)dealloc;	// 0x3481c871
// converted property getter: - (double)defaultTab;	// 0x3481e029
// converted property getter: - (int)fontAlign;	// 0x34a4d6c9
- (BOOL)hasAfterSpacing;	// 0x3481dd85
- (BOOL)hasAlign;	// 0x3481df85
- (BOOL)hasBeforeSpacing;	// 0x3481dd1d
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x3481e32d
- (BOOL)hasBulletColor;	// 0x3481e1f5
- (BOOL)hasBulletFont;	// 0x3481e25d
- (BOOL)hasBulletProperties;	// 0x3481e2c5
- (BOOL)hasBulletSize;	// 0x3481e18d
- (BOOL)hasDefaultTab;	// 0x3481dff1
- (BOOL)hasFontAlign;	// 0x3481e0d9
- (BOOL)hasIndent;	// 0x3481df11
- (BOOL)hasIsHangingPunctuation;	// 0x3481e151
- (BOOL)hasIsLatinLineBreak;	// 0x3481e115
- (BOOL)hasIsRightToLeft;	// 0x3481e065
- (BOOL)hasLeftMargin;	// 0x3481d5d5
- (BOOL)hasLevel;	// 0x3481dea5
- (BOOL)hasLineSpacing;	// 0x3481dcb5
- (BOOL)hasRightMargin;	// 0x3481de01
- (BOOL)hasTabStops;	// 0x3481dded
- (BOOL)hasWrap;	// 0x3481e09d
- (unsigned)hash;	// 0x34a4d765
// converted property getter: - (double)indent;	// 0x3481df49
- (BOOL)isEqual:(id)equal;	// 0x34a4d9b9
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x34a4d731
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x34a4d6fd
// converted property getter: - (BOOL)isRightToLeft;	// 0x34a4d65d
// converted property getter: - (double)leftMargin;	// 0x3481d525
// converted property getter: - (int)level;	// 0x3481dedd
// converted property getter: - (id)lineSpacing;	// 0x3481dce9
- (double)nonOveridenLeftMargin;	// 0x3487c689
- (void)overrideWithProperties:(id)properties;	// 0x3481d611
- (void)removeUnnecessaryOverrides;	// 0x3486d7f9
// converted property getter: - (double)rightMargin;	// 0x34a4d621
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x34803a61
// converted property setter: - (void)setAlign:(int)align;	// 0x34803b45
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x34803a21
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x34935f19
// converted property setter: - (void)setBulletColor:(id)color;	// 0x34803cb9
// converted property setter: - (void)setBulletFont:(id)font;	// 0x34803cf9
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x34803d39
// converted property setter: - (void)setBulletSize:(id)size;	// 0x34803c79
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x34803b69
// converted property setter: - (void)setFontAlign:(int)align;	// 0x34803bf1
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x34935efd
// converted property setter: - (void)setIndent:(double)indent;	// 0x34803b19
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x34803c55
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x34803c19
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x34803b99
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x34803a9d
// converted property setter: - (void)setLevel:(int)level;	// 0x34803af5
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x348039a1
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x34803ac9
// converted property setter: - (void)setWrap:(int)wrap;	// 0x34803bcd
- (id)tabStopAtIndex:(unsigned)index;	// 0x34a4d591
- (unsigned)tabStopCount;	// 0x34a4d571
- (id)tabStops;	// 0x3498d96d
// converted property getter: - (int)wrap;	// 0x34a4d695
@end

