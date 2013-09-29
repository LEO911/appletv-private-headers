/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRImageControl, NSString, BRWaitSpinnerControl, BRAutoScrollingTextControl;

__attribute__((visibility("hidden")))
@interface ATVSliderMenuItemView : BRControl {
	NSAttributedString *_attributedText;	// 84 = 0x54
	BOOL _dimmed;	// 88 = 0x58
	BOOL _showSlider;	// 89 = 0x59
	float _sliderValue;	// 92 = 0x5c
	id _sliderValueChangedBlock;	// 96 = 0x60
	BRAutoScrollingTextControl *_textControl;	// 100 = 0x64
	BRImageControl *_rightAccessory;	// 104 = 0x68
	BRImageControl *_leftAccessory;	// 108 = 0x6c
	BRImageControl *_leadingImageItem;	// 112 = 0x70
	BRImageControl *_leftArrow;	// 116 = 0x74
	BRImageControl *_rightArrow;	// 120 = 0x78
	BRImageControl *_sliderGutter;	// 124 = 0x7c
	BRImageControl *_sliderBar;	// 128 = 0x80
	BRWaitSpinnerControl *_spinner;	// 132 = 0x84
}
@property(assign, nonatomic) BOOL dimmed;	// G=0xe065d; S=0xe04a9; @dynamic
@property(retain, nonatomic) BRImageControl *leadingImageItem;	// G=0xe0991; S=0xe09a1; @synthesize=_leadingImageItem
@property(retain, nonatomic) BRImageControl *leftAccessory;	// G=0xe0959; S=0xe0969; @synthesize=_leftAccessory
@property(retain, nonatomic) BRImageControl *leftArrow;	// G=0xe09c9; S=0xe09d9; @synthesize=_leftArrow
@property(retain, nonatomic) BRImageControl *rightAccessory;	// G=0xe0921; S=0xe0931; @synthesize=_rightAccessory
@property(retain, nonatomic) BRImageControl *rightArrow;	// G=0xe0a01; S=0xe0a11; @synthesize=_rightArrow
@property(assign, nonatomic) BOOL showSlider;	// G=0xe0895; S=0xe08a5; @synthesize=_showSlider
@property(retain, nonatomic) BRImageControl *sliderBar;	// G=0xe0a71; S=0xe0a81; @synthesize=_sliderBar
@property(retain, nonatomic) BRImageControl *sliderGutter;	// G=0xe0a39; S=0xe0a49; @synthesize=_sliderGutter
@property(assign, nonatomic) float sliderValue;	// G=0xe08b5; S=0xdfdf5; @synthesize=_sliderValue
@property(copy, nonatomic) id sliderValueChangedBlock;	// G=0xe08c5; S=0xe08d9; @synthesize=_sliderValueChangedBlock
@property(retain, nonatomic) BRWaitSpinnerControl *spinner;	// G=0xe0aa9; S=0xe0ab9; @synthesize=_spinner
@property(retain, nonatomic) NSString *text;	// G=0xdff99; S=0xdfe79; @dynamic
@property(retain, nonatomic) BRAutoScrollingTextControl *textControl;	// G=0xe08e9; S=0xe08f9; @synthesize=_textControl
- (id)initWithFrame:(CGRect)frame;	// 0xdec79
- (void).cxx_destruct;	// 0xe0ae1
- (id)_destinationForAccessoryType:(int)accessoryType;	// 0xe0d09
- (id)_identiferForAccessoryType:(int)accessoryType;	// 0xe0d65
- (id)_imageProxyForAccessoryType:(int)accessoryType;	// 0xe0bc9
- (id)_sliderAccessibilityLabel;	// 0xe0671
- (id)accessibilityLabel;	// 0xe073d
- (id)accessibilityTraitsList;	// 0xe07e9
- (void)addAccessoryOfType:(int)type;	// 0xe0285
- (BOOL)brEventAction:(id)action;	// 0xdf2a1
- (void)controlWasFocused;	// 0xdffb9
- (void)controlWasUnfocused;	// 0xe00e1
// declared property getter: - (BOOL)dimmed;	// 0xe065d
- (BOOL)hasAccessoryOfType:(int)type;	// 0xe03e5
- (BOOL)isAccessibilityElement;	// 0xe066d
- (void)layoutSubcontrols;	// 0xdf4f5
// declared property getter: - (id)leadingImageItem;	// 0xe0991
// declared property getter: - (id)leftAccessory;	// 0xe0959
// declared property getter: - (id)leftArrow;	// 0xe09c9
// declared property getter: - (id)rightAccessory;	// 0xe0921
// declared property getter: - (id)rightArrow;	// 0xe0a01
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xe04a9
// declared property setter: - (void)setLeadingImageItem:(id)item;	// 0xe09a1
// declared property setter: - (void)setLeftAccessory:(id)accessory;	// 0xe0969
// declared property setter: - (void)setLeftArrow:(id)arrow;	// 0xe09d9
// declared property setter: - (void)setRightAccessory:(id)accessory;	// 0xe0931
// declared property setter: - (void)setRightArrow:(id)arrow;	// 0xe0a11
// declared property setter: - (void)setShowSlider:(BOOL)slider;	// 0xe08a5
// declared property setter: - (void)setSliderBar:(id)bar;	// 0xe0a81
// declared property setter: - (void)setSliderGutter:(id)gutter;	// 0xe0a49
// declared property setter: - (void)setSliderValue:(float)value;	// 0xdfdf5
// declared property setter: - (void)setSliderValueChangedBlock:(id)block;	// 0xe08d9
// declared property setter: - (void)setSpinner:(id)spinner;	// 0xe0ab9
// declared property setter: - (void)setText:(id)text;	// 0xdfe79
// declared property setter: - (void)setTextControl:(id)control;	// 0xe08f9
// declared property getter: - (BOOL)showSlider;	// 0xe0895
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xdf4d1
// declared property getter: - (id)sliderBar;	// 0xe0a71
// declared property getter: - (id)sliderGutter;	// 0xe0a39
// declared property getter: - (float)sliderValue;	// 0xe08b5
// declared property getter: - (id)sliderValueChangedBlock;	// 0xe08c5
// declared property getter: - (id)spinner;	// 0xe0aa9
// declared property getter: - (id)text;	// 0xdff99
// declared property getter: - (id)textControl;	// 0xe08e9
@end
