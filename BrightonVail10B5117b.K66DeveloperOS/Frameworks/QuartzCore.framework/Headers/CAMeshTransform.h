/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {
	void *_impl;	// 4 = 0x4
	unsigned long _normalization;	// 8 = 0x8
	long _subdivisionSteps;	// 12 = 0xc
}
@property(readonly, assign) NSString *depthNormalization;	// G=0x32b882c1; 
@property(readonly, assign) unsigned long faceCount;	// G=0x32b88265; 
@property(readonly, assign) int subdivisionSteps;	// G=0x32b88325; 
@property(readonly, assign) unsigned long vertexCount;	// G=0x32b88219; 
+ (id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x32b87e19
- (id)init;	// 0x32b87eb1
- (id)initWithCoder:(id)coder;	// 0x32b88961
- (id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x32b87f19
- (Object *)CA_copyRenderValue;	// 0x32b88335
- (float)CA_distanceToValue:(id)value;	// 0x32b88d3d
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x32b88a3d
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x32b88c35
- (BOOL)_constructWithData:(id)data;	// 0x32b8839d
- (id)_data;	// 0x32b88631
- (id)_init;	// 0x32b87ec9
- (id)_initWithMeshTransform:(id)meshTransform;	// 0x32b88191
- (id)_subdivideToDepth:(int)depth;	// 0x32b88821
- (id)copyWithZone:(NSZone *)zone;	// 0x32b88355
- (void)dealloc;	// 0x32b87e6d
// declared property getter: - (id)depthNormalization;	// 0x32b882c1
- (void)encodeWithCoder:(id)coder;	// 0x32b888b9
- (CAMeshFace)faceAtIndex:(unsigned long)index;	// 0x32b8827d
// declared property getter: - (unsigned long)faceCount;	// 0x32b88265
- (id)meshTransformForLayer:(id)layer;	// 0x32b88d65
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b88365
// declared property getter: - (int)subdivisionSteps;	// 0x32b88325
- (CAMeshVertex)vertexAtIndex:(unsigned long)index;	// 0x32b88231
// declared property getter: - (unsigned long)vertexCount;	// 0x32b88219
@end
