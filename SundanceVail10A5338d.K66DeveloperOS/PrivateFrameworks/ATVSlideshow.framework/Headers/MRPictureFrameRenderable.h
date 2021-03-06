/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class NSString, MRImage;

@interface MRPictureFrameRenderable : MUPoolObject {
	MRImage *image;	// 8 = 0x8
	CGRect rect;	// 12 = 0xc
	CGRect innerRect;	// 28 = 0x1c
	CGRect outerRect;	// 44 = 0x2c
	NSString *where;	// 60 = 0x3c
	BOOL ignoreBlend;	// 64 = 0x40
	MRPictureFrameRenderable *next;	// 68 = 0x44
}
@property(retain, nonatomic) MRImage *image;	// G=0x33534de9; S=0x33534df9; @synthesize
@property(copy, nonatomic) NSString *where;	// G=0x33534e1d; S=0x33534e31; @synthesize
+ (XXStruct_raCX$B *)poolInfo;	// 0x33534d39
- (void)dealloc;	// 0x33534da9
// declared property getter: - (id)image;	// 0x33534de9
- (void)purge;	// 0x33534d49
// declared property setter: - (void)setImage:(id)image;	// 0x33534df9
// declared property setter: - (void)setWhere:(id)where;	// 0x33534e31
// declared property getter: - (id)where;	// 0x33534e1d
@end

