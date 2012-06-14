/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRImage, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRButtonControl : BRControl {
	int _style;	// 80 = 0x50
	BRImageControl *_imageControl;	// 84 = 0x54
	BRImageControl *_badgeControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRTextControl *_subtitleControl;	// 96 = 0x60
	BRImageControl *_overlayImageControl;	// 100 = 0x64
	BRImageControl *_backgroundImageControl;	// 104 = 0x68
	BRImageControl *_bottomBackgroundImageControl;	// 108 = 0x6c
	BRImage *_image;	// 112 = 0x70
	BRImage *_highlightedImage;	// 116 = 0x74
	NSArray *_subcontrolOrder;	// 120 = 0x78
	BOOL _subcontrolsNeedSorting;	// 124 = 0x7c
	BOOL _buttonEnabled;	// 125 = 0x7d
}
@property(retain) id badgeImage;	// G=0x2f67d1; S=0x2f66ed; converted property
@property(retain) BRImage *highlightedImage;	// G=0x2f6931; S=0x2f68e1; converted property
@property(retain) BRImage *image;	// G=0x2f66cd; S=0x2f667d; converted property
@property(retain) id subtitle;	// G=0x2f665d; S=0x2f654d; converted property
@property(retain) id title;	// G=0x2f652d; S=0x2f641d; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x2f5d95
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x2f5e05
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x2f5eb9
+ (id)dialogButtonWithTitle:(id)title;	// 0x2f5e75
+ (id)glossyButtonWithTitle:(id)title;	// 0x2f5f29
- (id)init;	// 0x2f5bfd
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x2f44e9
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x2f45f5
- (void)_addSortedControl:(id)control;	// 0x2f47b1
- (void)_focusWasChanged;	// 0x2f4c15
- (void)_layoutActionSublayers;	// 0x2f4f11
- (void)_layoutDashedSublayers;	// 0x2f5691
- (void)_layoutDialogSublayers;	// 0x2f4d0d
- (void)_layoutGlossySublayers;	// 0x2f59e1
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x2f41dd
- (void)_setBackgroundHighlightImage:(id)image;	// 0x2f48ad
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x2f497d
- (void)_setControlOrderArray:(id)array;	// 0x2f5b9d
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x2f4445
- (void)_setNonAttributedTitle:(id)title;	// 0x2f4371
- (void)_updateAllFocusOpacities;	// 0x2f473d
- (void)_updateBackgroundDialogImages;	// 0x2f4a4d
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x2f4685
- (void)_updateImageLayer;	// 0x2f4add
- (id)accessibilityLabel;	// 0x2f6b11
- (id)accessibilityTraitsList;	// 0x2f6bc5
// converted property getter: - (id)badgeImage;	// 0x2f67d1
- (void)controlWasActivated;	// 0x2f6999
- (void)controlWasFocused;	// 0x2f4c8d
- (void)controlWasUnfocused;	// 0x2f4ccd
- (void)dealloc;	// 0x2f5c65
// converted property getter: - (id)highlightedImage;	// 0x2f6931
// converted property getter: - (id)image;	// 0x2f66cd
- (BOOL)isAccessibilityElement;	// 0x2f6b0d
- (void)layoutSubcontrols;	// 0x2f69d9
- (id)overayImage;	// 0x2f68c1
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x2f66ed
- (void)setButtonEnabled:(BOOL)enabled;	// 0x2f6941
- (void)setButtonStyle:(int)style;	// 0x2f5f81
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x2f68e1
// converted property setter: - (void)setImage:(id)image;	// 0x2f667d
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x2f6c01
- (void)setNonAttributedTitle:(id)title;	// 0x2f6bf1
- (void)setOverlayImage:(id)image;	// 0x2f67f1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2f654d
// converted property setter: - (void)setTitle:(id)title;	// 0x2f641d
// converted property getter: - (id)subtitle;	// 0x2f665d
// converted property getter: - (id)title;	// 0x2f652d
@end
