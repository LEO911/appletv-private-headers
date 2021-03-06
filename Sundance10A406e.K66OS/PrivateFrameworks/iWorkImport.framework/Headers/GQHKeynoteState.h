/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


@interface GQHKeynoteState : GQHState {
	int mCurrentSlide;	// 108 = 0x6c
	CGSize mSlideSize;	// 112 = 0x70
	int mProgressiveIndex;	// 120 = 0x78
}
@property(assign) int progressiveIndex;	// G=0x3246e995; S=0x3246e9a5; converted property
@property(assign) CGSize slideSize;	// G=0x3246e95d; S=0x3246e975; converted property
- (id).cxx_construct;	// 0x3246e9f5
- (int)currentSlide;	// 0x3246e94d
- (void)incrementCurrentSlide;	// 0x3246e939
// converted property getter: - (int)progressiveIndex;	// 0x3246e995
// converted property setter: - (void)setProgressiveIndex:(int)index;	// 0x3246e9a5
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x3246e975
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x3246e989
- (BOOL)shouldStreamContent;	// 0x3246e9b5
// converted property getter: - (CGSize)slideSize;	// 0x3246e95d
@end

