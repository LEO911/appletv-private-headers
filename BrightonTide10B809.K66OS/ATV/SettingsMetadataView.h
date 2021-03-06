/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface SettingsMetadataView : BRControl {
	BOOL _wrapValueText;	// 84 = 0x54
	float _horizontalPadding;	// 88 = 0x58
}
@property(assign, nonatomic) float horizontalPadding;	// G=0x9c311; S=0x9c321; @synthesize=_horizontalPadding
@property(assign) BOOL wrapValueText;	// G=0x9c2e1; S=0x9c2f9; @synthesize=_wrapValueText
- (id)init;	// 0x9b8f1
- (id)accessibilityLabel;	// 0x9c149
// declared property getter: - (float)horizontalPadding;	// 0x9c311
- (BOOL)isAccessibilityElement;	// 0x9c145
- (void)layoutSubcontrols;	// 0x9bcc1
// declared property setter: - (void)setHorizontalPadding:(float)padding;	// 0x9c321
- (void)setValues:(id)values forLabels:(id)labels;	// 0x9b989
// declared property setter: - (void)setWrapValueText:(BOOL)text;	// 0x9c2f9
// declared property getter: - (BOOL)wrapValueText;	// 0x9c2e1
@end

