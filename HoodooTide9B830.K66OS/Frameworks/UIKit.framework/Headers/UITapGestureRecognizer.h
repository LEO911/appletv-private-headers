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
@property(assign) float allowableMovement;	// G=0x302e1e95; S=0x3006545d; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x3019d47d; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x3011c3dd; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x301908dd; S=0x30065429; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x302e1eb5; S=0x300653f5; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x3011b50d; S=0x3006548d; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x3011b339; S=0x300654bd; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x302e1e75; 
- (id)initWithCoder:(id)coder;	// 0x302e1dcd
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3006524d
- (void)_appendSubclassDescription:(id)description;	// 0x302e1ef5
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x302e1ed5
- (void)_resetGestureRecognizer;	// 0x30121599
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x302e1ee5
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x30119ae1
// converted property getter: - (float)allowableMovement;	// 0x302e1e95
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x3011b1e9
// declared property getter: - (CGPoint)centroid;	// 0x3019d47d
- (void)dealloc;	// 0x30043921
- (void)encodeWithCoder:(id)coder;	// 0x302e1d71
// declared property getter: - (CGPoint)location;	// 0x3011c3dd
- (CGPoint)locationInView:(id)view;	// 0x3011a7d1
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x302e1fd1
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x301908dd
// converted property getter: - (double)maximumSingleTapDuration;	// 0x302e1eb5
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x3011b50d
- (unsigned)numberOfTouches;	// 0x302e1f99
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x3011b339
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x3006545d
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x30065429
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x300653f5
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x3006548d
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x300654bd
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x30117e61
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x3011a8b1
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x3011a3e1
// declared property getter: - (id)touches;	// 0x302e1e75
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30117b11
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302e1e55
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3011a291
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3014b519
@end
