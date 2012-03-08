/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _locationInView;	// 56 = 0x38
	id _imp;	// 64 = 0x40
	unsigned _delaysRecognitionForGreaterTapCounts;	// 68 = 0x44
}
@property(assign) float allowableMovement;	// G=0x33182f81; S=0x32f06605; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x3303e601; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x32fbd561; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x33031a61; S=0x32f065d1; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x33182fa1; S=0x32f0659d; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x32fbc691; S=0x32f06635; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x32fbc4bd; S=0x32f06665; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x33182f61; 
- (id)initWithCoder:(id)coder;	// 0x33182eb9
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32f063f5
- (void)_appendSubclassDescription:(id)description;	// 0x33182fe1
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x33182fc1
- (void)_resetGestureRecognizer;	// 0x32fc271d
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x33182fd1
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x32fbac65
// converted property getter: - (float)allowableMovement;	// 0x33182f81
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x32fbc36d
// declared property getter: - (CGPoint)centroid;	// 0x3303e601
- (void)dealloc;	// 0x32ee4ac9
- (void)encodeWithCoder:(id)coder;	// 0x33182e5d
// declared property getter: - (CGPoint)location;	// 0x32fbd561
- (CGPoint)locationInView:(id)view;	// 0x32fbb955
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x331830bd
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x33031a61
// converted property getter: - (double)maximumSingleTapDuration;	// 0x33182fa1
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x32fbc691
- (unsigned)numberOfTouches;	// 0x33183085
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x32fbc4bd
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x32f06605
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x32f065d1
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x32f0659d
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x32f06635
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x32f06665
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x32fb8fe5
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x32fbba35
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x32fbb565
// declared property getter: - (id)touches;	// 0x33182f61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fb8c95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33182f41
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fbb415
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32fec69d
@end
