/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionLozengeLayer.h"
#import "AppleTV-Structs.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
	ATVImage *_topImage;	// 88 = 0x58
	ATVImage *_bottomImage;	// 92 = 0x5c
	BOOL _brighterImage;	// 96 = 0x60
	BOOL _focusedImage;	// 97 = 0x61
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x376909; S=0x3768dd; converted property
- (id)init;	// 0x37681d
- (void)_updateImages;	// 0x376a39
- (void)dealloc;	// 0x376879
- (void)drawRect:(CGRect)rect;	// 0x376949
- (void)layoutSubcontrols;	// 0x376945
- (void)setFocused:(BOOL)focused;	// 0x376919
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x3768dd
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x376909
@end
