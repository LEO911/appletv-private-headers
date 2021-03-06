/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {
	UIView *_fromView;	// 52 = 0x34
	CGRect _toFrame;	// 56 = 0x38
	float _topMargin;	// 72 = 0x48
}
@property(retain, nonatomic) UIView *fromView;	// G=0x34dea1b1; S=0x34dea1c1; @synthesize=_fromView
@property(assign, nonatomic) CGRect toFrame;	// G=0x34dea1e5; S=0x34dea209; @synthesize=_toFrame
@property(assign, nonatomic) float topMargin;	// G=0x34dea225; S=0x34dea235; @synthesize=_topMargin
- (id)init;	// 0x34de9c8d
- (id)_subtypeForTransitionType:(unsigned)transitionType;	// 0x34dea189
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34dea13d
- (void)dealloc;	// 0x34de9ced
// declared property getter: - (id)fromView;	// 0x34dea1b1
- (void)performTransition:(unsigned)transition;	// 0x34de9d31
// declared property setter: - (void)setFromView:(id)view;	// 0x34dea1c1
// declared property setter: - (void)setToFrame:(CGRect)frame;	// 0x34dea209
// declared property setter: - (void)setTopMargin:(float)margin;	// 0x34dea235
// declared property getter: - (CGRect)toFrame;	// 0x34dea1e5
// declared property getter: - (float)topMargin;	// 0x34dea225
@end

