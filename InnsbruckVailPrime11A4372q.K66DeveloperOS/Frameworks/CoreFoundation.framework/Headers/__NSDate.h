/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDate.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x2d1bbb61
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d215859
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d279f0d
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x2d279f15
- (void)dealloc;	// 0x2d1bbe41
- (double)timeIntervalSinceReferenceDate;	// 0x2d1bb449
@end

