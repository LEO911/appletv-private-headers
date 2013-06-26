/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFLockObject.h"
#import <Foundation/NSConditionLock.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x312eb515
- (id)init;	// 0x312eb52d
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x312eb559
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x312eb579
- (void)dealloc;	// 0x312eb7bd
- (id)description;	// 0x312eb725
- (BOOL)isLockedByMe;	// 0x312eb5e1
- (BOOL)lockBeforeDate:(id)date;	// 0x312eb5ed
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x312eb651
- (void)unlock;	// 0x312eb6b9
- (void)unlockWithCondition:(int)condition;	// 0x312eb6ed
@end
