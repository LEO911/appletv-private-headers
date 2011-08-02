/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILocalNotification.h"

@class NSData, NSString, NSDate, NSTimeZone, NSCalendar;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
@private
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	NSString *alertBody;	// 20 = 0x14
	BOOL hasAction;	// 24 = 0x18
	NSString *alertAction;	// 28 = 0x1c
	NSString *alertLaunchImage;	// 32 = 0x20
	NSString *soundName;	// 36 = 0x24
	int applicationIconBadgeNumber;	// 40 = 0x28
	NSData *userInfoData;	// 44 = 0x2c
	BOOL hideAlertTitle;	// 48 = 0x30
	BOOL allowSnooze;	// 49 = 0x31
	BOOL soundNameIsARingtone;	// 50 = 0x32
	BOOL interruptAudioAndLockDevice;	// 51 = 0x33
	BOOL resumeApplicationInBackground;	// 52 = 0x34
	BOOL fireNotificationsWhenAppRunning;	// 53 = 0x35
	BOOL showAlarmStatusBarItem;	// 54 = 0x36
	NSString *customLockSliderLabel;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *alertAction;	// G=0x3032edd5; S=0x3033041d; @synthesize
@property(copy, nonatomic) NSString *alertBody;	// G=0x3032ee05; S=0x303303f1; @synthesize
@property(copy, nonatomic) NSString *alertLaunchImage;	// G=0x3032edc5; S=0x30330449; @synthesize
@property(assign, nonatomic) BOOL allowSnooze;	// G=0x3032ed55; S=0x3032ed65; @synthesize
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x3032ed95; S=0x3032eda5; @synthesize
@property(copy, nonatomic) NSString *customLockSliderLabel;	// G=0x3032eca5; S=0x303304a1; @synthesize
@property(copy, nonatomic) NSDate *fireDate;	// G=0x3032ee55; S=0x3033036d; @synthesize
@property(assign, nonatomic) BOOL fireNotificationsWhenAppRunning;	// G=0x3032ecd5; S=0x3032ece5; @synthesize
@property(assign, nonatomic) BOOL hasAction;	// G=0x3032ede5; S=0x3032edf5; @synthesize
@property(assign, nonatomic) BOOL hideAlertTitle;	// G=0x3032ed75; S=0x3032ed85; @synthesize
@property(assign, nonatomic) BOOL interruptAudioAndLockDevice;	// G=0x3032ed15; S=0x3032ed25; @synthesize
@property(copy, nonatomic) NSCalendar *repeatCalendar;	// G=0x3032ee15; S=0x303303c5; @synthesize
@property(assign, nonatomic) unsigned repeatInterval;	// G=0x3032ee25; S=0x3032ee35; @synthesize
@property(assign, nonatomic) BOOL resumeApplicationInBackground;	// G=0x3032ecf5; S=0x3032ed05; @synthesize
@property(assign, nonatomic) BOOL showAlarmStatusBarItem;	// G=0x3032ecb5; S=0x3032ecc5; @synthesize
@property(copy, nonatomic) NSString *soundName;	// G=0x3032edb5; S=0x30330475; @synthesize
@property(assign, nonatomic) BOOL soundNameIsARingtone;	// G=0x3032ed35; S=0x3032ed45; @synthesize
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x3032ee45; S=0x30330399; @synthesize
@property(retain) id userInfo;	// G=0x3032f3c9; S=0x3032fdb1; converted property
- (id)init;	// 0x3032ee81
- (id)initWithCoder:(id)coder;	// 0x3032f9a9
- (void)_addCalendarUnits:(unsigned)units toDateComponents:(id)dateComponents;	// 0x3032f029
- (void)_setUserInfoData:(id)data;	// 0x3032f43d
// declared property getter: - (id)alertAction;	// 0x3032edd5
// declared property getter: - (id)alertBody;	// 0x3032ee05
// declared property getter: - (id)alertLaunchImage;	// 0x3032edc5
// declared property getter: - (BOOL)allowSnooze;	// 0x3032ed55
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x3032ed95
- (void)clearNonSystemProperties;	// 0x3032efbd
- (int)compareFireDates:(id)dates;	// 0x3032f475
- (id)copyWithZone:(NSZone *)zone;	// 0x3032f519
// declared property getter: - (id)customLockSliderLabel;	// 0x3032eca5
- (void)dealloc;	// 0x3032fc99
- (id)description;	// 0x3032f305
- (void)encodeWithCoder:(id)coder;	// 0x3032f761
// declared property getter: - (id)fireDate;	// 0x3032ee55
// declared property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x3032ecd5
// declared property getter: - (BOOL)hasAction;	// 0x3032ede5
- (unsigned)hash;	// 0x3032f4e9
// declared property getter: - (BOOL)hideAlertTitle;	// 0x3032ed75
// declared property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x3032ed15
- (BOOL)isEqual:(id)equal;	// 0x3033051d
- (BOOL)isValid;	// 0x3032f201
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x3032ff05
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x3032f24d
// declared property getter: - (id)repeatCalendar;	// 0x3032ee15
// declared property getter: - (unsigned)repeatInterval;	// 0x3032ee25
// declared property getter: - (BOOL)resumeApplicationInBackground;	// 0x3032ecf5
// declared property setter: - (void)setAlertAction:(id)action;	// 0x3033041d
// declared property setter: - (void)setAlertBody:(id)body;	// 0x303303f1
// declared property setter: - (void)setAlertLaunchImage:(id)image;	// 0x30330449
// declared property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x3032ed65
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3032eda5
// declared property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x303304a1
// declared property setter: - (void)setFireDate:(id)date;	// 0x3033036d
// declared property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x3032ece5
// declared property setter: - (void)setHasAction:(BOOL)action;	// 0x3032edf5
// declared property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x3032ed85
// declared property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x3032ed25
// declared property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x303303c5
// declared property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x3032ee35
// declared property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x3032ed05
// declared property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x3032ecc5
// declared property setter: - (void)setSoundName:(id)name;	// 0x30330475
// declared property setter: - (void)setSoundNameIsARingtone:(BOOL)ringtone;	// 0x3032ed45
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x30330399
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3032fdb1
// declared property getter: - (BOOL)showAlarmStatusBarItem;	// 0x3032ecb5
// declared property getter: - (id)soundName;	// 0x3032edb5
// declared property getter: - (BOOL)soundNameIsARingtone;	// 0x3032ed35
// declared property getter: - (id)timeZone;	// 0x3032ee45
// converted property getter: - (id)userInfo;	// 0x3032f3c9
@end
