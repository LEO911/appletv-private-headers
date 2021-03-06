/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimer.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x340adf45; S=0x340470d5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x340adf1d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340adf19
- (id)init;	// 0x340ae279
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x340ae13d
- (unsigned long)_cfTypeID;	// 0x340ae139
- (BOOL)_isDeallocating;	// 0x340adec5
- (BOOL)_tryRetain;	// 0x340adeb1
- (void)finalize;	// 0x340aded5
- (void)fire;	// 0x340adf75
// converted property getter: - (id)fireDate;	// 0x340adf45
- (unsigned)hash;	// 0x340adead
- (void)invalidate;	// 0x34033829
- (BOOL)isEqual:(id)equal;	// 0x340ade95
- (BOOL)isValid;	// 0x34047081
- (oneway void)release;	// 0x34033afd
- (id)retain;	// 0x34032e4d
- (unsigned)retainCount;	// 0x340aded1
// converted property setter: - (void)setFireDate:(id)date;	// 0x340470d5
- (double)timeInterval;	// 0x340adf41
- (id)userInfo;	// 0x3407ea01
@end

