/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CABehavior.h"

@class NSArray;

@interface CADynamicsBehavior : CABehavior {
}
@property(assign) float angularDrag;	// G=0x33d75d11; S=0x33d75d29; 
@property(assign) double collisionInterval;	// G=0x33d75c69; S=0x33d75c8d; 
@property(assign) float drag;	// G=0x33d75ce1; S=0x33d75cf9; 
@property(copy) NSArray *forceFields;	// G=0x33d75b49; S=0x33d75b61; 
@property(assign) double minimumTimeStep;	// G=0x33d75bc1; S=0x33d75be5; 
@property(assign) BOOL reactsToCollisions;	// G=0x33d75d41; S=0x33d75d5d; 
@property(assign) float springScale;	// G=0x33d75cb1; S=0x33d75cc9; 
@property(copy) NSArray *springs;	// G=0x33d75b19; S=0x33d75b31; 
@property(assign) float stoppedAngularVelocity;	// G=0x33d75c39; S=0x33d75c51; 
@property(assign) float stoppedVelocity;	// G=0x33d75c09; S=0x33d75c21; 
@property(assign) double timeStep;	// G=0x33d75b79; S=0x33d75b9d; 
+ (id)defaultValueForKey:(id)key;	// 0x33d75891
- (Object *)CA_copyRenderValue;	// 0x33d75979
// declared property getter: - (float)angularDrag;	// 0x33d75d11
// declared property getter: - (double)collisionInterval;	// 0x33d75c69
// declared property getter: - (float)drag;	// 0x33d75ce1
// declared property getter: - (id)forceFields;	// 0x33d75b49
// declared property getter: - (double)minimumTimeStep;	// 0x33d75bc1
// declared property getter: - (BOOL)reactsToCollisions;	// 0x33d75d41
// declared property setter: - (void)setAngularDrag:(float)drag;	// 0x33d75d29
// declared property setter: - (void)setCollisionInterval:(double)interval;	// 0x33d75c8d
// declared property setter: - (void)setDrag:(float)drag;	// 0x33d75cf9
// declared property setter: - (void)setForceFields:(id)fields;	// 0x33d75b61
// declared property setter: - (void)setMinimumTimeStep:(double)step;	// 0x33d75be5
// declared property setter: - (void)setReactsToCollisions:(BOOL)collisions;	// 0x33d75d5d
// declared property setter: - (void)setSpringScale:(float)scale;	// 0x33d75cc9
// declared property setter: - (void)setSprings:(id)springs;	// 0x33d75b31
// declared property setter: - (void)setStoppedAngularVelocity:(float)velocity;	// 0x33d75c51
// declared property setter: - (void)setStoppedVelocity:(float)velocity;	// 0x33d75c21
// declared property setter: - (void)setTimeStep:(double)step;	// 0x33d75b9d
// declared property getter: - (float)springScale;	// 0x33d75cb1
// declared property getter: - (id)springs;	// 0x33d75b19
// declared property getter: - (float)stoppedAngularVelocity;	// 0x33d75c39
// declared property getter: - (float)stoppedVelocity;	// 0x33d75c09
// declared property getter: - (double)timeStep;	// 0x33d75b79
@end

