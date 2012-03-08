/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextMagnifier.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput> *_text;	// 48 = 0x30
	UIView *_target;	// 52 = 0x34
	CGPoint _magnificationPoint;	// 56 = 0x38
	CGPoint _animationPoint;	// 64 = 0x40
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 72 = 0x48
	UIView *_magnifierRenderer;	// 76 = 0x4c
	UIView *_autoscrollRenderer;	// 80 = 0x50
	int _autoscrollDirections;	// 84 = 0x54
	float _touchOffsetFromMagnificationPoint;	// 88 = 0x58
	float _magnifierOffsetFromTouch;	// 92 = 0x5c
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x359465c9; S=0x359465e5; @synthesize=_animationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x35945355; S=0x35945371; 
@property(retain, nonatomic) UIView *target;	// G=0x357a6831; S=0x359465a5; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x35945485; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x359455fd; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x35946571; S=0x35946581; @synthesize=_text
+ (id)sharedRangedMagnifier;	// 0x357a65cd
- (id)initWithDefaultFrame;	// 0x357a6615
- (void)animateToAutoscrollRenderer;	// 0x35945789
- (void)animateToMagnifierRenderer;	// 0x35945885
// declared property getter: - (CGPoint)animationPoint;	// 0x359465c9
- (void)autoscrollWillNotStart;	// 0x35945aa5
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x35946185
- (void)dealloc;	// 0x359452e1
- (void)detectLostTouches:(id)touches;	// 0x359460cd
- (int)horizontalMovement;	// 0x35945675
- (int)horizontalMovementAtTime:(double)time;	// 0x359454b5
// declared property getter: - (CGPoint)magnificationPoint;	// 0x35945355
- (float)offsetFromMagnificationPoint;	// 0x35945ea1
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x35945769
- (void)remove;	// 0x35945e49
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x359465e5
- (void)setAutoscrollDirections:(int)directions;	// 0x359458fd
- (void)setFrame:(CGRect)frame;	// 0x357a6719
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x35945371
- (void)setNeedsDisplay;	// 0x357a67ed
// declared property setter: - (void)setTarget:(id)target;	// 0x359465a5
// declared property setter: - (void)setText:(id)text;	// 0x35946581
- (void)setToMagnifierRenderer;	// 0x3594582d
- (CGPoint)snappedPoint:(CGPoint)point;	// 0x35946405
- (void)stopMagnifying:(BOOL)magnifying;	// 0x35946339
// declared property getter: - (id)target;	// 0x357a6831
// declared property getter: - (CGPoint)terminalPoint;	// 0x35945485
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x359455fd
// declared property getter: - (id)text;	// 0x35946571
- (void)updateFrame;	// 0x35945ed1
- (BOOL)wasPlacedCarefullyAtTime:(double)time;	// 0x359455a9
- (void)windowWillRotate:(id)window;	// 0x35946171
- (void)zoomDownAnimation;	// 0x35945c49
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x35945e15
- (void)zoomUpAnimation;	// 0x35945ac5
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x35945c39
@end
