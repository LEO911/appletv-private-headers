/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CAAnimation;

__attribute__((visibility("hidden")))
@interface ATVChainedAnimationGroup : XXUnknownSuperclass {
	BOOL _evaluated;	// 4 = 0x4
	CAAnimation *_defaultFillerAnimation;	// 8 = 0x8
	NSMutableArray *_tuples;	// 12 = 0xc
}
@property(retain, nonatomic) CAAnimation *defaultFillerAnimation;	// G=0x103369; S=0x103379; @synthesize=_defaultFillerAnimation
@property(assign, nonatomic) BOOL evaluated;	// G=0x1033a1; S=0x1033b1; @synthesize=_evaluated
@property(retain, nonatomic) NSMutableArray *tuples;	// G=0x1033c1; S=0x1033d1; @synthesize=_tuples
- (void).cxx_destruct;	// 0x1033f9
- (void)_evaluateTuplesWithContinuationCheck;	// 0x102e01
- (void)_evaluateTuplesWithoutContinuationCheck;	// 0x102d0d
- (void)addChainedAnimation:(id)animation forKey:(id)key inView:(id)view;	// 0x1025b1
- (void)cleanUp;	// 0x102c2d
// declared property getter: - (id)defaultFillerAnimation;	// 0x103369
- (void)evaluate;	// 0x102701
// declared property getter: - (BOOL)evaluated;	// 0x1033a1
// declared property setter: - (void)setDefaultFillerAnimation:(id)animation;	// 0x103379
// declared property setter: - (void)setEvaluated:(BOOL)evaluated;	// 0x1033b1
// declared property setter: - (void)setTuples:(id)tuples;	// 0x1033d1
// declared property getter: - (id)tuples;	// 0x1033c1
@end

