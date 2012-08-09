/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class UIDatePicker, UILabel, NSDate, NSDateComponents, NSLocale, NSCalendar, NSTimeZone, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
	_UIDatePickerMode *_mode;	// 120 = 0x78
	NSTimeZone *_timeZone;	// 124 = 0x7c
	double _countDownDuration;	// 128 = 0x80
	UILabel *_hourLabel;	// 136 = 0x88
	UILabel *_minuteLabel;	// 140 = 0x8c
	UIDatePicker *_datePickerDelegate;	// 144 = 0x90
	id _delegateOfDatePicker;	// 148 = 0x94
	int _expectedAMPM;	// 152 = 0x98
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _datePickerFlags;	// 156 = 0x9c
	int _loadingDate;	// 160 = 0xa0
	NSDate *_userSuppliedDate;	// 164 = 0xa4
	NSDate *_userSuppliedMinimumDate;	// 168 = 0xa8
	NSDate *_userSuppliedMaximumDate;	// 172 = 0xac
	NSLocale *_compositeLocale;	// 176 = 0xb0
	NSLocale *_userProvidedLocale;	// 180 = 0xb4
	NSCalendar *_userProvidedCalendar;	// 184 = 0xb8
	NSDate *_minimumDate;	// 188 = 0xbc
	NSDate *_maximumDate;	// 192 = 0xc0
	NSDateComponents *_lastSelectedDateComponents;	// 196 = 0xc4
	BOOL _allowsZeroCountdownDuration;	// 200 = 0xc8
}
@property(assign, nonatomic, getter=_allowsZeroCountdownDuration, setter=_setAllowsZeroCountdownDuration:) BOOL allowsZeroCountdownDuration;	// G=0x33e0154d; S=0x33e0132d; @synthesize=_allowsZeroCountdownDuration
@property(assign, nonatomic) double countDownDuration;	// G=0x33e00d79; S=0x33e00c49; 
@property(copy, nonatomic) NSDate *date;	// G=0x33dff71d; S=0x33dff205; 
@property(copy, nonatomic) NSDateComponents *dateComponents;	// G=0x33e00bcd; S=0x33e00c05; 
@property(assign, nonatomic) int datePickerMode;	// G=0x33dffa35; S=0x33dff959; 
@property(assign, nonatomic) id delegateOfDatePicker;	// G=0x33e0152d; S=0x33e0153d; @synthesize=_delegateOfDatePicker
@property(readonly, assign, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;	// G=0x33dfefa1; 
@property(assign, nonatomic) BOOL highlightsToday;	// G=0x33e00bb9; S=0x33e00b99; 
@property(copy, nonatomic) NSDate *maximumDate;	// G=0x33e01519; S=0x33dff5dd; @synthesize=_userSuppliedMaximumDate
@property(copy, nonatomic) NSDate *minimumDate;	// G=0x33e01505; S=0x33dff52d; @synthesize=_userSuppliedMinimumDate
@property(assign, nonatomic) int minuteInterval;	// G=0x33dffabd; S=0x33dffa55; 
@property(assign, nonatomic) BOOL staggerTimeIntervals;	// G=0x33dffb4d; S=0x33dffadd; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x33e014f5; S=0x33dff125; @synthesize=_timeZone
@property(copy, nonatomic) NSCalendar *userProvidedCalendar;	// G=0x33dfef3d; S=0x33dfee39; 
@property(retain, nonatomic) NSLocale *userProvidedLocale;	// G=0x33dff0dd; S=0x33dfefb9; 
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x33e01319; S=0x33e012e9; 
- (id)initWithFrame:(CGRect)frame;	// 0x33dfe6d9
// declared property getter: - (BOOL)_allowsZeroCountdownDuration;	// 0x33e0154d
- (int)_amPmValue;	// 0x33dffb61
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)components withLastManipulatedComponent:(int)lastManipulatedComponent;	// 0x33dffe85
- (void)_datePickerReset:(id)reset;	// 0x33dfea4d
- (void)_doneLoadingDateOrTime;	// 0x33dfeb3d
- (void)_fadeLabelForCalendarUnit:(unsigned)calendarUnit toText:(id)text animated:(BOOL)animated;	// 0x33e00621
// declared property getter: - (BOOL)_hasCustomCalendar;	// 0x33dfefa1
- (id)_hoursStringForHour:(int)hour;	// 0x33e000d9
- (id)_hrMinFont;	// 0x33dff78d
- (BOOL)_isCurrentCalendar:(id)calendar;	// 0x33dfed25
- (id)_labelForCalendarUnit:(unsigned)calendarUnit createIfNecessary:(BOOL)necessary;	// 0x33e001c1
- (id)_lastSelectedDateComponents;	// 0x33dffe75
- (void)_loadDate:(id)date animated:(BOOL)animated;	// 0x33dffd49
- (id)_makeNewAccessoryLabel;	// 0x33e00505
- (id)_minutesStringForHour:(int)hour minutes:(int)minutes;	// 0x33e00099
- (void)_positionLabel:(id)label forCalendarUnit:(unsigned)calendarUnit relativeTo:(id)to order:(int)order;	// 0x33e0030d
- (void)_rebuildCompositeLocale;	// 0x33dfeba5
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x33dffd91
- (int)_selectedHourForColumn:(int)column;	// 0x33dffdfd
- (int)_selectedMinuteForColumn:(int)column;	// 0x33dffe39
- (id)_selectedTextForCalendarUnit:(unsigned)calendarUnit;	// 0x33e01431
- (int)_selectionBarRowInComponent:(int)component;	// 0x33e01409
// declared property setter: - (void)_setAllowsZeroCountdownDuration:(BOOL)duration;	// 0x33e0132d
- (void)_setDate:(id)date animated:(BOOL)animated forced:(BOOL)forced;	// 0x33dff299
- (void)_setHidesLabels:(BOOL)labels;	// 0x33e0124d
- (void)_setLabel:(id)label forCalendarUnit:(unsigned)calendarUnit;	// 0x33e00291
- (void)_setMode:(id)mode;	// 0x33dff7f9
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x33e012e9
- (BOOL)_showingDate;	// 0x33dfeb65
- (float)_tableRowHeight;	// 0x33dfea9d
- (void)_todayChanged:(id)changed;	// 0x33dfea0d
- (BOOL)_updateDateOrTime;	// 0x33e008e5
- (void)_updateEnabledCellsIncludingWMDCells:(BOOL)cells;	// 0x33e00a9d
- (void)_updateLabels:(BOOL)labels;	// 0x33e00109
- (BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)lastManipulatedComponent;	// 0x33dffef5
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x33e01319
- (id)_viewForSelectedRowInComponent:(int)component;	// 0x33e0137d
- (id)calendar;	// 0x33dfef75
- (float)contentWidth;	// 0x33e00dd1
// declared property getter: - (double)countDownDuration;	// 0x33e00d79
// declared property getter: - (id)date;	// 0x33dff71d
// declared property getter: - (id)dateComponents;	// 0x33e00bcd
// declared property getter: - (int)datePickerMode;	// 0x33dffa35
- (void)dealloc;	// 0x33dfe8a1
// declared property getter: - (id)delegateOfDatePicker;	// 0x33e0152d
// declared property getter: - (BOOL)highlightsToday;	// 0x33e00bb9
- (int)hour;	// 0x33dff68d
- (void)layoutSubviews;	// 0x33e01139
- (id)locale;	// 0x33dff115
// declared property getter: - (id)maximumDate;	// 0x33e01519
// declared property getter: - (id)minimumDate;	// 0x33e01505
- (int)minute;	// 0x33dff6bd
// declared property getter: - (int)minuteInterval;	// 0x33dffabd
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x33dff7d9
- (id)pickerImageNamePrefix;	// 0x33dfeabd
- (void)pickerTableView:(id)view didChangeSelectionBarRowFrom:(int)from to:(int)to;	// 0x33dffbd5
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x33e00921
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x33dffd29
- (float)pickerView:(id)view rowHeightForComponent:(int)component;	// 0x33e00e4d
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x33e00ee9
- (float)pickerView:(id)view widthForComponent:(int)component;	// 0x33e00e6d
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x33e00a89
- (int)second;	// 0x33dff6ed
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x33e00c49
// declared property setter: - (void)setDate:(id)date;	// 0x33dff205
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x33dff241
// declared property setter: - (void)setDateComponents:(id)components;	// 0x33e00c05
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x33dff959
- (void)setDelegate:(id)delegate;	// 0x33dffded
// declared property setter: - (void)setDelegateOfDatePicker:(id)datePicker;	// 0x33e0153d
- (void)setFrame:(CGRect)frame;	// 0x33e0101d
// declared property setter: - (void)setHighlightsToday:(BOOL)today;	// 0x33e00b99
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x33dff5dd
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x33dff52d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x33dffa55
// declared property setter: - (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x33dffadd
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x33dff125
// declared property setter: - (void)setUserProvidedCalendar:(id)calendar;	// 0x33dfee39
// declared property setter: - (void)setUserProvidedLocale:(id)locale;	// 0x33dfefb9
- (id)shadowColor;	// 0x33e01001
// declared property getter: - (BOOL)staggerTimeIntervals;	// 0x33dffb4d
// declared property getter: - (id)timeZone;	// 0x33e014f5
// declared property getter: - (id)userProvidedCalendar;	// 0x33dfef3d
// declared property getter: - (id)userProvidedLocale;	// 0x33dff0dd
@end
