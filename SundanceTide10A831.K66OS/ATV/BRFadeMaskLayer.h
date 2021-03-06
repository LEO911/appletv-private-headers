/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
	float _topFadeHeight;	// 84 = 0x54
	float _bottomFadeHeight;	// 88 = 0x58
	float _leftFadeWidth;	// 92 = 0x5c
	float _rightFadeWidth;	// 96 = 0x60
	CGFunctionRef _shadingFunction;	// 100 = 0x64
	CGColorRef _fillColor;	// 104 = 0x68
}
@property(assign) float bottomFadeHeight;	// G=0x346325; S=0x3462ed; converted property
@property(assign) CGColorRef fillColor;	// G=0x346295; S=0x3461d1; 
@property(assign) float leftFadeWidth;	// G=0x34636d; S=0x346335; converted property
@property(assign) float rightFadeWidth;	// G=0x3463b5; S=0x34637d; converted property
@property(assign) float topFadeHeight;	// G=0x3462dd; S=0x3462a5; converted property
- (id)init;	// 0x345fd5
- (id)initWithLayout:(id)layout;	// 0x346035
// converted property getter: - (float)bottomFadeHeight;	// 0x346325
- (void)dealloc;	// 0x346175
- (void)drawRect:(CGRect)rect;	// 0x3463c5
// declared property getter: - (CGColorRef)fillColor;	// 0x346295
// converted property getter: - (float)leftFadeWidth;	// 0x34636d
// converted property getter: - (float)rightFadeWidth;	// 0x3463b5
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x3462ed
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x346661
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x3461d1
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x346335
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x34637d
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x3462a5
// converted property getter: - (float)topFadeHeight;	// 0x3462dd
@end

