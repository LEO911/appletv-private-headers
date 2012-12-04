/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRImage;

@interface MRPatchworkPatch : NSObject {
	MRImage *_image;	// 4 = 0x4
	CGRect rectangle;	// 8 = 0x8
	BOOL needsBlend;	// 24 = 0x18
}
@property(retain, nonatomic) MRImage *image;	// G=0x324da44d; S=0x324da45d; @synthesize=_image
@property(assign, nonatomic) BOOL needsBlend;	// G=0x324da4ad; S=0x324da4bd; @synthesize
@property(assign, nonatomic) CGRect rectangle;	// G=0x324da46d; S=0x324da491; @synthesize
- (id)initWithImage:(id)image rectangle:(CGRect)rectangle needsBlend:(BOOL)blend;	// 0x324da365
- (void)dealloc;	// 0x324da3fd
// declared property getter: - (id)image;	// 0x324da44d
// declared property getter: - (BOOL)needsBlend;	// 0x324da4ad
// declared property getter: - (CGRect)rectangle;	// 0x324da46d
// declared property setter: - (void)setImage:(id)image;	// 0x324da45d
// declared property setter: - (void)setNeedsBlend:(BOOL)blend;	// 0x324da4bd
// declared property setter: - (void)setRectangle:(CGRect)rectangle;	// 0x324da491
@end
