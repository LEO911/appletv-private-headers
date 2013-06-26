/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class UITextRenderingAttributes, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel {
	float _boundsWidth;	// 144 = 0x90
	UITextRenderingAttributes *_attributes;	// 148 = 0x94
	_UITabBarItemAppearanceStorage *_appearanceStorage;	// 152 = 0x98
	BOOL _isSelected;	// 156 = 0x9c
}
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32d6d3dd
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32ba8499
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32ba8409
- (id)_attributes;	// 0x32b7a911
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32ba8489
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x32d6d3e1
- (void)dealloc;	// 0x32d6d375
- (void)setSelected:(BOOL)selected;	// 0x32b7bf19
- (void)sizeToFitBounds:(CGRect)fitBounds;	// 0x32b7f809
- (void)updateTextColorsForSelection;	// 0x32b7a72d
@end
