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
@property(assign, nonatomic) UIView *contentView;	// G=0x34866409; S=0x34866141; @synthesize=_contentView
@property(assign) float cornerRadius;	// G=0x348663dd; S=0x348663f1; @synthesize=_cornerRadius
- (id)init;	// 0x34865b7d
// declared property getter: - (id)contentView;	// 0x34866409
// declared property getter: - (float)cornerRadius;	// 0x348663dd
- (void)dealloc;	// 0x34865d75
- (void)didFinishRotation;	// 0x3486638d
- (void)setBounds:(CGRect)bounds;	// 0x34866079
// declared property setter: - (void)setContentView:(id)view;	// 0x34866141
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x348663f1
- (void)setFrame:(CGRect)frame;	// 0x34865fb1
- (void)updateShadowPath;	// 0x34865dd9
- (void)willBeginRotationWithOriginalBounds:(CGRect)originalBounds newBounds:(CGRect)bounds;	// 0x3486630d
@end

