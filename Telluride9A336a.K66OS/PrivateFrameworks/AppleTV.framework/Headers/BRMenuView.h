/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRListView, BRScrollControl, BRImageControl;

@interface BRMenuView : BRControl {
@private
	float _verticalSpacer;	// 48 = 0x30
	BRImageControl *_titleImage;	// 52 = 0x34
	float _titleImageVerticalOffset;	// 56 = 0x38
	BRTextControl *_title;	// 60 = 0x3c
	BRTextControl *_description;	// 64 = 0x40
	BRListView *_list;	// 68 = 0x44
	BRScrollControl *_scroller;	// 72 = 0x48
	int _listAlignment;	// 76 = 0x4c
	float _listWidth;	// 80 = 0x50
	float _listLeadingGap;	// 84 = 0x54
	float _listTrailingGap;	// 88 = 0x58
}
@property(retain) BRTextControl *description;	// G=0x33ae2641; S=0x33ae262d; converted property
@property(readonly, retain) BRListView *list;	// G=0x33ae2679; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x33ae2f05; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x33ae26c5; S=0x33ae2689; converted property
@property(assign, nonatomic) float listLeadingGap;	// G=0x33ae2f35; S=0x33ae2f45; @synthesize=_listLeadingGap
@property(assign, nonatomic) float listTrailingGap;	// G=0x33ae2f55; S=0x33ae2f65; @synthesize=_listTrailingGap
@property(assign, nonatomic) float listWidth;	// G=0x33ae2f15; S=0x33ae2f25; @synthesize=_listWidth
@property(retain) BRTextControl *title;	// G=0x33ae249d; S=0x33ae2489; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x33ae1f65
- (id)init;	// 0x33ae1fa1
- (id)initWithListAlignment:(int)listAlignment;	// 0x33ae1fb5
- (id)accessibilityLabel;	// 0x33ae2ee5
- (id)accessibilitySecondaryLabel;	// 0x33ae2ef5
- (void)dealloc;	// 0x33ae2249
// converted property getter: - (id)description;	// 0x33ae2641
- (void)layoutSubcontrols;	// 0x33ae26f9
// converted property getter: - (id)list;	// 0x33ae2679
// declared property getter: - (int)listAlignment;	// 0x33ae2f05
// converted property getter: - (CGRect)listFrame;	// 0x33ae26c5
// declared property getter: - (float)listLeadingGap;	// 0x33ae2f35
// declared property getter: - (float)listTrailingGap;	// 0x33ae2f55
// declared property getter: - (float)listWidth;	// 0x33ae2f15
// converted property setter: - (void)setDescription:(id)description;	// 0x33ae262d
- (void)setDescription:(id)description withAttributes:(id)attributes;	// 0x33ae24d5
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x33ae2689
// declared property setter: - (void)setListLeadingGap:(float)gap;	// 0x33ae2f45
// declared property setter: - (void)setListTrailingGap:(float)gap;	// 0x33ae2f65
// declared property setter: - (void)setListWidth:(float)width;	// 0x33ae2f25
// converted property setter: - (void)setTitle:(id)title;	// 0x33ae2489
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x33ae23ad
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x33ae22f5
- (void)setVerticalSpacer:(float)spacer;	// 0x33ae22e5
// converted property getter: - (id)title;	// 0x33ae249d
@end
