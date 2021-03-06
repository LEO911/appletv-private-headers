/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIButton, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView {
	UILabel *_inlineTextLabel;	// 84 = 0x54
	float _inlineTextRightMargin;	// 88 = 0x58
	UIButton *_toggleButton;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *inlineText;	// G=0x305ca2d9; S=0x305ca301; 
@property(retain, nonatomic) UILabel *inlineTextLabel;	// G=0x305ca345; S=0x305ca355; @synthesize=_inlineTextLabel
@property(assign, nonatomic) float inlineTextRightMargin;	// G=0x305ca365; S=0x305ca375; @synthesize=_inlineTextRightMargin
@property(retain, nonatomic) UIButton *toggleButton;	// G=0x305ca385; S=0x305ca395; @synthesize=_toggleButton
- (id)initWithFrame:(CGRect)frame;	// 0x305c9db9
- (void)dealloc;	// 0x305ca06d
// declared property getter: - (id)inlineText;	// 0x305ca2d9
// declared property getter: - (id)inlineTextLabel;	// 0x305ca345
// declared property getter: - (float)inlineTextRightMargin;	// 0x305ca365
- (void)layoutSubviews;	// 0x305ca0d1
// declared property setter: - (void)setInlineText:(id)text;	// 0x305ca301
// declared property setter: - (void)setInlineTextLabel:(id)label;	// 0x305ca355
// declared property setter: - (void)setInlineTextRightMargin:(float)margin;	// 0x305ca375
// declared property setter: - (void)setToggleButton:(id)button;	// 0x305ca395
// declared property getter: - (id)toggleButton;	// 0x305ca385
@end

