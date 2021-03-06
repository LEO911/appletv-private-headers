/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDateTableCell.h"

@class UILabel, NSDate;

__attribute__((visibility("hidden")))
@interface UIWeekMonthDayTableCell : UIDateTableCell {
@private
	UILabel *_weekdayLabel;	// 80 = 0x50
	NSDate *_date;	// 84 = 0x54
	float _weekdayWidth;	// 88 = 0x58
	BOOL _weekdayLast;	// 92 = 0x5c
}
@property(retain) NSDate *date;	// G=0x301d7c85; S=0x301d7c95; converted property
- (id)_weekdayLabelColor;	// 0x301d7cf9
// converted property getter: - (id)date;	// 0x301d7c85
- (void)dealloc;	// 0x301d7c25
- (void)layoutSubviews;	// 0x301d8045
- (void)setBackgroundColor:(id)color;	// 0x301d7d51
// converted property setter: - (void)setDate:(id)date;	// 0x301d7c95
- (void)setWeekdayLast:(BOOL)last;	// 0x301d7cd9
- (void)setWeekdayString:(id)string;	// 0x301d7d99
- (void)setWeekdayWidth:(float)width;	// 0x301d7ce9
- (void)updateHighlightColors;	// 0x301d7f89
@end

