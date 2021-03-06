/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSTimer, CALayer, CADisplayLink, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIDictationMeterView : UIView {
	UIImageView *_background;	// 88 = 0x58
	UIImageView *_overlay;	// 92 = 0x5c
	NSMutableArray *_micListeningImages;	// 96 = 0x60
	CALayer *_micImageLayer;	// 100 = 0x64
	CALayer *_animatingLayer;	// 104 = 0x68
	NSTimer *_fillTimer;	// 108 = 0x6c
	int _phase;	// 112 = 0x70
	int _state;	// 116 = 0x74
	float _runningPowerLevels[5];	// 120 = 0x78
	unsigned _powerPointer;	// 140 = 0x8c
	CADisplayLink *_displayLink;	// 144 = 0x90
	double _releaseStart;	// 148 = 0x94
	float _releaseLevel;	// 156 = 0x9c
}
- (id)initWithFrame:(CGRect)frame;	// 0x31fab3b9
- (float)_adjustedDuration:(float)duration;	// 0x31fabc21
- (double)_animationInterval;	// 0x31fab919
- (id)_attackKeyFrameAnimation;	// 0x31fabda9
- (void)_clearDisplayLink;	// 0x31fac5ad
- (float)_currentMicPowerLevel;	// 0x31fabbd5
- (id)_decayKeyFrameAnimation;	// 0x31fabfb1
- (id)_emptyMicImage;	// 0x31fab985
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;	// 0x31fabc99
- (float)_powerLevelForMicPower:(float)micPower;	// 0x31fabb71
- (void)_removeAnimationsAndClearLayers;	// 0x31fabc45
- (void)_reset;	// 0x31fab9d1
- (void)_resetRunningPowerLevels;	// 0x31faba61
- (void)_startAttack;	// 0x31fabf45
- (void)_startDecay;	// 0x31fac175
- (void)_startListening;	// 0x31fac5e9
- (void)_startRelease;	// 0x31fac411
- (void)_startSustain;	// 0x31fac2c9
- (id)_sustainKeyFrameAnimation;	// 0x31fac1d1
- (void)_updateListeningAnimation:(id)animation;	// 0x31fac549
- (float)_updateMedianWithNewValue:(float)newValue;	// 0x31fabaad
- (void)_updateReleaseAnimation:(id)animation;	// 0x31fac321
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x31fac71d
- (void)dealloc;	// 0x31fab7fd
- (id)imageForMicLevel:(float)micLevel;	// 0x31fabd69
- (void)layoutSubviews;	// 0x31fab889
- (void)setState:(int)state;	// 0x31fab941
@end

