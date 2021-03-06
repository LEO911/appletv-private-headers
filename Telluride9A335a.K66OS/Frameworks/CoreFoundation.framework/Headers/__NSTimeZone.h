/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone {
@private
	CFStringRef _name;	// 4 = 0x4
	CFDataRef _data;	// 8 = 0x8
	void **_ucal;	// 12 = 0xc
	int _lock;	// 16 = 0x10
}
+ (id)__new:(CFStringRef)aNew cache:(BOOL)cache;	// 0x33474651
+ (id)__new:(CFStringRef)aNew data:(CFDataRef)data;	// 0x33514515
+ (id)allocWithZone:(NSZone *)zone;	// 0x335145e1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x335145dd
- (id)abbreviationForDate:(id)date;	// 0x33513de5
- (id)data;	// 0x3349e6ad
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33514025
- (void)dealloc;	// 0x3349f9d1
- (void)finalize;	// 0x3351456d
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33513ffd
- (id)localizedName:(int)name locale:(id)locale;	// 0x335141e5
- (id)name;	// 0x33474bad
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3349ed8d
- (int)secondsFromGMTForDate:(id)date;	// 0x3348c399
@end

