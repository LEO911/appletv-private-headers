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
@interface UIDatePickerWeekMonthDayView : UIView {
@private
	UILabel *_dateLabel;	// 48 = 0x30
	UILabel *_weekdayLabel;	// 52 = 0x34
	float _weekdayWidth;	// 56 = 0x38
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _datePickerWeekMonthDayViewFlags;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) UILabel *dateLabel;	// G=0x35497401; @synthesize=_dateLabel
@property(readonly, assign, nonatomic) UILabel *weekdayLabel;	// G=0x3549797d; @synthesize=_weekdayLabel
@property(assign, nonatomic) BOOL weekdayLast;	// G=0x3567b909; S=0x3549798d; 
@property(assign, nonatomic) float weekdayWidth;	// G=0x3567b91d; S=0x354979b9; @synthesize=_weekdayWidth
- (id)initWithFrame:(CGRect)frame;	// 0x3549712d
// declared property getter: - (id)dateLabel;	// 0x35497401
- (void)dealloc;	// 0x3549dae5
- (void)layoutSubviews;	// 0x354980e1
// declared property setter: - (void)setWeekdayLast:(BOOL)last;	// 0x3549798d
// declared property setter: - (void)setWeekdayWidth:(float)width;	// 0x354979b9
// declared property getter: - (id)weekdayLabel;	// 0x3549797d
// declared property getter: - (BOOL)weekdayLast;	// 0x3567b909
// declared property getter: - (float)weekdayWidth;	// 0x3567b91d
@end

