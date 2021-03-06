/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABStyleProviding.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView, NSString, UIButton;
@protocol ABPersonTableActionDelegate;

@interface ABPersonTableAction : NSObject <ABStyleProviding> {
	NSString *_title;	// 4 = 0x4
	NSString *_shortTitle;	// 8 = 0x8
	BOOL _displaysShortTitle;	// 12 = 0xc
	BOOL _indicatesFaceTimeHistory;	// 13 = 0xd
	NSString *_detailText;	// 16 = 0x10
	NSString *_differentiationSheetTitle;	// 20 = 0x14
	BOOL _allowDifferentiationSheet;	// 24 = 0x18
	id _target;	// 28 = 0x1c
	SEL _selector;	// 32 = 0x20
	int _style;	// 36 = 0x24
	int _property;	// 40 = 0x28
	CFArrayRef _properties;	// 44 = 0x2c
	int _grouping;	// 48 = 0x30
	int _ordering;	// 52 = 0x34
	UIButton *_button;	// 56 = 0x38
	UIButton *_FMFButton;	// 60 = 0x3c
	UIView *_customContentView;	// 64 = 0x40
	id<ABPersonTableActionDelegate> _delegate;	// 68 = 0x44
}
@property(retain, nonatomic) UIView *actionContentView;	// G=0x30fb1809; S=0x30fac5bd; @synthesize=_customContentView
@property(assign, nonatomic) BOOL allowDifferentiationSheet;	// G=0x30ff6b31; S=0x30fa7001; @synthesize=_allowDifferentiationSheet
@property(readonly, assign, nonatomic) UIButton *button;	// G=0x30fa04c9; 
@property(assign, nonatomic) id<ABPersonTableActionDelegate> delegate;	// G=0x30ff6afd; S=0x30f9f4a5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *detailText;	// G=0x30ff6b61; @synthesize=_detailText
@property(copy, nonatomic) NSString *differentiationSheetTitle;	// G=0x30ff6b1d; S=0x30fa7059; @synthesize=_differentiationSheetTitle
@property(assign, nonatomic) BOOL displaysShortTitle;	// G=0x30ff6b51; S=0x30fa07cd; @synthesize=_displaysShortTitle
@property(readonly, assign, nonatomic) UIButton *existingButton;	// G=0x30ff6b81; @synthesize=_button
@property(assign, nonatomic) int grouping;	// G=0x30ff6b91; S=0x30f9f435; @synthesize=_grouping
@property(assign, nonatomic) BOOL indicatesFaceTimeHistory;	// G=0x30ff6b0d; S=0x30ff67bd; @synthesize=_indicatesFaceTimeHistory
@property(assign, nonatomic) int ordering;	// G=0x30fa6ff1; S=0x30f9f445; @synthesize=_ordering
@property(assign, nonatomic) CFArrayRef properties;	// G=0x30f9f8c9; S=0x30fa7011; @synthesize=_properties
@property(readonly, assign, nonatomic) int property;	// G=0x30f9f8d9; @synthesize=_property
@property(readonly, assign, nonatomic) SEL selector;	// G=0x30f9f551; @synthesize=_selector
@property(readonly, assign, nonatomic) NSString *shortTitle;	// G=0x30ff6b41; @synthesize=_shortTitle
@property(readonly, assign, nonatomic) int style;	// G=0x30ff6b71; @synthesize=_style
@property(readonly, assign, nonatomic) id target;	// G=0x30f9f541; @synthesize=_target
@property(readonly, assign, nonatomic) NSString *title;	// G=0x30fc2171; @synthesize=_title
- (id)initWithTitle:(id)title detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector;	// 0x30ff6771
- (id)initWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property;	// 0x30f9f2b9
- (id)initWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector property:(int)property;	// 0x30ff6739
- (id)initWithTitle:(id)title style:(int)style target:(id)target selector:(SEL)selector;	// 0x30fa048d
// declared property getter: - (id)actionContentView;	// 0x30fb1809
// declared property getter: - (BOOL)allowDifferentiationSheet;	// 0x30ff6b31
// declared property getter: - (id)button;	// 0x30fa04c9
- (void)buttonClicked:(id)clicked;	// 0x30ff6995
- (int)compareOrderingToAction:(id)action;	// 0x30fa6fb9
- (void)dealloc;	// 0x30fac49d
// declared property getter: - (id)delegate;	// 0x30ff6afd
- (id)description;	// 0x30ff6a95
// declared property getter: - (id)detailText;	// 0x30ff6b61
// declared property getter: - (id)differentiationSheetTitle;	// 0x30ff6b1d
// declared property getter: - (BOOL)displaysShortTitle;	// 0x30ff6b51
// declared property getter: - (id)existingButton;	// 0x30ff6b81
// declared property getter: - (int)grouping;	// 0x30ff6b91
// declared property getter: - (BOOL)indicatesFaceTimeHistory;	// 0x30ff6b0d
- (void)modifyDetailText:(id)text;	// 0x30ff6781
// declared property getter: - (int)ordering;	// 0x30fa6ff1
- (void)performWithSender:(id)sender person:(void *)person property:(int)property identifier:(int)identifier;	// 0x30ff686d
- (void)prepareButton:(id)button forValueAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x30ff6a35
// declared property getter: - (CFArrayRef)properties;	// 0x30f9f8c9
// declared property getter: - (int)property;	// 0x30f9f8d9
// declared property getter: - (SEL)selector;	// 0x30f9f551
// declared property setter: - (void)setActionContentView:(id)view;	// 0x30fac5bd
// declared property setter: - (void)setAllowDifferentiationSheet:(BOOL)sheet;	// 0x30fa7001
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30f9f4a5
// declared property setter: - (void)setDifferentiationSheetTitle:(id)title;	// 0x30fa7059
// declared property setter: - (void)setDisplaysShortTitle:(BOOL)title;	// 0x30fa07cd
- (void)setFMFActionButton:(id)button;	// 0x30ff6819
// declared property setter: - (void)setGrouping:(int)grouping;	// 0x30f9f435
// declared property setter: - (void)setIndicatesFaceTimeHistory:(BOOL)history;	// 0x30ff67bd
// declared property setter: - (void)setOrdering:(int)ordering;	// 0x30f9f445
// declared property setter: - (void)setProperties:(CFArrayRef)properties;	// 0x30fa7011
// declared property getter: - (id)shortTitle;	// 0x30ff6b41
// declared property getter: - (int)style;	// 0x30ff6b71
- (id)styleProvider;	// 0x30fa07a5
// declared property getter: - (id)target;	// 0x30f9f541
// declared property getter: - (id)title;	// 0x30fc2171
@end

