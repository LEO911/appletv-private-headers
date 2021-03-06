/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSNotification : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34639d0d
+ (id)notificationWithName:(id)name object:(id)object;	// 0x3465e3cd
+ (id)notificationWithName:(id)name object:(id)object userInfo:(id)info;	// 0x34656921
- (id)init;	// 0x346ca689
- (id)initWithCoder:(id)coder;	// 0x346ca5a1
- (id)initWithName:(id)name object:(id)object userInfo:(id)info;	// 0x346ca6d1
- (Class)classForCoder;	// 0x346ca66d
- (id)copyWithZone:(NSZone *)zone;	// 0x346ca49d
- (id)description;	// 0x346ca265
- (void)encodeWithCoder:(id)coder;	// 0x346ca4ad
- (unsigned)hash;	// 0x346ca381
- (BOOL)isEqual:(id)equal;	// 0x346ca3a9
- (id)name;	// 0x346ca1f9
- (id)object;	// 0x346ca21d
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3478c009
- (id)userInfo;	// 0x346ca241
@end

