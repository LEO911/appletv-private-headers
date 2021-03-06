/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIPasscodeField.h> // Unknown library


@interface SBPasscodeField : UIPasscodeField {
	int _style;	// 120 = 0x78
	float _okFontSize;	// 124 = 0x7c
	float _cancelFontSize;	// 128 = 0x80
	float _buttonWidth;	// 132 = 0x84
	BOOL _showsCancelButton;	// 136 = 0x88
	BOOL _isAlphanumericField;	// 137 = 0x89
}
@property(assign, nonatomic) int clearButtonMode;	// G=0x35710351; S=0x35710379; 
@property(assign, nonatomic) BOOL isAlphanumericField;	// G=0x35710d15; S=0x35710d25; @synthesize=_isAlphanumericField
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x35710221; S=0x35710249; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x35710d35; S=0x35710325; @synthesize=_showsCancelButton
+ (Class)textFieldClass;	// 0x35710095
- (id)_entryField;	// 0x35710109
- (id)_initWithStyle:(int)style;	// 0x357100b1
- (id)_localizedCancelString;	// 0x35710535
- (id)_localizedOKString;	// 0x357104dd
- (void)_textDidChange;	// 0x35710cc5
- (void)_updateButtonFrame;	// 0x35710a49
- (void)_updateButtonMetrics;	// 0x3571058d
- (void)_updateButtonTitle;	// 0x35710871
- (void)_updateFields;	// 0x35710c15
// declared property getter: - (int)clearButtonMode;	// 0x35710351
// declared property getter: - (BOOL)isAlphanumericField;	// 0x35710d15
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x35710221
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x35710379
// declared property setter: - (void)setIsAlphanumericField:(BOOL)field;	// 0x35710d25
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x35710151
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x35710249
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x35710325
- (void)setShowsOKButton:(BOOL)button;	// 0x357102e5
// declared property getter: - (BOOL)showsCancelButton;	// 0x35710d35
- (BOOL)textFieldShouldClear:(id)textField;	// 0x35710cc1
- (id)textInputTraits;	// 0x357104b5
@end

