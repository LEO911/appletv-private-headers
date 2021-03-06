/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRWaitPromptControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRTextWithSpinnerController : BRController {
	NSTimer *_revealTimer;	// 100 = 0x64
	double _revealInterval;	// 104 = 0x68
	BRWaitPromptControl *_prompt;	// 112 = 0x70
	BOOL _isNetworkDependent;	// 116 = 0x74
}
@property(readonly, assign) BOOL isNetworkDependent;	// G=0x2a80ed; converted property
- (id)initWithTitle:(id)title text:(id)text;	// 0x2a7d19
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent;	// 0x2a7d71
- (id)initWithTitle:(id)title text:(id)text isNetworkDependent:(BOOL)dependent revealAfter:(double)after;	// 0x2a7da1
- (id)initWithTitle:(id)title text:(id)text revealAfter:(double)after;	// 0x2a7d45
- (void)_checkActivationState:(id)state;	// 0x2a8101
- (void)controlWasActivated;	// 0x2a7f79
- (void)controlWasDeactivated;	// 0x2a8099
- (void)dealloc;	// 0x2a7f29
// converted property getter: - (BOOL)isNetworkDependent;	// 0x2a80ed
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x2a80fd
@end

