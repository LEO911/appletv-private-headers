/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableCell.h"
#import "UIKit-Structs.h"

@class NSString, UIFont, UIImageView;

@interface UISimpleTableCell : UITableCell {
@private
	UIFont *_font;	// 60 = 0x3c
	UIImageView *_iconImageView;	// 64 = 0x40
	unsigned _indentationLevel;	// 68 = 0x44
@protected
	NSString *_title;	// 72 = 0x48
	int _titleColor;	// 76 = 0x4c
}
@property(retain) UIFont *font;	// G=0x320eb56d; S=0x320eb9ad; converted property
@property(retain) id icon;	// G=0x320eb8d5; S=0x320ecadd; converted property
@property(readonly, retain) UIImageView *iconImageView;	// G=0x320eb58d; converted property
@property(assign) unsigned indentationLevel;	// G=0x320eb59d; S=0x320eb8ad; converted property
@property(retain) NSString *title;	// G=0x320eb57d; S=0x320eb91d; converted property
+ (id)defaultFont;	// 0x320eb9e9
- (id)initWithFrame:(CGRect)frame;	// 0x320ec8a1
- (id)_scriptingInfo;	// 0x320ec73d
- (void)dealloc;	// 0x320ec835
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x320eb969
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x320ed4d5
// converted property getter: - (id)font;	// 0x320eb56d
// converted property getter: - (id)icon;	// 0x320eb8d5
// converted property getter: - (id)iconImageView;	// 0x320eb58d
// converted property getter: - (unsigned)indentationLevel;	// 0x320eb59d
- (void)layoutSubviews;	// 0x320ed391
- (int)lineBreakMode;	// 0x320eb5ad
// converted property setter: - (void)setFont:(id)font;	// 0x320eb9ad
// converted property setter: - (void)setIcon:(id)icon;	// 0x320ecadd
// converted property setter: - (void)setIndentationLevel:(unsigned)level;	// 0x320eb8ad
// converted property setter: - (void)setTitle:(id)title;	// 0x320eb91d
- (void)setTitleColor:(int)color;	// 0x320eb8f5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x320ec7b1
// converted property getter: - (id)title;	// 0x320eb57d
@end
