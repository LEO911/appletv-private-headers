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
@property(retain, nonatomic) UIKeyboardCandidateArrowButton *arrowButton;	// G=0x33d1cead; S=0x33d1cebd; @synthesize=_arrowButton
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputTextField *textField;	// G=0x33d1ce79; S=0x33d1ce89; @synthesize=_textField
- (id)initWithFrame:(CGRect)frame;	// 0x33d1cb29
// declared property getter: - (id)arrowButton;	// 0x33d1cead
- (void)dealloc;	// 0x33d1cbfd
- (void)drawRect:(CGRect)rect;	// 0x33d1cc75
- (void)layoutArrowButton;	// 0x33d1cd31
// declared property setter: - (void)setArrowButton:(id)button;	// 0x33d1cebd
- (void)setFrame:(CGRect)frame;	// 0x33d1ce31
// declared property setter: - (void)setTextField:(id)field;	// 0x33d1ce89
// declared property getter: - (id)textField;	// 0x33d1ce79
@end
