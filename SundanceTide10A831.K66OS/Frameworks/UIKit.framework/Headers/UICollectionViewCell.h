/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UICollectionReusableView.h"
#import "UIGestureRecognizerDelegate.h"

@class UILongPressGestureRecognizer;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {
	UIView *_contentView;	// 100 = 0x64
	UIView *_backgroundView;	// 104 = 0x68
	UIView *_selectedBackgroundView;	// 108 = 0x6c
	UILongPressGestureRecognizer *_menuGesture;	// 112 = 0x70
	id _selectionSegueTemplate;	// 116 = 0x74
	id _highlightingSupport;	// 120 = 0x78
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _collectionCellFlags;	// 124 = 0x7c
	BOOL _selected;	// 125 = 0x7d
	BOOL _highlighted;	// 126 = 0x7e
}
@property(retain, nonatomic) UIView *backgroundView;	// G=0x31ff7af5; S=0x31ff75b9; @synthesize=_backgroundView
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x31ff7ae5; @synthesize=_contentView
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x31ff7491; S=0x31ff742d; @synthesize=_highlighted
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x31ff72e9; S=0x31ff7275; @synthesize=_selected
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x31ff7b05; S=0x31ff74a5; @synthesize=_selectedBackgroundView
- (id)initWithCoder:(id)coder;	// 0x31ff680d
- (id)initWithFrame:(CGRect)frame;	// 0x31ff66a9
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x31ff6de1
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x31ff6d85
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x31ff76ed
- (void)_handleMenuGesture:(id)gesture;	// 0x31ff7735
- (BOOL)_isUsingOldStyleMultiselection;	// 0x31ff76e9
- (void)_menuDismissed:(id)dismissed;	// 0x31ff7895
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x31ff79c1
- (id)_selectionSegueTemplate;	// 0x31ff7aad
- (void)_setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x31ff7301
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x31ff6c09
- (void)_setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x31ff7149
- (void)_setSelectionSegueTemplate:(id)aTemplate;	// 0x31ff7a69
- (void)_setupHighlightingSupport;	// 0x31ff70a5
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x31ff7679
- (void)_teardownHighlightingSupportIfReady;	// 0x31ff7109
- (void)_updateBackgroundView;	// 0x31ff6f05
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x31ff6bc9
- (void)_updateHighlightColorsForView:(id)view highlight:(BOOL)highlight;	// 0x31ff6b5d
// declared property getter: - (id)backgroundView;	// 0x31ff7af5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x31ff7969
// declared property getter: - (id)contentView;	// 0x31ff7ae5
- (void)copy:(id)copy;	// 0x31ff7a41
- (void)cut:(id)cut;	// 0x31ff7a2d
- (void)dealloc;	// 0x31ff6a2d
- (void)encodeWithCoder:(id)coder;	// 0x31ff6979
// declared property getter: - (BOOL)isHighlighted;	// 0x31ff7491
// declared property getter: - (BOOL)isSelected;	// 0x31ff72e9
- (void)paste:(id)paste;	// 0x31ff7a55
- (void)prepareForReuse;	// 0x31ff6ae1
// declared property getter: - (id)selectedBackgroundView;	// 0x31ff7b05
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x31ff75b9
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x31ff742d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x31ff7275
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x31ff74a5
@end

