/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRVerticalDividerControl : BRControl {
	int _heightStyle;	// 84 = 0x54
}
@property(assign) int heightStyle;	// G=0x2e0199; S=0x2e0179; converted property
- (id)init;	// 0x2dff75
- (void)drawRect:(CGRect)rect;	// 0x2e0051
// converted property getter: - (int)heightStyle;	// 0x2e0199
// converted property setter: - (void)setHeightStyle:(int)style;	// 0x2e0179
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2dffcd
@end
