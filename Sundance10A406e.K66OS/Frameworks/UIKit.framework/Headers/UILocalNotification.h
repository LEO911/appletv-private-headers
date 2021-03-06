/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSDictionary, NSCalendar, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}
@property(copy, nonatomic) NSString *alertAction;	// @dynamic
@property(copy, nonatomic) NSString *alertBody;	// @dynamic
@property(copy, nonatomic) NSString *alertLaunchImage;	// @dynamic
@property(assign, nonatomic) BOOL allowSnooze;	// @dynamic
@property(assign, nonatomic) int applicationIconBadgeNumber;	// @dynamic
@property(copy, nonatomic) NSString *customLockSliderLabel;	// @dynamic
@property(copy, nonatomic) NSDate *fireDate;	// @dynamic
@property(assign, nonatomic) BOOL fireNotificationsWhenAppRunning;	// @dynamic
@property(copy, nonatomic) NSString *firedNotificationName;	// @dynamic
@property(assign, nonatomic) BOOL hasAction;	// @dynamic
@property(assign, nonatomic) BOOL hideAlertTitle;	// @dynamic
@property(assign, nonatomic) BOOL interruptAudioAndLockDevice;	// @dynamic
@property(assign, nonatomic) BOOL isSystemAlert;	// @dynamic
@property(assign, nonatomic) int remainingRepeatCount;	// @dynamic
@property(copy, nonatomic) NSCalendar *repeatCalendar;	// @dynamic
@property(assign, nonatomic) unsigned repeatInterval;	// @dynamic
@property(assign, nonatomic) BOOL resumeApplicationInBackground;	// @dynamic
@property(assign, nonatomic) BOOL showAlarmStatusBarItem;	// @dynamic
@property(copy, nonatomic) NSString *snoozedNotificationName;	// @dynamic
@property(copy, nonatomic) NSString *soundName;	// @dynamic
@property(assign, nonatomic) int soundType;	// @dynamic
@property(copy, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(assign, nonatomic) int totalRepeatCount;	// @dynamic
@property(copy, nonatomic) NSDictionary *userInfo;	// @dynamic
+ (id)alloc;	// 0x30bf7d55
+ (id)allocWithZone:(NSZone *)zone;	// 0x30bf7d81
- (id)init;	// 0x30bf7dad
- (id)initWithCoder:(id)coder;	// 0x30bf7e81
- (void)clearNonSystemProperties;	// 0x30bf7ee1
- (int)compareFireDates:(id)dates;	// 0x30bf7edd
- (id)copyWithZone:(NSZone *)zone;	// 0x30bf7ecd
- (void)encodeWithCoder:(id)coder;	// 0x30bf7ec9
- (BOOL)isValid;	// 0x30bf7ed9
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x30bf7ed5
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x30bf7ed1
@end

