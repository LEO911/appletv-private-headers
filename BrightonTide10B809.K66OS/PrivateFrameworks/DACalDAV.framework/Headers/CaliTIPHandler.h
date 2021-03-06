/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x339a91c5
+ (id)debugStringForEvent:(id)event;	// 0x339a7d29
+ (BOOL)diffsAreImportant:(id)important;	// 0x339a7cb9
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x339a8041
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x339a7dc9
+ (void)initialize;	// 0x339a7ab9
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x339a81d5
+ (BOOL)logiTIPDetail;	// 0x339a7b29
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x339a8201
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x339a8309
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x339a8435
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x339a7bbd
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x339a7b39
@end

