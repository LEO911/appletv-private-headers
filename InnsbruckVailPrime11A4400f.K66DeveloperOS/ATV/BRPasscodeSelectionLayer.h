/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, NSArray, BRTextControl, BRPasscodeSelectionWidget;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
	NSArray *_backgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_bulletLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	BRPasscodeSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	BOOL _isUserEditable;	// 108 = 0x6c
	unsigned _numDigits;	// 112 = 0x70
	BOOL _hideDigits;	// 116 = 0x74
	int _selection;	// 120 = 0x78
}
@property(retain) id passcode;	// G=0x3cc101; S=0x3cc25d; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x3cb361
- (void)_adjustDigitVisibility:(id)visibility;	// 0x3cda0d
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x3cd235
- (id)_buildArrowsLayer;	// 0x3ccc31
- (id)_buildBackgroundLayers;	// 0x3cc87d
- (id)_buildBulletLayers;	// 0x3ccac5
- (id)_buildDigitLayers;	// 0x3cc97d
- (id)_buildDoneLayer;	// 0x3ccced
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x3cd431
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x3cd33d
- (void)_hideDigitAtIndex:(int)index;	// 0x3cd975
- (float)_layoutUIWithHeight:(float)height;	// 0x3ccdb1
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x3cd17d
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x3cd7b1
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x3cd8a1
- (void)_setSelection:(int)selection;	// 0x3cd559
- (id)accessibilityLabel;	// 0x3cda75
- (id)accessibilityTraitsList;	// 0x3cdbf1
- (void)dealloc;	// 0x3cb5b5
- (BOOL)decrementSelection;	// 0x3cbc3d
- (BOOL)digitsHidden;	// 0x3cc635
- (BOOL)doneButtonSelected;	// 0x3cc455
- (void)hideDigits:(int)digits;	// 0x3cc645
- (BOOL)incrementSelection;	// 0x3cba09
- (BOOL)moveSelectionLeft;	// 0x3cb929
- (BOOL)moveSelectionRight;	// 0x3cb839
// converted property getter: - (id)passcode;	// 0x3cc101
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x3cb669
- (void)reset;	// 0x3cc49d
- (void)setFrame:(CGRect)frame;	// 0x3cc53d
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x3cc25d
- (BOOL)setSelection:(int)selection;	// 0x3cc01d
- (BOOL)setValueAtSelection:(int)selection;	// 0x3cbe61
- (void)showDigits;	// 0x3cc745
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x3cb7b9
@end

