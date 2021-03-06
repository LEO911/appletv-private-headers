/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x346e154d; S=0x346e157d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34637e8d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x346e1501
- (id)init;	// 0x346e16b9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x34637ee9
- (unsigned long)_cfTypeID;	// 0x346e16b5
- (BOOL)allowsWeakReference;	// 0x346e1499
- (void)finalize;	// 0x346e14c1
- (void)fire;	// 0x346e15bd
// converted property getter: - (id)fireDate;	// 0x346e154d
- (unsigned)hash;	// 0x346e1481
- (void)invalidate;	// 0x346e1549
- (BOOL)isEqual:(id)equal;	// 0x346e1469
- (BOOL)isValid;	// 0x346e1535
- (oneway void)release;	// 0x346e1495
- (id)retain;	// 0x346e1485
- (unsigned)retainCount;	// 0x346e14bd
- (BOOL)retainWeakReference;	// 0x346e14ad
// converted property setter: - (void)setFireDate:(id)date;	// 0x346e157d
- (double)timeInterval;	// 0x346e1545
- (id)userInfo;	// 0x346e15a5
@end

