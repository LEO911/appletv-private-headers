/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"
#import "NSCoding.h"

@class UIFont, UIImageView, NSArray, UILabel, NSAttributedString, UIColor, UIImage, NSString;

@interface UIButton : UIControl <NSCoding> {
	CFDictionaryRef _contentLookup;	// 108 = 0x6c
	UIEdgeInsets _contentEdgeInsets;	// 112 = 0x70
	UIEdgeInsets _titleEdgeInsets;	// 128 = 0x80
	UIEdgeInsets _imageEdgeInsets;	// 144 = 0x90
	UIImageView *_backgroundView;	// 160 = 0xa0
	UIImageView *_imageView;	// 164 = 0xa4
	UILabel *_titleView;	// 168 = 0xa8
	BOOL _initialized;	// 172 = 0xac
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 173 = 0xad
	NSArray *_contentConstraints;	// 176 = 0xb0
}
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints;	// G=0x347c2add; S=0x347c2af1; @synthesize
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x34626f49; S=0x34563bcd; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x34626f35; S=0x34563b6d; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x34552a2d; S=0x345651c5; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x347c1c41; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x345622c9; S=0x34564d35; @dynamic
@property(readonly, assign, nonatomic) NSAttributedString *currentAttributedTitle;	// G=0x3461fc59; 
@property(readonly, assign, nonatomic) UIImage *currentBackgroundImage;	// G=0x347c1d65; 
@property(readonly, assign, nonatomic) UIImage *currentImage;	// G=0x345d8601; 
@property(readonly, assign, nonatomic) NSString *currentTitle;	// G=0x3461fcb9; 
@property(readonly, assign, nonatomic) UIColor *currentTitleColor;	// G=0x347c1cc5; 
@property(readonly, assign, nonatomic) UIColor *currentTitleShadowColor;	// G=0x347c1d15; 
@property(retain, nonatomic) UIFont *font;	// G=0x347c2b01; S=0x345a9411; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x345838d1; S=0x34565b01; @dynamic
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x346884c1; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x347c2b11; S=0x347c2b21; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x347c1c55; S=0x3468844d; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x346b7529; S=0x345ead95; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x347c2ad5; S=0x347c2ad9; 
@property(retain) id title;	// G=0x347c3021; S=0x347c3025; converted property
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x345b280d; S=0x34562e9d; @dynamic
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x345b1e0d; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x347c2b31; S=0x345a95ad; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x345b1bb1
+ (id)_defaultNormalTitleColor;	// 0x34561c19
+ (id)_defaultNormalTitleShadowColor;	// 0x34561ce1
+ (id)buttonWithType:(int)type;	// 0x345b17d9
- (id)initWithCoder:(id)coder;	// 0x346dbef1
- (id)initWithFrame:(CGRect)frame;	// 0x34561795
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x347c2b65
- (id)_archivableContent:(id *)content;	// 0x347c31f9
- (id)_attributedTitleForState:(unsigned)state;	// 0x3456283d
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x34562261
- (id)_backgroundView;	// 0x34583909
- (int)_buttonType;	// 0x347c2b51
- (BOOL)_canHaveTitle;	// 0x3458d95d
// declared property getter: - (id)_contentConstraints;	// 0x347c2add
- (id)_contentForState:(unsigned)state;	// 0x345529ed
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x347c1de1
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x347c1db5
- (id)_font;	// 0x3458d98d
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x34561bc1
- (id)_imageView;	// 0x347c3011
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x3458d3cd
- (void)_invalidateContentConstraints;	// 0x347c1659
- (id)_letterpressStyleForState:(unsigned)state;	// 0x345b27b5
- (BOOL)_likelyToHaveTitle;	// 0x3458d8f5
- (int)_lineBreakMode;	// 0x3458d9d1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x347c1705
- (id)_scriptingInfo;	// 0x34689721
- (void)_setAttributedTitle:(id)title forStates:(unsigned)states;	// 0x347c302d
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x34564ad9
- (void)_setButtonType:(int)type;	// 0x345b1f45
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x34561c69
// declared property setter: - (void)_setContentConstraints:(id)constraints;	// 0x347c2af1
- (void)_setFont:(id)font;	// 0x34561e39
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x34563a7d
- (void)_setLetterpressStyle:(id)style forState:(unsigned)state;	// 0x347c2f79
- (void)_setLineBreakMode:(int)mode;	// 0x34684069
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x34561dcd
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x346be401
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x345b26d1
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x34561c35
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x34562f99
- (id)_setupBackgroundView;	// 0x34582eb5
- (void)_setupImageView;	// 0x34583319
- (void)_setupTitleView;	// 0x34561f49
- (id)_shadowColorForState:(unsigned)state;	// 0x345b275d
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x346dd771
- (void)_titleAttributesChanged;	// 0x34562e45
- (id)_titleColorForState:(unsigned)state;	// 0x345b2705
- (id)_titleForState:(unsigned)state;	// 0x345627e5
- (CGRect)_titleRectForContentRect:(CGRect)contentRect calculatePositionForEmptyTitle:(BOOL)emptyTitle;	// 0x34562335
- (CGSize)_titleShadowOffset;	// 0x347c2fd5
- (id)_titleView;	// 0x346e1621
- (id)_viewForBaselineLayout;	// 0x347c1e0d
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x34626f49
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x34626f35
- (UIEdgeInsets)alignmentRectInsets;	// 0x34565875
- (id)attributedTitleForState:(unsigned)state;	// 0x3461fca9
// converted property getter: - (BOOL)autosizesToFit;	// 0x34552a2d
- (id)backgroundImageForState:(unsigned)state;	// 0x3456224d
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x34582fad
// declared property getter: - (int)buttonType;	// 0x347c1c41
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x345622c9
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x3456217d
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x347c2ea1
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x347c2bad
// declared property getter: - (id)currentAttributedTitle;	// 0x3461fc59
// declared property getter: - (id)currentBackgroundImage;	// 0x347c1d65
// declared property getter: - (id)currentImage;	// 0x345d8601
// declared property getter: - (id)currentTitle;	// 0x3461fcb9
// declared property getter: - (id)currentTitleColor;	// 0x347c1cc5
// declared property getter: - (id)currentTitleShadowColor;	// 0x347c1d15
- (void)dealloc;	// 0x3456b1c9
- (unsigned long long)defaultAccessibilityTraits;	// 0x347db145
- (void)encodeWithCoder:(id)coder;	// 0x347c17d5
// declared property getter: - (id)font;	// 0x347c2b01
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x346858b1
- (id)image;	// 0x347c3029
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x345838d1
- (id)imageForState:(unsigned)state;	// 0x34561bad
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x34583489
// declared property getter: - (id)imageView;	// 0x346884c1
- (void)invalidateIntrinsicContentSize;	// 0x347c16c5
- (BOOL)isAccessibilityElementByDefault;	// 0x347db141
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x347db185
- (void)layoutSubviews;	// 0x345827c9
// declared property getter: - (int)lineBreakMode;	// 0x347c2b11
- (CGPoint)pressFeedbackPosition;	// 0x34583939
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x347c1c55
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x34563bcd
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x34563b6d
- (void)setAttributedTitle:(id)title forState:(unsigned)state;	// 0x346bf189
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x345651c5
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x345a9389
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x34564a81
- (void)setBounds:(CGRect)bounds;	// 0x345b28bd
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x34564d35
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x34563ab1
- (void)setContentVerticalAlignment:(int)alignment;	// 0x347c1c69
- (void)setDisabledDimsImage:(BOOL)image;	// 0x34563c2d
- (void)setEnabled:(BOOL)enabled;	// 0x34565141
// declared property setter: - (void)setFont:(id)font;	// 0x345a9411
- (void)setFrame:(CGRect)frame;	// 0x34561add
- (void)setHighlighted:(BOOL)highlighted;	// 0x345cbc7d
- (void)setImage:(id)image forState:(unsigned)state;	// 0x34552a41
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x34563a25
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x34565b01
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x347c2b21
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x3468844d
- (void)setSelected:(BOOL)selected;	// 0x3468853d
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x347c2b9d
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x345ead95
// declared property setter: - (void)setTintColor:(id)color;	// 0x347c2ad9
// converted property setter: - (void)setTitle:(id)title;	// 0x347c3025
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x3455281d
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x345b2679
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x34564efd
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x34684039
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x34562e9d
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x345a9551
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x34562f69
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x345a95ad
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x346b7529
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3458d3a1
// declared property getter: - (id)tintColor;	// 0x347c2ad5
// converted property getter: - (id)title;	// 0x347c3021
- (id)titleColorForState:(unsigned)state;	// 0x3468852d
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x345b280d
- (id)titleForState:(unsigned)state;	// 0x34565865
// declared property getter: - (id)titleLabel;	// 0x345b1e0d
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x345622ed
- (id)titleShadowColorForState:(unsigned)state;	// 0x346e1631
// declared property getter: - (CGSize)titleShadowOffset;	// 0x347c2b31
- (void)updateConstraints;	// 0x347c1f15
- (id)viewForBaselineLayout;	// 0x347c2a61
@end
