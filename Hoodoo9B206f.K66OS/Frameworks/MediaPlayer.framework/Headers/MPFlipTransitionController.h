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
@property(retain, nonatomic) UIView *fromView;	// G=0x30357571; S=0x30357581; @synthesize=_fromView
@property(assign, nonatomic) CGRect toFrame;	// G=0x303575a5; S=0x303575c9; @synthesize=_toFrame
@property(assign, nonatomic) float topMargin;	// G=0x303575e5; S=0x303575f5; @synthesize=_topMargin
- (id)init;	// 0x3035704d
- (id)_subtypeForTransitionType:(unsigned)transitionType;	// 0x30357549
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303574fd
- (void)dealloc;	// 0x303570ad
// declared property getter: - (id)fromView;	// 0x30357571
- (void)performTransition:(unsigned)transition;	// 0x303570f1
// declared property setter: - (void)setFromView:(id)view;	// 0x30357581
// declared property setter: - (void)setToFrame:(CGRect)frame;	// 0x303575c9
// declared property setter: - (void)setTopMargin:(float)margin;	// 0x303575f5
// declared property getter: - (CGRect)toFrame;	// 0x303575a5
// declared property getter: - (float)topMargin;	// 0x303575e5
@end

