/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, NSAttributedString, NSMutableSet, NSNumber, BRWaitSpinnerControl, ATVRoundProgressView, BRMarqueeTextControl;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	NSAttributedString *_detailedText;	// 92 = 0x5c
	NSAttributedString *_rightJustifiedText;	// 96 = 0x60
	BRMarqueeTextControl *_scrollingTextControl;	// 100 = 0x64
	BRAsyncImageControl *_imageControl;	// 104 = 0x68
	BRWaitSpinnerControl *_spinner;	// 108 = 0x6c
	ATVRoundProgressView *_progressAccessory;	// 112 = 0x70
	BRControl *_flipContainer;	// 116 = 0x74
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 120 = 0x78
	NSMutableSet *_accessories;	// 124 = 0x7c
	BOOL _dimmed;	// 128 = 0x80
	BOOL _disableAccessoryHighlighting;	// 129 = 0x81
	BOOL _forceOrdinalLayout;	// 130 = 0x82
	BOOL _dotsTrailImage;	// 131 = 0x83
	BOOL _forceBlueDotLayout;	// 132 = 0x84
	BOOL _forceCenteredIconLayout;	// 133 = 0x85
	BOOL _forceMenuArrowLayout;	// 134 = 0x86
	BOOL _usingDefaultTextAttributes;	// 135 = 0x87
	BOOL _iconsTrailText;	// 136 = 0x88
	float _forcedHeight;	// 140 = 0x8c
	float _forcedContentHeight;	// 144 = 0x90
	NSNumber *_ordinal;	// 148 = 0x94
	int _largestOrdinal;	// 152 = 0x98
	float _imageInset;	// 156 = 0x9c
	float _imageHeight;	// 160 = 0xa0
	float _textPadding;	// 164 = 0xa4
	float _leftMargin;	// 168 = 0xa8
	float _rightMargin;	// 172 = 0xac
	float _imageAspectRatio;	// 176 = 0xb0
	BOOL _colorSet;	// 180 = 0xb4
	float _progress;	// 184 = 0xb8
}
@property(retain) NSAttributedString *detailedText;	// G=0x35c535; S=0x35c3fd; converted property
@property(assign) BOOL dimmed;	// G=0x35d235; S=0x35d109; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x35d265; S=0x35d245; converted property
@property(retain) id displayInfoLoader;	// G=0x35cb71; S=0x35ca5d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x35d509; S=0x35d4dd; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x35d491; S=0x35d465; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x35d4cd; S=0x35d4a1; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x35d3a1; S=0x35d381; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x35d455; converted property
@property(assign) float forcedContentHeight;	// G=0x35d371; S=0x35d351; converted property
@property(assign) float forcedHeight;	// G=0x35d341; S=0x35d275; converted property
@property(assign) BOOL iconsTrailText;	// G=0x35d545; S=0x35d519; converted property
@property(retain) id image;	// G=0x35c891; S=0x35c621; converted property
@property(assign) float imageAspectRatio;	// G=0x35ca4d; S=0x35ca15; converted property
@property(assign) float imageHeight;	// G=0x35d665; S=0x35d62d; converted property
@property(assign) float imageInset;	// G=0x35d5d5; S=0x35d59d; converted property
@property(retain) id imageProxy;	// G=0x35c9f5; S=0x35c9e1; converted property
@property(assign) float leftMargin;	// G=0x35d58d; S=0x35d555; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x35c285; S=0x35c261; converted property
@property(assign, nonatomic) float progress;	// G=0x35eb29; S=0x35cec5; @synthesize=_progress
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x35c601; S=0x35c555; converted property
@property(assign) float rightMargin;	// G=0x35d6ad; S=0x35d675; converted property
@property(retain) NSAttributedString *text;	// G=0x35c3dd; S=0x35c2ad; converted property
@property(assign) float textPadding;	// G=0x35d61d; S=0x35d5e5; converted property
- (id)init;	// 0x35bbed
- (id)_accessoryOfType:(int)type;	// 0x35eccd
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x35ece1
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x35ff21
- (id)_detailedTextAttributes;	// 0x35f699
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x35f135
- (CGRect)_imageFrame;	// 0x35fb4d
- (id)_imageWithName:(id)name;	// 0x35f83d
- (id)_largeLeftImage;	// 0x35f315
- (float)_largestOrdinalWidth;	// 0x35f93d
- (id)_ordinalImage;	// 0x35f4c1
- (id)_ordinalString;	// 0x35fa15
- (id)_ordinalTypes;	// 0x35f42d
- (CGRect)_progressFrame;	// 0x35fd9d
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x35f1ad
- (id)_rightTextAttributes;	// 0x35f6dd
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x35f89d
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x35eb39
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x35f761
- (id)_textAttributes;	// 0x35f721
- (void)_updateColorAndContentHeight;	// 0x35eba9
- (id)_upperRightImageTypes;	// 0x35f4f5
- (id)_upperRightImages;	// 0x35f5d9
- (id)accessibilityLabel;	// 0x35ffb5
- (id)accessibilitySecondaryLabel;	// 0x3600a5
- (id)accessibilityTraitsList;	// 0x360169
- (id)accessibilityValue;	// 0x360159
- (void)addAccessoryOfType:(int)type;	// 0x35cb81
- (void)cancelLoadDisplayInfo;	// 0x35c15d
- (id)centeredDetailedTextAttributes;	// 0x35c23d
- (id)centeredTextAttributes;	// 0x35c1a5
- (void)controlWasActivated;	// 0x35bf5d
- (void)controlWasDeactivated;	// 0x35c049
- (void)controlWasFocused;	// 0x35be9d
- (void)controlWasUnfocused;	// 0x35befd
- (void)dealloc;	// 0x35bcc5
- (id)description;	// 0x35bded
// converted property getter: - (id)detailedText;	// 0x35c535
// converted property getter: - (BOOL)dimmed;	// 0x35d235
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x35d265
// converted property getter: - (id)displayInfoLoader;	// 0x35cb71
// converted property getter: - (BOOL)dotsTrailImage;	// 0x35d509
- (void)drawRect:(CGRect)rect;	// 0x35d769
- (CGRect)focusCursorFrame;	// 0x35d6bd
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x35d491
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x35d4cd
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x35d3a1
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x35d455
// converted property getter: - (float)forcedContentHeight;	// 0x35d371
// converted property getter: - (float)forcedHeight;	// 0x35d341
- (BOOL)hasAccessoryOfType:(int)type;	// 0x35ce59
// converted property getter: - (BOOL)iconsTrailText;	// 0x35d545
// converted property getter: - (id)image;	// 0x35c891
// converted property getter: - (float)imageAspectRatio;	// 0x35ca4d
// converted property getter: - (float)imageHeight;	// 0x35d665
// converted property getter: - (float)imageInset;	// 0x35d5d5
// converted property getter: - (id)imageProxy;	// 0x35c9f5
- (BOOL)isAccessibilityElement;	// 0x35ffb1
// converted property getter: - (float)leftMargin;	// 0x35d58d
- (void)loadDisplayInfo;	// 0x35c115
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x35c285
// declared property getter: - (float)progress;	// 0x35eb29
- (void)removeAccessoryOfType:(int)type;	// 0x35cd39
- (void)removeAllAccessories;	// 0x35ce75
// converted property getter: - (id)rightJustifiedText;	// 0x35c601
// converted property getter: - (float)rightMargin;	// 0x35d6ad
- (void)scrollingCompleted;	// 0x35c0b5
- (void)setDefaultImage:(id)image;	// 0x35c779
// converted property setter: - (void)setDetailedText:(id)text;	// 0x35c3fd
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x35c411
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x35d109
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x35d245
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x35ca5d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x35d4dd
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x35d465
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x35d4a1
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x35d381
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x35d3b1
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x35d351
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x35d275
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x35d519
// converted property setter: - (void)setImage:(id)image;	// 0x35c621
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x35ca15
// converted property setter: - (void)setImageHeight:(float)height;	// 0x35d62d
// converted property setter: - (void)setImageInset:(float)inset;	// 0x35d59d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x35c9e1
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x35c8b1
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x35d555
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x35c261
// declared property setter: - (void)setProgress:(float)progress;	// 0x35cec5
- (void)setProgress:(float)progress removeOnCompletion:(BOOL)completion;	// 0x35ced9
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x35c555
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x35c569
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x35d675
// converted property setter: - (void)setText:(id)text;	// 0x35c2ad
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x35c2c1
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x35d5e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35be55
// converted property getter: - (id)text;	// 0x35c3dd
// converted property getter: - (float)textPadding;	// 0x35d61d
@end

