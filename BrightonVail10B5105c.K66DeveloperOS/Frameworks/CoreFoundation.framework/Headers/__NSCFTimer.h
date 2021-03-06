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
@property(retain) id fireDate;	// G=0x3570d7a5; S=0x356d17c5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3570d779
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3570d775
- (id)init;	// 0x3570da55
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x3570d911
- (unsigned long)_cfTypeID;	// 0x3570d90d
- (BOOL)_isDeallocating;	// 0x3570d725
- (BOOL)_tryRetain;	// 0x3570d715
- (void)finalize;	// 0x3570d735
- (void)fire;	// 0x3570d7d5
// converted property getter: - (id)fireDate;	// 0x3570d7a5
- (unsigned)hash;	// 0x3570d70d
- (void)invalidate;	// 0x35684bb9
- (BOOL)isEqual:(id)equal;	// 0x3570d6f5
- (BOOL)isValid;	// 0x356d17b5
- (oneway void)release;	// 0x35685641
- (id)retain;	// 0x35684359
- (unsigned)retainCount;	// 0x3570d731
// converted property setter: - (void)setFireDate:(id)date;	// 0x356d17c5
- (double)timeInterval;	// 0x3570d79d
- (id)userInfo;	// 0x356d106d
@end

