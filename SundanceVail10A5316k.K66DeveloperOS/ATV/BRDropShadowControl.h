/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRDropShadowControl : BRControl {
	BRControl *_content;	// 80 = 0x50
	int _shadowStyle;	// 84 = 0x54
	float _sizeFactor;	// 88 = 0x58
}
@property(retain) BRControl *content;	// G=0x29f03d; S=0x29efb9; converted property
@property(assign) float shadowSizeFactor;	// G=0x29efa9; S=0x29ef71; converted property
@property(assign) int shadowStyle;	// G=0x29ef61; S=0x29ef39; converted property
- (id)init;	// 0x29ee8d
- (void)_updateImages;	// 0x29f301
// converted property getter: - (id)content;	// 0x29f03d
- (void)dealloc;	// 0x29eeed
- (void)layoutSubcontrols;	// 0x29f04d
// converted property setter: - (void)setContent:(id)content;	// 0x29efb9
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x29ef71
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x29ef39
// converted property getter: - (float)shadowSizeFactor;	// 0x29efa9
// converted property getter: - (int)shadowStyle;	// 0x29ef61
@end
