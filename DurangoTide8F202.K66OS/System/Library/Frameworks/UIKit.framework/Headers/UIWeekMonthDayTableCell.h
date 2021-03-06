/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIDateTableCell.h"

@class NSDate, UILabel;

__attribute__((visibility("hidden")))
@interface UIWeekMonthDayTableCell : UIDateTableCell {
@private
	UILabel *_weekdayLabel;	// 76 = 0x4c
	NSDate *_date;	// 80 = 0x50
	float _weekdayWidth;	// 84 = 0x54
	BOOL _weekdayLast;	// 88 = 0x58
}
@property(retain) NSDate *date;	// G=0x3065e4b9; S=0x30655f3d; converted property
- (id)_weekdayLabelColor;	// 0x30656379
// converted property getter: - (id)date;	// 0x3065e4b9
- (void)dealloc;	// 0x30661041
- (void)layoutSubviews;	// 0x306570f9
- (void)setBackgroundColor:(id)color;	// 0x30656779
// converted property setter: - (void)setDate:(id)date;	// 0x30655f3d
- (void)setWeekdayLast:(BOOL)last;	// 0x306563d1
- (void)setWeekdayString:(id)string;	// 0x30655f79
- (void)setWeekdayWidth:(float)width;	// 0x306563e1
- (void)updateHighlightColors;	// 0x306e4a1d
@end

