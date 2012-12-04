/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
	double _maximumDeviation;	// 56 = 0x38
	double _minimumDistance;	// 64 = 0x40
	CGPoint _startPosition;	// 72 = 0x48
	BOOL _restrictsToAngle;	// 80 = 0x50
	double _angle;	// 84 = 0x54
	UITouch *_touch;	// 92 = 0x5c
	UIDelayedAction *_tooSlow;	// 96 = 0x60
	double _startAngle;	// 100 = 0x64
}
@property(assign, nonatomic) double angle;	// G=0x3481ea1d; S=0x3481ea35; @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// G=0x3481e959; S=0x3481e971; @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// G=0x3481e9b1; S=0x3481e9c9; @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// G=0x3481e9fd; S=0x3481ea0d; @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// G=0x3481ea49; S=0x3481ea61; @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// G=0x3481e985; S=0x3481e99d; @synthesize=_startPosition
@property(retain, nonatomic) UITouch *touch;	// G=0x3481e9dd; S=0x3481e9ed; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3481e281
- (void)_resetGestureRecognizer;	// 0x3481e395
// declared property getter: - (double)angle;	// 0x3481ea1d
- (void)clearTimer;	// 0x3481e3e9
- (void)dealloc;	// 0x3481e341
// declared property getter: - (double)maximumDeviation;	// 0x3481e959
// declared property getter: - (double)minimumDistance;	// 0x3481e9b1
// declared property getter: - (BOOL)restrictsToAngle;	// 0x3481e9fd
// declared property setter: - (void)setAngle:(double)angle;	// 0x3481ea35
// declared property setter: - (void)setMaximumDeviation:(double)deviation;	// 0x3481e971
// declared property setter: - (void)setMinimumDistance:(double)distance;	// 0x3481e9c9
// declared property setter: - (void)setRestrictsToAngle:(BOOL)angle;	// 0x3481ea0d
// declared property setter: - (void)setStartAngle:(double)angle;	// 0x3481ea61
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x3481e99d
// declared property setter: - (void)setTouch:(id)touch;	// 0x3481e9ed
// declared property getter: - (double)startAngle;	// 0x3481ea49
// declared property getter: - (CGPoint)startPosition;	// 0x3481e985
- (void)tooSlow:(id)slow;	// 0x3481e425
// declared property getter: - (id)touch;	// 0x3481e9dd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3481e455
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3481e929
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3481e899
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3481e561
@end
