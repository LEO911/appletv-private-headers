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
	int _assetTypeFlags;	// 16 = 0x10
}
@property(assign, nonatomic) int assetTypeFlags;	// G=0x307f0b25; S=0x307f0b35; @synthesize=_assetTypeFlags
@property(assign, nonatomic) float maximumLongSideLength;	// G=0x307f0b05; S=0x307f0b15; @synthesize=_maximumLongSideLength
@property(assign, nonatomic) float minimumLongSideLength;	// G=0x307f0ae5; S=0x307f0af5; @synthesize=_minimumLongSideLength
@property(assign, nonatomic) float nominalShortSideLength;	// G=0x307f0ac5; S=0x307f0ad5; @synthesize=_nominalShortSideLength
+ (id)assetsToGenerateFromImageWithInputSize:(CGSize)inputSize toConformToSpecifications:(id)specifications;	// 0x307f06a1
+ (id)specificationWithSharedAlbumSpecificationString:(id)sharedAlbumSpecificationString;	// 0x307f052d
// declared property getter: - (int)assetTypeFlags;	// 0x307f0b25
- (id)description;	// 0x307f0439
// declared property getter: - (float)maximumLongSideLength;	// 0x307f0b05
// declared property getter: - (float)minimumLongSideLength;	// 0x307f0ae5
// declared property getter: - (float)nominalShortSideLength;	// 0x307f0ac5
- (float)scaleFactorForInputSize:(CGSize)inputSize;	// 0x307f0355
// declared property setter: - (void)setAssetTypeFlags:(int)flags;	// 0x307f0b35
// declared property setter: - (void)setMaximumLongSideLength:(float)length;	// 0x307f0b15
// declared property setter: - (void)setMinimumLongSideLength:(float)length;	// 0x307f0af5
// declared property setter: - (void)setNominalShortSideLength:(float)length;	// 0x307f0ad5
@end

