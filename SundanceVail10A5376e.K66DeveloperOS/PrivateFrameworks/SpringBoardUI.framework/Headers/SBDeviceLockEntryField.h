/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class NSString, UIPasscodeField, UITextInputTraits, UIImageView;

@interface SBDeviceLockEntryField : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	UIPasscodeField *_passcodeField;	// 92 = 0x5c
	UITextInputTraits *_textInputTraits;	// 96 = 0x60
	CFCharacterSetRef _numericTrimmingSet;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	BOOL _highlighted;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
}
@property(assign, nonatomic) id delegate;	// G=0x3570faa5; S=0x3570fab5; @synthesize=_delegate
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3570f6a9; S=0x3570f6b9; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3570fa95; S=0x3570f339; @synthesize=_interfaceOrientation
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x3570f405; S=0x3570f42d; 
@property(readonly, retain) UIPasscodeField *passcodeField;	// G=0x3570ec41; converted property
@property(copy, nonatomic) NSString *stringValue;	// G=0x3570f3dd; S=0x3570f3b1; 
@property(readonly, retain) UITextInputTraits *textInputTraits;	// G=0x3570f4d1; converted property
+ (id)topShadowImage;	// 0x3570e4c9
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3570e4f1
- (id)_backgroundImage;	// 0x3570ed6d
- (CGSize)_fieldSizeForCurrentDevice;	// 0x3570ec51
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3570f7fd
- (void)_layoutForCurrentDevice;	// 0x3570ef29
- (void)appendString:(id)string;	// 0x3570f459
- (BOOL)becomeFirstResponder;	// 0x3570eb1d
- (BOOL)canBecomeFirstResponder;	// 0x3570eae5
- (void)dealloc;	// 0x3570ea59
// declared property getter: - (id)delegate;	// 0x3570faa5
- (void)deleteLastCharacter;	// 0x3570f4a9
// declared property getter: - (int)interfaceOrientation;	// 0x3570fa95
- (BOOL)isFirstResponder;	// 0x3570eb81
// declared property getter: - (BOOL)isHighlighted;	// 0x3570f6a9
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x3570f405
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3570fa45
// converted property getter: - (id)passcodeField;	// 0x3570ec41
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;	// 0x3570f565
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;	// 0x3570f5b9
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;	// 0x3570f51d
- (BOOL)resignFirstResponder;	// 0x3570ebe1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3570f9e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3570fab5
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3570f6b9
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3570f339
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3570f42d
// declared property setter: - (void)setStringValue:(id)value;	// 0x3570f3b1
// declared property getter: - (id)stringValue;	// 0x3570f3dd
// converted property getter: - (id)textInputTraits;	// 0x3570f4d1
@end

