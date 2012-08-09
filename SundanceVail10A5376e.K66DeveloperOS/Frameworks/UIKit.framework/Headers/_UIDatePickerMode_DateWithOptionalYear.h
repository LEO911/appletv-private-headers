/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDatePickerMode_Date.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date {
}
+ (int)datePickerMode;	// 0x3063e975
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x3063ec01
- (id)dateComponentsByRestrictingSelectedComponents:(id)components withLastManipulatedColumn:(int)lastManipulatedColumn;	// 0x3063ec69
- (void)loadDate:(id)date animated:(BOOL)animated;	// 0x3063ea31
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x3063e97d
- (id)selectedDateComponents;	// 0x3063eb59
- (id)titleForRow:(int)row inComponent:(int)component;	// 0x3063e9c1
- (int)yearForRow:(int)row;	// 0x3063eb01
@end
