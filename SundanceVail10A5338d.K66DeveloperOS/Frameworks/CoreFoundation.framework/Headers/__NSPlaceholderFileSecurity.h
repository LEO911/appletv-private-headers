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
+ (id)immutablePlaceholder;	// 0x36a63575
+ (void)initialize;	// 0x36a634f9
- (id)init;	// 0x36a635b5
- (id)initWithCoder:(id)coder;	// 0x36a635f5
- (id)initWithFileSec:(filesec *)fileSec;	// 0x36a63585
- (id)copyWithZone:(NSZone *)zone;	// 0x36a63841
- (void)dealloc;	// 0x36a635f1
- (void)encodeWithCoder:(id)coder;	// 0x36a637c1
- (oneway void)release;	// 0x36a635e5
- (id)retain;	// 0x36a635e1
- (unsigned)retainCount;	// 0x36a635e9
@end
