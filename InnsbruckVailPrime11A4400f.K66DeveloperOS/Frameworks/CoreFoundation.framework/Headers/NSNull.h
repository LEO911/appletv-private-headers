/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSNull : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d2fb209
+ (id)null;	// 0x2d239341
+ (BOOL)supportsSecureCoding;	// 0x2d2fb231
- (id)initWithCoder:(id)coder;	// 0x2d2fb235
- (unsigned long)_cfTypeID;	// 0x2d2fb205
- (id)copyWithZone:(NSZone *)zone;	// 0x2d2820f1
- (void)dealloc;	// 0x2d2fb221
- (id)description;	// 0x2d2fb225
- (void)encodeWithCoder:(id)coder;	// 0x2d2fb239
- (oneway void)release;	// 0x2d2832d9
- (id)retain;	// 0x2d2823c5
- (unsigned)retainCount;	// 0x2d2fb219
@end

