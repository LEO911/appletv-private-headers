/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSDate, NSCalendar, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRCalendarMonthCell : BRControl {
@private
	NSDate *_date;	// 44 = 0x2c
	NSCalendar *_calendar;	// 48 = 0x30
	BRTextControl *_dayNumber;	// 52 = 0x34
	BRControl *_contents;	// 56 = 0x38
	BRControl *_border;	// 60 = 0x3c
	BRControl *_background;	// 64 = 0x40
	BRImageControl *_focusImage;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRControl *background;	// G=0x32a208a5; @synthesize=_background
@property(readonly, assign, nonatomic) BRControl *border;	// G=0x32a208b5; @synthesize=_border
@property(retain, nonatomic) NSCalendar *calendar;	// G=0x32a208d5; S=0x32a20f19; @synthesize=_calendar
@property(retain, nonatomic) BRControl *contents;	// G=0x32a208c5; S=0x32a208f5; @synthesize=_contents
@property(retain, nonatomic) NSDate *date;	// G=0x32a208e5; S=0x32a20ef1; @synthesize=_date
- (id)init;	// 0x32a20aed
// declared property getter: - (id)background;	// 0x32a208a5
// declared property getter: - (id)border;	// 0x32a208b5
// declared property getter: - (id)calendar;	// 0x32a208d5
// declared property getter: - (id)contents;	// 0x32a208c5
- (void)controlWasFocused;	// 0x32a209ed
- (void)controlWasUnfocused;	// 0x32a209a5
// declared property getter: - (id)date;	// 0x32a208e5
- (void)dealloc;	// 0x32a20a39
- (void)layoutSubcontrols;	// 0x32a20f41
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x32a20f19
// declared property setter: - (void)setContents:(id)contents;	// 0x32a208f5
// declared property setter: - (void)setDate:(id)date;	// 0x32a20ef1
- (void)setDate:(id)date inCalendar:(id)calendar;	// 0x32a20dc9
@end

