/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"
#import "UIAppearance.h"
#import "UIAppearanceContainer.h"
#import "UITextEffectsOrdering.h"

@class CALayer, NSMutableArray, NSString, UIViewController, NSArray;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding, UIAppearance, UIAppearanceContainer> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	NSString *_backgroundColorSystemColorName;	// 36 = 0x24
	struct {
		unsigned userInteractionDisabled : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsDidScroll : 1;
		unsigned implementsMouseTracking : 1;
		unsigned hasBackgroundColor : 1;
		unsigned isOpaque : 1;
		unsigned becomeFirstResponderWhenCapable : 1;
		unsigned interceptMouseEvent : 1;
		unsigned deallocating : 1;
		unsigned debugFlash : 1;
		unsigned debugSkippedSetNeedsDisplay : 1;
		unsigned debugScheduledDisplayIsRequired : 1;
		unsigned isInAWindow : 1;
		unsigned isAncestorOfFirstResponder : 1;
		unsigned dontAutoresizeSubviews : 1;
		unsigned autoresizeMask : 6;
		unsigned patternBackground : 1;
		unsigned fixedBackgroundPattern : 1;
		unsigned dontAnimate : 1;
		unsigned superLayerIsView : 1;
		unsigned layerKitPatternDrawing : 1;
		unsigned multipleTouchEnabled : 1;
		unsigned exclusiveTouch : 1;
		unsigned hasViewController : 1;
		unsigned needsDidAppearOrDisappear : 1;
		unsigned gesturesEnabled : 1;
		unsigned deliversTouchesForGesturesToSuperview : 1;
		unsigned chargeEnabled : 1;
		unsigned skipsSubviewEnumeration : 1;
		unsigned needsDisplayOnBoundsChange : 1;
		unsigned hasTiledLayer : 1;
		unsigned hasLargeContent : 1;
		unsigned isInAnimatedVCTransition : 1;
		unsigned traversalMark : 1;
		unsigned appearanceIsInvalid : 1;
		unsigned monitorsSubtree : 1;
	} _viewFlags;	// 40 = 0x28
}
@property(assign) float alpha;	// G=0x35678551; S=0x35675719; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x35833ac1; S=0x356f9371; converted property
@property(assign) unsigned autoresizingMask;	// G=0x356b600d; S=0x3569a131; converted property
@property(retain) id backgroundColor;	// G=0x356bcf61; S=0x356bc789; converted property
@property(retain, nonatomic, getter=_backgroundColorSystemColorName, setter=_setBackgroundColorSystemColorName:) NSString *backgroundColorSystemColorName;	// G=0x356bd041; S=0x356bce25; 
@property(assign) CGRect bounds;	// G=0x356751fd; S=0x356af911; converted property
@property(readonly, assign, nonatomic, getter=_caretRect) CGRect caretRect;	// G=0x359c3435; 
@property(assign) CGPoint center;	// G=0x35697261; S=0x356942e1; converted property
@property(assign) float charge;	// G=0x3568cea9; S=0x356b22c9; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x35834715; S=0x357e1511; converted property
@property(assign) BOOL clipsToBounds;	// G=0x3573fe95; S=0x35688af9; converted property
@property(assign) int contentMode;	// G=0x3569374d; S=0x35699f41; converted property
@property(assign) float contentScaleFactor;	// G=0x35677a75; S=0x35692771; converted property
@property(assign) CGRect contentStretch;	// G=0x35834641; S=0x356a9d7d; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x3568da61; S=0x35711bed; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3571467d; S=0x35700d8d; converted property
@property(assign) int enabledGestures;	// G=0x35875bb5; S=0x35875b8d; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x3568d331; S=0x35711c09; converted property
@property(assign) CGRect frame;	// G=0x3567529d; S=0x35675595; converted property
@property(assign) CGPoint frameOrigin;	// G=0x357449c9; S=0x35675241; converted property
@property(assign) id gestureDelegate;	// G=0x35875b69; S=0x35715ad5; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x3567600d; S=0x35835ca1; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x357742cd; S=0x3568e7ed; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x3568c201; S=0x3569409d; converted property
@property(assign, nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;	// G=0x356b62b9; S=0x358350d5; 
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x35677d61; @synthesize=_layer
@property(assign, nonatomic, getter=_monitorsSubtree, setter=_setMonitorsSubtree:) BOOL monitorsSubtree;	// G=0x35835c61; S=0x3579e3a5; 
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x357ef9a9; S=0x356ba865; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x357ca8d9; S=0x356b3b05; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x3569275d; S=0x35692a45; converted property
@property(assign) CGPoint origin;	// G=0x357449a9; S=0x35675231; converted property
@property(assign) CGPoint position;	// G=0x358340fd; S=0x357bc069; converted property
@property(assign) CGSize size;	// G=0x35677aed; S=0x357028fd; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x3583597d; S=0x35835995; 
@property(assign, nonatomic) int tag;	// G=0x35720205; S=0x35710da9; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x35832df1; S=0x35832d59; converted property
@property(assign) CGAffineTransform transform;	// G=0x356a1825; S=0x35697291; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x3568c1e9; S=0x35675739; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x35677d4d; S=0x356b2699; 
@property(assign, nonatomic) BOOL viewTraversalMark;	// G=0x35677f95; S=0x35675cf5; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x3575381d
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x35758ac1
+ (float)_currentAnimationDuration;	// 0x3569767d
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x35758ad5
+ (void)_inheritAnimationParameters;	// 0x357a1d0d
+ (BOOL)_invalidatesViewUponCreation;	// 0x356ffa51
+ (BOOL)_isInAnimationBlock;	// 0x35677d71
+ (void)_performCustomizableAppearanceModifications:(id)modifications;	// 0x35712cad
+ (void)_performWithoutAnimation:(id)animation;	// 0x3569b5c9
+ (void)_setAnimationAttributes:(id)attributes;	// 0x358348f9
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x35834a65
+ (void)_setAnimationFilterValue:(float)value;	// 0x35834aad
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x356ffa61
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x35678acd
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x35697315
+ (id)_tintColorForStyle:(int)style;	// 0x35837381
+ (id)_topMostView:(id)view;	// 0x357f42d9
+ (void)_transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x358350fd
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x35834c1d
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x356f9ab5
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x356972d5
+ (id)appearance;	// 0x358321c9
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x358321e9
+ (BOOL)areAnimationsEnabled;	// 0x35688441
+ (void)beginAnimations:(id)animations;	// 0x356987dd
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x35688035
+ (void)commitAnimations;	// 0x35688ca1
+ (void)disableAnimation;	// 0x3569b5b9
+ (void)enableAnimation;	// 0x356eb0d5
+ (void)endAnimations;	// 0x3569fac5
+ (void)flush;	// 0x357cc4d9
+ (Class)layerClass;	// 0x35692741
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x358349d5
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x35688199
+ (void)setAnimationCurve:(int)curve;	// 0x35698825
+ (void)setAnimationDelay:(double)delay;	// 0x357b5245
+ (void)setAnimationDelegate:(id)delegate;	// 0x35688125
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x35688179
+ (void)setAnimationDuration:(double)duration;	// 0x356880fd
+ (void)setAnimationFrameInterval:(double)interval;	// 0x357df711
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x357a5605
+ (void)setAnimationPosition:(CGPoint)position;	// 0x35834921
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x358349b1
+ (void)setAnimationRepeatCount:(float)count;	// 0x35834985
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x356d249d
+ (void)setAnimationStartDate:(id)date;	// 0x35834945
+ (void)setAnimationStartTime:(double)time;	// 0x356987fd
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x35834e91
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x358349e5
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x35834a45
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x35688455
+ (void)throttledFlush;	// 0x358348a5
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x35834c91
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x35834c51
- (id)init;	// 0x356a7111
- (id)initWithCoder:(id)coder;	// 0x358322ed
- (id)initWithFrame:(CGRect)frame;	// 0x356920bd
- (id)initWithSize:(CGSize)size;	// 0x356e8d99
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x35677191
- (BOOL)_alwaysHandleInteractionEvents;	// 0x358354c1
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x358354bd
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x358769b1
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x35876b11
- (BOOL)_animationIsPaused;	// 0x3569f89d
- (id)_appearanceContainer;	// 0x358322ad
- (BOOL)_appearanceIsInvalid;	// 0x35833405
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x3568d3a5
- (id)_asTextSelection;	// 0x359c3431
- (BOOL)_associatedViewControllerForwardsAppearanceCallbacks:(id)callbacks performHierarchyCheck:(BOOL)check isRoot:(BOOL)root;	// 0x356b609d
- (id)_autoresizingDescription;	// 0x35835e35
- (CGColorRef)_backgroundCGColor;	// 0x35692b01
- (id)_backgroundColor;	// 0x356bcf71
// declared property getter: - (id)_backgroundColorSystemColorName;	// 0x356bd041
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x35697125
- (BOOL)_canDrawContent;	// 0x35677a51
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x35835711
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x35875799
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x358751ed
- (BOOL)_cancelTapDelegateTracking;	// 0x358356ed
// declared property getter: - (CGRect)_caretRect;	// 0x359c3435
- (void)_clearAnimationFilters;	// 0x35834ad9
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x356765e1
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x356f57b5
- (void)_collectKeyViews:(id)views;	// 0x35835539
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x3587656d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x35678a1d
- (id)_containerLayoutViewForFastMode;	// 0x358373cd
- (int)_containerStyle;	// 0x35753429
- (id)_containingScrollView;	// 0x356ce6a5
- (BOOL)_controlsOwnScaleFactor;	// 0x358353f9
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x358338e5
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x35833841
- (void *)_createIOSurfaceFromRect:(CGRect)rect padding:(UIEdgeInsets)padding;	// 0x357f5331
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x35834839
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x35692461
- (int)_depthFirstCompare:(id)compare;	// 0x35773f99
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x35835c7d
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x35835c79
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x35676bcd
- (void)_didRemoveSubview:(id)subview;	// 0x35677169
- (void)_didScroll;	// 0x3583538d
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x35834835
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x358154a5
- (id)_enclosingScrollerIncludingSelf;	// 0x3583741d
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x35835b11
- (void)_encodeFrameWithCoder:(id)coder;	// 0x358359b9
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x3567589d
- (id)_firstResponder;	// 0x356765f9
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x35873d2d
- (void)_gestureEnded:(GSEventRef)ended;	// 0x35677069
- (id)_gestureInfo;	// 0x35715afd
- (id)_gestureRecognizers;	// 0x357740a1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x35835b7d
- (BOOL)_hasOpaqueBackground;	// 0x356bcdb5
- (id)_interceptEvent:(id)event;	// 0x357bb4e9
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x358353b1
- (float)_internalScaleForScale:(float)scale;	// 0x358749e5
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)aClass;	// 0x35833315
- (void)_invalidateLayerContents;	// 0x35835391
- (void)_invalidateSubviewCache;	// 0x356767fd
- (BOOL)_isAncestorOfFirstResponder;	// 0x356776f5
- (BOOL)_isChargeEnabled;	// 0x35752439
- (BOOL)_isInAWindow;	// 0x357b5761
- (BOOL)_isInExclusiveTouchSubviewTree;	// 0x3568d345
- (BOOL)_isInTransitionBlock;	// 0x356b63b9
- (BOOL)_isRootForKeyResponderCycle;	// 0x358354c5
- (BOOL)_isRubberBanding;	// 0x358747a9
- (BOOL)_isScrollingEnabled;	// 0x358374c1
- (id)_layer;	// 0x3568cdbd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x356769dd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x35676635
- (float)_minimumZoomScaleDelta;	// 0x35874c19
// declared property getter: - (BOOL)_monitorsSubtree;	// 0x35835c61
- (void)_mouseDown:(GSEventRef)down;	// 0x35835645
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x3583567d
- (void)_mouseUp:(GSEventRef)up;	// 0x358356b5
- (void)_movedToFront;	// 0x35677c2d
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(CGRect)newBounds;	// 0x35834095
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x35833501
- (id)_nextKeyResponder;	// 0x35833081
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35835b4d
- (void)_postMovedFromSuperview:(id)superview;	// 0x35676acd
- (id)_previousKeyResponder;	// 0x358331bd
- (Class)_printFormatterClass;	// 0x359ca785
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x35675849
- (void)_removeAllAnimations:(BOOL)animations;	// 0x3575146d
- (void)_removeFirstResponderFromSubtree;	// 0x35754d65
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x358357d1
- (void)_resetContentStretch;	// 0x358345e9
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x3587616d
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x356b5bfd
- (void)_resizeWithOldSuperviewSize_ancient:(CGSize)oldSuperviewSize_ancient;	// 0x35833b11
- (id)_rootForKeyResponderCycle;	// 0x358354d9
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x358758d9
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x35875591
- (float)_rubberBandScaleForScale:(float)scale;	// 0x35874c25
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x358746b5
- (float)_scaleForInternalScale:(float)internalScale;	// 0x35874af9
- (id)_scriptingInfo;	// 0x357bc781
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x358740d5
- (id)_scroller;	// 0x35702a09
- (CGSize)_scrollerContentSize;	// 0x358764ad
- (void)_setAppearanceIsInvalid:(BOOL)invalid;	// 0x3583341d
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x35835c8d
- (void)_setBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x356bc8ad
- (void)_setBackgroundColor:(id)color;	// 0x356bc799
// declared property setter: - (void)_setBackgroundColorSystemColorName:(id)name;	// 0x356bce25
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x357494a5
- (void)_setContainerLayoutViewForFastMode:(id)fastMode;	// 0x35837409
- (void)_setContentImage:(id)image;	// 0x357594a1
- (void)_setContentStretchInPixels:(CGRect)pixels forContentSize:(CGSize)contentSize shouldTile:(BOOL)tile;	// 0x35693ec1
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x3583578d
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x3587452d
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x3574e9b9
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x35678b9d
// declared property setter: - (void)_setMonitorsSubtree:(BOOL)subtree;	// 0x3579e3a5
- (void)_setRotationAnimationProgress:(id)progress;	// 0x3587570d
- (void)_setShouldRasterize:(BOOL)_set;	// 0x35834675
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x356b2699
- (void)_setZoomAnimationProgress:(id)progress;	// 0x35874811
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x35875f61
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x356988a9
- (BOOL)_shouldApplyExclusiveTouch;	// 0x3568d2ed
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x356966b9
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x356776dd
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x35873ad1
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x35875879
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x3587528d
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x35873c21
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x35875a4d
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x35875391
- (int)_style;	// 0x3575346d
- (BOOL)_subclassImplementsDrawRect;	// 0x35692421
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x35677969
- (id)_superDescription;	// 0x35836629
- (id)_syntheticTouch;	// 0x358a5fbd
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x358a5fc1
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x35832e15
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x35676a01
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x356b3b39
- (BOOL)_usesDifferentHitTestForGestures;	// 0x3568ce0d
- (id)_viewControllerForAncestor;	// 0x356b6259
// declared property getter: - (id)_viewDelegate;	// 0x35677d4d
- (id)_viewIndexPath;	// 0x357f4391
- (BOOL)_wantsCornerSnapshotsForScrolling;	// 0x357534ad
- (void)_webCustomViewWasAddedAsSubviewOfView:(id)view;	// 0x358353fd
- (void)_webCustomViewWasRemovedFromSuperview:(id)superview;	// 0x35835481
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x35835449
- (void)_willMoveToWindow:(id)window;	// 0x35675d19
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x35677709
- (id)_window;	// 0x35678c95
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x35876859
- (float)_zoomAnimationProgress;	// 0x35876bc9
- (float)_zoomScale;	// 0x358760f1
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x3587463d
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x35874555
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x35876635
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x35876905
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x35874df5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3567684d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x35834bfd
- (void)addGestureRecognizer:(id)recognizer;	// 0x356bb27d
- (void)addSubview:(id)subview;	// 0x3567716d
// converted property getter: - (float)alpha;	// 0x35678551
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x35809845
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x35873da1
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x35833ac1
// converted property getter: - (unsigned)autoresizingMask;	// 0x356b600d
// converted property getter: - (id)backgroundColor;	// 0x356bcf61
// converted property getter: - (CGRect)bounds;	// 0x356751fd
- (void)bringSubviewToFront:(id)front;	// 0x35677b25
- (BOOL)canHandleGestures;	// 0x35875b4d
- (BOOL)canHandleSwipes;	// 0x35677065
- (BOOL)cancelMouseTracking;	// 0x357e313d
- (BOOL)cancelTouchTracking;	// 0x358332f9
// converted property getter: - (CGPoint)center;	// 0x35697261
// converted property getter: - (float)charge;	// 0x3568cea9
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x35834715
// converted property getter: - (BOOL)clipsToBounds;	// 0x3573fe95
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x356f9789
- (BOOL)containsView:(id)view;	// 0x3575a631
// converted property getter: - (int)contentMode;	// 0x3569374d
// converted property getter: - (float)contentScaleFactor;	// 0x35677a75
// converted property getter: - (CGRect)contentStretch;	// 0x35834641
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x3568c421
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x35752235
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x356c3b71
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x356b72d1
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x3583374d
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x35833659
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x358350b1
- (void)dealloc;	// 0x3569da55
- (void)deferredBecomeFirstResponder;	// 0x3575a74d
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x3568da61
- (id)description;	// 0x35835fa9
- (void)didAddSubview:(id)subview;	// 0x35677ae9
- (void)didMoveToSuperview;	// 0x35677165
- (void)didMoveToWindow;	// 0x3567715d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x35682e65
- (void)drawRect:(CGRect)rect;	// 0x357b6131
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x359ca7f1
// converted property getter: - (int)enabledGestures;	// 0x35875bb5
- (void)encodeWithCoder:(id)coder;	// 0x358328dd
- (BOOL)endEditing:(BOOL)editing;	// 0x35746ef1
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x357b15cd
- (CGRect)extent;	// 0x35833441
- (void)forceDisplayIfNeeded;	// 0x35834815
// converted property getter: - (CGRect)frame;	// 0x3567529d
// converted property getter: - (CGPoint)frameOrigin;	// 0x357449c9
- (void)gestureChanged:(GSEventRef)changed;	// 0x35876349
// converted property getter: - (id)gestureDelegate;	// 0x35875b69
- (void)gestureEnded:(GSEventRef)ended;	// 0x35876465
// converted property getter: - (id)gestureRecognizers;	// 0x3567600d
- (void)gestureStarted:(GSEventRef)started;	// 0x3587620d
// declared property getter: - (BOOL)gesturesEnabled;	// 0x357742cd
- (CGRect)hitRect;	// 0x357e7b21
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35834eb5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3568bc85
- (void)insertSubview:(id)subview above:(id)above;	// 0x356f9605
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x3569f6c5
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x35692b99
- (void)insertSubview:(id)subview below:(id)below;	// 0x3571153d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x35692bc1
- (BOOL)isAccessibilityElementByDefault;	// 0x358ff655
- (BOOL)isDescendantOfView:(id)view;	// 0x3568dc21
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff659
// converted property getter: - (BOOL)isEnabled;	// 0x3571467d
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x3568d331
// converted property getter: - (BOOL)isHidden;	// 0x3568c201
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x35751895
// declared property getter: - (BOOL)isInAnimatedVCTransition;	// 0x356b62b9
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x357ef9a9
// converted property getter: - (BOOL)isOpaque;	// 0x3569275d
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x3568c1e9
// declared property getter: - (id)layer;	// 0x35677d61
- (void)layoutBelowIfNeeded;	// 0x35698ced
- (void)layoutIfNeeded;	// 0x35677c75
- (void)layoutSublayersOfLayer:(id)layer;	// 0x35677c95
- (void)layoutSubviews;	// 0x35677d5d
- (void)movedFromSuperview:(id)superview;	// 0x35677161
- (void)movedFromWindow:(id)window;	// 0x35677159
- (void)movedToSuperview:(id)superview;	// 0x35677ae5
- (void)movedToWindow:(id)window;	// 0x35677a4d
- (BOOL)needsDisplay;	// 0x358346f1
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x357ca8d9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x358acdc1
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x35834759
- (id)nextResponder;	// 0x3567887d
// converted property getter: - (CGPoint)origin;	// 0x357449a9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x35835089
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3568c225
// converted property getter: - (CGPoint)position;	// 0x358340fd
- (id)recursiveDescription;	// 0x35836655
- (void)recursivelyForceDisplayIfNeeded;	// 0x358203dd
- (void)reduceWidth:(float)width;	// 0x35819639
- (void)removeAllGestureRecognizers;	// 0x3569dcd1
- (void)removeFromSuperview;	// 0x35675a99
- (void)removeGestureRecognizer:(id)recognizer;	// 0x356bba49
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x359e2aa9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x35696309
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x356b5bc1
- (void)rotateToDegrees:(float)degrees;	// 0x35875531
- (float)rotationDegrees;	// 0x35875f31
- (id)scriptingInfoWithChildren;	// 0x357bc5e5
- (void)sendSubviewToBack:(id)back;	// 0x356e109d
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x35675719
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x356f9371
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x3569a131
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x356bc789
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x356af911
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x356942e1
// converted property setter: - (void)setCharge:(float)charge;	// 0x356b22c9
- (void)setClearsContext:(BOOL)context;	// 0x35834739
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x357e1511
- (void)setClipsSubviews:(BOOL)subviews;	// 0x356bf0a5
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x35688af9
// converted property setter: - (void)setContentMode:(int)mode;	// 0x35699f41
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x35692771
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x356a9d7d
- (void)setContentsPosition:(int)position;	// 0x356beefd
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x35711bed
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35700d8d
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x35875b8d
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x35711c09
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x3574711d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x35675595
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x35833989
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x35675241
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x35715ad5
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x35835ca1
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x3568e7ed
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3569409d
// declared property setter: - (void)setInAnimatedVCTransition:(BOOL)animatedVCTransition;	// 0x358350d5
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x356ba865
- (void)setNeedsDisplay;	// 0x35678189
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3568fad9
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x356b3b05
- (void)setNeedsLayout;	// 0x35677c55
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x35692a45
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x35675231
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x357bc069
- (void)setRotationBy:(float)by;	// 0x35833a15
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x35875eb1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x357028fd
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x35835995
// declared property setter: - (void)setTag:(int)tag;	// 0x35710da9
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x35832d59
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x35697291
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x35675739
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x35875bd9
- (void)setValue:(id)value forKey:(id)key;	// 0x35835d91
// declared property setter: - (void)setViewTraversalMark:(BOOL)mark;	// 0x35675cf5
// converted property getter: - (CGSize)size;	// 0x35677aed
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3573fe5d
- (void)sizeToFit;	// 0x356a171d
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x3583597d
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x357e29dd
- (int)stateForGestureType:(int)gestureType;	// 0x35876121
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x357e9751
- (id)subviews;	// 0x3568c24d
- (id)superview;	// 0x356751b9
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x35833311
// declared property getter: - (int)tag;	// 0x35720205
// converted property getter: - (id)tapDelegate;	// 0x35832df1
- (int)textEffectsVisibilityLevel;	// 0x358fb9a5
- (int)textEffectsVisibilityLevelWhenKey;	// 0x358fb9ad
- (id)textInputView;	// 0x3576bef1
// converted property getter: - (CGAffineTransform)transform;	// 0x356a1825
- (BOOL)useBlockyMagnificationInClassic;	// 0x35837419
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x35875d3d
- (void)viewDidMoveToSuperview;	// 0x358345e5
- (id)viewPrintFormatter;	// 0x359ca7a1
// declared property getter: - (BOOL)viewTraversalMark;	// 0x35677f95
- (void)viewWillMoveToSuperview:(id)view;	// 0x358345e1
- (id)viewWithTag:(int)tag;	// 0x3567804d
- (CGRect)visibleBounds;	// 0x356d3651
- (void)willMoveToSuperview:(id)superview;	// 0x35675cf1
- (void)willMoveToWindow:(id)window;	// 0x35676631
- (void)willRemoveSubview:(id)subview;	// 0x35675ced
- (id)window;	// 0x35675b71
- (void)zoomToScale:(float)scale;	// 0x3587436d
@end

