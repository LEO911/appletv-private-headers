/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "_UIShadowedView.h"
#import "UIStatusBarTinting.h"

@class NSArray, NSDictionary, UINavigationItem, NSMutableArray, UIColor, UIImage, UISwipeGestureRecognizer;

@interface UINavigationBar : UIView <_UIShadowedView, UIStatusBarTinting, NSCoding> {
	NSMutableArray *_itemStack;	// 84 = 0x54
	float _rightMargin;	// 88 = 0x58
	unsigned _state;	// 92 = 0x5c
	id _delegate;	// 96 = 0x60
	UIView *_backgroundView;	// 100 = 0x64
	UIView *_titleView;	// 104 = 0x68
	NSArray *_leftViews;	// 108 = 0x6c
	NSArray *_rightViews;	// 112 = 0x70
	UIView *_prompt;	// 116 = 0x74
	UIView *_accessoryView;	// 120 = 0x78
	UIColor *_tintColor;	// 124 = 0x7c
	id _appearanceStorage;	// 128 = 0x80
	id _currentAlert;	// 132 = 0x84
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned transitioningToTranslucent : 1;
		unsigned barStyle : 3;
		unsigned isTranslucent : 1;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned minibar : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned crossfadeItems : 1;
		unsigned autoAdjustTitle : 1;
		unsigned isContainedInPopover : 1;
		unsigned needsDrawRect : 1;
		unsigned animationCleanupCancelled : 1;
		unsigned forceLayout : 1;
		unsigned layoutInProgress : 1;
		unsigned dynamicDuration : 1;
		unsigned isInteractive : 1;
		unsigned cancelledTransition : 1;
		unsigned animationCount : 4;
	} _navbarFlags;	// 136 = 0x88
	UISwipeGestureRecognizer *_popSwipeGestureRecognizer;	// 144 = 0x90
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x30a9dbb5; S=0x30a2731d; 
@property(readonly, assign, nonatomic) UINavigationItem *backItem;	// G=0x3092bad5; 
@property(assign, nonatomic) int barStyle;	// G=0x308d06e9; S=0x3097a8e1; 
@property(assign, nonatomic) id delegate;	// G=0x309777d9; S=0x3090fbf9; 
@property(assign) BOOL forceFullHeightInLandscape;	// G=0x3090ffc1; S=0x30971535; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x3098f651; S=0x30948325; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x3090fc61; S=0x3090fc75; converted property
@property(retain) id navigationItems;	// G=0x3098f675; S=0x30a9f50d; converted property
@property(retain) UIView *prompt;	// G=0x30910119; S=0x309125ed; converted property
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x30a9e5b9; S=0x30a9e429; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3094d8e5; S=0x3096bae1; 
@property(assign) BOOL titleAutoresizesToFit;	// G=0x309120fd; S=0x30aa0125; converted property
@property(copy, nonatomic) NSDictionary *titleTextAttributes;	// G=0x30a9e3b5; S=0x30972e9d; 
@property(readonly, assign, nonatomic) UINavigationItem *topItem;	// G=0x308cfb8d; 
@property(assign) float topItemAlpha;	// G=0x30aa20e9; S=0x30aa2109; converted property
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x308d0e89; S=0x3097ab69; 
+ (id)_bottomColorForBackgroundImage:(id)backgroundImage viewSize:(CGSize)size;	// 0x30974cd1
+ (void)_setUseCustomBackButtonAction:(BOOL)action;	// 0x30aa3e55
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color;	// 0x30949209
+ (id)_statusBarBaseTintColorForStyle:(int)style translucent:(BOOL)translucent tintColor:(id)color backgroundImage:(id)image viewSize:(CGSize)size;	// 0x3091df85
+ (BOOL)_useCustomBackButtonAction;	// 0x30aa3e65
+ (id)defaultPromptFont;	// 0x30a1c171
+ (CGSize)defaultSize;	// 0x3090f4f9
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x3090f521
+ (CGSize)defaultSizeWithPrompt;	// 0x30a9e605
+ (CGSize)defaultSizeWithPromptForOrientation:(int)orientation;	// 0x30a1beb1
+ (void)setDefaultAnimationDuration:(double)duration;	// 0x30a9e62d
- (id)initWithCoder:(id)coder;	// 0x30a9e641
- (id)initWithFrame:(CGRect)frame;	// 0x3090dfb1
- (void)_alertIsAppearing:(id)appearing;	// 0x30a6d201
- (void)_alertIsDisappearing:(id)disappearing;	// 0x30a6e6f1
- (id)_allViews;	// 0x30a1294d
- (id)_appearanceStorage;	// 0x308d5a29
- (void)_applySPIAppearanceToButtons;	// 0x30984c9d
- (float)_autolayoutSpacingAtEdge:(int)edge inContainer:(id)container;	// 0x30ced4dd
- (float)_autolayoutSpacingAtEdge:(int)edge nextToNeighbor:(id)neighbor;	// 0x30ced4f5
- (void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void *)context;	// 0x30aa31c9
// declared property getter: - (id)_backgroundView;	// 0x30a9dbb5
- (int)_barStyle:(BOOL)style;	// 0x308d72e1
- (CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x30aa2bf1
- (BOOL)_canDrawContent;	// 0x3090e145
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x30a72e05
- (void)_cancelInProgressPushOrPop;	// 0x3097951d
- (void)_cancelInteractiveTransition;	// 0x30a9f525
- (void)_cancelInteractiveTransition:(float)transition;	// 0x30a9f409
- (id)_commonHitTest:(CGPoint)test forView:(id)view;	// 0x3098ffd1
- (void)_commonNavBarInit;	// 0x3090e3b1
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30a9f521
- (void)_crossFadeToBarBackgroundImageForItem:(id)item;	// 0x30a26cd5
- (int)_currentBarStyle;	// 0x308d73d9
- (id)_currentLeftViews;	// 0x308f18a9
- (id)_currentRightViews;	// 0x308f19a9
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x30a9ef15
- (void)_decrementAnimationCountIfNecessary;	// 0x309949e9
- (id)_defaultTitleFont;	// 0x3092d825
- (id)_defaultTitleFontFittingHeight:(float)height;	// 0x308da09d
- (BOOL)_deferShadowToSearchBar;	// 0x30a9e5dd
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x309136f1
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;	// 0x3094888d
- (void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x30a1c199
- (id)_effectiveTintColor;	// 0x308d7461
- (void)_fadeAllViewsIn;	// 0x30a1286d
- (void)_fadeAllViewsOut;	// 0x30aa358d
- (void)_fadeViewOut:(id)anOut;	// 0x30aa351d
- (void)_fadeViewsIn:(id)anIn;	// 0x3099421d
- (void)_fadeViewsOut:(id)anOut;	// 0x309941c1
- (void)_finishInteractiveTransition:(float)transition;	// 0x30a9f2c9
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x30aa3e79
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3;	// 0x308d7965
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x308d7989
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views forItemAtIndex:(unsigned)index;	// 0x308d7a21
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3;	// 0x30aa3ac9
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3 forItemAtIndex:(unsigned)index;	// 0x308d7be1
- (void)_handleMouseDownAtPoint:(CGPoint)point;	// 0x3099222d
- (void)_handleMouseUpAtPoint:(CGPoint)point;	// 0x30992d0d
- (void)_handlePopSwipe:(id)swipe;	// 0x30aa3ee1
- (BOOL)_hasBackButton;	// 0x308d78e1
- (BOOL)_hasCustomAutolayoutNeighborSpacing;	// 0x30ced4d9
- (void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void *)context;	// 0x30aa19a5
- (BOOL)_hidesShadow;	// 0x3094db69
- (void)_incrementAnimationCountIfNecessary;	// 0x3099418d
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)left;	// 0x308d74f5
- (id)_itemStack;	// 0x30aa3b59
- (void)_navBarButtonPressed:(id)pressed;	// 0x30aa3da9
- (void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void *)context;	// 0x30994321
- (void)_popForTouchAtPoint:(CGPoint)point;	// 0x30a9f981
- (id)_popNavigationItemWithTransition:(int)transition;	// 0x30939821
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30a9e8c1
- (void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;	// 0x3093a3b1
- (void)_prepareForPushAnimationWithItems:(id)items;	// 0x30911e89
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)previousColor;	// 0x30a9ff85
- (void)_pushNavigationItem:(id)item transition:(int)transition;	// 0x30911581
- (void)_removeAccessoryView;	// 0x30aa2a89
- (void)_removeItemsFromSuperview:(id)superview;	// 0x30948979
- (void)_resetBackgroundImageAsNecessary;	// 0x3091226d
- (void)_setAutoAdjustTitle:(BOOL)title;	// 0x3096c1e9
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x309848f5
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x30a9dbc5
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x30a2731d
- (void)_setBarStyle:(int)style;	// 0x30912181
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x30984e65
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x30a9de75
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2 forState:(unsigned)state;	// 0x30a9dbf9
- (void)_setButtonTextShadowOffset:(CGSize)offset;	// 0x30a9debd
- (void)_setDeferShadowToSearchBar:(BOOL)searchBar;	// 0x3094da71
- (void)_setHidesShadow:(BOOL)shadow;	// 0x309729dd
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x30aa0015
- (void)_setItems:(id)items transition:(int)transition;	// 0x30948411
- (void)_setLeftView:(id)view rightView:(id)view2;	// 0x30aa10e9
- (void)_setLeftViews:(id)views rightViews:(id)views2;	// 0x308d5e91
- (void)_setNeedsLayoutForce:(BOOL)force;	// 0x30aa3b69
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x30a9de99
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;	// 0x30a9e121
- (void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;	// 0x30948a51
- (id)_shadowView;	// 0x30972e25
- (BOOL)_shouldPopForTouchAtPoint:(CGPoint)point;	// 0x30a9f791
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)navigationItem;	// 0x3091d7e5
- (void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void *)context;	// 0x30994b15
- (void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;	// 0x30aa2dc9
- (void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;	// 0x309932f9
- (void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;	// 0x309f1c6d
- (id)_statusBarTintColor;	// 0x3091de45
- (BOOL)_subclassImplementsDrawBackgroundInRect;	// 0x3090e561
- (BOOL)_subclassImplementsDrawRect;	// 0x3090e049
- (unsigned)_subviewIndexAboveBackground;	// 0x309940bd
- (void)_tintViewAppearanceDidChange;	// 0x30972da9
- (int)_transitionForOldItems:(id)oldItems newItems:(id)items;	// 0x30a9f4b9
- (void)_updateBackgroundImage;	// 0x3090f185
- (void)_updateInteractiveTransition:(float)transition;	// 0x30a9f211
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style;	// 0x308db7b9
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style previousTintColor:(id)color;	// 0x308db7f9
- (void)_updateNavigationBarItemsForStyle:(int)style;	// 0x3097a935
- (void)_updateNavigationBarItemsForStyle:(int)style previousTintColor:(id)color;	// 0x3097a96d
- (void)_updateOpacity;	// 0x3090e2e9
- (void)_updateTitleView;	// 0x30aa0275
- (void)_wrapView:(id)view inClippingViewWithLeftBoundary:(float)leftBoundary rightBoundary:(float)boundary tag:(int)tag;	// 0x30993f85
- (void)addConstraint:(id)constraint;	// 0x30a9fd31
- (unsigned)animationDisabledCount;	// 0x30aa04d1
- (CGRect)availableTitleArea;	// 0x30aa1d99
- (id)backButtonViewAtPoint:(CGPoint)point;	// 0x30992e51
// declared property getter: - (id)backItem;	// 0x3092bad5
- (id)backgroundImageForBarMetrics:(int)barMetrics;	// 0x30a9e361
// declared property getter: - (int)barStyle;	// 0x308d06e9
- (id)buttonItemShadowColor;	// 0x3092d60d
- (id)buttonItemTextColor;	// 0x3092d6e9
- (id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;	// 0x30aa16bd
- (id)currentBackButton;	// 0x308d7889
- (id)currentLeftView;	// 0x30aa0385
- (id)currentRightView;	// 0x30aa0409
- (void)dealloc;	// 0x30971d91
- (float)defaultBackButtonAlignmentHeight;	// 0x3091dac1
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x3090ffd9
// declared property getter: - (id)delegate;	// 0x309777d9
- (void)didAddSubview:(id)subview;	// 0x308db75d
- (void)disableAnimation;	// 0x308cfb6d
- (void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;	// 0x3092cc29
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x30aa04e5
- (void)drawRect:(CGRect)rect;	// 0x30985009
- (void)enableAnimation;	// 0x308dbc49
- (void)encodeWithCoder:(id)coder;	// 0x30a9ea75
// converted property getter: - (BOOL)forceFullHeightInLandscape;	// 0x3090ffc1
- (void)hideButtons;	// 0x30aa16e1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30a9f73d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3098ff21
- (CGSize)intrinsicContentSize;	// 0x30a1be15
- (void)invalidateIntrinsicContentSize;	// 0x30a1bd2d
- (BOOL)isAnimationEnabled;	// 0x308da7c1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30b4aa29
// converted property getter: - (BOOL)isLocked;	// 0x3090fc61
- (BOOL)isMinibar;	// 0x308d012d
// declared property getter: - (BOOL)isTranslucent;	// 0x308d0e89
// declared property getter: - (id)items;	// 0x3098f651
- (void)layoutSubviews;	// 0x308f0ec9
- (void)mouseDown:(GSEventRef)down;	// 0x30a9fc09
- (void)mouseUp:(GSEventRef)up;	// 0x30a9fc5d
- (id)navigationItemAtPoint:(CGPoint)point;	// 0x30992315
// converted property getter: - (id)navigationItems;	// 0x3098f675
- (void)popNavigationItem;	// 0x30939bd1
- (id)popNavigationItemAnimated:(BOOL)animated;	// 0x30992ea9
// converted property getter: - (id)prompt;	// 0x30910119
- (CGRect)promptBounds;	// 0x30aa0461
- (id)promptView;	// 0x30aa0451
- (void)pushNavigationItem:(id)item;	// 0x309117c9
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;	// 0x30a9f179
- (void)removeConstraint:(id)constraint;	// 0x30a9fdb1
- (void)setAccessoryView:(id)view animate:(BOOL)animate;	// 0x30a9eb91
- (void)setAutoresizingMask:(unsigned)mask;	// 0x3090fba9
- (void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;	// 0x30972abd
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3097a8e1
- (void)setBounds:(CGRect)bounds;	// 0x309101b1
- (void)setButton:(int)button enabled:(BOOL)enabled;	// 0x30aa15cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3090fbf9
// converted property setter: - (void)setForceFullHeightInLandscape:(BOOL)landscape;	// 0x30971535
- (void)setFrame:(CGRect)frame;	// 0x3090e195
// declared property setter: - (void)setItems:(id)items;	// 0x30948325
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x30948339
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x3090fc75
// converted property setter: - (void)setNavigationItems:(id)items;	// 0x30a9f50d
- (void)setNeedsLayout;	// 0x3090fb65
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x309125ed
- (void)setRightMargin:(float)margin;	// 0x30aa00ed
// declared property setter: - (void)setShadowImage:(id)image;	// 0x30a9e429
// declared property setter: - (void)setTintColor:(id)color;	// 0x3096bae1
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x30aa0125
// declared property setter: - (void)setTitleTextAttributes:(id)attributes;	// 0x30972e9d
- (void)setTitleVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x30972f29
- (void)setTitleView:(id)view;	// 0x30912139
// converted property setter: - (void)setTopItemAlpha:(float)alpha;	// 0x30aa2109
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;	// 0x30a9fcb1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x3097ab69
// declared property getter: - (id)shadowImage;	// 0x30a9e5b9
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;	// 0x30aa1a15
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;	// 0x30aa0759
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;	// 0x30aa0711
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;	// 0x30aa0735
- (void)showHideBackButtomAnimationDidStop:(id)showHideBackButtomAnimation finished:(id)finished context:(void *)context;	// 0x30aa1d19
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x30aa0789
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3090fef9
- (int)state;	// 0x30971585
// declared property getter: - (id)tintColor;	// 0x3094d8e5
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x309120fd
// declared property getter: - (id)titleTextAttributes;	// 0x30a9e3b5
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x30a9e3d9
// declared property getter: - (id)topItem;	// 0x308cfb8d
// converted property getter: - (float)topItemAlpha;	// 0x30aa20e9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x309920e5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30a9fb25
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30992cbd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30a73dc5
- (void)updatePrompt;	// 0x30912515
- (void)willRemoveSubview:(id)subview;	// 0x308da8f1
@end
