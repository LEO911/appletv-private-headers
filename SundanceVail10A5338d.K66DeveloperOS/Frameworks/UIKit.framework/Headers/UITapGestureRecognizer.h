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
	CGPoint _locationInView;	// 56 = 0x38
	id _imp;	// 64 = 0x40
	unsigned _delaysRecognitionForGreaterTapCounts;	// 68 = 0x44
}
@property(assign) float allowableMovement;	// G=0x30ebbbc9; S=0x30c56959; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x30d7bd65; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x30d00f05; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x30d6f7d1; S=0x30c56921; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x30ebbbe9; S=0x30c568e9; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x30d00cb1; S=0x30c56989; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x30d00af1; S=0x30c569c1; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x30ebbba9; 
- (id)initWithCoder:(id)coder;	// 0x30ebbaf9
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30c5673d
- (void)_appendSubclassDescription:(id)description;	// 0x30ebbc29
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x30ebbc09
- (void)_resetGestureRecognizer;	// 0x30d05121
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x30ebbc19
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x30cff46d
// converted property getter: - (float)allowableMovement;	// 0x30ebbbc9
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x30d0098d
// declared property getter: - (CGPoint)centroid;	// 0x30d7bd65
- (void)dealloc;	// 0x30c358b5
- (void)encodeWithCoder:(id)coder;	// 0x30ebba9d
// declared property getter: - (CGPoint)location;	// 0x30d00f05
- (CGPoint)locationInView:(id)view;	// 0x30cfff85
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x30ebbcfd
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x30d6f7d1
// converted property getter: - (double)maximumSingleTapDuration;	// 0x30ebbbe9
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x30d00cb1
- (unsigned)numberOfTouches;	// 0x30ebbcc5
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x30d00af1
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x30c56959
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x30c56921
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x30c568e9
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x30c56989
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x30c569c1
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x30cfd641
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x30cfffb5
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x30cffd89
// declared property getter: - (id)touches;	// 0x30ebbba9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30cfd2e5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30ebbb85
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30cffc2d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30d2e4e5
@end

