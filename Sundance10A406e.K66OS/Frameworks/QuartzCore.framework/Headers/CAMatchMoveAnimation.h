/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CALayer, NSArray;

@interface CAMatchMoveAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x3054f39d; S=0x3054f3b5; 
@property(assign) BOOL appliesRotation;	// G=0x3054f36d; S=0x3054f385; 
@property(assign) BOOL appliesScale;	// G=0x3054f33d; S=0x3054f355; 
@property(assign) BOOL appliesX;	// G=0x3054f2dd; S=0x3054f2f5; 
@property(assign) BOOL appliesY;	// G=0x3054f30d; S=0x3054f325; 
@property(copy) NSString *keyPath;	// G=0x3054f275; S=0x3054f28d; 
@property(retain) CALayer *sourceLayer;	// G=0x3054f215; S=0x3054f22d; 
@property(copy) NSArray *sourcePoints;	// G=0x3054f245; S=0x3054f25d; 
@property(assign) BOOL targetsSuperlayer;	// G=0x3054f2a5; S=0x3054f2c1; 
+ (id)defaultValueForKey:(id)key;	// 0x3054e7ed
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x3054f1b5
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x3054f1f5
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x3054ef09
// declared property getter: - (BOOL)appliesRotation;	// 0x3054f36d
// declared property getter: - (BOOL)appliesScale;	// 0x3054f33d
// declared property getter: - (BOOL)appliesX;	// 0x3054f2dd
// declared property getter: - (BOOL)appliesY;	// 0x3054f30d
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3054e851
// declared property getter: - (BOOL)isAdditive;	// 0x3054f39d
// declared property getter: - (id)keyPath;	// 0x3054f275
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x3054f3b5
// declared property setter: - (void)setAppliesRotation:(BOOL)rotation;	// 0x3054f385
// declared property setter: - (void)setAppliesScale:(BOOL)scale;	// 0x3054f355
// declared property setter: - (void)setAppliesX:(BOOL)x;	// 0x3054f2f5
// declared property setter: - (void)setAppliesY:(BOOL)y;	// 0x3054f325
// declared property setter: - (void)setKeyPath:(id)path;	// 0x3054f28d
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x3054f22d
// declared property setter: - (void)setSourcePoints:(id)points;	// 0x3054f25d
// declared property setter: - (void)setTargetsSuperlayer:(BOOL)superlayer;	// 0x3054f2c1
// declared property getter: - (id)sourceLayer;	// 0x3054f215
// declared property getter: - (id)sourcePoints;	// 0x3054f245
// declared property getter: - (BOOL)targetsSuperlayer;	// 0x3054f2a5
@end
