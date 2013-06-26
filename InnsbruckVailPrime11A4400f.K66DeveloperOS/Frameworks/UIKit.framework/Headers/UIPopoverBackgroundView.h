/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x2f8780dd; S=0x2f878155; 
@property(assign, nonatomic) float arrowOffset;	// G=0x2f877ff1; S=0x2f878069; 
+ (float)arrowBase;	// 0x2f878241
+ (float)arrowHeight;	// 0x2f8781c9
+ (UIEdgeInsets)contentViewInsets;	// 0x2f8782b9
+ (BOOL)wantsDefaultContentAppearance;	// 0x2f87839d
- (CGRect)_backgroundContentViewFrame;	// 0x2f87896d
- (CGRect)_contentViewFrame;	// 0x2f8788b1
- (UIEdgeInsets)_contentViewInsets;	// 0x2f87833d
- (UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned)arrowDirection;	// 0x2f878379
- (UIEdgeInsets)_shadowInsets;	// 0x2f8785b1
- (CGSize)_shadowOffset;	// 0x2f8785d1
- (float)_shadowOpacity;	// 0x2f8785c1
- (id)_shadowPath;	// 0x2f8785e1
- (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x2f8783c9
- (float)_shadowRadius;	// 0x2f8785c9
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x2f87873d
- (void)_updateShadow;	// 0x2f878641
- (BOOL)_wantsDefaultContentAppearance;	// 0x2f8783a1
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x2f878795
// declared property getter: - (unsigned)arrowDirection;	// 0x2f8780dd
// declared property getter: - (float)arrowOffset;	// 0x2f877ff1
- (int)backgroundStyle;	// 0x2f878b69
- (void)layoutSubviews;	// 0x2f878b29
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x2f878155
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x2f878069
@end
