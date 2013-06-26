/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent {
}
@property(retain) ICSDate *dtstart;	// G=0x33c54781; S=0x33c547b9; 
@property(retain) NSArray *rdate;	// G=0x33c547f9; S=0x33c547d9; 
@property(retain) NSArray *rrule;	// G=0x33c54969; S=0x33c54819; 
@property(assign) NSArray *tzname;	// G=0x33c54a75; S=0x33c54b81; 
@property(assign) int tzoffsetfrom;	// G=0x33c54ccd; S=0x33c54d25; 
@property(assign) int tzoffsetto;	// G=0x33c54d75; S=0x33c54dcd; 
- (void)addRecurrenceDate:(id)date;	// 0x33c54e1d
- (int)compare:(id)compare;	// 0x33c43b85
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x33c55d39
// declared property getter: - (id)dtstart;	// 0x33c54781
// declared property getter: - (id)rdate;	// 0x33c547f9
// declared property getter: - (id)rrule;	// 0x33c54969
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x33c547b9
// declared property setter: - (void)setRdate:(id)rdate;	// 0x33c547d9
// declared property setter: - (void)setRrule:(id)rrule;	// 0x33c54819
// declared property setter: - (void)setTzname:(id)tzname;	// 0x33c54b81
// declared property setter: - (void)setTzoffsetfrom:(int)tzoffsetfrom;	// 0x33c54d25
// declared property setter: - (void)setTzoffsetto:(int)tzoffsetto;	// 0x33c54dcd
// declared property getter: - (id)tzname;	// 0x33c54a75
// declared property getter: - (int)tzoffsetfrom;	// 0x33c54ccd
// declared property getter: - (int)tzoffsetto;	// 0x33c54d75
- (BOOL)validate:(id *)validate;	// 0x33c54589
@end
