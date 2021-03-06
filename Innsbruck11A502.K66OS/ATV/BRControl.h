/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRResponder.h"
#import "BRFocusContainer.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol BREventDelegate;

__attribute__((visibility("hidden")))
@interface BRControl : XXUnknownSuperclass <BRFocusContainer, BRResponder> {
	BOOL _useUIViewAnimations;	// 50 = 0x32
	BRControl *_defaultFocus;	// 52 = 0x34
	BRControl *_focusedControl;	// 56 = 0x38
	BRControl *_keyEventTargetControl;	// 60 = 0x3c
	BOOL _acceptsFocus;	// 64 = 0x40
	BOOL _focused;	// 65 = 0x41
	BOOL _controlActive;	// 66 = 0x42
	BOOL _inhibitsFocusForChildren;	// 67 = 0x43
	BOOL _inhibitsScrollFocusForChildren;	// 68 = 0x44
	NSObject<BREventDelegate> *_brEventDelegate;	// 72 = 0x48
	BOOL _focusByDirectionEnabled;	// 76 = 0x4c
	XXStruct_qlg9jA _focusCursorHaloAdjustment;	// 80 = 0x50
	BOOL _ignoreDirectionalInfoForFocus;	// 84 = 0x54
	id _eventHandlerBlock;	// 88 = 0x58
	BRControl *__previousFocus;	// 92 = 0x5c
}
@property(retain, nonatomic) BRControl *_previousFocus;	// G=0x2fe695; S=0x2fe6a5; @synthesize=__previousFocus
@property(assign) BOOL acceptsFocus;	// G=0x2ff69d; S=0x2ff659; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x3086a9; S=0x3086fd; 
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x308619; S=0x30866d; 
@property(retain) id actions;	// G=0x2ff9f9; S=0x2ff9cd; converted property
@property(assign) CGPoint anchorPoint;	// G=0x2fe6e5; S=0x2fe6b5; converted property
@property(assign) BOOL avoidsCursor;	// G=0x2ff76d; S=0x2ff729; converted property
@property(assign) CGColorRef borderColor;	// G=0x2ff231; S=0x2ff205; converted property
@property(assign) float borderWidth;	// G=0x2ff285; S=0x2ff259; converted property
@property(retain) BRControl *defaultFocus;	// G=0x2ff5ed; S=0x2ff55d; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x2fe62d; S=0x2fe641; @synthesize=_brEventDelegate
@property(copy, nonatomic) id eventHandlerBlock;	// G=0x2fe671; S=0x2fe685; @synthesize=_eventHandlerBlock
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x2ff719; converted property
@property(retain) BRControl *focusedControl;	// G=0x2ff54d; S=0x2ff485; converted property
@property(retain) id identifier;	// G=0x2fe089; S=0x2fe051; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x2fe651; S=0x2fe661; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x2ff6d9; S=0x2ff6ad; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x2ff701; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x2fe5dd; S=0x2fe549; converted property
@property(retain) id name;	// G=0x2feb59; S=0x2feb2d; converted property
@property(retain) id object;	// G=0x2fe01d; S=0x2fdfe5; converted property
@property(retain) id selectionHandler;	// G=0x2ff809; S=0x2ff7ed; converted property
+ (CGSize)computeSizeThatFitsControlFrames:(id)frames;	// 0x2fefc1
+ (id)control;	// 0x2fde35
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x3eb6a5
+ (Class)layerClass;	// 0x2fde7d
+ (void)layoutSubcontrolsWithControlFrames:(id)controlFrames;	// 0x2ff0e5
- (id)init;	// 0x2fde99
- (id)initWithLayout:(id)layout;	// 0x2fdcd1
- (void)_addChainedAnimation:(id)animation preemptedAnimation:(id)animation2 timeOffset:(double)offset forKey:(id)key;	// 0x103651
- (void)_addChainedAnimation:(id)animation preemptedDuration:(double)duration forKey:(id)key;	// 0x103929
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x3087d9
- (id)_axSubviews;	// 0x308951
- (id)_axSuperviews;	// 0x308739
- (BOOL)_changeFocusTo:(id)to;	// 0x2ffde9
- (void)_didRemoveSubcontrol:(id)subcontrol;	// 0x2ffa21
- (void)_dumpFocusTree;	// 0x300279
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x2ffc51
- (BOOL)_focusControlTreeWithDefaults;	// 0x2ffbe9
- (id)_focusedLeafControl;	// 0x300091
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x2ffad5
- (id)_initialFocus;	// 0x300109
- (id)_parentScrollControl;	// 0x38e84d
// declared property getter: - (id)_previousFocus;	// 0x2fe695
- (void)_reevaluateFocusTree;	// 0x3000b1
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x38e8d1
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x38e901
- (void)_scrollingCompleted;	// 0x38e725
- (void)_scrollingInitiated;	// 0x38e771
- (void)_setControlFocused:(BOOL)focused;	// 0x30000d
- (void)_setFocus:(id)focus;	// 0x2ffe85
- (double)_timeOffsetForExistingAnimationForKey:(id)key preemptedAnimation:(id *)animation;	// 0x103431
- (CGRect)_visibleRectOfControl:(id)control;	// 0x38e875
- (void)_visibleScrollRectChanged;	// 0x38e941
// converted property getter: - (BOOL)acceptsFocus;	// 0x2ff69d
- (id)accessibilityAncestor:(Class)ancestor;	// 0x308229
- (id)accessibilityControls;	// 0x30819d
- (BOOL)accessibilityElementIsHidden;	// 0x30827d
- (CGRect)accessibilityFrame;	// 0x3080e5
- (BOOL)accessibilityIgnoresControlReload;	// 0x308199
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x3081d5
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x3086a9
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x308619
- (unsigned long long)accessibilityTraits;	// 0x3082fd
- (id)actionForKey:(id)key;	// 0x2ff9a1
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x2fe4bd
// converted property getter: - (id)actions;	// 0x2ff9f9
- (BOOL)active;	// 0x2fe9bd
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x2ff8f1
// converted property getter: - (CGPoint)anchorPoint;	// 0x2fe6e5
- (id)animationForKey:(id)key;	// 0x2ff921
// converted property getter: - (BOOL)avoidsCursor;	// 0x2ff76d
- (id)badge;	// 0x356079
// converted property getter: - (CGColorRef)borderColor;	// 0x2ff231
// converted property getter: - (float)borderWidth;	// 0x2ff285
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x3001a5
- (BOOL)brEventAction:(id)action;	// 0x2fe0bd
- (BOOL)brKeyEvent:(id)event;	// 0x2fe2f1
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x2fe721
- (long)controlCount;	// 0x2feed5
- (void)controlDidDisplayAsModalDialog;	// 0x419c51
- (id)controlForPoint:(CGPoint)point;	// 0x2ff82d
- (id)controlSearchOrderInProximityToControl:(id)control;	// 0x418359
- (void)controlWasActivated;	// 0x2fe9cd
- (void)controlWasDeactivated;	// 0x2fea7d
- (void)controlWasFocused;	// 0x2ff711
- (void)controlWasUnfocused;	// 0x2ff715
- (void)dealloc;	// 0x2fdf15
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x300275
// converted property getter: - (id)defaultFocus;	// 0x2ff5ed
- (id)description;	// 0x2ff831
- (void)didAddSubview:(id)subview;	// 0x2fec1d
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x3001f5
// declared property getter: - (id)eventDelegate;	// 0x2fe62d
// declared property getter: - (id)eventHandlerBlock;	// 0x2fe671
- (id)firstControlNamed:(id)named;	// 0x2feb81
- (id)focusCandidates;	// 0x300159
- (CGRect)focusCursorFrame;	// 0x2ff79d
- (XXStruct_qlg9jA)focusCursorHaloAdjutment;	// 0x2ff7d1
- (id)focusObjectForCandidate:(id)candidate;	// 0x3001e1
// converted property getter: - (id)focusedControl;	// 0x2ff54d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2ff5fd
- (BOOL)handlePlayButton:(id)button;	// 0x1e66f1
// converted property getter: - (id)identifier;	// 0x2fe089
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x2fe651
- (id)inheritedValueForKey:(id)key;	// 0x2fe37d
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x2ff6d9
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x2ff701
- (id)initialFocus;	// 0x2ff389
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x2febbd
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x2febed
// converted property getter: - (BOOL)isFocused;	// 0x2ff719
- (BOOL)isRandomNavigationCandidate;	// 0x2fe629
// converted property getter: - (id)keyEventTargetControl;	// 0x2fe5dd
- (void)layoutSubcontrols;	// 0x2fefbd
- (void)layoutSubviews;	// 0x2fe511
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x1d3139
// converted property getter: - (id)name;	// 0x2feb59
// converted property getter: - (id)object;	// 0x2fe01d
- (id)parent;	// 0x2fe96d
- (id)parentScrollControl;	// 0x38e835
- (id)photoCarouselUIDelegateCenterBadge;	// 0x4ede29
- (id)photoCarouselUIDelegateLeftShadow;	// 0x4ede31
- (id)photoCarouselUIDelegateRightShadow;	// 0x4ede35
- (id)photoCarouselUIDelegateShourd;	// 0x4ede2d
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x300181
- (id)preferredActionForKey:(id)key;	// 0x2ff8ed
- (float)preferredCursorRadius;	// 0x356075
- (id)randomNavigationLabel;	// 0x2fe5ed
- (void)removeAllAnimations;	// 0x2ff979
- (void)removeAnimationForKey:(id)key;	// 0x2ff94d
- (void)removeFromSuperview;	// 0x2fef0d
- (id)root;	// 0x2fe941
- (void)scrollPoint:(CGPoint)point;	// 0x38e7bd
- (void)scrollRectToVisible:(CGRect)visible;	// 0x38e7d9
- (void)scrollingCompleted;	// 0x38e845
- (void)scrollingInitiated;	// 0x38e849
// converted property getter: - (id)selectionHandler;	// 0x2ff809
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2ff659
// declared property setter: - (void)setAccessibilityOutputsRange:(BOOL)range;	// 0x3086fd
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x30866d
// converted property setter: - (void)setActions:(id)actions;	// 0x2ff9cd
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x2fe6b5
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x2ff729
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x2ff205
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x2ff259
- (void)setControls:(id)controls;	// 0x2fece1
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x2ff55d
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x2ff829
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x2fe641
// declared property setter: - (void)setEventHandlerBlock:(id)block;	// 0x2fe685
- (void)setFocusCursorHaloAdjustment:(XXStruct_qlg9jA)adjustment;	// 0x2ff7c1
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3a8ec5
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x2ff485
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x2fe051
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x2fe661
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x2ff6ad
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x2ff6e9
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x2fe549
// converted property setter: - (void)setName:(id)name;	// 0x2feb2d
// converted property setter: - (void)setObject:(id)object;	// 0x2fdfe5
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x2ff7ed
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x2fe3cd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x2fe34d
// declared property setter: - (void)set_previousFocus:(id)focus;	// 0x2fe6a5
- (int)touchSensitivity;	// 0x2ff825
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x2fe321
- (CGRect)visibleScrollRect;	// 0x38e811
- (void)visibleScrollRectChanged;	// 0x38e801
- (void)windowMaxBoundsChanged;	// 0x2ff2ad
@end

