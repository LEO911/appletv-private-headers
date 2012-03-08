/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
@private
	CGSize mNaturalSize;	// 4 = 0x4
	CGSize mSize;	// 12 = 0xc
	BOOL mSizesLocked;	// 20 = 0x14
	BOOL mAspectRatioLocked;	// 21 = 0x15
	CGPoint mPosition;	// 24 = 0x18
	float mAngle;	// 32 = 0x20
	BOOL mHorizontalFlip;	// 36 = 0x24
	BOOL mVerticalFlip;	// 37 = 0x25
	float mShearXAngle;	// 40 = 0x28
	float mShearYAngle;	// 44 = 0x2c
}
@property(assign) float angle;	// G=0x33bfae75; S=0x33bfae85; converted property
@property(assign) CGSize naturalSize;	// G=0x33bfadd1; S=0x33bfade9; converted property
@property(assign) CGPoint position;	// G=0x33bfae49; S=0x33bfae61; converted property
@property(assign) CGSize size;	// G=0x33bfadfd; S=0x33bfae15; converted property
+ (CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;	// 0x33bfaefd
+ (const StateSpec *)stateForReading;	// 0x33bfadc5
+ (void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left4 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right6;	// 0x33bfb041
// converted property getter: - (float)angle;	// 0x33bfae75
- (BOOL)aspectRatioLocked;	// 0x33bfae39
- (BOOL)horizontalFlip;	// 0x33bfae95
- (CGRect)naturalBounds;	// 0x33bfaed5
// converted property getter: - (CGSize)naturalSize;	// 0x33bfadd1
- (CGPoint)nonrotatedPosition;	// 0x33bfb4c5
// converted property getter: - (CGPoint)position;	// 0x33bfae49
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33bfb6b9
// converted property setter: - (void)setAngle:(float)angle;	// 0x33bfae85
// converted property setter: - (void)setNaturalSize:(CGSize)size;	// 0x33bfade9
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x33bfae61
// converted property setter: - (void)setSize:(CGSize)size;	// 0x33bfae15
- (float)shearXAngle;	// 0x33bfaeb5
- (float)shearYAngle;	// 0x33bfaec5
// converted property getter: - (CGSize)size;	// 0x33bfadfd
- (CGSize)sizeOfBoundingBox;	// 0x33bfb54d
- (BOOL)sizesLocked;	// 0x33bfae29
- (CGAffineTransform)transform;	// 0x33bfb4a1
- (CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;	// 0x33bfb11d
- (BOOL)verticalFlip;	// 0x33bfaea5
@end
