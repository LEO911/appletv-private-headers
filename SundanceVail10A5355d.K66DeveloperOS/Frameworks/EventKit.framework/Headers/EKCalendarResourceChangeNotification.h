/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarNotification.h"

@class NSNumber, NSDate, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {
	NSString *_location;	// 36 = 0x24
	NSString *_calendarName;	// 40 = 0x28
	NSDate *_startDate;	// 44 = 0x2c
	NSDate *_endDate;	// 48 = 0x30
	BOOL _allDay;	// 52 = 0x34
	NSString *_eventID;	// 56 = 0x38
	unsigned _changeType;	// 60 = 0x3c
	BOOL _dateChanged;	// 64 = 0x40
	BOOL _timeChanged;	// 65 = 0x41
	BOOL _locationChanged;	// 66 = 0x42
	BOOL _titleChanged;	// 67 = 0x43
	NSNumber *_createCount;	// 68 = 0x44
	NSNumber *_updateCount;	// 72 = 0x48
	NSNumber *_deleteCount;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL allDay;	// G=0x31fe19f1; S=0x31fe1a01; @synthesize=_allDay
@property(retain, nonatomic) NSString *calendarName;	// G=0x31fe1991; S=0x31fe19a1; @synthesize=_calendarName
@property(assign, nonatomic) unsigned changeType;	// G=0x31fe1a31; S=0x31fe1a41; @synthesize=_changeType
@property(retain, nonatomic) NSNumber *createCount;	// G=0x31fe1ad1; S=0x31fe1ae1; @synthesize=_createCount
@property(assign, nonatomic) BOOL dateChanged;	// G=0x31fe1a51; S=0x31fe1a61; @synthesize=_dateChanged
@property(retain, nonatomic) NSNumber *deleteCount;	// G=0x31fe1b11; S=0x31fe1b21; @synthesize=_deleteCount
@property(retain, nonatomic) NSDate *endDate;	// G=0x31fe19d1; S=0x31fe19e1; @synthesize=_endDate
@property(retain, nonatomic) NSString *eventID;	// G=0x31fe1a11; S=0x31fe1a21; @synthesize=_eventID
@property(retain, nonatomic) NSString *location;	// G=0x31fe1971; S=0x31fe1981; @synthesize=_location
@property(assign, nonatomic) BOOL locationChanged;	// G=0x31fe1a91; S=0x31fe1aa1; @synthesize=_locationChanged
@property(retain, nonatomic) NSDate *startDate;	// G=0x31fe19b1; S=0x31fe19c1; @synthesize=_startDate
@property(assign, nonatomic) BOOL timeChanged;	// G=0x31fe1a71; S=0x31fe1a81; @synthesize=_timeChanged
@property(assign, nonatomic) BOOL titleChanged;	// G=0x31fe1ab1; S=0x31fe1ac1; @synthesize=_titleChanged
@property(retain, nonatomic) NSNumber *updateCount;	// G=0x31fe1af1; S=0x31fe1b01; @synthesize=_updateCount
- (id)initWithType:(int)type;	// 0x31fe1811
// declared property getter: - (BOOL)allDay;	// 0x31fe19f1
// declared property getter: - (id)calendarName;	// 0x31fe1991
// declared property getter: - (unsigned)changeType;	// 0x31fe1a31
// declared property getter: - (id)createCount;	// 0x31fe1ad1
// declared property getter: - (BOOL)dateChanged;	// 0x31fe1a51
- (void)dealloc;	// 0x31fe183d
// declared property getter: - (id)deleteCount;	// 0x31fe1b11
// declared property getter: - (id)endDate;	// 0x31fe19d1
// declared property getter: - (id)eventID;	// 0x31fe1a11
// declared property getter: - (id)location;	// 0x31fe1971
// declared property getter: - (BOOL)locationChanged;	// 0x31fe1a91
- (BOOL)needsAlert;	// 0x31fe1931
- (id)resourceChangeFromEventStore:(id)eventStore;	// 0x31fe190d
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x31fe1a01
// declared property setter: - (void)setCalendarName:(id)name;	// 0x31fe19a1
// declared property setter: - (void)setChangeType:(unsigned)type;	// 0x31fe1a41
// declared property setter: - (void)setCreateCount:(id)count;	// 0x31fe1ae1
// declared property setter: - (void)setDateChanged:(BOOL)changed;	// 0x31fe1a61
// declared property setter: - (void)setDeleteCount:(id)count;	// 0x31fe1b21
// declared property setter: - (void)setEndDate:(id)date;	// 0x31fe19e1
// declared property setter: - (void)setEventID:(id)anId;	// 0x31fe1a21
// declared property setter: - (void)setLocation:(id)location;	// 0x31fe1981
// declared property setter: - (void)setLocationChanged:(BOOL)changed;	// 0x31fe1aa1
// declared property setter: - (void)setStartDate:(id)date;	// 0x31fe19c1
// declared property setter: - (void)setTimeChanged:(BOOL)changed;	// 0x31fe1a81
// declared property setter: - (void)setTitleChanged:(BOOL)changed;	// 0x31fe1ac1
// declared property setter: - (void)setUpdateCount:(id)count;	// 0x31fe1b01
// declared property getter: - (id)startDate;	// 0x31fe19b1
// declared property getter: - (BOOL)timeChanged;	// 0x31fe1a71
// declared property getter: - (BOOL)titleChanged;	// 0x31fe1ab1
// declared property getter: - (id)updateCount;	// 0x31fe1af1
@end
