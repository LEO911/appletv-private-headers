/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDatePickerMode.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Countdown : _UIDatePickerMode {
	float _componentWidth;	// 116 = 0x74
}
+ (int)datePickerMode;	// 0x330b7b59
+ (unsigned)extractableCalendarUnits;	// 0x330b7b5d
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x330b8095
- (BOOL)areValidDateComponents:(id)components comparingUnits:(int)units;	// 0x330b7f3d
- (id)dateComponentsByRestrictingSelectedComponents:(id)components withLastManipulatedColumn:(int)lastManipulatedColumn;	// 0x330b8005
- (id)font;	// 0x330b7bcd
- (int)hourForRow:(int)row;	// 0x330b7bdd
- (id)localizedFormatString;	// 0x330b7b61
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x330b8145
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x330b8151
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x330b7bbd
- (NSRange)rangeForCalendarUnit:(unsigned)calendarUnit;	// 0x330b7c8d
- (void)resetComponentWidths;	// 0x330b7ba9
- (float)rowHeight;	// 0x330b7ba1
- (void)takeExtremesFromMinimumDate:(id)minimumDate maximumDate:(id)date;	// 0x330b7b9d
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x330b7c89
- (id)titleForRow:(int)row inComponent:(int)component;	// 0x330b7be1
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x330b7cb5
@end

