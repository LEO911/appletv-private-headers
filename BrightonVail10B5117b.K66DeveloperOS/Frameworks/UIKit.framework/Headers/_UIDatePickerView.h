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

@class UIDatePicker, UILabel, NSDate, NSLocale, NSCalendar, NSTimeZone, NSDateComponents, _UIDatePickerMode;

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
@property(assign, nonatomic, getter=_allowsZeroCountdownDuration, setter=_setAllowsZeroCountdownDuration:) BOOL allowsZeroCountdownDuration;	// G=0x330b4981; S=0x330b4771; @synthesize=_allowsZeroCountdownDuration
@property(assign, nonatomic) double countDownDuration;	// G=0x330b45a9; S=0x330b4479; 
@property(copy, nonatomic) NSDate *date;	// G=0x32e39b1d; S=0x330b37a5; 
@property(copy, nonatomic) NSDateComponents *dateComponents;	// G=0x330b43fd; S=0x330b4435; 
@property(assign, nonatomic) int datePickerMode;	// G=0x330b3975; S=0x32e39799; 
@property(assign, nonatomic) id delegateOfDatePicker;	// G=0x330b4961; S=0x330b4971; @synthesize=_delegateOfDatePicker
@property(readonly, assign, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;	// G=0x330b3539; 
@property(assign, nonatomic) BOOL highlightsToday;	// G=0x32e40851; S=0x330b43d9; 
@property(copy, nonatomic) NSDate *maximumDate;	// G=0x330b494d; S=0x330b37e5; @synthesize=_userSuppliedMaximumDate
@property(copy, nonatomic) NSDate *minimumDate;	// G=0x330b4939; S=0x32e41e75; @synthesize=_userSuppliedMinimumDate
@property(assign, nonatomic) int minuteInterval;	// G=0x330b39fd; S=0x330b3995; 
@property(assign, nonatomic) BOOL staggerTimeIntervals;	// G=0x330b3a8d; S=0x330b3a1d; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x32e39731; S=0x330b36c5; @synthesize=_timeZone
@property(copy, nonatomic) NSCalendar *userProvidedCalendar;	// G=0x330b34fd; S=0x330b33f9; 
@property(retain, nonatomic) NSLocale *userProvidedLocale;	// G=0x330b3675; S=0x330b3551; 
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x32e3bb25; S=0x330b473d; 
- (id)initWithFrame:(CGRect)frame;	// 0x32e38941
// declared property getter: - (BOOL)_allowsZeroCountdownDuration;	// 0x330b4981
- (int)_amPmValue;	// 0x330b3aa1
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)components withLastManipulatedComponent:(int)lastManipulatedComponent;	// 0x32e41a4d
- (void)_datePickerReset:(id)reset;	// 0x330b320d
- (void)_doneLoadingDateOrTime;	// 0x330b327d
- (void)_fadeLabelForCalendarUnit:(unsigned)calendarUnit toText:(id)text animated:(BOOL)animated;	// 0x330b4071
// declared property getter: - (BOOL)_hasCustomCalendar;	// 0x330b3539
- (BOOL)_hasCustomLocale;	// 0x330b36ad
- (id)_hoursStringForHour:(int)hour;	// 0x330b3be1
- (id)_hrMinFont;	// 0x330b3925
- (BOOL)_isCurrentCalendar:(id)calendar;	// 0x330b32e5
- (id)_labelForCalendarUnit:(unsigned)calendarUnit createIfNecessary:(BOOL)necessary;	// 0x330b3c11
- (id)_lastSelectedDateComponents;	// 0x330b3b8d
- (void)_loadDate:(id)date animated:(BOOL)animated;	// 0x32e3a699
- (id)_makeNewAccessoryLabel;	// 0x330b3f55
- (id)_minutesStringForHour:(int)hour minutes:(int)minutes;	// 0x330b3ba1
- (void)_positionLabel:(id)label forCalendarUnit:(unsigned)calendarUnit relativeTo:(id)to order:(int)order;	// 0x330b3d5d
- (void)_rebuildCompositeLocale;	// 0x32e38e65
- (void)_resetSelectionOfTables;	// 0x330b469d
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x32e415b1
- (int)_selectedHourForColumn:(int)column;	// 0x330b3b15
- (int)_selectedMinuteForColumn:(int)column;	// 0x330b3b51
- (id)_selectedTextForCalendarUnit:(unsigned)calendarUnit;	// 0x330b4875
- (int)_selectionBarRowInComponent:(int)component;	// 0x330b484d
// declared property setter: - (void)_setAllowsZeroCountdownDuration:(BOOL)duration;	// 0x330b4771
- (void)_setDate:(id)date animated:(BOOL)animated forced:(BOOL)forced;	// 0x32e3a1d9
- (void)_setHidesLabels:(BOOL)labels;	// 0x330b46a1
- (void)_setLabel:(id)label forCalendarUnit:(unsigned)calendarUnit;	// 0x330b3ce1
- (void)_setMode:(id)mode;	// 0x32e399b9
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x330b473d
- (BOOL)_showingDate;	// 0x330b32a5
- (float)_tableRowHeight;	// 0x330b325d
- (void)_todayChanged:(id)changed;	// 0x330b31cd
- (BOOL)_updateDateOrTime;	// 0x330b4385
- (void)_updateEnabledCellsIncludingWMDCells:(BOOL)cells;	// 0x32e41abd
- (void)_updateLabels:(BOOL)labels;	// 0x32e41169
- (BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)lastManipulatedComponent;	// 0x32e4184d
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x32e3bb25
- (id)_viewForSelectedRowInComponent:(int)component;	// 0x330b47c1
- (id)calendar;	// 0x32e396dd
- (float)contentWidth;	// 0x330b4601
// declared property getter: - (double)countDownDuration;	// 0x330b45a9
// declared property getter: - (id)date;	// 0x32e39b1d
// declared property getter: - (id)dateComponents;	// 0x330b43fd
// declared property getter: - (int)datePickerMode;	// 0x330b3975
- (void)dealloc;	// 0x32e43251
// declared property getter: - (id)delegateOfDatePicker;	// 0x330b4961
// declared property getter: - (BOOL)highlightsToday;	// 0x32e40851
- (int)hour;	// 0x330b3895
- (void)layoutSubviews;	// 0x32e3a939
- (id)locale;	// 0x32e39e6d
// declared property getter: - (id)maximumDate;	// 0x330b494d
// declared property getter: - (id)minimumDate;	// 0x330b4939
- (int)minute;	// 0x330b38c5
// declared property getter: - (int)minuteInterval;	// 0x330b39fd
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x32e3a571
- (id)pickerImageNamePrefix;	// 0x32e3baa5
- (void)pickerTableView:(id)view didChangeSelectionBarRowFrom:(int)from to:(int)to;	// 0x32e416e5
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x32e42591
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x32e3e421
- (float)pickerView:(id)view rowHeightForComponent:(int)component;	// 0x32e3e1fd
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x32e3f071
- (float)pickerView:(id)view widthForComponent:(int)component;	// 0x32e3bf95
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x330b43c1
- (int)second;	// 0x330b38f5
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x330b4479
// declared property setter: - (void)setDate:(id)date;	// 0x330b37a5
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x32e42761
// declared property setter: - (void)setDateComponents:(id)components;	// 0x330b4435
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x32e39799
- (void)setDelegate:(id)delegate;	// 0x32e39745
// declared property setter: - (void)setDelegateOfDatePicker:(id)datePicker;	// 0x330b4971
- (void)setFrame:(CGRect)frame;	// 0x32e38d45
// declared property setter: - (void)setHighlightsToday:(BOOL)today;	// 0x330b43d9
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x330b37e5
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x32e41e75
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x330b3995
// declared property setter: - (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x330b3a1d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x330b36c5
// declared property setter: - (void)setUserProvidedCalendar:(id)calendar;	// 0x330b33f9
// declared property setter: - (void)setUserProvidedLocale:(id)locale;	// 0x330b3551
- (id)shadowColor;	// 0x330b4681
// declared property getter: - (BOOL)staggerTimeIntervals;	// 0x330b3a8d
// declared property getter: - (id)timeZone;	// 0x32e39731
// declared property getter: - (id)userProvidedCalendar;	// 0x330b34fd
// declared property getter: - (id)userProvidedLocale;	// 0x330b3675
@end

