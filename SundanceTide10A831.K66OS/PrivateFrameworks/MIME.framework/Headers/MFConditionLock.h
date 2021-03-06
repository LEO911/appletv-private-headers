/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSConditionLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x328b2e19
- (id)init;	// 0x328b2e31
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x328b2e5d
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x328b2e7d
- (void)dealloc;	// 0x328b30c1
- (id)description;	// 0x328b3029
- (BOOL)isLockedByMe;	// 0x328b2ee5
- (BOOL)lockBeforeDate:(id)date;	// 0x328b2ef1
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x328b2f55
- (void)unlock;	// 0x328b2fbd
- (void)unlockWithCondition:(int)condition;	// 0x328b2ff1
@end

