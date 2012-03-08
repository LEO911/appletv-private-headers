/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIGradientBar : UIView {
	UIImageView *_topShineView;	// 48 = 0x30
	UIImageView *_gradientFillView;	// 52 = 0x34
	UIView *_bottomLineView;	// 56 = 0x38
	float _gradientHeight;	// 60 = 0x3c
}
@property(retain, nonatomic) UIColor *customBottomLineColor;	// G=0x330e541d; S=0x330e53d1; 
@property(retain, nonatomic) UIImage *customGradientFillImage;	// G=0x330e5345; S=0x330e52f9; 
@property(retain, nonatomic) UIImage *customTopShineImage;	// G=0x330e53b1; S=0x330e5365; 
+ (id)bottomLineColor;	// 0x32f61c09
+ (id)gradientFillImage;	// 0x32f61be9
+ (id)topShineImage;	// 0x32f61bf9
- (id)initWithFrame:(CGRect)frame;	// 0x32f61975
- (void)_tile;	// 0x32f61c51
// declared property getter: - (id)customBottomLineColor;	// 0x330e541d
// declared property getter: - (id)customGradientFillImage;	// 0x330e5345
// declared property getter: - (id)customTopShineImage;	// 0x330e53b1
- (void)dealloc;	// 0x330e543d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x330e5525
- (void)setBottomLineAlpha:(float)alpha;	// 0x330e54b1
// declared property setter: - (void)setCustomBottomLineColor:(id)color;	// 0x330e53d1
// declared property setter: - (void)setCustomGradientFillImage:(id)image;	// 0x330e52f9
// declared property setter: - (void)setCustomTopShineImage:(id)image;	// 0x330e5365
- (void)setFrame:(CGRect)frame;	// 0x32f61b41
- (void)setGradientHeight:(float)height;	// 0x330e54d1
@end
