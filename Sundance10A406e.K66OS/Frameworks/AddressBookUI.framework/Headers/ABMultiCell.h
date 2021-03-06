/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABChameleonCell.h"
#import "AddressBookUI-Structs.h"

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell {
	ABMultiCellContentView *_abMultiCellContentView;	// 308 = 0x134
	BOOL _editingDisabled;	// 312 = 0x138
}
@property(assign, nonatomic, getter=isEditingDisabled) BOOL editingDisabled;	// G=0x3148e7ed; S=0x31449025; @synthesize=_editingDisabled
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentView;	// G=0x3144904d; S=0x3143bca9; 
- (void)_addMultiCellContentViewIfNeeded;	// 0x3143bd41
- (BOOL)_shouldSwallowTouches:(id)touches withEvent:(id)event;	// 0x31459ccd
- (void)dealloc;	// 0x31452305
// declared property getter: - (BOOL)isEditingDisabled;	// 0x3148e7ed
- (void)layoutSubviews;	// 0x3144aea5
// declared property getter: - (id)multiCellContentView;	// 0x3144904d
- (void)setAbCellStyle:(int)style;	// 0x3144bce5
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x3144b819
// declared property setter: - (void)setEditingDisabled:(BOOL)disabled;	// 0x31449025
// declared property setter: - (void)setMultiCellContentView:(id)view;	// 0x3143bca9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3148e711
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31459c7d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3148e79d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3145a039
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3148e74d
@end

