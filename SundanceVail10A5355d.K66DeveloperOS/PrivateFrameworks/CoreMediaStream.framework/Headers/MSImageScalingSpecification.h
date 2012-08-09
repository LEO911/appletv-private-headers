/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSImageScalingSpecification : NSObject {
	float _nominalShortSideLength;	// 4 = 0x4
	float _minimumLongSideLength;	// 8 = 0x8
	float _maximumLongSideLength;	// 12 = 0xc
	int _assetType;	// 16 = 0x10
}
@property(assign, nonatomic) int assetType;	// G=0x33920d2d; S=0x33920d3d; @synthesize=_assetType
@property(assign, nonatomic) float maximumLongSideLength;	// G=0x33920d0d; S=0x33920d1d; @synthesize=_maximumLongSideLength
@property(assign, nonatomic) float minimumLongSideLength;	// G=0x33920ced; S=0x33920cfd; @synthesize=_minimumLongSideLength
@property(assign, nonatomic) float nominalShortSideLength;	// G=0x33920ccd; S=0x33920cdd; @synthesize=_nominalShortSideLength
+ (id)assetsToGenerateFromImageWithInputSize:(CGSize)inputSize toConformToSpecifications:(id)specifications;	// 0x33920905
+ (id)specificationWithSharedAlbumSpecificationString:(id)sharedAlbumSpecificationString;	// 0x33920791
// declared property getter: - (int)assetType;	// 0x33920d2d
- (id)description;	// 0x3392069d
// declared property getter: - (float)maximumLongSideLength;	// 0x33920d0d
// declared property getter: - (float)minimumLongSideLength;	// 0x33920ced
// declared property getter: - (float)nominalShortSideLength;	// 0x33920ccd
- (float)scaleFactorForInputSize:(CGSize)inputSize;	// 0x339205b9
// declared property setter: - (void)setAssetType:(int)type;	// 0x33920d3d
// declared property setter: - (void)setMaximumLongSideLength:(float)length;	// 0x33920d1d
// declared property setter: - (void)setMinimumLongSideLength:(float)length;	// 0x33920cfd
// declared property setter: - (void)setNominalShortSideLength:(float)length;	// 0x33920cdd
@end
