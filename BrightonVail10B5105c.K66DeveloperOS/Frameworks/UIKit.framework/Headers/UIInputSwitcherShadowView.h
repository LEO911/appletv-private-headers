/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
	int m_mode;	// 84 = 0x54
	float m_pointerOffset;	// 88 = 0x58
	NSArray *m_gradientColors;	// 92 = 0x5c
}
@property(retain, nonatomic) NSArray *gradientColors;	// G=0x3491acd9; S=0x3491ace9; @synthesize=m_gradientColors
@property(assign, nonatomic) int mode;	// G=0x346a2791; S=0x3491aca9; @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// G=0x3491acb9; S=0x3491acc9; @synthesize=m_pointerOffset
- (id)initWithFrame:(CGRect)frame;	// 0x346a25f9
- (void)dealloc;	// 0x3491a6f1
- (void)drawRect:(CGRect)rect;	// 0x3491a741
// declared property getter: - (id)gradientColors;	// 0x3491acd9
// declared property getter: - (int)mode;	// 0x346a2791
// declared property getter: - (float)pointerOffset;	// 0x3491acb9
- (void)setFrame:(CGRect)frame;	// 0x346a2705
// declared property setter: - (void)setGradientColors:(id)colors;	// 0x3491ace9
// declared property setter: - (void)setMode:(int)mode;	// 0x3491aca9
// declared property setter: - (void)setPointerOffset:(float)offset;	// 0x3491acc9
@end

