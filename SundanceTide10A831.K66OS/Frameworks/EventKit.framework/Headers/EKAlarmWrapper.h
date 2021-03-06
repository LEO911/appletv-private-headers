/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


__attribute__((visibility("hidden")))
@interface EKAlarmWrapper : NSObject {
	CalAlarmOccurrence *_alarm;	// 4 = 0x4
}
+ (id)wrapperWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x34f361c9
- (id)initWithAlarmOccurrence:(CalAlarmOccurrence *)alarmOccurrence;	// 0x34f36205
- (void)dealloc;	// 0x34f3624d
- (id)description;	// 0x34f36399
- (double)fireDate;	// 0x34f36291
- (unsigned)hash;	// 0x34f36365
- (BOOL)isEqual:(id)equal;	// 0x34f362dd
- (id)occurrence;	// 0x34f362a5
@end

