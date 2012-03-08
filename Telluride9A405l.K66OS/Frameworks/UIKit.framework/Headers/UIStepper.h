/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImageView, UIButton, NSTimer;

@interface UIStepper : UIControl {
@private
	BOOL _isRtoL;	// 70 = 0x46
	UIImageView *_middleView;	// 72 = 0x48
	UIButton *_plusButton;	// 76 = 0x4c
	UIButton *_minusButton;	// 80 = 0x50
	NSTimer *_repeatTimer;	// 84 = 0x54
	int _repeatCount;	// 88 = 0x58
	double _value;	// 92 = 0x5c
	double _minimumValue;	// 100 = 0x64
	double _maximumValue;	// 108 = 0x6c
	double _stepValue;	// 116 = 0x74
	BOOL _continuous;	// 124 = 0x7c
	BOOL _autorepeat;	// 125 = 0x7d
	BOOL _wraps;	// 126 = 0x7e
}
@property(assign, nonatomic) BOOL autorepeat;	// G=0x32fd2ad9; S=0x32fd2ae9; @synthesize=_autorepeat
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x32fd2ab9; S=0x32fd2ac9; @synthesize=_continuous
@property(assign, nonatomic) double maximumValue;	// G=0x32fd2a89; S=0x32fd1971; @synthesize=_maximumValue
@property(assign, nonatomic) double minimumValue;	// G=0x32fd2a71; S=0x32fd18bd; @synthesize=_minimumValue
@property(assign, nonatomic) double stepValue;	// G=0x32fd2aa1; S=0x32fd1a25; @synthesize=_stepValue
@property(assign, nonatomic) double value;	// G=0x32fd2a59; S=0x32fd183d; @synthesize=_value
@property(assign, nonatomic) BOOL wraps;	// G=0x32fd2af9; S=0x32fd1b39; @synthesize=_wraps
- (id)initWithCoder:(id)coder;	// 0x32fd1b69
- (id)initWithFrame:(CGRect)frame;	// 0x32fd16a1
- (void)_commonStepperInit;	// 0x32fd1f79
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32fd1739
- (void)_startTimer;	// 0x32fd2745
- (void)_stopTimer;	// 0x32fd27c5
- (void)_updateButtonEnabled;	// 0x32fd2335
- (void)_updateCount:(id)count;	// 0x32fd27f1
- (void)_updateHighlightingAtPoint:(CGPoint)point withEvent:(id)event;	// 0x32fd2459
// declared property getter: - (BOOL)autorepeat;	// 0x32fd2ad9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32fd25c9
- (void)cancelTrackingWithEvent:(id)event;	// 0x32fd26f1
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32fd2631
- (void)dealloc;	// 0x32fd1a9d
- (void)encodeWithCoder:(id)coder;	// 0x32fd1db1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32fd2689
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32fd2569
// declared property getter: - (BOOL)isContinuous;	// 0x32fd2ab9
// declared property getter: - (double)maximumValue;	// 0x32fd2a89
// declared property getter: - (double)minimumValue;	// 0x32fd2a71
// declared property setter: - (void)setAutorepeat:(BOOL)autorepeat;	// 0x32fd2ae9
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x32fd2ac9
- (void)setFrame:(CGRect)frame;	// 0x32fd17d1
// declared property setter: - (void)setMaximumValue:(double)value;	// 0x32fd1971
// declared property setter: - (void)setMinimumValue:(double)value;	// 0x32fd18bd
// declared property setter: - (void)setStepValue:(double)value;	// 0x32fd1a25
// declared property setter: - (void)setValue:(double)value;	// 0x32fd183d
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x32fd1b39
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fd1b25
// declared property getter: - (double)stepValue;	// 0x32fd2aa1
// declared property getter: - (double)value;	// 0x32fd2a59
// declared property getter: - (BOOL)wraps;	// 0x32fd2af9
@end
