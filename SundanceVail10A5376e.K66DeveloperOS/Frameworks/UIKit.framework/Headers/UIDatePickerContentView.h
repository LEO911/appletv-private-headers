/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView {
	UILabel *_titleLabel;	// 84 = 0x54
	float _titleLabelMaxX;	// 88 = 0x58
	int _alignment;	// 92 = 0x5c
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _datePickerContentViewFlags;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL isAmPm;	// G=0x305998bd; S=0x305998d1; 
@property(assign, nonatomic) int titleAlignment;	// G=0x30599931; S=0x303c94a1; @synthesize=_alignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x303c9419; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x30599921; S=0x30599901; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x303c92ed
- (void)dealloc;	// 0x303cd2b5
// declared property getter: - (BOOL)isAmPm;	// 0x305998bd
- (void)layoutSubviews;	// 0x303ca971
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x305998d1
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x303c94a1
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x30599901
// declared property getter: - (int)titleAlignment;	// 0x30599931
// declared property getter: - (id)titleLabel;	// 0x303c9419
// declared property getter: - (float)titleLabelMaxX;	// 0x30599921
@end
