/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


@interface NSTimer (NSTimer)
@property(retain) id fireDate;	// G=0x325ae405; S=0x325ae429; converted property
@property(assign) double fireTime;	// G=0x325ae48d; S=0x325ae4b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x324fef81
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x325ae215
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x324feee5
+ (id)timerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x325ae2d9
+ (id)timerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x325ae169
+ (id)timerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x3254b4b9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x325ae351
- (double)_cffireTime;	// 0x325ae501
- (XXStruct_K1psTC)context;	// 0x325ae4f1
- (CFStringRef)copyDebugDescription;	// 0x325ae451
- (void)fire;	// 0x325ae3e1
// converted property getter: - (id)fireDate;	// 0x325ae405
// converted property getter: - (double)fireTime;	// 0x325ae48d
- (double)interval;	// 0x325ae47d
- (void)invalidate;	// 0x325ae35d
- (BOOL)isValid;	// 0x325ae381
- (long)order;	// 0x325ae479
// converted property setter: - (void)setFireDate:(id)date;	// 0x325ae429
// converted property setter: - (void)setFireTime:(double)time;	// 0x325ae4b5
- (double)timeInterval;	// 0x325ae3a9
- (id)userInfo;	// 0x325ae44d
@end
