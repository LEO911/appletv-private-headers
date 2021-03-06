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
@property(readonly, assign) NSString *depthNormalization;	// G=0x365c9709; 
@property(readonly, assign) unsigned long faceCount;	// G=0x365c96ad; 
@property(readonly, assign) int subdivisionSteps;	// G=0x365c976d; 
@property(readonly, assign) unsigned long vertexCount;	// G=0x365c9661; 
+ (id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x365c9261
- (id)init;	// 0x365c92f9
- (id)initWithCoder:(id)coder;	// 0x365c9da9
- (id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x365c9361
- (Object *)CA_copyRenderValue;	// 0x365c977d
- (float)CA_distanceToValue:(id)value;	// 0x365ca185
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x365c9e85
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x365ca07d
- (BOOL)_constructWithData:(id)data;	// 0x365c97e5
- (id)_data;	// 0x365c9a79
- (id)_init;	// 0x365c9311
- (id)_initWithMeshTransform:(id)meshTransform;	// 0x365c95d9
- (id)_subdivideToDepth:(int)depth;	// 0x365c9c69
- (id)copyWithZone:(NSZone *)zone;	// 0x365c979d
- (void)dealloc;	// 0x365c92b5
// declared property getter: - (id)depthNormalization;	// 0x365c9709
- (void)encodeWithCoder:(id)coder;	// 0x365c9d01
- (CAMeshFace)faceAtIndex:(unsigned long)index;	// 0x365c96c5
// declared property getter: - (unsigned long)faceCount;	// 0x365c96ad
- (id)meshTransformForLayer:(id)layer;	// 0x365ca1ad
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x365c97ad
// declared property getter: - (int)subdivisionSteps;	// 0x365c976d
- (CAMeshVertex)vertexAtIndex:(unsigned long)index;	// 0x365c9679
// declared property getter: - (unsigned long)vertexCount;	// 0x365c9661
@end

