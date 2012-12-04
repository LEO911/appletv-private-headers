/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewUIDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVPhotoCarouselViewUIDelegateTransitionImpl : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	XXStruct_40SSZC _preferredImageSize;	// 4 = 0x4
	int _transitioningTo;	// 12 = 0xc
	double _setupAnimationDuration;	// 16 = 0x10
	float _reflectionAmount;	// 24 = 0x18
	XXStruct_40SSZC _centerImageSize;	// 28 = 0x1c
	int _originallyTransitioningFrom;	// 36 = 0x24
}
@property(assign, nonatomic) XXStruct_40SSZC centerImageSize;	// G=0x3ce0f5; S=0x3ce10d; @synthesize=_centerImageSize
@property(assign, nonatomic) int originallyTransitioningFrom;	// G=0x3ce121; S=0x3ce131; @synthesize=_originallyTransitioningFrom
@property(assign, nonatomic) XXStruct_40SSZC preferredImageSize;	// G=0x3ce05d; S=0x3ce075; @synthesize=_preferredImageSize
@property(assign, nonatomic) float reflectionAmount;	// G=0x3ce0d5; S=0x3ce0e5; @synthesize=_reflectionAmount
@property(assign, nonatomic) double setupAnimationDuration;	// G=0x3ce0a9; S=0x3ce0c1; @synthesize=_setupAnimationDuration
@property(assign, nonatomic) int transitioningTo;	// G=0x3ce089; S=0x3ce099; @synthesize=_transitioningTo
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x3cc9f9
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x3cc9a1
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x3ccab1
// declared property getter: - (XXStruct_40SSZC)centerImageSize;	// 0x3ce0f5
// declared property getter: - (int)originallyTransitioningFrom;	// 0x3ce121
// declared property getter: - (XXStruct_40SSZC)preferredImageSize;	// 0x3ce05d
// declared property getter: - (float)reflectionAmount;	// 0x3ce0d5
// declared property setter: - (void)setCenterImageSize:(XXStruct_40SSZC)size;	// 0x3ce10d
// declared property setter: - (void)setOriginallyTransitioningFrom:(int)from;	// 0x3ce131
// declared property setter: - (void)setPreferredImageSize:(XXStruct_40SSZC)size;	// 0x3ce075
// declared property setter: - (void)setReflectionAmount:(float)amount;	// 0x3ce0e5
// declared property setter: - (void)setSetupAnimationDuration:(double)duration;	// 0x3ce0c1
// declared property setter: - (void)setTransitioningTo:(int)to;	// 0x3ce099
// declared property getter: - (double)setupAnimationDuration;	// 0x3ce0a9
// declared property getter: - (int)transitioningTo;	// 0x3ce089
@end
