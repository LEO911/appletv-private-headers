/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIResponder, UIDelayedAction;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
	UIResponder<UITextInput> *_textInput;	// 104 = 0x68
	UIDelayedAction *_secondDelayTimer;	// 108 = 0x6c
	double _secondDelay;	// 112 = 0x70
	BOOL _secondDelayElapsed;	// 120 = 0x78
	id _userData;	// 124 = 0x7c
}
@property(assign, nonatomic) double secondDelay;	// G=0x305078f5; S=0x3050790d; @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// G=0x30507921; @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput> *textInput;	// G=0x305078d5; S=0x305078e5; @synthesize=_textInput
@property(assign, nonatomic) id userData;	// G=0x30507931; S=0x30507941; @synthesize=_userData
- (void)_resetGestureRecognizer;	// 0x3050751d
- (void)clearTimer;	// 0x30507871
// declared property getter: - (double)secondDelay;	// 0x305078f5
// declared property getter: - (BOOL)secondDelayElapsed;	// 0x30507921
- (void)secondDelayElapsed:(id)elapsed;	// 0x30507629
// declared property setter: - (void)setSecondDelay:(double)delay;	// 0x3050790d
- (void)setState:(int)state;	// 0x30507569
// declared property setter: - (void)setTextInput:(id)input;	// 0x305078e5
// declared property setter: - (void)setUserData:(id)data;	// 0x30507941
- (void)startTimer;	// 0x3050767d
// declared property getter: - (id)textInput;	// 0x305078d5
// declared property getter: - (id)userData;	// 0x30507931
@end
