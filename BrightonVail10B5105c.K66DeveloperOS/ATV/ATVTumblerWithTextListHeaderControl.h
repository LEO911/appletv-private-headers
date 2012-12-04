/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
	float _tumblerMaxWidth;	// 84 = 0x54
	BRTumblerControl *_tumbler;	// 88 = 0x58
	BRTextControl *_customText;	// 92 = 0x5c
	BOOL _customTextOnTop;	// 96 = 0x60
}
@property(readonly, assign) BRTextControl *customText;	// G=0x112fd1; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x112fe5; S=0x112a0d; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x112fbd; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x112f9d; S=0x112fad; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x1128f1
- (id)accessibilityLabel;	// 0x112f35
- (BOOL)brEventAction:(id)action;	// 0x112a39
// declared property getter: - (id)customText;	// 0x112fd1
// declared property getter: - (BOOL)customTextOnTop;	// 0x112fe5
- (void)dealloc;	// 0x1129a9
- (void)layoutSubcontrols;	// 0x112b75
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x112a0d
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x112fad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x112a5d
// declared property getter: - (id)tumbler;	// 0x112fbd
// declared property getter: - (float)tumblerMaxWidth;	// 0x112f9d
@end
