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
@private
	UILabel *_titleLabel;	// 48 = 0x30
	float _titleLabelMaxX;	// 52 = 0x34
	int _alignment;	// 56 = 0x38
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _datePickerContentViewFlags;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL isAmPm;	// G=0x30399121; S=0x301bd729; 
@property(assign, nonatomic) int titleAlignment;	// G=0x30399165; S=0x301bcf71; @synthesize=_alignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x301bc325; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x30399155; S=0x30399135; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x301bc209
- (void)dealloc;	// 0x301c133d
// declared property getter: - (BOOL)isAmPm;	// 0x30399121
- (void)layoutSubviews;	// 0x301bd21d
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x301bd729
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x301bcf71
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x30399135
// declared property getter: - (int)titleAlignment;	// 0x30399165
// declared property getter: - (id)titleLabel;	// 0x301bc325
// declared property getter: - (float)titleLabelMaxX;	// 0x30399155
@end
