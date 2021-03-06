/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSCondition : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x35590e49; S=0x35590e0d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x355289b5
- (id)init;	// 0x355289bd
- (void)broadcast;	// 0x35528cdd
- (void)dealloc;	// 0x35590a95
- (id)description;	// 0x35590d49
- (void)finalize;	// 0x35590b4d
- (void)lock;	// 0x35528a1d
// converted property getter: - (id)name;	// 0x35590e49
// converted property setter: - (void)setName:(id)name;	// 0x35590e0d
- (void)signal;	// 0x35590d31
- (void)unlock;	// 0x35528cf1
- (void)wait;	// 0x35528c0d
- (BOOL)waitUntilDate:(id)date;	// 0x35590bf1
@end

