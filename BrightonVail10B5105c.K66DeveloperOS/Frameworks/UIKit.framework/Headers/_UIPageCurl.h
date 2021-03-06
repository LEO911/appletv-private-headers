/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIPageCurlState, NSMutableArray, NSMutableSet, NSNumber, UIView;

@interface _UIPageCurl : NSObject {
	int _spineLocation;	// 4 = 0x4
	CGRect _contentRect;	// 8 = 0x8
	UIView *_contentView;	// 24 = 0x18
	_UIPageCurlState *_manualPageCurlState;	// 28 = 0x1c
	NSMutableArray *_pendingStateQueue;	// 32 = 0x20
	NSMutableArray *_activeStateQueue;	// 36 = 0x24
	NSMutableSet *_completedStates;	// 40 = 0x28
	double _delayBetweenSuccessiveAnimations;	// 44 = 0x2c
	float _pageDiagonalAngle;	// 52 = 0x34
	float _pageDiagonalLength;	// 56 = 0x38
	float _manualPageCurlMaxDAngle;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) BOOL _manualPageCurlInProgressAndUncommitted;	// G=0x348e179d; 
@property(assign, nonatomic, setter=_setManualPageCurlMaxDAngle:) float _manualPageCurlMaxDAngle;	// G=0x348e5c55; S=0x348e5c65; @synthesize
@property(readonly, assign, nonatomic) int _spineLocation;	// G=0x348e5c45; @synthesize
@property(readonly, assign, nonatomic) NSNumber *_wrappedManualPageCurlDirection;	// G=0x348e1819; 
- (id)initWithSpineLocation:(int)spineLocation andContentRect:(CGRect)rect inContentView:(id)contentView;	// 0x348e1455
- (void)_abortManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x348e5535
- (id)_animationKeyPaths;	// 0x348e3a85
- (BOOL)_areAnimationsInFlightOrPending;	// 0x348e17cd
- (float)_baseAngleOffsetForState:(id)state;	// 0x348e1da5
- (void)_beginCurlWithState:(id)state previousState:(id)state2;	// 0x348e49b1
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)callbacks;	// 0x348e4881
- (void)_cancelTransitionWithState:(id)state invalidatingPageCurl:(BOOL)curl;	// 0x348e4641
- (void)_cleanupState:(id)state;	// 0x348e4611
- (void)_completeManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x348e5505
- (float)_distanceToTravelWithCurrentSpineLocation;	// 0x348e2df1
- (float)_durationForManualCurlEndAnimationWithSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x348e4ff5
- (void)_endManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x348e5165
- (void)_enqueueCurlOfType:(int)type fromLocation:(CGPoint)location inDirection:(int)direction withView:(id)view revealingView:(id)view5 completion:(id)completion finally:(id)finally;	// 0x348e4151
- (void)_ensureCurlFilterOnLayer:(id)layer;	// 0x348e2375
- (void)_forceCleanupState:(id)state finished:(BOOL)finished completed:(BOOL)completed;	// 0x348e4625
- (void)_fromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x348e2365
- (float)_inputTimeForProgress:(float)progress distanceToTravel:(float)travel radius:(float *)radius minRadius:(float)radius4 angle:(float)angle dAngle:(float)angle6 touchLocation:(CGPoint)location state:(id)state;	// 0x348e2429
// declared property getter: - (BOOL)_isManualPageCurlInProgressAndUncommitted;	// 0x348e179d
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(int)type inDirection:(int)direction;	// 0x348e40d1
// declared property getter: - (float)_manualPageCurlMaxDAngle;	// 0x348e5c55
- (id)_newAnimationForState:(id)state withKeyPath:(id)keyPath duration:(float)duration fromValue:(id)value;	// 0x348e1bcd
- (id)_newCurlFilter;	// 0x348e1a5d
- (void)_pageCurlAnimationDidStop:(id)_pageCurlAnimation withState:(id)state;	// 0x348e5565
- (CGRect)_pageViewFrame:(BOOL)frame;	// 0x348e1989
- (BOOL)_populateFromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x348e1ee9
- (CGPoint)_referenceLocationForInitialLocation:(CGPoint)initialLocation direction:(int)direction;	// 0x348e3eb9
- (void)_setContentRect:(CGRect)rect;	// 0x348e1869
// declared property setter: - (void)_setManualPageCurlMaxDAngle:(float)angle;	// 0x348e5c65
// declared property getter: - (int)_spineLocation;	// 0x348e5c45
- (void)_updateCurlFromState:(id)state withTime:(float)time radius:(float)radius angle:(float)angle addingAnimations:(id)animations;	// 0x348e3ad1
- (void)_updateManualCurlToLocation:(CGPoint)location;	// 0x348e4f59
- (void)_updatedInputsFromState:(id)state forLocation:(CGPoint)location time:(float *)time radius:(float *)radius angle:(float *)angle;	// 0x348e2ef9
- (int)_validatedPageCurlTypeForPageCurlType:(int)pageCurlType inDirection:(int)direction;	// 0x348e408d
// declared property getter: - (id)_wrappedManualPageCurlDirection;	// 0x348e1819
- (void)dealloc;	// 0x348e16e9
@end

