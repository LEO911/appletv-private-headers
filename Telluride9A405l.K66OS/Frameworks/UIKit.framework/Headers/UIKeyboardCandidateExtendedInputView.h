/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardCandidateExtendedInputTextField, UIKeyboardCandidateArrowButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputView : UIView {
@private
	UIKeyboardCandidateExtendedInputTextField *_textField;	// 48 = 0x30
	UIKeyboardCandidateArrowButton *_arrowButton;	// 52 = 0x34
}
@property(retain, nonatomic) UIKeyboardCandidateArrowButton *arrowButton;	// G=0x33017ead; S=0x33017ebd; @synthesize=_arrowButton
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputTextField *textField;	// G=0x33017e79; S=0x33017e89; @synthesize=_textField
- (id)initWithFrame:(CGRect)frame;	// 0x33017b29
// declared property getter: - (id)arrowButton;	// 0x33017ead
- (void)dealloc;	// 0x33017bfd
- (void)drawRect:(CGRect)rect;	// 0x33017c75
- (void)layoutArrowButton;	// 0x33017d31
// declared property setter: - (void)setArrowButton:(id)button;	// 0x33017ebd
- (void)setFrame:(CGRect)frame;	// 0x33017e31
// declared property setter: - (void)setTextField:(id)field;	// 0x33017e89
// declared property getter: - (id)textField;	// 0x33017e79
@end
