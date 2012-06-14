/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
@private
	float _initialTouchDistance;	// 56 = 0x38
	float _initialTouchScale;	// 60 = 0x3c
	double _lastTouchTime;	// 64 = 0x40
	float _velocity;	// 72 = 0x48
	float _previousVelocity;	// 76 = 0x4c
	float _scaleThreshold;	// 80 = 0x50
	CGAffineTransform _transform;	// 84 = 0x54
	CGPoint _anchorPoint;	// 108 = 0x6c
	UITouch *_touches[2];	// 116 = 0x74
	float _hysteresis;	// 124 = 0x7c
	id _transformAnalyzer;	// 128 = 0x80
	unsigned _endsOnSingleTouch : 1;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) CGPoint anchorPoint;	// G=0x30196af1; 
@property(assign, nonatomic, getter=_hysteresis, setter=_setHysteresis:) float hysteresis;	// G=0x30195f65; S=0x302dc7d5; @synthesize=_hysteresis
@property(assign, nonatomic) float scale;	// G=0x301954d9; S=0x30196b0d; 
@property(assign, nonatomic) float scaleThreshold;	// G=0x302dc7b5; S=0x302dc7c5; @synthesize=_scaleThreshold
@property(readonly, assign, nonatomic) float velocity;	// G=0x302dc6d5; 
- (id)initWithCoder:(id)coder;	// 0x302dc699
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300c39f5
- (BOOL)_endsOnSingleTouch;	// 0x302dc66d
// declared property getter: - (float)_hysteresis;	// 0x30195f65
- (void)_resetGestureRecognizer;	// 0x3016e91d
- (void)_setEndsOnSingleTouch:(BOOL)touch;	// 0x302dc681
// declared property setter: - (void)_setHysteresis:(float)hysteresis;	// 0x302dc7d5
// declared property getter: - (CGPoint)anchorPoint;	// 0x30196af1
- (void)dealloc;	// 0x30169d29
// declared property getter: - (float)scale;	// 0x301954d9
// declared property getter: - (float)scaleThreshold;	// 0x302dc7b5
// declared property setter: - (void)setScale:(float)scale;	// 0x30196b0d
// declared property setter: - (void)setScaleThreshold:(float)threshold;	// 0x302dc7c5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3016cfad
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302dc729
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30171585
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30195655
// declared property getter: - (float)velocity;	// 0x302dc6d5
@end
