/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	float _leftPhase;	// 40 = 0x28
	float _rightPhase;	// 44 = 0x2c
	int _sectionLocation;	// 48 = 0x30
	int _selectionStyle;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x30640699; S=0x30640671; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x30641259; S=0x30640959; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x30641a65; S=0x30640981; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x306419f5; S=0x306409a9; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x306419bd; S=0x306407d1; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x30641a05; S=0x306409b9; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x30641a75; S=0x3064086d; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x30641269; S=0x306409c9; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x30641b65; S=0x30640581; @synthesize=_selected
@property(assign, nonatomic) int selectionStyle;	// G=0x307dbffd; S=0x306409d9; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x30657549; S=0x30640909; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x30641241; S=0x30640591; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x30641b55; S=0x30640931; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x30640699
// declared property getter: - (id)bottomShadowColor;	// 0x30641259
- (id)copyWithZone:(NSZone *)zone;	// 0x30641b75
- (void)dealloc;	// 0x30641f41
- (id)description;	// 0x307dc231
// declared property getter: - (id)fillColor;	// 0x30641a65
- (unsigned)hash;	// 0x30641b89
- (BOOL)isEqual:(id)equal;	// 0x30641d7d
// declared property getter: - (float)leftPhase;	// 0x306419f5
// declared property getter: - (BOOL)opaque;	// 0x306419bd
// declared property getter: - (float)rightPhase;	// 0x30641a05
// declared property getter: - (id)sectionBorderColor;	// 0x30641a75
// declared property getter: - (int)sectionLocation;	// 0x30641269
// declared property getter: - (BOOL)selected;	// 0x30641b65
// declared property getter: - (int)selectionStyle;	// 0x307dbffd
// declared property getter: - (id)separatorColor;	// 0x30657549
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x30640671
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x30640959
// declared property setter: - (void)setFillColor:(id)color;	// 0x30640981
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x306409a9
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x306407d1
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x306409b9
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x3064086d
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x306409c9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x30640581
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x306409d9
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x30640909
// declared property setter: - (void)setSize:(CGSize)size;	// 0x30640591
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x30640931
// declared property getter: - (CGSize)size;	// 0x30641241
// declared property getter: - (id)topShadowColor;	// 0x30641b55
@end

