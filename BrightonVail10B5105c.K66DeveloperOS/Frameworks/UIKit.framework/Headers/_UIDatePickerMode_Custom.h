/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIDatePickerMode.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
	NSString *_originalFormat;	// 116 = 0x74
	NSArray *_components;	// 120 = 0x78
	NSArray *_sortedComponents;	// 124 = 0x7c
	int _displayedUnits;	// 128 = 0x80
	int _desiredUnits;	// 132 = 0x84
}
@property(readonly, retain) NSArray *components;	// G=0x3496c6c5; converted property
- (id)initWithFormatString:(id)formatString datePickerView:(id)view;	// 0x3496c4e1
- (id)_componentForCalendarUnit:(unsigned)calendarUnit;	// 0x3496cad5
- (unsigned)calendarUnitForComponent:(int)component;	// 0x3496ca25
- (int)componentForCalendarUnit:(unsigned)calendarUnit;	// 0x3496ca61
// converted property getter: - (id)components;	// 0x3496c6c5
- (id)dateForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x3496d0fd
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x3496cdc9
- (void)dealloc;	// 0x3496c535
- (int)displayedCalendarUnits;	// 0x3496cc89
- (unsigned)extractableCalendarUnits;	// 0x3496cbad
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x3496d1d5
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x3496d215
- (void)noteCalendarChanged;	// 0x3496c5ad
- (unsigned)numberOfComponents;	// 0x3496cd55
- (int)numberOfRowsInComponent:(int)component;	// 0x3496cd7d
- (void)resetComponentWidths;	// 0x3496c5fd
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x3496cdf1
- (int)valueForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x3496d161
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x3496cdf5
@end
