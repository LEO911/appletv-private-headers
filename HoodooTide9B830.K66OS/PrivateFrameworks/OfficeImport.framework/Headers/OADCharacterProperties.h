/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"
#import "OADEffectsParent.h"

@class OADColor, NSString, OADHyperlink, OADStroke, OADFill, NSArray, OADUnderline;

__attribute__((visibility("hidden")))
@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
@private
	NSString *mLatinFont;	// 12 = 0xc
	NSString *mEastAsianFont;	// 16 = 0x10
	NSString *mBidiFont;	// 20 = 0x14
	NSString *mHAnsiFont;	// 24 = 0x18
	NSString *mSymbolFont;	// 28 = 0x1c
	OADHyperlink *mClickHyperlink;	// 32 = 0x20
	OADHyperlink *mHoverHyperlink;	// 36 = 0x24
	OADStroke *mStroke;	// 40 = 0x28
	OADFill *mFill;	// 44 = 0x2c
	OADColor *mHighlight;	// 48 = 0x30
	NSArray *mEffects;	// 52 = 0x34
	OADUnderline *mUnderline;	// 56 = 0x38
	double mOpacity;	// 60 = 0x3c
	double mSize;	// 68 = 0x44
	double mSpacing;	// 76 = 0x4c
	double mBaseline;	// 84 = 0x54
	unsigned char mFormatType;	// 92 = 0x5c
	unsigned char mFormatKerningType;	// 93 = 0x5d
	unsigned char mStrikeThroughType;	// 94 = 0x5e
	unsigned char mCaps;	// 95 = 0x5f
	unsigned mHasOpacity : 1;	// 96 = 0x60
	unsigned mHasIsBold : 1;	// 96 = 0x60
	unsigned mIsBold : 1;	// 96 = 0x60
	unsigned mHasIsItalic : 1;	// 96 = 0x60
	unsigned mIsItalic : 1;	// 96 = 0x60
	unsigned mHasFormatType : 1;	// 96 = 0x60
	unsigned mHasFormatKerningType : 1;	// 96 = 0x60
	unsigned mHasStrikeThroughType : 1;	// 96 = 0x60
	unsigned mHasSize : 1;	// 97 = 0x61
	unsigned mHasSpacing : 1;	// 97 = 0x61
	unsigned mHasKerning : 1;	// 97 = 0x61
	unsigned mHasIsVerticalText : 1;	// 97 = 0x61
	unsigned mIsVerticalText : 1;	// 97 = 0x61
	unsigned mHasBaseline : 1;	// 97 = 0x61
	unsigned mHasIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mHasCaps : 1;	// 98 = 0x62
	unsigned mHasIsShadowed : 1;	// 98 = 0x62
	unsigned mIsShadowed : 1;	// 98 = 0x62
}
@property(assign) double baseline;	// G=0x310ea55d; S=0x31165585; converted property
@property(retain) id bidiFont;	// G=0x3138340d; S=0x3118f83d; converted property
@property(assign) int caps;	// G=0x310ebac5; S=0x3118f7d5; converted property
@property(retain) id clickHyperlink;	// G=0x3116b435; S=0x3129b12d; converted property
@property(retain) id eastAsianFont;	// G=0x311a4fb9; S=0x3118f7fd; converted property
@property(retain) id effects;	// G=0x3116b205; S=0x3116551d; converted property
@property(retain) id fill;	// G=0x310ea5a5; S=0x31165759; converted property
@property(assign) int formatKerningType;	// G=0x313834c9; S=0x3118f721; converted property
@property(assign) int formatType;	// G=0x3116b271; S=0x31165561; converted property
@property(retain) id highlight;	// G=0x313834f9; S=0x3118f6e1; converted property
@property(retain) id hoverHyperlink;	// G=0x3116b445; S=0x312e4881; converted property
@property(assign) BOOL isBold;	// G=0x310eb87d; S=0x311653d1; converted property
@property(assign) BOOL isHorizontalNormalized;	// G=0x31383459; S=0x3118f7a5; converted property
@property(assign) BOOL isItalic;	// G=0x310eb8b9; S=0x31165405; converted property
@property(assign) BOOL isShadowed;	// G=0x310eb931; S=0x311654c5; converted property
@property(assign) BOOL isVerticalText;	// G=0x3138348d; S=0x3118f771; converted property
@property(retain) id latinFont;	// G=0x310e9635; S=0x31165681; converted property
@property(assign) double opacity;	// G=0x31383529; S=0x3118f625; converted property
@property(assign) double size;	// G=0x310e9089; S=0x311655b1; converted property
@property(assign) double spacing;	// G=0x310ebb31; S=0x3118f745; converted property
@property(assign) int strikeThroughType;	// G=0x310eba59; S=0x311654f9; converted property
@property(retain) id stroke;	// G=0x312a3161; S=0x31263c71; converted property
@property(retain) id symbolFont;	// G=0x311a5005; S=0x3118f8bd; converted property
@property(retain) id underline;	// G=0x310eb9a9; S=0x31165485; converted property
+ (void)initialize;	// 0x3118ed81
- (id)initWithDefaults;	// 0x3118f179
// converted property getter: - (double)baseline;	// 0x310ea55d
// converted property getter: - (id)bidiFont;	// 0x3138340d
// converted property getter: - (int)caps;	// 0x310ebac5
// converted property getter: - (id)clickHyperlink;	// 0x3116b435
- (void)dealloc;	// 0x31170555
// converted property getter: - (id)eastAsianFont;	// 0x311a4fb9
// converted property getter: - (id)effects;	// 0x3116b205
// converted property getter: - (id)fill;	// 0x310ea5a5
// converted property getter: - (int)formatKerningType;	// 0x313834c9
// converted property getter: - (int)formatType;	// 0x3116b271
- (id)hansiFont;	// 0x311b33b5
- (BOOL)hasBaseline;	// 0x310ea521
- (BOOL)hasBidiFont;	// 0x3116b38d
- (BOOL)hasCaps;	// 0x310eba89
- (BOOL)hasEastAsianFont;	// 0x3116b355
- (BOOL)hasEffects;	// 0x3116b1cd
- (BOOL)hasFill;	// 0x310ea5d5
- (BOOL)hasFormatKerningType;	// 0x3116b2a1
- (BOOL)hasFormatType;	// 0x3116b235
- (BOOL)hasHAnsiFont;	// 0x3116b3c5
- (BOOL)hasHighlight;	// 0x3116b195
- (BOOL)hasIsBold;	// 0x310eb841
- (BOOL)hasIsHorizontalNormalized;	// 0x3116b319
- (BOOL)hasIsItalic;	// 0x310eb8f5
- (BOOL)hasIsShadowed;	// 0x310eb96d
- (BOOL)hasIsVerticalText;	// 0x3116b2dd
- (BOOL)hasLatinFont;	// 0x310e95fd
- (BOOL)hasOpacity;	// 0x3116aff5
- (BOOL)hasSize;	// 0x310e90c1
- (BOOL)hasSpacing;	// 0x310ebaf5
- (BOOL)hasStrikeThroughType;	// 0x310eba21
- (BOOL)hasStroke;	// 0x3116a8c1
- (BOOL)hasSymbolFont;	// 0x3116b3fd
- (BOOL)hasUnderline;	// 0x310eb9d9
- (unsigned)hash;	// 0x31383121
// converted property getter: - (id)highlight;	// 0x313834f9
// converted property getter: - (id)hoverHyperlink;	// 0x3116b445
// converted property getter: - (BOOL)isBold;	// 0x310eb87d
- (BOOL)isEqual:(id)equal;	// 0x313824d1
// converted property getter: - (BOOL)isHorizontalNormalized;	// 0x31383459
// converted property getter: - (BOOL)isItalic;	// 0x310eb8b9
// converted property getter: - (BOOL)isShadowed;	// 0x310eb931
// converted property getter: - (BOOL)isVerticalText;	// 0x3138348d
// converted property getter: - (id)latinFont;	// 0x310e9635
// converted property getter: - (double)opacity;	// 0x31383529
- (void)overrideWithProperties:(id)properties;	// 0x311a4749
- (void)removeUnnecessaryOverrides;	// 0x31169d25
// converted property setter: - (void)setBaseline:(double)baseline;	// 0x31165585
// converted property setter: - (void)setBidiFont:(id)font;	// 0x3118f83d
// converted property setter: - (void)setCaps:(int)caps;	// 0x3118f7d5
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x3129b12d
// converted property setter: - (void)setEastAsianFont:(id)font;	// 0x3118f7fd
// converted property setter: - (void)setEffects:(id)effects;	// 0x3116551d
// converted property setter: - (void)setFill:(id)fill;	// 0x31165759
// converted property setter: - (void)setFormatKerningType:(int)type;	// 0x3118f721
// converted property setter: - (void)setFormatType:(int)type;	// 0x31165561
- (void)setHAnsiFont:(id)font;	// 0x3118f87d
// converted property setter: - (void)setHighlight:(id)highlight;	// 0x3118f6e1
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x312e4881
// converted property setter: - (void)setIsBold:(BOOL)bold;	// 0x311653d1
// converted property setter: - (void)setIsHorizontalNormalized:(BOOL)normalized;	// 0x3118f7a5
// converted property setter: - (void)setIsItalic:(BOOL)italic;	// 0x31165405
// converted property setter: - (void)setIsShadowed:(BOOL)shadowed;	// 0x311654c5
// converted property setter: - (void)setIsVerticalText:(BOOL)text;	// 0x3118f771
// converted property setter: - (void)setLatinFont:(id)font;	// 0x31165681
// converted property setter: - (void)setOpacity:(double)opacity;	// 0x3118f625
// converted property setter: - (void)setSize:(double)size;	// 0x311655b1
// converted property setter: - (void)setSpacing:(double)spacing;	// 0x3118f745
// converted property setter: - (void)setStrikeThroughType:(int)type;	// 0x311654f9
// converted property setter: - (void)setStroke:(id)stroke;	// 0x31263c71
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x3118f8bd
// converted property setter: - (void)setUnderline:(id)underline;	// 0x31165485
// converted property getter: - (double)size;	// 0x310e9089
// converted property getter: - (double)spacing;	// 0x310ebb31
// converted property getter: - (int)strikeThroughType;	// 0x310eba59
// converted property getter: - (id)stroke;	// 0x312a3161
// converted property getter: - (id)symbolFont;	// 0x311a5005
// converted property getter: - (id)underline;	// 0x310eb9a9
@end

