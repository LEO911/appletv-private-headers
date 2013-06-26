/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIPasscodeField.h>


@interface SBPasscodeField : UIPasscodeField {
	int _style;	// 132 = 0x84
	float _okFontSize;	// 136 = 0x88
	float _cancelFontSize;	// 140 = 0x8c
	float _buttonWidth;	// 144 = 0x90
	BOOL _showsCancelButton;	// 148 = 0x94
	BOOL _isAlphanumericField;	// 149 = 0x95
}
@property(assign, nonatomic) int clearButtonMode;	// G=0x32785205; S=0x3278522d; 
@property(assign, nonatomic) BOOL isAlphanumericField;	// G=0x32785ccd; S=0x32785cdd; @synthesize=_isAlphanumericField
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x327850d5; S=0x327850fd; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x32785ced; S=0x327851d9; @synthesize=_showsCancelButton
+ (Class)textFieldClass;	// 0x32784f49
- (id)_entryField;	// 0x32784fbd
- (id)_initWithStyle:(int)style;	// 0x32784f65
- (id)_localizedCancelString;	// 0x327853e1
- (id)_localizedOKString;	// 0x32785389
- (void)_textDidChange;	// 0x32785c7d
- (void)_updateButtonFrame;	// 0x327859e9
- (void)_updateButtonMetrics;	// 0x32785439
- (void)_updateButtonTitle;	// 0x327857e1
- (void)_updateFields;	// 0x32785bcd
// declared property getter: - (int)clearButtonMode;	// 0x32785205
// declared property getter: - (BOOL)isAlphanumericField;	// 0x32785ccd
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x327850d5
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x3278522d
// declared property setter: - (void)setIsAlphanumericField:(BOOL)field;	// 0x32785cdd
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x32785005
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x327850fd
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x327851d9
- (void)setShowsOKButton:(BOOL)button;	// 0x32785199
// declared property getter: - (BOOL)showsCancelButton;	// 0x32785ced
- (BOOL)textFieldShouldClear:(id)textField;	// 0x32785c79
- (id)textInputTraits;	// 0x32785361
@end
