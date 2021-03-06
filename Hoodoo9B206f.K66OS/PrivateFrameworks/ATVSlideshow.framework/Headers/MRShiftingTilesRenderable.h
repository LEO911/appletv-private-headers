/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRImage, MRCroppingSprite;

@interface MRShiftingTilesRenderable : NSObject {
	MRImage *slide;	// 4 = 0x4
	MRCroppingSprite *sprite;	// 8 = 0x8
	CGPoint position;	// 12 = 0xc
	CGSize size;	// 20 = 0x14
}
@property(retain, nonatomic) MRImage *slide;	// G=0x30b415f5; S=0x30b415b1; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x30b41605; S=0x30b41615; @synthesize
- (void)dealloc;	// 0x30b41539
// declared property setter: - (void)setSlide:(id)slide;	// 0x30b415b1
// declared property setter: - (void)setSprite:(id)sprite;	// 0x30b41615
// declared property getter: - (id)slide;	// 0x30b415f5
// declared property getter: - (id)sprite;	// 0x30b41605
@end

