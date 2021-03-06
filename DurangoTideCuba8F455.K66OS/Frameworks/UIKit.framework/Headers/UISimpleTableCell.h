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
@property(retain) UIFont *font;	// G=0x301ee56d; S=0x301ee9ad; converted property
@property(retain) id icon;	// G=0x301ee8d5; S=0x301efadd; converted property
@property(readonly, retain) UIImageView *iconImageView;	// G=0x301ee58d; converted property
@property(assign) unsigned indentationLevel;	// G=0x301ee59d; S=0x301ee8ad; converted property
@property(retain) NSString *title;	// G=0x301ee57d; S=0x301ee91d; converted property
+ (id)defaultFont;	// 0x301ee9e9
- (id)initWithFrame:(CGRect)frame;	// 0x301ef8a1
- (id)_scriptingInfo;	// 0x301ef73d
- (void)dealloc;	// 0x301ef835
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x301ee969
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x301f04d5
// converted property getter: - (id)font;	// 0x301ee56d
// converted property getter: - (id)icon;	// 0x301ee8d5
// converted property getter: - (id)iconImageView;	// 0x301ee58d
// converted property getter: - (unsigned)indentationLevel;	// 0x301ee59d
- (void)layoutSubviews;	// 0x301f0391
- (int)lineBreakMode;	// 0x301ee5ad
// converted property setter: - (void)setFont:(id)font;	// 0x301ee9ad
// converted property setter: - (void)setIcon:(id)icon;	// 0x301efadd
// converted property setter: - (void)setIndentationLevel:(unsigned)level;	// 0x301ee8ad
// converted property setter: - (void)setTitle:(id)title;	// 0x301ee91d
- (void)setTitleColor:(int)color;	// 0x301ee8f5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x301ef7b1
// converted property getter: - (id)title;	// 0x301ee57d
@end

