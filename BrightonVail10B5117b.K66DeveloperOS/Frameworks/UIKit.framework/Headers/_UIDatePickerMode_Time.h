/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDatePickerMode.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time : _UIDatePickerMode {
	float _timeHourWidth;	// 116 = 0x74
	float _timeMinuteWidth;	// 120 = 0x78
	float _timeAMPMWidth;	// 124 = 0x7c
	NSString *_hourFormat;	// 128 = 0x80
	NSString *_minuteFormat;	// 132 = 0x84
}
+ (int)datePickerMode;	// 0x330b58a1
+ (unsigned)extractableCalendarUnits;	// 0x330b58a5
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x330b5ef9
- (void)_shouldReset:(id)reset;	// 0x330b5941
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x330b5a2d
- (void)dealloc;	// 0x330b58dd
- (int)displayedCalendarUnits;	// 0x330b58ad
- (id)font;	// 0x330b5ee9
- (id)localizedFormatString;	// 0x330b59b9
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x330b609d
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x330b60b5
- (void)noteCalendarChanged;	// 0x330b5c05
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x330b5c7d
- (void)resetComponentWidths;	// 0x330b5bd5
- (float)rowHeight;	// 0x330b5bcd
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x330b5c91
@end
