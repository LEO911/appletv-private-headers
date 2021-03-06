/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"


__attribute__((visibility("hidden")))
@interface ATVSWUpdateCheckTask : BRBackgroundTask {
}
+ (BOOL)_shouldPerformCheck;	// 0x32fabccd
+ (double)checkAgainDelay;	// 0x32fabb89
+ (double)normalCheckInterval;	// 0x32fab9cd
+ (void)scheduleCheckAgainSoonTask;	// 0x32fabacd
+ (void)scheduleNormalCheckTask;	// 0x32fab91d
+ (void)setCheckAgainDelay:(double)delay;	// 0x32fabbe9
+ (void)setNormalCheckInterval:(double)interval;	// 0x32faba2d
- (BOOL)perform:(id)perform;	// 0x32fabc89
@end

