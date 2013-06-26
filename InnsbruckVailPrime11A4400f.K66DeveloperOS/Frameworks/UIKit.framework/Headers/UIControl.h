/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

@interface UIControl : UIView {
	NSMutableArray *_targetActions;	// 96 = 0x60
	CGPoint _previousPoint;	// 100 = 0x64
	double _downTime;	// 108 = 0x6c
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 2;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
	} _controlFlags;	// 116 = 0x74
}
@property(assign, nonatomic) int contentHorizontalAlignment;	// G=0x2f40219d; S=0x2f46f7d5; @dynamic
@property(assign, nonatomic) int contentVerticalAlignment;	// G=0x2f41ef71; S=0x2f402bb9; @dynamic
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x2f401c25; S=0x2f404439; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x2f401c3d; S=0x2f4632c9; @dynamic
@property(assign) BOOL requiresDisplayOnTracking;	// G=0x2f5e9489; S=0x2f5e944d; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x2f401c51; S=0x2f4a52e9; @dynamic
@property(readonly, assign, nonatomic) unsigned state;	// G=0x2f401bc1; @dynamic
@property(readonly, assign, nonatomic, getter=isTouchInside) BOOL touchInside;	// G=0x2f4b5d59; @dynamic
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x2f40ad75; @dynamic
- (id)initWithCoder:(id)coder;	// 0x2f555629
- (id)initWithFrame:(CGRect)frame;	// 0x2f401235
- (void)_cancelDelayedActions;	// 0x2f5e9169
- (CGRect)_clippedHighlightBounds;	// 0x2f5e8dcd
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x2f55971d
- (void)_delayActions;	// 0x2f5e9135
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x2f40ad15
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x2f5e8e49
- (float)_highlightCornerRadius;	// 0x2f5e8df1
- (void)_sendActionsForEvents:(int)events withEvent:(id)event;	// 0x2f5e8ec1
- (void)_sendDelayedActions;	// 0x2f5e9155
- (void)_sendDelayedActions:(BOOL)actions;	// 0x2f5e9545
- (void)_setHighlightOnMouseDown:(BOOL)down;	// 0x2f5e90f1
- (void)_setLastHighlightSuccessful:(BOOL)successful;	// 0x2f5e935d
- (void)_setTouchHasHighlighted:(BOOL)highlighted;	// 0x2f5e93a5
- (BOOL)_shouldDelaySendingTouchesEndedActionUntilNextRunLoop;	// 0x2f5e9359
- (BOOL)_touchHasHighlighted;	// 0x2f5e93e1
- (void)_unhighlight;	// 0x2f5e9531
- (BOOL)_wasLastHighlightSuccessful;	// 0x2f5e9391
- (id)actionsForTarget:(id)target forControlEvent:(unsigned)controlEvent;	// 0x2f5e8c6d
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x2f404d31
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x2f5e94c5
- (unsigned)allControlEvents;	// 0x2f5e8ba5
- (id)allTargets;	// 0x2f4aed69
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f4b57c1
- (BOOL)canBecomeFirstResponder;	// 0x2f5e8db9
- (BOOL)cancelMouseTracking;	// 0x2f5344cd
- (BOOL)cancelTouchTracking;	// 0x2f51ce59
- (void)cancelTrackingWithEvent:(id)event;	// 0x2f51ce91
// declared property getter: - (int)contentHorizontalAlignment;	// 0x2f40219d
// declared property getter: - (int)contentVerticalAlignment;	// 0x2f41ef71
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f508f15
- (void)dealloc;	// 0x2f40af1d
- (void)encodeWithCoder:(id)coder;	// 0x2f5e89d5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f4b5d71
- (BOOL)hasOneOrMoreTargets;	// 0x2f5e949d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x2f5e8afd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f4af9ed
// declared property getter: - (BOOL)isEnabled;	// 0x2f401c25
// declared property getter: - (BOOL)isHighlighted;	// 0x2f401c3d
// declared property getter: - (BOOL)isSelected;	// 0x2f401c51
// declared property getter: - (BOOL)isTouchInside;	// 0x2f4b5d59
// declared property getter: - (BOOL)isTracking;	// 0x2f40ad75
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x2f5e929d
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x2f427c85
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x2f5e94d5
// converted property getter: - (BOOL)requiresDisplayOnTracking;	// 0x2f5e9489
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x2f4b5db5
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x2f4f6d3d
// declared property setter: - (void)setContentHorizontalAlignment:(int)alignment;	// 0x2f46f7d5
// declared property setter: - (void)setContentVerticalAlignment:(int)alignment;	// 0x2f402bb9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x2f404439
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x2f4632c9
// converted property setter: - (void)setRequiresDisplayOnTracking:(BOOL)tracking;	// 0x2f5e944d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x2f4a52e9
- (void)setTracking:(BOOL)tracking;	// 0x2f5e94f5
- (BOOL)shouldTrack;	// 0x2f5e93f9
// declared property getter: - (unsigned)state;	// 0x2f401bc1
- (BOOL)touchDragged;	// 0x2f5e9439
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f4b5655
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f5e8b59
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f4b58e1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f508d2d
@end
