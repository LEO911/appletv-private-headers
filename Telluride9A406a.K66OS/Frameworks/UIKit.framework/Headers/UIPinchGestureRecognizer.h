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
@property(readonly, assign, nonatomic) CGPoint anchorPoint;	// G=0x357f1095; 
@property(assign, nonatomic, getter=_hysteresis, setter=_setHysteresis:) float hysteresis;	// G=0x357f0509; S=0x35933865; @synthesize=_hysteresis
@property(assign, nonatomic) float scale;	// G=0x357efa7d; S=0x357f10b1; 
@property(assign, nonatomic) float scaleThreshold;	// G=0x35933845; S=0x35933855; @synthesize=_scaleThreshold
@property(readonly, assign, nonatomic) float velocity;	// G=0x35933765; 
- (id)initWithCoder:(id)coder;	// 0x35933729
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3571f69d
- (BOOL)_endsOnSingleTouch;	// 0x359336fd
// declared property getter: - (float)_hysteresis;	// 0x357f0509
- (void)_resetGestureRecognizer;	// 0x357c8fe9
- (void)_setEndsOnSingleTouch:(BOOL)touch;	// 0x35933711
// declared property setter: - (void)_setHysteresis:(float)hysteresis;	// 0x35933865
// declared property getter: - (CGPoint)anchorPoint;	// 0x357f1095
- (void)dealloc;	// 0x357c43f5
// declared property getter: - (float)scale;	// 0x357efa7d
// declared property getter: - (float)scaleThreshold;	// 0x35933845
// declared property setter: - (void)setScale:(float)scale;	// 0x357f10b1
// declared property setter: - (void)setScaleThreshold:(float)threshold;	// 0x35933855
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x357c7679
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x359337b9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x357cbc51
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x357efbf9
// declared property getter: - (float)velocity;	// 0x35933765
@end

