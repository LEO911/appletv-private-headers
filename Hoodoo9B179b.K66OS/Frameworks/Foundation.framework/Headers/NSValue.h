/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSValue : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3104260d
+ (void)initialize;	// 0x31022cb5
+ (id)value:(const void *)value withObjCType:(const char *)objCType;	// 0x310a7b69
+ (id)valueWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x310080ed
+ (id)valueWithNonretainedObject:(id)nonretainedObject;	// 0x3102f8f1
+ (id)valueWithPoint:(CGPoint)point;	// 0x310087d9
+ (id)valueWithPointer:(const void *)pointer;	// 0x3101e5b1
+ (id)valueWithRange:(NSRange)range;	// 0x310434d5
+ (id)valueWithRect:(CGRect)rect;	// 0x31022e59
+ (id)valueWithSize:(CGSize)size;	// 0x31022e99
- (id)init;	// 0x310086ed
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x310a89fd
- (id)initWithCoder:(id)coder;	// 0x310a82fd
- (Class)classForCoder;	// 0x310a80c5
- (id)copyWithZone:(NSZone *)zone;	// 0x310a7ba9
- (id)description;	// 0x310a7f91
- (void)encodeWithCoder:(id)coder;	// 0x310a80d5
- (void)getValue:(void *)value;	// 0x310a7b79
- (unsigned)hash;	// 0x310a7e25
- (BOOL)isEqual:(id)equal;	// 0x3103b565
- (BOOL)isEqualToValue:(id)value;	// 0x310a7cc1
- (BOOL)isNSValue__;	// 0x31099869
- (id)nonretainedObjectValue;	// 0x3104084d
- (const char *)objCType;	// 0x310a7b8d
- (CGPoint)pointValue;	// 0x31008a41
- (void *)pointerValue;	// 0x3101715d
- (NSRange)rangeValue;	// 0x3104350d
- (CGRect)rectValue;	// 0x3102ada5
- (CGSize)sizeValue;	// 0x31052b09
@end
