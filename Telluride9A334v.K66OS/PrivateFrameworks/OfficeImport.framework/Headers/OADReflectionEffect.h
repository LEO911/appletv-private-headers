/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"


__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect {
@private
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x35786935; S=0x356b2821; converted property
@property(assign) float blurRadius;	// G=0x35786825; S=0x356b2411; converted property
@property(assign) float direction;	// G=0x35786895; S=0x356b2451; converted property
@property(assign) float distance;	// G=0x35786885; S=0x356b2441; converted property
@property(assign) float endOpacity;	// G=0x35786865; S=0x356b3e5d; converted property
@property(assign) float endPosition;	// G=0x35786875; S=0x356b2431; converted property
@property(assign) float fadeDirection;	// G=0x357868a5; S=0x357868b5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x35786945; S=0x356b2471; converted property
@property(assign) float startOpacity;	// G=0x35786835; S=0x356b2421; converted property
@property(assign) float startPosition;	// G=0x35786845; S=0x35786855; converted property
@property(assign) float xScale;	// G=0x357868c5; S=0x357868d5; converted property
@property(assign) float xSkew;	// G=0x357868f5; S=0x35786905; converted property
@property(assign) float yScale;	// G=0x357868e5; S=0x356b2461; converted property
@property(assign) float ySkew;	// G=0x35786915; S=0x35786925; converted property
- (id)init;	// 0x356b1ed5
// converted property getter: - (int)alignment;	// 0x35786935
// converted property getter: - (float)blurRadius;	// 0x35786825
- (id)copyWithZone:(NSZone *)zone;	// 0x35786e41
// converted property getter: - (float)direction;	// 0x35786895
// converted property getter: - (float)distance;	// 0x35786885
// converted property getter: - (float)endOpacity;	// 0x35786865
// converted property getter: - (float)endPosition;	// 0x35786875
// converted property getter: - (float)fadeDirection;	// 0x357868a5
- (unsigned)hash;	// 0x35786c91
- (BOOL)isEqual:(id)equal;	// 0x35786955
// converted property getter: - (BOOL)rotateWithShape;	// 0x35786945
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x356b2821
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x356b2411
// converted property setter: - (void)setDirection:(float)direction;	// 0x356b2451
// converted property setter: - (void)setDistance:(float)distance;	// 0x356b2441
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x356b3e5d
// converted property setter: - (void)setEndPosition:(float)position;	// 0x356b2431
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x357868b5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x356b2471
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x356b2421
// converted property setter: - (void)setStartPosition:(float)position;	// 0x35786855
- (void)setStyleColor:(id)color;	// 0x35786821
// converted property setter: - (void)setXScale:(float)scale;	// 0x357868d5
// converted property setter: - (void)setXSkew:(float)skew;	// 0x35786905
// converted property setter: - (void)setYScale:(float)scale;	// 0x356b2461
// converted property setter: - (void)setYSkew:(float)skew;	// 0x35786925
// converted property getter: - (float)startOpacity;	// 0x35786835
// converted property getter: - (float)startPosition;	// 0x35786845
// converted property getter: - (float)xScale;	// 0x357868c5
// converted property getter: - (float)xSkew;	// 0x357868f5
// converted property getter: - (float)yScale;	// 0x357868e5
// converted property getter: - (float)ySkew;	// 0x35786915
@end

