/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateToggleButton.h"
#import "UIKit-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {
	UIView *_pocketShadow;	// 236 = 0xec
	UIView *_borderLine;	// 240 = 0xf0
	UIImage *_backgroundNormal;	// 244 = 0xf4
	UIImage *_backgroundHighlighted;	// 248 = 0xf8
	BOOL _drawsBackground;	// 252 = 0xfc
	BOOL _drawsPocketShadow;	// 253 = 0xfd
}
@property(assign, nonatomic) BOOL drawsBackground;	// G=0x2f90ee35; S=0x2f90ed3d; @synthesize=_drawsBackground
@property(assign, nonatomic) BOOL drawsPocketShadow;	// G=0x2f90ee45; S=0x2f90ede5; @synthesize=_drawsPocketShadow
- (id)initWithFrame:(CGRect)frame;	// 0x2f90e685
- (void)dealloc;	// 0x2f90e82d
// declared property getter: - (BOOL)drawsBackground;	// 0x2f90ee35
// declared property getter: - (BOOL)drawsPocketShadow;	// 0x2f90ee45
// declared property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x2f90ed3d
// declared property setter: - (void)setDrawsPocketShadow:(BOOL)shadow;	// 0x2f90ede5
- (void)setFrame:(CGRect)frame;	// 0x2f90e8b9
- (void)setHighlighted:(BOOL)highlighted;	// 0x2f90ea09
- (void)setSelected:(BOOL)selected;	// 0x2f90e9b5
- (id)toggleButtonBackgroundImageWithHighlight:(BOOL)highlight;	// 0x2f90eb05
- (void)updateBackgroundImages;	// 0x2f90ea5d
@end

