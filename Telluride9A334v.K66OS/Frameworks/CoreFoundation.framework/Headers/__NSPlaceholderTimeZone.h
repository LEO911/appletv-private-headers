/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone {
}
+ (id)immutablePlaceholder;	// 0x3486d519
+ (void)initialize;	// 0x3486d4cd
- (id)init;	// 0x3490d879
- (id)initWithName:(id)name;	// 0x3486d529
- (id)initWithName:(id)name data:(id)data;	// 0x3490d6d5
- (id)__initWithName:(id)name cache:(BOOL)cache;	// 0x3486d53d
- (id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;	// 0x3489efed
- (id)abbreviationForDate:(id)date;	// 0x3490da25
- (id)data;	// 0x3490d925
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3490db25
- (void)dealloc;	// 0x3490d8a1
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3490daa5
- (id)name;	// 0x3490d8a5
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3490dba5
- (oneway void)release;	// 0x3490d895
- (id)retain;	// 0x3490d891
- (unsigned)retainCount;	// 0x3490d899
- (int)secondsFromGMTForDate:(id)date;	// 0x3490d9a5
@end
