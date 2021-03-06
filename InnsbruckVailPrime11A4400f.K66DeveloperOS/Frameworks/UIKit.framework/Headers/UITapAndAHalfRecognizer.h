/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, NSMutableSet, UITouch;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
	CGPoint _startPoint;	// 60 = 0x3c
	float _allowableMovement;	// 68 = 0x44
	int _numberOfFullTaps;	// 72 = 0x48
	double _minimumFinalPressDuration;	// 76 = 0x4c
	NSMutableSet *_activeTouches;	// 84 = 0x54
	int _currentNumberOfTaps;	// 88 = 0x58
	UITouch *_touch;	// 92 = 0x5c
	UIDelayedAction *_tapTimer;	// 96 = 0x60
}
@property(assign, nonatomic) float allowableMovement;	// G=0x2f738651; S=0x2f45cca1; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x2f738661; S=0x2f4895b9; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x2f4defd1; S=0x2f738641; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x2f4defc1; S=0x2f48bc21; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x2f45cbd1
- (void)_resetGestureRecognizer;	// 0x2f4e6899
- (void)_verifyMovementInAllowableRange;	// 0x2f4e157d
// declared property getter: - (float)allowableMovement;	// 0x2f738651
- (void)clearTapTimer;	// 0x2f48bbc5
- (void)dealloc;	// 0x2f48bb4d
// declared property getter: - (double)minimumFinalPressDuration;	// 0x2f738661
// declared property getter: - (int)numberOfFullTaps;	// 0x2f4defd1
- (void)recognized:(id)recognized;	// 0x2f7385bd
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x2f45cca1
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x2f4895b9
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x2f738641
// declared property setter: - (void)setTouch:(id)touch;	// 0x2f48bc21
- (void)startRecognitionTimer:(double)timer;	// 0x2f73852d
- (void)startTapTimer:(double)timer;	// 0x2f4defe5
- (void)tooSlow:(id)slow;	// 0x2f4e6865
// declared property getter: - (id)touch;	// 0x2f4defc1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f4decc5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f7385f1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f4e1419
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f561439
@end

