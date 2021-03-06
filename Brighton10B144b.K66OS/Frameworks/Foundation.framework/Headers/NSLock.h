/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x3193da31; S=0x3193d9f5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x318b17f5
- (id)init;	// 0x318b17fd
- (void)dealloc;	// 0x318b4001
- (id)description;	// 0x3193d931
- (void)finalize;	// 0x3193d661
- (void)lock;	// 0x318acc59
- (BOOL)lockBeforeDate:(id)date;	// 0x3193d761
// converted property getter: - (id)name;	// 0x3193da31
// converted property setter: - (void)setName:(id)name;	// 0x3193d9f5
- (BOOL)tryLock;	// 0x3193d901
- (void)unlock;	// 0x318accdd
@end

