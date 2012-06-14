/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class MRImage;

@interface MRFloatingRenderable : MUPoolObject {
	MRImage *slide;	// 8 = 0x8
	float modelViewMatrix[16];	// 12 = 0xc
	CGSize size;	// 76 = 0x4c
	float shadowWidth;	// 84 = 0x54
	float shadowHeight;	// 88 = 0x58
	unsigned vboOffsetPlain;	// 92 = 0x5c
	unsigned vboOffsetSoft;	// 96 = 0x60
	unsigned vboOffsetShadow;	// 100 = 0x64
	float aspectRatio;	// 104 = 0x68
	float originalScale;	// 108 = 0x6c
	MRFloatingRenderable *next;	// 112 = 0x70
}
@property(retain, nonatomic) MRImage *slide;	// G=0x30b628b5; S=0x30b62871; @synthesize
+ (void)initialize;	// 0x30b62661
+ (XXStruct_01lTDD *)poolInfo;	// 0x30b62651
- (void)dealloc;	// 0x30b627f5
- (void)purge;	// 0x30b62835
// declared property setter: - (void)setSlide:(id)slide;	// 0x30b62871
// declared property getter: - (id)slide;	// 0x30b628b5
@end
