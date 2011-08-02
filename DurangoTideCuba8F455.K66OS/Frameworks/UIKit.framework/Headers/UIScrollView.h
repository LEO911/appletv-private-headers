/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <NSCoding> {
@private
	CGSize _contentSize;	// 44 = 0x2c
	UIEdgeInsets _contentInset;	// 52 = 0x34
	id _delegate;	// 68 = 0x44
	UIImageView *_verticalScrollIndicator;	// 72 = 0x48
	UIImageView *_horizontalScrollIndicator;	// 76 = 0x4c
	UIEdgeInsets _scrollIndicatorInset;	// 80 = 0x50
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned scrollDisabledOnTouchBegan : 1;
		unsigned ignoreNextTouchesMoved : 1;
		unsigned cancelNextContentTouchEnded : 1;
		unsigned inContentViewCall : 1;
		unsigned dontSelect : 1;
		unsigned contentTouched : 1;
		unsigned cantCancel : 1;
		unsigned directionalLockEnabled : 1;
		unsigned directionalLockAutoEnabled : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned multipleDrag : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned useGestureRecognizers : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned skipLinkChecks : 1;
		unsigned wasIgnoringTapsInDimmingView : 1;
		unsigned isAnimatingScroll : 1;
		unsigned isAnimatingZoom : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
	} _scrollViewFlags;	// 96 = 0x60
	float _farthestDistance;	// 108 = 0x6c
	CGPoint _initialTouchPosition;	// 112 = 0x70
	CGPoint _startTouchPosition;	// 120 = 0x78
	double _startTouchTime;	// 128 = 0x80
	double _startOffsetX;	// 136 = 0x88
	double _startOffsetY;	// 144 = 0x90
	double _lastUpdateOffsetX;	// 152 = 0x98
	double _lastUpdateOffsetY;	// 160 = 0xa0
	CGPoint _lastTouchPosition;	// 168 = 0xa8
	double _lastTouchTime;	// 176 = 0xb0
	double _lastUpdateTime;	// 184 = 0xb8
	CGPoint _zoomAnchorPoint;	// 192 = 0xc0
	UIView *_contentView;	// 200 = 0xc8
	float _minimumZoomScale;	// 204 = 0xcc
	float _maximumZoomScale;	// 208 = 0xd0
	int _zoomRubberBandHysteresisCount;	// 212 = 0xd4
	UIView *_zoomView;	// 216 = 0xd8
	double _horizontalVelocity;	// 220 = 0xdc
	double _verticalVelocity;	// 228 = 0xe4
	double _previousHorizontalVelocity;	// 236 = 0xec
	double _previousVerticalVelocity;	// 244 = 0xf4
	CGPoint _stopOffset;	// 252 = 0xfc
	void *_scrollHeartbeat;	// 260 = 0x104
	CGPoint _pageDecelerationTarget;	// 264 = 0x108
	CGSize _decelerationFactor;	// 272 = 0x110
	double _decelerationLnFactorH;	// 280 = 0x118
	double _decelerationLnFactorV;	// 288 = 0x120
	NSArray *_deferredBeginTouchesInfo;	// 296 = 0x128
	UIImageView **_shadows;	// 300 = 0x12c
	id _scrollNotificationViews;	// 304 = 0x130
	double _contentOffsetAnimationDuration;	// 308 = 0x134
	id _animation;	// 316 = 0x13c
	id _pinch;	// 320 = 0x140
	id _pan;	// 324 = 0x144
	id _swipe;	// 328 = 0x148
	float _pagingSpringPull;	// 332 = 0x14c
	float _pagingFriction;	// 336 = 0x150
	int _fastScrollCount;	// 340 = 0x154
	float _fastScrollMultiplier;	// 344 = 0x158
	float _fastScrollStartMultiplier;	// 348 = 0x15c
	double _fastScrollEndTime;	// 352 = 0x160
	CGPoint _parentAdjustment;	// 360 = 0x168
	CGPoint _rotationCenterPoint;	// 368 = 0x170
	float _accuracy;	// 376 = 0x178
	float _hysteresis;	// 380 = 0x17c
	unsigned _zoomAnimationCount;	// 384 = 0x180
}
@property(assign) BOOL allowsMultipleFingers;	// G=0x301df04d; S=0x301df079; converted property
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;	// G=0x300c48e9; S=0x301df14d; 
@property(assign, nonatomic) BOOL alwaysBounceVertical;	// G=0x300c4a31; S=0x300fa755; 
@property(assign) CGPoint autoscrollContentOffset;	// G=0x301dfcfd; S=0x301dea11; converted property
@property(assign, nonatomic) BOOL bounces;	// G=0x301de39d; S=0x30113b91; 
@property(assign) BOOL bouncesHorizontally;	// G=0x301de3d5; S=0x301de3b9; converted property
@property(assign) BOOL bouncesVertically;	// G=0x301de405; S=0x301de3e9; converted property
@property(assign, nonatomic) BOOL bouncesZoom;	// G=0x301de565; S=0x300fa739; 
@property(assign, nonatomic) BOOL canCancelContentTouches;	// G=0x301de579; S=0x301de591; 
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x300c44e1; S=0x30102125; @synthesize=_contentInset
@property(assign, nonatomic) CGPoint contentOffset;	// G=0x3009920d; S=0x300c4531; 
@property(assign, nonatomic) CGSize contentSize;	// G=0x300d2699; S=0x300c9aa1; @synthesize=_contentSize
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;	// G=0x301186c9; 
@property(assign, nonatomic) float decelerationRate;	// G=0x301de471; S=0x301de481; 
@property(assign, nonatomic) BOOL delaysContentTouches;	// G=0x30118c95; S=0x300f9975; 
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x300c714d; S=0x300c715d; @synthesize=_delegate
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x301df1c1; S=0x300f9925; 
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;	// G=0x3011786d; 
@property(assign) float horizontalScrollDecelerationFactor;	// G=0x301de4d5; S=0x300f9905; converted property
@property(assign, nonatomic) int indicatorStyle;	// G=0x301de4c1; S=0x301df0a5; 
@property(readonly, assign, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;	// G=0x301de729; 
@property(readonly, assign, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;	// G=0x301de6f5; 
@property(readonly, assign, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;	// G=0x301de42d; 
@property(readonly, assign, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;	// G=0x301de419; 
@property(assign, nonatomic) float maximumZoomScale;	// G=0x301de341; S=0x300ffb69; @synthesize=_maximumZoomScale
@property(assign, nonatomic) float minimumZoomScale;	// G=0x301de331; S=0x300ffb35; 
@property(assign) CGPoint offset;	// G=0x3017555d; S=0x301dee09; converted property
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;	// G=0x301de389; S=0x301df17d; 
@property(assign) BOOL preservesCenterDuringRotation;	// G=0x301de51d; S=0x301def01; converted property
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;	// G=0x301de36d; S=0x301763d1; 
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x301763b5; S=0x30113c0d; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x300fba55; S=0x300fba71; 
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x301de5ad; S=0x300fa6c1; 
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;	// G=0x301de441; S=0x300c99a9; 
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;	// G=0x301de459; S=0x300c9a25; 
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x300c451d; 
@property(assign) BOOL tracksImmediatelyWhileDecelerating;	// G=0x30120b05; S=0x301de4f5; converted property
@property(assign) BOOL usesGestureRecognizers;	// G=0x300c4e91; S=0x300c4ea9; converted property
@property(assign) float verticalScrollDecelerationFactor;	// G=0x301de4e5; S=0x300f9915; converted property
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;	// G=0x301de6e5; 
@property(assign, getter=isZoomEnabled) BOOL zoomEnabled;	// G=0x301de351; S=0x300ffc2d; converted property
@property(assign, nonatomic) float zoomScale;	// G=0x300fb879; S=0x301dee1d; 
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;	// G=0x30113d79; 
+ (float)_cancelSelectDistance;	// 0x30143a89
- (id)initWithCoder:(id)coder;	// 0x301e0115
- (id)initWithFrame:(CGRect)frame;	// 0x300c3541
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x300d0ae9
- (void)_addScrollNotificationView:(id)view;	// 0x300ff9b9
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible;	// 0x300f9b9d
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible withOffset:(float)offset;	// 0x300f9bd1
- (void)_adjustContentOffsetIfNecessary;	// 0x300c3a79
- (void)_adjustContentSizeForView:(id)view atScale:(float)scale;	// 0x3011495d
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x3015b5ed
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x300cba59
- (void)_adjustShadowsIfNecessary;	// 0x300c4791
- (void)_adjustShadowsIfNecessaryForOffset:(float)offset;	// 0x301de9e9
- (id)_backgroundShadowForSlideAnimation;	// 0x301e0bc9
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x301e0831
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x30117881
- (BOOL)_canCancelContentTouches:(id)touches;	// 0x3011b31d
- (BOOL)_canScrollX;	// 0x300c47b5
- (BOOL)_canScrollY;	// 0x300c48fd
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x30199d1d
- (void)_cancelPendingAnimations;	// 0x301de7ed
- (void)_centerContentIfNecessary;	// 0x30100721
- (void)_changedGesture:(id)gesture withEvent:(id)event;	// 0x301e0ce1
- (void)_clearContentOffsetAnimation;	// 0x301c38cd
- (double)_contentOffsetAnimationDuration;	// 0x3019afad
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x301de7d1
- (id)_defaultHitTest:(CGPoint)test withEvent:(id)event;	// 0x3012cc45
- (void)_deferredBeginTouchesInContentView;	// 0x301de851
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x300ceb3d
- (void)_disableScrollingIfNecessary;	// 0x302c9989
- (void)_enableScrollingIfNecessary;	// 0x302c99b5
- (void)_endGesture:(id)gesture withEvent:(id)event;	// 0x301debf5
- (void)_endPanWithEvent:(id)event;	// 0x3011d98d
- (void)_forceDelegateScrollViewDidZoom:(BOOL)_forceDelegateScrollView;	// 0x301de70d
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x30117709
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3011bda1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x301dfd49
- (BOOL)_getBouncingDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval lastUpdateOffset:(double)offset3 min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor7 velocity:(double *)velocity;	// 0x3011f5c5
- (id)_getDelegateZoomView;	// 0x300fb925
- (BOOL)_getPagingDecelerationOffset:(CADoublePoint *)offset forTimeInterval:(double)timeInterval;	// 0x301df339
- (void)_getStandardDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor6 velocity:(double *)velocity;	// 0x301e11ed
- (void)_handleSwipe:(id)swipe;	// 0x301dee8d
- (void)_hideScrollIndicators;	// 0x300cd4b5
- (id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;	// 0x301df205
- (double)_horizontalVelocity;	// 0x30183aa9
- (BOOL)_ignoreLinkedOnChecks;	// 0x301de5c5
- (BOOL)_isAnimatingContentOffset;	// 0x301de7a5
// declared property getter: - (BOOL)_isAnimatingScroll;	// 0x301de729
// declared property getter: - (BOOL)_isAnimatingZoom;	// 0x301de6f5
- (BOOL)_isAutoscrolling;	// 0x301de78d
// declared property getter: - (BOOL)_isHorizontalBouncing;	// 0x301de42d
- (BOOL)_isIgnoringPopoverDimmingViewTaps;	// 0x3011c23d
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x301bd099
- (BOOL)_isScrollingEnabled;	// 0x301bcf95
// declared property getter: - (BOOL)_isVerticalBouncing;	// 0x301de419
- (void)_moveContentSubview:(id)subview toBack:(BOOL)back;	// 0x300efead
- (void)_notifyDidScroll;	// 0x300f1759
- (void)_notifyPopOverIsScrolling:(BOOL)scrolling;	// 0x3011c139
- (void)_notifyPopOverStoppedScrolling;	// 0x3011ff0d
- (void)_notifyPopOverStoppedScrollingLater;	// 0x3011fb59
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;	// 0x301c3555
- (CGPoint)_pageDecelerationTarget;	// 0x301de7b9
- (BOOL)_pagingLeft;	// 0x301de75d
- (BOOL)_pagingRight;	// 0x301de775
- (id)_panGesture;	// 0x3011599d
- (id)_parentScrollView;	// 0x301186dd
- (id)_pinchGesture;	// 0x301de321
- (void)_popTrackingRunLoopMode;	// 0x3011fa49
- (id)_popoverSuperview;	// 0x3011c265
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301df279
- (void)_prepareToPageWithHorizontalVelocity:(float)horizontalVelocity verticalVelocity:(float)velocity;	// 0x3011d29d
- (void)_registerForRotation:(BOOL)rotation ofWindow:(id)window;	// 0x301def55
- (void)_removeScrollNotificationView:(id)view;	// 0x30176759
- (BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;	// 0x301deb45
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x301e10a5
- (void)_resetScrollingWithUIEvent:(id)uievent;	// 0x30118075
- (CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)offset outsideX:(BOOL *)x outsideY:(BOOL *)y;	// 0x30114a65
- (void)_runLoopModePopped:(id)popped;	// 0x301de8e5
- (float)_scrollHysteresis;	// 0x301c3a3d
- (BOOL)_scrollToTop;	// 0x301e17a1
- (void)_scrollViewAnimationEnded;	// 0x301c37bd
- (void)_scrollViewDidEndDecelerating;	// 0x3011fb0d
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3011e3a9
- (void)_scrollViewDidEndZooming;	// 0x301cbb81
- (id)_scrollViewTouchDelayGesture;	// 0x30113c95
- (void)_scrollViewWillBeginDragging;	// 0x3011c069
- (void)_scrollViewWillBeginZooming;	// 0x301cb851
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x301de741
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;	// 0x30175f79
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x301dea25
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;	// 0x300cafe5
- (void)_setContentOffset:(CGPoint)offset duration:(double)duration animationCurve:(int)curve;	// 0x301deab5
- (void)_setContentOffsetAnimationDuration:(double)duration;	// 0x3019afbd
- (void)_setContentOffsetPinned:(CGPoint)pinned;	// 0x30181679
- (void)_setIgnoreLinkedOnChecks:(BOOL)checks;	// 0x30113b75
- (void)_setIgnorePopoverDimmingViewTaps:(BOOL)taps;	// 0x3011c2c9
- (void)_setShowsBackgroundShadow:(BOOL)shadow;	// 0x300f9991
- (void)_setStaysCenteredDuringPinch:(BOOL)pinch;	// 0x301de531
- (void)_setZoomAnchorPoint:(CADoublePoint)point;	// 0x30114031
- (float)_shadowHeightOffset;	// 0x300f9bcd
- (void)_shiftOffset:(CGSize)offset;	// 0x301e16e1
- (BOOL)_showsBackgroundShadow;	// 0x301ae1c1
- (void)_skipNextStartOffsetAdjustment;	// 0x301c3781
- (void)_smoothScroll:(double)scroll;	// 0x3011eae9
- (void)_startGesture:(id)gesture withEvent:(id)event;	// 0x301ded4d
- (void)_startTimer:(BOOL)timer;	// 0x3011e625
- (BOOL)_staysCenteredDuringPinch;	// 0x301cb7d9
- (CGPoint)_stopOffset;	// 0x301de745
- (void)_stopScrollDecelerationNotify:(BOOL)notify;	// 0x3011f915
- (void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;	// 0x300f7b05
- (void)_systemGestureStateChanged:(id)changed;	// 0x301e0b05
- (double)_touchDelayForScrollDetection;	// 0x30118cad
- (CGPoint)_touchPositionForTouches:(id)touches;	// 0x3014da2d
- (id)_touchedContentView;	// 0x3012e9c5
- (void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;	// 0x3012ea11
- (void)_updatePagingGesture;	// 0x300c5dc9
- (void)_updatePanGesture;	// 0x301e3c5d
- (void)_updatePinchGesture;	// 0x300c5c59
- (void)_updatePinchGestureForState:(int)state;	// 0x301e338d
- (BOOL)_updateTouchPanWithStartDelta:(CGSize)startDelta event:(id)event ignoringDirectionalScroll:(BOOL)scroll;	// 0x301e1a2d
- (BOOL)_usesDifferentHitTestForGestures;	// 0x3014da11
- (double)_verticalVelocity;	// 0x30183a99
- (void)_willMoveToWindow:(id)window;	// 0x300ceac9
- (CADoublePoint)_zoomAnchorPoint;	// 0x301149dd
- (void)_zoomAnimationDidStop;	// 0x301cc369
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x301e0f75
- (float)_zoomRubberBandScaleForScale:(float)scale;	// 0x301de5d9
- (float)_zoomScaleForRubberBandScale:(float)rubberBandScale;	// 0x301de659
- (float)_zoomScaleFromPresentationLayer:(BOOL)presentationLayer;	// 0x300fb891
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration;	// 0x301cc135
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration force:(BOOL)force;	// 0x301cc169
// converted property getter: - (BOOL)allowsMultipleFingers;	// 0x301df04d
// declared property getter: - (BOOL)alwaysBounceHorizontal;	// 0x300c48e9
// declared property getter: - (BOOL)alwaysBounceVertical;	// 0x300c4a31
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x301dfcfd
// declared property getter: - (BOOL)bounces;	// 0x301de39d
// converted property getter: - (BOOL)bouncesHorizontally;	// 0x301de3d5
// converted property getter: - (BOOL)bouncesVertically;	// 0x301de405
// declared property getter: - (BOOL)bouncesZoom;	// 0x301de565
// declared property getter: - (BOOL)canCancelContentTouches;	// 0x301de579
- (BOOL)canHandleSwipes;	// 0x300fa785
- (BOOL)cancelMouseTracking;	// 0x301dee35
- (void)cancelNextContentTouchEnded;	// 0x301de54d
- (BOOL)cancelTouchTracking;	// 0x3017d2b9
- (id)commonHitTest:(id)test;	// 0x30117421
- (CGRect)contentFrameForView:(id)view;	// 0x301dfc5d
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x300c44e1
// declared property getter: - (CGPoint)contentOffset;	// 0x3009920d
// declared property getter: - (CGSize)contentSize;	// 0x300d2699
- (void)dealloc;	// 0x301e06e9
// declared property getter: - (float)decelerationRate;	// 0x301de471
- (void)delayed:(id)delayed;	// 0x301de519
// declared property getter: - (BOOL)delaysContentTouches;	// 0x30118c95
// declared property getter: - (id)delegate;	// 0x300c714d
- (id)description;	// 0x301e1009
- (void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;	// 0x301deb5d
- (void)encodeWithCoder:(id)coder;	// 0x301e12d1
- (void)flashScrollIndicators;	// 0x300cb8dd
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x3011be8d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x30117771
- (void)gestureRecognizerFailed:(id)failed;	// 0x3011c909
- (void)handlePan:(id)pan;	// 0x3011bf51
- (void)handlePinch:(id)pinch;	// 0x301cb7ad
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x301df235
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301173dd
// converted property getter: - (float)horizontalScrollDecelerationFactor;	// 0x301de4d5
// declared property getter: - (int)indicatorStyle;	// 0x301de4c1
// declared property getter: - (BOOL)isDecelerating;	// 0x301186c9
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x301df1c1
// declared property getter: - (BOOL)isDragging;	// 0x3011786d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f3e1
// declared property getter: - (BOOL)isPagingEnabled;	// 0x301de389
// declared property getter: - (BOOL)isProgrammaticScrollEnabled;	// 0x301de36d
// declared property getter: - (BOOL)isScrollEnabled;	// 0x301763b5
// declared property getter: - (BOOL)isTracking;	// 0x300c451d
// declared property getter: - (BOOL)isZoomBouncing;	// 0x301de6e5
// converted property getter: - (BOOL)isZoomEnabled;	// 0x301de351
// declared property getter: - (BOOL)isZooming;	// 0x30113d79
- (void)layoutSubviews;	// 0x301006e5
- (float)maxVelocityInDirection:(int)direction;	// 0x302d6531
// declared property getter: - (float)maximumZoomScale;	// 0x301de341
// declared property getter: - (float)minimumZoomScale;	// 0x301de331
// converted property getter: - (CGPoint)offset;	// 0x3017555d
// converted property getter: - (BOOL)preservesCenterDuringRotation;	// 0x301de51d
- (void)removeFromSuperview;	// 0x3012069d
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x300fba55
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x30173d41
- (int)scrollableDirections;	// 0x302d5f3d
// declared property getter: - (BOOL)scrollsToTop;	// 0x301de5ad
// converted property setter: - (void)setAllowsMultipleFingers:(BOOL)fingers;	// 0x301df079
// declared property setter: - (void)setAlwaysBounceHorizontal:(BOOL)horizontal;	// 0x301df14d
// declared property setter: - (void)setAlwaysBounceVertical:(BOOL)vertical;	// 0x300fa755
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x301dea11
// declared property setter: - (void)setBounces:(BOOL)bounces;	// 0x30113b91
// converted property setter: - (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x301de3b9
// converted property setter: - (void)setBouncesVertically:(BOOL)vertically;	// 0x301de3e9
// declared property setter: - (void)setBouncesZoom:(BOOL)zoom;	// 0x300fa739
- (void)setBounds:(CGRect)bounds;	// 0x300f049d
// declared property setter: - (void)setCanCancelContentTouches:(BOOL)touches;	// 0x301de591
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x30102125
// declared property setter: - (void)setContentOffset:(CGPoint)offset;	// 0x300c4531
- (void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x300cafb9
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x300c9aa1
// declared property setter: - (void)setDecelerationRate:(float)rate;	// 0x301de481
// declared property setter: - (void)setDelaysContentTouches:(BOOL)touches;	// 0x300f9975
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300c715d
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x300f9925
- (void)setFrame:(CGRect)frame;	// 0x300c3859
// converted property setter: - (void)setHorizontalScrollDecelerationFactor:(float)factor;	// 0x300f9905
// declared property setter: - (void)setIndicatorStyle:(int)style;	// 0x301df0a5
// declared property setter: - (void)setMaximumZoomScale:(float)scale;	// 0x300ffb69
// declared property setter: - (void)setMinimumZoomScale:(float)scale;	// 0x300ffb35
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x301dee09
// declared property setter: - (void)setPagingEnabled:(BOOL)enabled;	// 0x301df17d
// converted property setter: - (void)setPreservesCenterDuringRotation:(BOOL)rotation;	// 0x301def01
// declared property setter: - (void)setProgrammaticScrollEnabled:(BOOL)enabled;	// 0x301763d1
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x30113c0d
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x300fba71
- (void)setScrollingEnabled:(BOOL)enabled;	// 0x301dedf1
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x300fa6c1
- (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x301deee9
// declared property setter: - (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x300c99a9
// declared property setter: - (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x300c9a25
// converted property setter: - (void)setTracksImmediatelyWhileDecelerating:(BOOL)decelerating;	// 0x301de4f5
// converted property setter: - (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x300c4ea9
// converted property setter: - (void)setVerticalScrollDecelerationFactor:(float)factor;	// 0x300f9915
// converted property setter: - (void)setZoomEnabled:(BOOL)enabled;	// 0x300ffc2d
// declared property setter: - (void)setZoomScale:(float)scale;	// 0x301dee1d
- (void)setZoomScale:(float)scale animated:(BOOL)animated;	// 0x30113d8d
- (void)setZoomScale:(float)scale withAnchorPoint:(CGPoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate;	// 0x30114125
- (void)setZoomScale:(float)scale withAnchorPoint:(CGPoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate force:(BOOL)force;	// 0x30114189
// declared property getter: - (BOOL)showsHorizontalScrollIndicator;	// 0x301de441
// declared property getter: - (BOOL)showsVerticalScrollIndicator;	// 0x301de459
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x301dee4d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3012e169
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30176ab5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3012e9ed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301cbcf1
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x3012c3d1
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x301cb731
// converted property getter: - (BOOL)tracksImmediatelyWhileDecelerating;	// 0x30120b05
// converted property getter: - (BOOL)usesGestureRecognizers;	// 0x300c4e91
// converted property getter: - (float)verticalScrollDecelerationFactor;	// 0x301de4e5
- (void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;	// 0x301e2a35
- (void)willRotateToInterfaceOrientation:(id)interfaceOrientation;	// 0x301dfdc9
// declared property getter: - (float)zoomScale;	// 0x300fb879
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;	// 0x301e2d4d
@end
