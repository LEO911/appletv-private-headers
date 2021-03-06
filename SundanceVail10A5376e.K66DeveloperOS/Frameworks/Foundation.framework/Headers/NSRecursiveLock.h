/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSRecursiveLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x34dbdeb1; S=0x34dbde75; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d4231d
- (id)init;	// 0x34d42325
- (void)dealloc;	// 0x34dbda25
- (id)description;	// 0x34dbddad
- (void)finalize;	// 0x34dbdb35
- (BOOL)isLocking;	// 0x34dbdebd
- (void)lock;	// 0x34d2921d
- (BOOL)lockBeforeDate:(id)date;	// 0x34dbdc39
// converted property getter: - (id)name;	// 0x34dbdeb1
// converted property setter: - (void)setName:(id)name;	// 0x34dbde75
- (BOOL)tryLock;	// 0x34dbdd81
- (void)unlock;	// 0x34d29239
@end

