/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSConditionLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x302d91f1; S=0x302d91b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30280291
- (id)init;	// 0x302d8fd9
- (id)initWithCondition:(int)condition;	// 0x30280299
- (int)condition;	// 0x302811c9
- (void)dealloc;	// 0x30280f11
- (id)description;	// 0x302d90e9
- (void)finalize;	// 0x302d8fed
- (void)lock;	// 0x30281081
- (BOOL)lockBeforeDate:(id)date;	// 0x302810bd
- (void)lockWhenCondition:(int)condition;	// 0x30280331
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x30280371
// converted property getter: - (id)name;	// 0x302d91f1
// converted property setter: - (void)setName:(id)name;	// 0x302d91b5
- (BOOL)tryLock;	// 0x302d9075
- (BOOL)tryLockWhenCondition:(int)condition;	// 0x302d90ad
- (void)unlock;	// 0x30280e29
- (void)unlockWithCondition:(int)condition;	// 0x30280489
@end
