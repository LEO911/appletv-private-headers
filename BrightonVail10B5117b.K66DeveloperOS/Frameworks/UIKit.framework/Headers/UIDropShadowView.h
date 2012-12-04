/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView {
	float _cornerRadius;	// 84 = 0x54
	UIView *_contentView;	// 88 = 0x58
	UIView *_backgroundImage;	// 92 = 0x5c
	NSDictionary *_preservedLayerValues;	// 96 = 0x60
}
@property(assign, nonatomic) UIView *contentView;	// G=0x32fb2499; S=0x32fb21d1; @synthesize=_contentView
@property(assign) float cornerRadius;	// G=0x32fb246d; S=0x32fb2481; @synthesize=_cornerRadius
- (id)init;	// 0x32fb1c0d
// declared property getter: - (id)contentView;	// 0x32fb2499
// declared property getter: - (float)cornerRadius;	// 0x32fb246d
- (void)dealloc;	// 0x32fb1e05
- (void)didFinishRotation;	// 0x32fb241d
- (void)setBounds:(CGRect)bounds;	// 0x32fb2109
// declared property setter: - (void)setContentView:(id)view;	// 0x32fb21d1
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x32fb2481
- (void)setFrame:(CGRect)frame;	// 0x32fb2041
- (void)updateShadowPath;	// 0x32fb1e69
- (void)willBeginRotationWithOriginalBounds:(CGRect)originalBounds newBounds:(CGRect)bounds;	// 0x32fb239d
@end
