/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIPanGestureRecognizer, NSArray, UIPinchGestureRecognizer;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <NSCoding> {
@private
	CGSize _contentSize;	// 48 = 0x30
	UIEdgeInsets _contentInset;	// 56 = 0x38
	id _delegate;	// 72 = 0x48
	UIImageView *_verticalScrollIndicator;	// 76 = 0x4c
	UIImageView *_horizontalScrollIndicator;	// 80 = 0x50
	UIEdgeInsets _scrollIndicatorInset;	// 84 = 0x54
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
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
	} _scrollViewFlags;	// 100 = 0x64
	float _farthestDistance;	// 112 = 0x70
	CGPoint _initialTouchPosition;	// 116 = 0x74
	CGPoint _startTouchPosition;	// 124 = 0x7c
	double _startTouchTime;	// 132 = 0x84
	double _startOffsetX;	// 140 = 0x8c
	double _startOffsetY;	// 148 = 0x94
	double _lastUpdateOffsetX;	// 156 = 0x9c
	double _lastUpdateOffsetY;	// 164 = 0xa4
	CGPoint _lastTouchPosition;	// 172 = 0xac
	double _lastTouchTime;	// 180 = 0xb4
	double _lastUpdateTime;	// 188 = 0xbc
	UIView *_contentView;	// 196 = 0xc4
	float _minimumZoomScale;	// 200 = 0xc8
	float _maximumZoomScale;	// 204 = 0xcc
	UIView *_zoomView;	// 208 = 0xd0
	double _horizontalVelocity;	// 212 = 0xd4
	double _verticalVelocity;	// 220 = 0xdc
	double _previousHorizontalVelocity;	// 228 = 0xe4
	double _previousVerticalVelocity;	// 236 = 0xec
	void *_scrollHeartbeat;	// 244 = 0xf4
	CGPoint _pageDecelerationTarget;	// 248 = 0xf8
	CGSize _decelerationFactor;	// 256 = 0x100
	CGPoint _adjustedDecelerationTarget;	// 264 = 0x108
	CGSize _adjustedDecelerationFactor;	// 272 = 0x110
	double _decelerationLnFactorH;	// 280 = 0x118
	double _decelerationLnFactorV;	// 288 = 0x120
	NSArray *_deferredBeginTouchesInfo;	// 296 = 0x128
	id *_shadows;	// 300 = 0x12c
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
	CADoublePoint _zoomAnchorPoint;	// 388 = 0x184
	id _scrollTestParameters;	// 404 = 0x194
}
@property(assign) BOOL allowsMultipleFingers;	// G=0x3307fb49; S=0x3307fb1d; converted property
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;	// G=0x32ee3cf1; S=0x3303f7dd; 
@property(assign, nonatomic) BOOL alwaysBounceVertical;	// G=0x32ee3e45; S=0x32f6194d; 
@property(assign) CGPoint autoscrollContentOffset;	// G=0x33082c8d; S=0x33082cad; converted property
@property(assign, nonatomic) BOOL bounces;	// G=0x3307f989; S=0x32f7e0d5; 
@property(assign) BOOL bouncesHorizontally;	// G=0x3307f9a5; S=0x33061d75; converted property
@property(assign) BOOL bouncesVertically;	// G=0x3307f9d1; S=0x3307f9b9; converted property
@property(assign, nonatomic) BOOL bouncesZoom;	// G=0x3308167d; S=0x32f61935; 
@property(assign, nonatomic) BOOL canCancelContentTouches;	// G=0x33081691; S=0x330816a5; 
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x32ee3619; S=0x32f2e851; @synthesize=_contentInset
@property(assign, nonatomic) CGPoint contentOffset;	// G=0x32edd8f9; S=0x32ee37d5; 
@property(assign, nonatomic) CGSize contentSize;	// G=0x32f261a5; S=0x32f0d235; @synthesize=_contentSize
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;	// G=0x32f3d8f9; 
@property(assign, nonatomic) float decelerationRate;	// G=0x3307fad5; S=0x32f8a151; 
@property(assign, nonatomic) BOOL delaysContentTouches;	// G=0x32fb942d; S=0x32f60c0d; 
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x32f04571; S=0x32f04581; @synthesize=_delegate
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x3307f741; S=0x32f60bc9; 
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;	// G=0x32f3d911; 
@property(assign) float horizontalScrollDecelerationFactor;	// G=0x3307faf9; S=0x32f60ba5; converted property
@property(assign, nonatomic) int indicatorStyle;	// G=0x3307fae5; S=0x3307fa21; 
@property(readonly, assign, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;	// G=0x33041a7d; 
@property(readonly, assign, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;	// G=0x3304cb19; 
@property(readonly, assign, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;	// G=0x33042efd; 
@property(readonly, assign, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;	// G=0x3307f9e5; 
@property(assign, nonatomic) float maximumZoomScale;	// G=0x3307f6e9; S=0x32f64b09; @synthesize=_maximumZoomScale
@property(assign, nonatomic) float minimumZoomScale;	// G=0x3307f6d9; S=0x32f64acd; 
@property(assign) CGPoint offset;	// G=0x330081e9; S=0x33082045; converted property
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;	// G=0x33043bcd; S=0x32f8a109; 
@property(readonly, assign, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;	// G=0x32f4a659; @synthesize=_pan
@property(readonly, assign, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;	// G=0x33082001; @synthesize=_pinch
@property(assign) BOOL preservesCenterDuringRotation;	// G=0x33080355; S=0x33040f91; converted property
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;	// G=0x3307f79d; S=0x32ff913d; 
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x32fa3f7d; S=0x32f7e361; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x32f62b3d; S=0x32f2ef25; 
@property(retain, nonatomic) id scrollTestParameters;	// G=0x33082011; S=0x33082021; @synthesize=_scrollTestParameters
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x330816bd; S=0x32f2e7d9; 
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;	// G=0x3307f9f9; S=0x32f0d12d; 
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;	// G=0x3307fa0d; S=0x32f0d1b1; 
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x32ee37c1; 
@property(assign) BOOL tracksImmediatelyWhileDecelerating;	// G=0x32fe1ed9; S=0x3307fb79; converted property
@property(assign) BOOL usesGestureRecognizers;	// G=0x32f0105d; S=0x32f01075; converted property
@property(assign) float verticalScrollDecelerationFactor;	// G=0x3307fb09; S=0x32f60bb5; converted property
@property(assign, nonatomic, getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:) CADoublePoint zoomAnchorPoint;	// G=0x32f7f37d; S=0x32f7e779; @synthesize=_zoomAnchorPoint
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;	// G=0x33081f41; 
@property(assign, getter=isZoomEnabled) BOOL zoomEnabled;	// G=0x3307f785; S=0x32f64e05; converted property
@property(assign, nonatomic) float zoomScale;	// G=0x32f62a71; S=0x330410d9; 
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;	// G=0x32f7e4cd; 
+ (float)_cancelSelectDistance;	// 0x330429fd
+ (SEL)_panGestureAction;	// 0x32f01b75
+ (SEL)_pinchGestureAction;	// 0x32f64b45
- (id)initWithCoder:(id)coder;	// 0x3307eb11
- (id)initWithFrame:(CGRect)frame;	// 0x32f00691
- (int)_abuttedEdgesForContentOffset:(CGPoint)contentOffset;	// 0x3307f7b5
- (int)_abuttedPagingEdges;	// 0x3307f915
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x32f09ed9
- (void)_addScrollNotificationView:(id)view;	// 0x32f47f51
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible;	// 0x32f60e25
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible withOffset:(float)offset;	// 0x32f60e5d
- (void)_adjustContentOffsetIfNecessary;	// 0x32ee2ca1
- (void)_adjustContentSizeForView:(id)view atScale:(float)scale;	// 0x32f7f2c1
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x32ffb5b1
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x32f14e71
- (void)_adjustShadowsIfNecessary;	// 0x32ee3b85
- (void)_adjustShadowsIfNecessaryForOffset:(float)offset;	// 0x33082d85
- (id)_backgroundShadowForSlideAnimation;	// 0x33082db9
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x33082831
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x32fb8281
- (BOOL)_canCancelContentTouches:(id)touches;	// 0x32fde98d
- (BOOL)_canScrollX;	// 0x32ee3bb1
- (BOOL)_canScrollY;	// 0x32ee3d05
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x32ffdc09
- (void)_centerContentIfNecessary;	// 0x32f3a929
- (void)_changedGesture:(id)gesture withEvent:(id)event;	// 0x3308211d
- (void)_clearContentOffsetAnimation;	// 0x330506e1
- (double)_contentOffsetAnimationDuration;	// 0x3301a81d
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x33083125
- (int)_currentlyAbuttedContentEdges;	// 0x3307f8c5
- (id)_defaultHitTest:(CGPoint)test withEvent:(id)event;	// 0x32fe38cd
- (void)_deferredBeginTouchesInContentView;	// 0x330831f1
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32ee28ad
- (void)_disableScrollingIfNecessary;	// 0x33189979
- (void)_enableScrollingIfNecessary;	// 0x33189941
- (void)_endGesture:(id)gesture withEvent:(id)event;	// 0x33082411
- (void)_endPanWithEvent:(id)event;	// 0x32fc0ac9
- (void)_forceDelegateScrollViewDidZoom:(BOOL)_forceDelegateScrollView;	// 0x33061431
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32fb8211
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32fbc605
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x330803c9
- (BOOL)_getBouncingDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval lastUpdateOffset:(double)offset3 min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor7 velocity:(double *)velocity;	// 0x32fe1ae9
- (id)_getDelegateZoomView;	// 0x32f3ab01
- (BOOL)_getPagingDecelerationOffset:(CADoublePoint *)offset forTimeInterval:(double)timeInterval;	// 0x33043019
- (void)_getStandardDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor6 velocity:(double *)velocity;	// 0x33038575
- (void)_handleSwipe:(id)swipe;	// 0x330815c5
- (void)_hideScrollIndicators;	// 0x32f29aed
- (id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;	// 0x330827f9
- (double)_horizontalVelocity;	// 0x3300b679
- (BOOL)_ignoreLinkedOnChecks;	// 0x330816d9
- (void)_incrementForScrollTest;	// 0x33083601
// declared property getter: - (BOOL)_isAnimatingScroll;	// 0x33041a7d
// declared property getter: - (BOOL)_isAnimatingZoom;	// 0x3304cb19
- (BOOL)_isAutoscrolling;	// 0x33082c75
// declared property getter: - (BOOL)_isHorizontalBouncing;	// 0x33042efd
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x3307f621
- (BOOL)_isScrollingEnabled;	// 0x3305bfbd
// declared property getter: - (BOOL)_isVerticalBouncing;	// 0x3307f9e5
- (void)_markScrollViewAnimationForKey:(id)key ofView:(id)view;	// 0x3303e851
- (void)_moveContentSubview:(id)subview toBack:(BOOL)back;	// 0x32f57459
- (void)_notifyDidScroll;	// 0x32f14df9
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;	// 0x33050189
- (BOOL)_ownsAnimationForKey:(id)key ofView:(id)view;	// 0x3304cb51
- (CGPoint)_pageDecelerationTarget;	// 0x33083109
- (BOOL)_pagingLeft;	// 0x33041d61
- (BOOL)_pagingRight;	// 0x33041d79
- (id)_panGestureRecognizer;	// 0x33043bbd
- (id)_parentScrollView;	// 0x32fba511
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta;	// 0x3308328d
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x330832fd
- (void)_pinContentOffsetToClosestPageBoundary;	// 0x33082ef5
- (void)_popTrackingRunLoopMode;	// 0x32fe29ed
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3307f129
- (void)_prepareToPageWithHorizontalVelocity:(float)horizontalVelocity verticalVelocity:(float)velocity;	// 0x32fc02d5
- (CGRect)_rectForPageContainingView:(id)pageContainingView;	// 0x33082f75
- (void)_registerForRotation:(BOOL)rotation ofWindow:(id)window;	// 0x33040fe5
- (void)_removeScrollNotificationView:(id)view;	// 0x32fd76f1
- (BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;	// 0x33082741
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x33082611
- (void)_resetScrollingWithUIEvent:(id)uievent;	// 0x32fb89dd
- (CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)offset outsideX:(BOOL *)x outsideY:(BOOL *)y;	// 0x32f7f41d
- (void)_runLoopModePopped:(id)popped;	// 0x33083129
- (float)_scrollHysteresis;	// 0x32fec82d
- (id)_scrollTestExtraResults;	// 0x33083539
- (BOOL)_scrollToTop;	// 0x3305b28d
- (void)_scrollViewAnimationEnded;	// 0x330505f9
- (void)_scrollViewDidEndDecelerating;	// 0x32fe2ac9
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x32fe0731
- (void)_scrollViewDidEndZooming;	// 0x33037fad
- (id)_scrollViewTouchDelayGesture;	// 0x32f7e3f5
- (void)_scrollViewWillBeginDragging;	// 0x32fdffa5
- (void)_scrollViewWillBeginZooming;	// 0x33037cdd
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x32fa3f79
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;	// 0x32ff8b21
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x33082be1
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;	// 0x32f175b1
- (void)_setContentOffset:(CGPoint)offset duration:(double)duration animationCurve:(int)curve;	// 0x33082759
- (void)_setContentOffsetAnimationDuration:(double)duration;	// 0x3301a835
- (void)_setContentOffsetPinned:(CGPoint)pinned;	// 0x33008441
- (void)_setIgnoreLinkedOnChecks:(BOOL)checks;	// 0x32f7e0b9
- (void)_setShowsBackgroundShadow:(BOOL)shadow;	// 0x32f60c25
- (void)_setStaysCenteredDuringPinch:(BOOL)pinch;	// 0x330815a5
// declared property setter: - (void)_setZoomAnchorPoint:(CADoublePoint)point;	// 0x32f7e779
- (float)_shadowHeightOffset;	// 0x32f60e59
- (void)_shiftOffset:(CGSize)offset;	// 0x33082b1d
- (BOOL)_showsBackgroundShadow;	// 0x32f7c931
- (void)_skipNextStartOffsetAdjustment;	// 0x3305059d
- (void)_smoothScroll:(id)scroll;	// 0x32fe0ae9
- (void)_startGesture:(id)gesture withEvent:(id)event;	// 0x33082065
- (void)_startTimer:(BOOL)timer;	// 0x32fe07f5
- (BOOL)_staysCenteredDuringPinch;	// 0x33037c5d
- (void)_stopScrollDecelerationNotify:(BOOL)notify;	// 0x32fe2675
- (void)_stopScrollingAndZoomingAnimations;	// 0x3304c8d9
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)contentViewport;	// 0x3304c8ed
- (void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;	// 0x32ee2b99
- (void)_systemGestureStateChanged:(id)changed;	// 0x32fdc061
- (double)_touchDelayForScrollDetection;	// 0x32fb9441
- (CGPoint)_touchPositionForTouches:(id)touches;	// 0x33012575
- (id)_touchedContentView;	// 0x32fe5d81
- (void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;	// 0x32fe5dd1
- (void)_updatePagingGesture;	// 0x32f02009
- (void)_updatePanGesture;	// 0x32fdf385
- (void)_updatePinchGesture;	// 0x32f01e71
- (void)_updatePinchGestureForState:(int)state;	// 0x33037139
- (BOOL)_updateTouchPanWithStartDelta:(CGSize)startDelta event:(id)event ignoringDirectionalScroll:(BOOL)scroll;	// 0x33080449
- (BOOL)_usesDifferentHitTestForGestures;	// 0x33012391
- (double)_verticalVelocity;	// 0x3300b661
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x3307f6f9
- (void)_willMoveToWindow:(id)window;	// 0x32ee2831
// declared property getter: - (CADoublePoint)_zoomAnchorPoint;	// 0x32f7f37d
- (void)_zoomAnimationDidStop;	// 0x3303e8b5
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x330817f5
- (float)_zoomRubberBandScaleForScale:(float)scale;	// 0x330816ed
- (float)_zoomScaleForRubberBandScale:(float)rubberBandScale;	// 0x3308176d
- (float)_zoomScaleFromPresentationLayer:(BOOL)presentationLayer;	// 0x32f62a85
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration;	// 0x3303e61d
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration force:(BOOL)force;	// 0x3303e655
// converted property getter: - (BOOL)allowsMultipleFingers;	// 0x3307fb49
// declared property getter: - (BOOL)alwaysBounceHorizontal;	// 0x32ee3cf1
// declared property getter: - (BOOL)alwaysBounceVertical;	// 0x32ee3e45
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x33082c8d
// declared property getter: - (BOOL)bounces;	// 0x3307f989
// converted property getter: - (BOOL)bouncesHorizontally;	// 0x3307f9a5
// converted property getter: - (BOOL)bouncesVertically;	// 0x3307f9d1
// declared property getter: - (BOOL)bouncesZoom;	// 0x3308167d
// declared property getter: - (BOOL)canCancelContentTouches;	// 0x33081691
- (BOOL)canHandleSwipes;	// 0x32f3f645
- (BOOL)cancelMouseTracking;	// 0x33029d35
- (void)cancelNextContentTouchEnded;	// 0x33081665
- (BOOL)cancelTouchTracking;	// 0x32ffd955
- (id)commonHitTest:(id)test;	// 0x32fb7f95
- (CGRect)contentFrameForView:(id)view;	// 0x33082cbd
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x32ee3619
// declared property getter: - (CGPoint)contentOffset;	// 0x32edd8f9
// declared property getter: - (CGSize)contentSize;	// 0x32f261a5
- (void)dealloc;	// 0x32ff75f5
// declared property getter: - (float)decelerationRate;	// 0x3307fad5
- (void)delayed:(id)delayed;	// 0x3307fba1
// declared property getter: - (BOOL)delaysContentTouches;	// 0x32fb942d
// declared property getter: - (id)delegate;	// 0x32f04571
- (id)description;	// 0x33081f55
- (void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;	// 0x33082579
- (void)encodeWithCoder:(id)coder;	// 0x3307f1fd
- (void)flashScrollIndicators;	// 0x32f29979
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x32fd68dd
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32fb827d
- (void)gestureRecognizerFailed:(id)failed;	// 0x32fc013d
- (void)handlePan:(id)pan;	// 0x32fdf259
- (void)handlePinch:(id)pinch;	// 0x33037109
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3308037d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32fb7aed
// converted property getter: - (float)horizontalScrollDecelerationFactor;	// 0x3307faf9
// declared property getter: - (int)indicatorStyle;	// 0x3307fae5
// declared property getter: - (BOOL)isDecelerating;	// 0x32f3d8f9
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x3307f741
// declared property getter: - (BOOL)isDragging;	// 0x32f3d911
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3314962d
// declared property getter: - (BOOL)isPagingEnabled;	// 0x33043bcd
// declared property getter: - (BOOL)isProgrammaticScrollEnabled;	// 0x3307f79d
// declared property getter: - (BOOL)isScrollEnabled;	// 0x32fa3f7d
// declared property getter: - (BOOL)isTracking;	// 0x32ee37c1
// declared property getter: - (BOOL)isZoomBouncing;	// 0x33081f41
// converted property getter: - (BOOL)isZoomEnabled;	// 0x3307f785
// declared property getter: - (BOOL)isZooming;	// 0x32f7e4cd
- (void)layoutSubviews;	// 0x32f3a8e9
- (float)maxVelocityInDirection:(int)direction;	// 0x33198065
// declared property getter: - (float)maximumZoomScale;	// 0x3307f6e9
// declared property getter: - (float)minimumZoomScale;	// 0x3307f6d9
// converted property getter: - (CGPoint)offset;	// 0x330081e9
// declared property getter: - (id)panGestureRecognizer;	// 0x32f4a659
// declared property getter: - (id)pinchGestureRecognizer;	// 0x33082001
// converted property getter: - (BOOL)preservesCenterDuringRotation;	// 0x33080355
- (void)removeFromSuperview;	// 0x32ff6aed
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x32f62b3d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x32fb5499
// declared property getter: - (id)scrollTestParameters;	// 0x33082011
- (int)scrollableDirections;	// 0x33197f89
// declared property getter: - (BOOL)scrollsToTop;	// 0x330816bd
// converted property setter: - (void)setAllowsMultipleFingers:(BOOL)fingers;	// 0x3307fb1d
// declared property setter: - (void)setAlwaysBounceHorizontal:(BOOL)horizontal;	// 0x3303f7dd
// declared property setter: - (void)setAlwaysBounceVertical:(BOOL)vertical;	// 0x32f6194d
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x33082cad
// declared property setter: - (void)setBounces:(BOOL)bounces;	// 0x32f7e0d5
// converted property setter: - (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x33061d75
// converted property setter: - (void)setBouncesVertically:(BOOL)vertically;	// 0x3307f9b9
// declared property setter: - (void)setBouncesZoom:(BOOL)zoom;	// 0x32f61935
- (void)setBounds:(CGRect)bounds;	// 0x32f13af1
// declared property setter: - (void)setCanCancelContentTouches:(BOOL)touches;	// 0x330816a5
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x32f2e851
// declared property setter: - (void)setContentOffset:(CGPoint)offset;	// 0x32ee37d5
- (void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x32f1758d
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x32f0d235
// declared property setter: - (void)setDecelerationRate:(float)rate;	// 0x32f8a151
// declared property setter: - (void)setDelaysContentTouches:(BOOL)touches;	// 0x32f60c0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f04581
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x32f60bc9
- (void)setFrame:(CGRect)frame;	// 0x32f009d9
// converted property setter: - (void)setHorizontalScrollDecelerationFactor:(float)factor;	// 0x32f60ba5
// declared property setter: - (void)setIndicatorStyle:(int)style;	// 0x3307fa21
// declared property setter: - (void)setMaximumZoomScale:(float)scale;	// 0x32f64b09
// declared property setter: - (void)setMinimumZoomScale:(float)scale;	// 0x32f64acd
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x33082045
// declared property setter: - (void)setPagingEnabled:(BOOL)enabled;	// 0x32f8a109
// converted property setter: - (void)setPreservesCenterDuringRotation:(BOOL)rotation;	// 0x33040f91
// declared property setter: - (void)setProgrammaticScrollEnabled:(BOOL)enabled;	// 0x32ff913d
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x32f7e361
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x32f2ef25
// declared property setter: - (void)setScrollTestParameters:(id)parameters;	// 0x33082021
- (void)setScrollViewOffsetPinned:(CGPoint)pinned;	// 0x3325b0f1
- (void)setScrollingEnabled:(BOOL)enabled;	// 0x33082055
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x32f2e7d9
- (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x3308036d
// declared property setter: - (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x32f0d12d
// declared property setter: - (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x32f0d1b1
// converted property setter: - (void)setTracksImmediatelyWhileDecelerating:(BOOL)decelerating;	// 0x3307fb79
// converted property setter: - (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x32f01075
// converted property setter: - (void)setVerticalScrollDecelerationFactor:(float)factor;	// 0x32f60bb5
// converted property setter: - (void)setZoomEnabled:(BOOL)enabled;	// 0x32f64e05
// declared property setter: - (void)setZoomScale:(float)scale;	// 0x330410d9
- (void)setZoomScale:(float)scale animated:(BOOL)animated;	// 0x32f7e4e5
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate;	// 0x32f7e861
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate force:(BOOL)force;	// 0x32f7e8b1
// declared property getter: - (BOOL)showsHorizontalScrollIndicator;	// 0x3307f9f9
// declared property getter: - (BOOL)showsVerticalScrollIndicator;	// 0x3307fa0d
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x33081619
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fe53f1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3300fa69
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fe5dad
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33038121
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x32fbbcdd
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x33022ca1
// converted property getter: - (BOOL)tracksImmediatelyWhileDecelerating;	// 0x32fe1ed9
// converted property getter: - (BOOL)usesGestureRecognizers;	// 0x32f0105d
// converted property getter: - (float)verticalScrollDecelerationFactor;	// 0x3307fb09
- (void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;	// 0x33080015
- (void)willRotateToInterfaceOrientation:(id)interfaceOrientation;	// 0x3307fba5
// declared property getter: - (float)zoomScale;	// 0x32f62a71
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;	// 0x33081895
@end
