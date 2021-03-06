/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSMutableSet, ICSColor, NSMutableDictionary, NSString, ICSDuration;

@interface ICSCalendar : ICSComponent {
	NSMutableSet *_keys;	// 12 = 0xc
	NSMutableDictionary *_masters;	// 16 = 0x10
	NSMutableDictionary *_occurrences;	// 20 = 0x14
	NSMutableDictionary *_timezones;	// 24 = 0x18
}
@property(retain) NSString *calscale;	// G=0x31357989; S=0x313579d1; 
@property(assign) int method;	// G=0x313579f1; S=0x31357a49; 
@property(retain) NSString *prodid;	// G=0x31357a99; S=0x31357ae1; 
@property(retain) NSString *version;	// G=0x31357b01; S=0x31357b49; 
@property(retain) ICSDuration *x_apple_auto_refresh;	// G=0x31357b69; S=0x31357bcd; 
@property(retain) ICSColor *x_apple_calendar_color;	// G=0x31357bfd; S=0x31357d79; 
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) int x_calendarserver_access;	// @dynamic
@property(retain) NSString *x_wr_caldesc;	// G=0x31357e45; S=0x31357e25; 
@property(retain) NSString *x_wr_calname;	// G=0x31357e8d; S=0x31357ed5; 
@property(retain) NSString *x_wr_relcalid;	// G=0x31357ef5; S=0x31357f3d; 
@property(retain) NSString *x_wr_timezone;	// G=0x31357f5d; S=0x31357fa5; 
+ (id)ICSStringFromCalendarServerAccess:(int)calendarServerAccess;	// 0x31357835
+ (id)ICSStringFromMethod:(int)method;	// 0x31357739
+ (int)calendarServerAccessFromICSString:(id)icsstring;	// 0x313577ad
+ (id)calendarWithKnownTimeZones;	// 0x31357279
+ (id)defaultProdid;	// 0x31357579
+ (int)methodFromICSString:(id)icsstring;	// 0x31357641
+ (id)name;	// 0x31357495
+ (void)setDefaultProdid:(id)prodid;	// 0x313574a1
- (id)init;	// 0x31357875
- (void)_addComponent:(id)component;	// 0x31358cdd
- (void)_addTimeZonesInComponent:(id)component toDictionary:(id)dictionary;	// 0x31358569
- (void)_addTimeZonesInComponent:(id)component toSet:(id)set;	// 0x313582f5
- (id)_init;	// 0x313573c5
- (id)_timeZonesForComponents:(id)components options:(int)options;	// 0x31358831
- (void)addComponent:(id)component;	// 0x313591ed
// declared property getter: - (id)calscale;	// 0x31357989
- (id)componentForKey:(id)key;	// 0x31358ffd
- (id)componentKeys;	// 0x31358fdd
- (id)componentOccurrencesForKey:(id)key;	// 0x3135901d
- (void)dealloc;	// 0x31357901
- (void)fixComponent;	// 0x313593ad
- (void)fixEntities;	// 0x31359451
- (void)fixPropertiesInheritance;	// 0x31359255
// declared property getter: - (int)method;	// 0x313579f1
// declared property getter: - (id)prodid;	// 0x31357a99
// declared property setter: - (void)setCalscale:(id)calscale;	// 0x313579d1
- (void)setComponents:(id)components;	// 0x313591d9
- (void)setComponents:(id)components options:(int)options;	// 0x3135905d
- (void)setComponents:(id)components timeZones:(BOOL)zones;	// 0x3135903d
// declared property setter: - (void)setMethod:(int)method;	// 0x31357a49
// declared property setter: - (void)setProdid:(id)prodid;	// 0x31357ae1
// declared property setter: - (void)setVersion:(id)version;	// 0x31357b49
// declared property setter: - (void)setX_apple_auto_refresh:(id)refresh;	// 0x31357bcd
// declared property setter: - (void)setX_apple_calendar_color:(id)color;	// 0x31357d79
// declared property setter: - (void)setX_wr_caldesc:(id)caldesc;	// 0x31357e25
// declared property setter: - (void)setX_wr_calname:(id)calname;	// 0x31357ed5
// declared property setter: - (void)setX_wr_relcalid:(id)relcalid;	// 0x31357f3d
// declared property setter: - (void)setX_wr_timezone:(id)timezone;	// 0x31357fa5
- (id)systemCalendarForDate:(id)date options:(int)options;	// 0x313580c5
- (id)systemDateForDate:(id)date options:(int)options;	// 0x3135818d
- (id)systemTimeZoneForDate:(id)date;	// 0x31357fc5
- (id)timeZoneForKey:(id)key;	// 0x31359235
// declared property getter: - (id)version;	// 0x31357b01
// declared property getter: - (id)x_apple_auto_refresh;	// 0x31357b69
// declared property getter: - (id)x_apple_calendar_color;	// 0x31357bfd
// declared property getter: - (id)x_wr_caldesc;	// 0x31357e45
// declared property getter: - (id)x_wr_calname;	// 0x31357e8d
// declared property getter: - (id)x_wr_relcalid;	// 0x31357ef5
// declared property getter: - (id)x_wr_timezone;	// 0x31357f5d
@end

