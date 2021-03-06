/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, MRAction;

@interface MRAnimationTrigger : NSObject {
	MRAction *_action;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _lastValue;	// 12 = 0xc
	NSDictionary *_animationAttributes;	// 16 = 0x10
}
@property(retain, nonatomic) MRAction *action;	// G=0x343a97d1; S=0x343a9691; @synthesize=_action
@property(readonly, assign) NSDictionary *animationAttributes;	// G=0x343a9821; @synthesize=_animationAttributes
@property(readonly, assign) BOOL isArmed;	// G=0x343a9735; 
@property(assign) float lastValue;	// G=0x343a9801; S=0x343a9811; @synthesize=_lastValue
@property(assign) float startValue;	// G=0x343a97e1; S=0x343a97f1; @synthesize=_startValue
- (id)initWithAction:(id)action;	// 0x343a95a1
// declared property getter: - (id)action;	// 0x343a97d1
// declared property getter: - (id)animationAttributes;	// 0x343a9821
- (void)dealloc;	// 0x343a9619
- (void)disarm;	// 0x343a9761
// declared property getter: - (BOOL)isArmed;	// 0x343a9735
// declared property getter: - (float)lastValue;	// 0x343a9801
- (float)rearmIfNeededWithDefaultValue:(float)defaultValue;	// 0x343a9779
// declared property setter: - (void)setAction:(id)action;	// 0x343a9691
// declared property setter: - (void)setLastValue:(float)value;	// 0x343a9811
// declared property setter: - (void)setStartValue:(float)value;	// 0x343a97f1
// declared property getter: - (float)startValue;	// 0x343a97e1
@end

