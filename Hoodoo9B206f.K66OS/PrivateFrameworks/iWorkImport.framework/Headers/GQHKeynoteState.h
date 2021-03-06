/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


__attribute__((visibility("hidden")))
@interface GQHKeynoteState : GQHState {
@private
	int mCurrentSlide;	// 108 = 0x6c
	CGSize mSlideSize;	// 112 = 0x70
	int mProgressiveIndex;	// 120 = 0x78
}
@property(assign) int progressiveIndex;	// G=0x33fe35c5; S=0x33fe35d5; converted property
@property(assign) CGSize slideSize;	// G=0x33fe358d; S=0x33fe35a5; converted property
- (int)currentSlide;	// 0x33fe357d
- (void)incrementCurrentSlide;	// 0x33fe3569
// converted property getter: - (int)progressiveIndex;	// 0x33fe35c5
// converted property setter: - (void)setProgressiveIndex:(int)index;	// 0x33fe35d5
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x33fe35a5
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x33fe35b9
- (BOOL)shouldStreamContent;	// 0x33fe35e5
// converted property getter: - (CGSize)slideSize;	// 0x33fe358d
@end

