/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarNotification.h"

@class NSString, NSNumber, NSDate;

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
@property(assign, nonatomic) BOOL allDay;	// G=0x313f32c9; S=0x313f32d9; @synthesize=_allDay
@property(retain, nonatomic) NSString *calendarName;	// G=0x313f3269; S=0x313f3279; @synthesize=_calendarName
@property(assign, nonatomic) unsigned changeType;	// G=0x313f3309; S=0x313f3319; @synthesize=_changeType
@property(retain, nonatomic) NSNumber *createCount;	// G=0x313f33a9; S=0x313f33b9; @synthesize=_createCount
@property(assign, nonatomic) BOOL dateChanged;	// G=0x313f3329; S=0x313f3339; @synthesize=_dateChanged
@property(retain, nonatomic) NSNumber *deleteCount;	// G=0x313f33e9; S=0x313f33f9; @synthesize=_deleteCount
@property(retain, nonatomic) NSDate *endDate;	// G=0x313f32a9; S=0x313f32b9; @synthesize=_endDate
@property(retain, nonatomic) NSString *eventID;	// G=0x313f32e9; S=0x313f32f9; @synthesize=_eventID
@property(retain, nonatomic) NSString *location;	// G=0x313f3249; S=0x313f3259; @synthesize=_location
@property(assign, nonatomic) BOOL locationChanged;	// G=0x313f3369; S=0x313f3379; @synthesize=_locationChanged
@property(retain, nonatomic) NSDate *startDate;	// G=0x313f3289; S=0x313f3299; @synthesize=_startDate
@property(assign, nonatomic) BOOL timeChanged;	// G=0x313f3349; S=0x313f3359; @synthesize=_timeChanged
@property(assign, nonatomic) BOOL titleChanged;	// G=0x313f3389; S=0x313f3399; @synthesize=_titleChanged
@property(retain, nonatomic) NSNumber *updateCount;	// G=0x313f33c9; S=0x313f33d9; @synthesize=_updateCount
- (id)initWithType:(int)type;	// 0x313f30e9
// declared property getter: - (BOOL)allDay;	// 0x313f32c9
// declared property getter: - (id)calendarName;	// 0x313f3269
// declared property getter: - (unsigned)changeType;	// 0x313f3309
// declared property getter: - (id)createCount;	// 0x313f33a9
// declared property getter: - (BOOL)dateChanged;	// 0x313f3329
- (void)dealloc;	// 0x313f3115
// declared property getter: - (id)deleteCount;	// 0x313f33e9
// declared property getter: - (id)endDate;	// 0x313f32a9
// declared property getter: - (id)eventID;	// 0x313f32e9
// declared property getter: - (id)location;	// 0x313f3249
// declared property getter: - (BOOL)locationChanged;	// 0x313f3369
- (BOOL)needsAlert;	// 0x313f3209
- (id)resourceChangeFromEventStore:(id)eventStore;	// 0x313f31e5
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x313f32d9
// declared property setter: - (void)setCalendarName:(id)name;	// 0x313f3279
// declared property setter: - (void)setChangeType:(unsigned)type;	// 0x313f3319
// declared property setter: - (void)setCreateCount:(id)count;	// 0x313f33b9
// declared property setter: - (void)setDateChanged:(BOOL)changed;	// 0x313f3339
// declared property setter: - (void)setDeleteCount:(id)count;	// 0x313f33f9
// declared property setter: - (void)setEndDate:(id)date;	// 0x313f32b9
// declared property setter: - (void)setEventID:(id)anId;	// 0x313f32f9
// declared property setter: - (void)setLocation:(id)location;	// 0x313f3259
// declared property setter: - (void)setLocationChanged:(BOOL)changed;	// 0x313f3379
// declared property setter: - (void)setStartDate:(id)date;	// 0x313f3299
// declared property setter: - (void)setTimeChanged:(BOOL)changed;	// 0x313f3359
// declared property setter: - (void)setTitleChanged:(BOOL)changed;	// 0x313f3399
// declared property setter: - (void)setUpdateCount:(id)count;	// 0x313f33d9
// declared property getter: - (id)startDate;	// 0x313f3289
// declared property getter: - (BOOL)timeChanged;	// 0x313f3349
// declared property getter: - (BOOL)titleChanged;	// 0x313f3389
// declared property getter: - (id)updateCount;	// 0x313f33c9
@end
