/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
}
+ (id)immutablePlaceholder;	// 0x3462d329
+ (void)initialize;	// 0x3462d2ad
- (id)init;	// 0x3462d369
- (id)initWithCoder:(id)coder;	// 0x3462d3a9
- (id)initWithFileSec:(filesec *)fileSec;	// 0x3462d339
- (id)copyWithZone:(NSZone *)zone;	// 0x3462d5f5
- (void)dealloc;	// 0x3462d3a5
- (void)encodeWithCoder:(id)coder;	// 0x3462d575
- (oneway void)release;	// 0x3462d399
- (id)retain;	// 0x3462d395
- (unsigned)retainCount;	// 0x3462d39d
@end

