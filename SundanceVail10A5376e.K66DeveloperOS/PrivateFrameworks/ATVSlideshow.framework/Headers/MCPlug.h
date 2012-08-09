/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCActionSupport.h"

@class MCContainer, NSSet, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport> {
	unsigned long mFlags;	// 16 = 0x10
	NSMutableSet *mAnimationPaths;	// 20 = 0x14
	NSMutableDictionary *mActions;	// 24 = 0x18
	MCContainer *mContainer;	// 28 = 0x1c
	double mPhaseInDuration;	// 32 = 0x20
	double mLoopDuration;	// 40 = 0x28
	double mPhaseOutDuration;	// 48 = 0x30
	double mNumberOfLoops;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x36317629; 
@property(readonly, assign) NSSet *animationPaths;	// G=0x36316329; 
@property(retain) MCContainer *container;	// G=0x36315435; S=0x36315539; @synthesize=mContainer
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x36317779; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x36316479; 
@property(readonly, assign, nonatomic) double fullDuration;	// G=0x36315711; 
@property(assign, nonatomic) double loopDuration;	// G=0x36315ced; S=0x363156a1; @synthesize=mLoopDuration
@property(assign, nonatomic) double numberOfLoops;	// G=0x36315d1d; S=0x3631576d; @synthesize=mNumberOfLoops
@property(assign, nonatomic) double phaseInDuration;	// G=0x36315cd5; S=0x36315669; @synthesize=mPhaseInDuration
@property(assign, nonatomic) double phaseOutDuration;	// G=0x36315d05; S=0x363156d9; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) BOOL preactivatesWithParent;	// G=0x363157d1; S=0x363157e5; 
@property(assign, nonatomic) BOOL startsPaused;	// G=0x36315799; S=0x363157ad; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x36314d29
- (id)init;	// 0x36314e05
- (void)initActionsWithImprints:(id)imprints;	// 0x363171cd
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x36315d35
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x36314e51
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36315809
- (id)actionForKey:(id)key;	// 0x3631787d
// declared property getter: - (id)actions;	// 0x36317629
- (void)addAnimationPath:(id)path;	// 0x3631684d
- (id)animationPathForKey:(id)key;	// 0x3631657d
// declared property getter: - (id)animationPaths;	// 0x36316329
// declared property getter: - (id)container;	// 0x36315435
// declared property getter: - (unsigned)countOfActions;	// 0x36317779
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x36316479
- (void)demolish;	// 0x363150a1
- (void)demolishActions;	// 0x36317329
- (void)demolishAnimationPaths;	// 0x36315f59
// declared property getter: - (double)fullDuration;	// 0x36315711
- (id)imprint;	// 0x36315109
- (id)imprintsForActions;	// 0x36317511
- (id)imprintsForAnimationPaths;	// 0x36316229
// declared property getter: - (double)loopDuration;	// 0x36315ced
// declared property getter: - (double)numberOfLoops;	// 0x36315d1d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x363153c9
// declared property getter: - (double)phaseInDuration;	// 0x36315cd5
// declared property getter: - (double)phaseOutDuration;	// 0x36315d05
// declared property getter: - (BOOL)preactivatesWithParent;	// 0x363157d1
- (void)removeActionForKey:(id)key;	// 0x36317b25
- (void)removeAllActions;	// 0x36317c35
- (void)removeAllAnimationPaths;	// 0x36316e89
- (void)removeAnimationPathForKey:(id)key;	// 0x36316b1d
- (void)setAction:(id)action forKey:(id)key;	// 0x363179b1
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36315b15
// declared property setter: - (void)setContainer:(id)container;	// 0x36315539
// declared property setter: - (void)setLoopDuration:(double)duration;	// 0x363156a1
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3631576d
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36315669
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x363156d9
// declared property setter: - (void)setPreactivatesWithParent:(BOOL)parent;	// 0x363157e5
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x363157ad
// declared property getter: - (BOOL)startsPaused;	// 0x36315799
@end
