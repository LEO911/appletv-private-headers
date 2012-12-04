/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
	UIResponder<UITextInput> *_text;	// 84 = 0x54
	UIView *_target;	// 88 = 0x58
	CGPoint _magnificationPoint;	// 92 = 0x5c
	CGPoint _animationPoint;	// 100 = 0x64
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 108 = 0x6c
	UIView *_magnifierRenderer;	// 112 = 0x70
	UIView *_autoscrollRenderer;	// 116 = 0x74
	int _autoscrollDirections;	// 120 = 0x78
	float _touchOffsetFromMagnificationPoint;	// 124 = 0x7c
	float _magnifierOffsetFromTouch;	// 128 = 0x80
	BOOL _isHorizontal;	// 132 = 0x84
	BOOL _isAnimating;	// 133 = 0x85
	int _delayedAnimationType;	// 136 = 0x88
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x32f6f099; S=0x32f6f0b1; @synthesize=_animationPoint
@property(assign, nonatomic) BOOL isHorizontal;	// G=0x32f6f0c5; S=0x32f6f0d5; @synthesize=_isHorizontal
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x32f6da71; S=0x32f6da89; 
@property(retain, nonatomic) UIView *target;	// G=0x32dd2991; S=0x32f6f089; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x32f6db9d; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x32f6dd11; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x32f6f069; S=0x32f6f079; @synthesize=_text
+ (id)sharedRangedMagnifier;	// 0x32dd2701
- (id)initWithDefaultFrame;	// 0x32dd2749
- (void)animateToAutoscrollRenderer;	// 0x32f6de89
- (void)animateToMagnifierRenderer;	// 0x32f6df89
// declared property getter: - (CGPoint)animationPoint;	// 0x32f6f099
- (void)autoscrollWillNotStart;	// 0x32f6e17d
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x32f6eaf9
- (CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;	// 0x32f6ed79
- (void)dealloc;	// 0x32f6d9f9
- (void)detectLostTouches:(id)touches;	// 0x32f6ea41
- (int)horizontalMovement;	// 0x32f6dd81
- (int)horizontalMovementAtTime:(double)time;	// 0x32f6dbd1
// declared property getter: - (BOOL)isHorizontal;	// 0x32f6f0c5
// declared property getter: - (CGPoint)magnificationPoint;	// 0x32f6da71
- (float)offsetFromMagnificationPoint;	// 0x32f6e741
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x32f6de69
- (void)remove;	// 0x32f6e6e9
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x32f6f0b1
- (void)setAutoscrollDirections:(int)directions;	// 0x32f6e001
- (void)setFrame:(CGRect)frame;	// 0x32dd2885
// declared property setter: - (void)setIsHorizontal:(BOOL)horizontal;	// 0x32f6f0d5
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x32f6da89
- (void)setNeedsDisplay;	// 0x32dd2949
// declared property setter: - (void)setTarget:(id)target;	// 0x32f6f089
// declared property setter: - (void)setText:(id)text;	// 0x32f6f079
- (void)setToMagnifierRenderer;	// 0x32f6df31
- (CGPoint)snappedPoint:(CGPoint)point;	// 0x32f6ee69
- (void)stopMagnifying:(BOOL)magnifying;	// 0x32f6ecad
// declared property getter: - (id)target;	// 0x32dd2991
// declared property getter: - (CGPoint)terminalPoint;	// 0x32f6db9d
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x32f6dd11
// declared property getter: - (id)text;	// 0x32f6f069
- (void)updateFrame;	// 0x32f6e771
- (BOOL)wasPlacedCarefullyAtTime:(double)time;	// 0x32f6dcb9
- (void)windowWillRotate:(id)window;	// 0x32f6eae5
- (void)zoomDownAnimation;	// 0x32f6e3e9
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x32f6e631
- (void)zoomUpAnimation;	// 0x32f6e1a1
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x32f6e391
@end
