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
@property(retain, nonatomic) UIView *backgroundView;	// G=0x33dfa2dd; S=0x33df9da1; @synthesize=_backgroundView
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x33dfa2cd; @synthesize=_contentView
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x33df9c79; S=0x33df9c15; @synthesize=_highlighted
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x33df9ad1; S=0x33df9a5d; @synthesize=_selected
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x33dfa2ed; S=0x33df9c8d; @synthesize=_selectedBackgroundView
- (id)initWithCoder:(id)coder;	// 0x33df8ff5
- (id)initWithFrame:(CGRect)frame;	// 0x33df8e91
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x33df95c9
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x33df956d
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33df9ed5
- (void)_handleMenuGesture:(id)gesture;	// 0x33df9f1d
- (BOOL)_isUsingOldStyleMultiselection;	// 0x33df9ed1
- (void)_menuDismissed:(id)dismissed;	// 0x33dfa07d
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x33dfa1a9
- (id)_selectionSegueTemplate;	// 0x33dfa295
- (void)_setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x33df9ae9
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x33df93f1
- (void)_setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x33df9931
- (void)_setSelectionSegueTemplate:(id)aTemplate;	// 0x33dfa251
- (void)_setupHighlightingSupport;	// 0x33df988d
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x33df9e61
- (void)_teardownHighlightingSupportIfReady;	// 0x33df98f1
- (void)_updateBackgroundView;	// 0x33df96ed
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x33df93b1
- (void)_updateHighlightColorsForView:(id)view highlight:(BOOL)highlight;	// 0x33df9345
// declared property getter: - (id)backgroundView;	// 0x33dfa2dd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x33dfa151
// declared property getter: - (id)contentView;	// 0x33dfa2cd
- (void)copy:(id)copy;	// 0x33dfa229
- (void)cut:(id)cut;	// 0x33dfa215
- (void)dealloc;	// 0x33df9215
- (void)encodeWithCoder:(id)coder;	// 0x33df9161
// declared property getter: - (BOOL)isHighlighted;	// 0x33df9c79
// declared property getter: - (BOOL)isSelected;	// 0x33df9ad1
- (void)paste:(id)paste;	// 0x33dfa23d
- (void)prepareForReuse;	// 0x33df92c9
// declared property getter: - (id)selectedBackgroundView;	// 0x33dfa2ed
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x33df9da1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33df9c15
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x33df9a5d
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x33df9c8d
@end
