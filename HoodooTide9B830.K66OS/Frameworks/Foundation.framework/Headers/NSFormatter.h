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


@interface NSFormatter : NSObject <NSCopying, NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x316254c9
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x31625345
- (id)copyWithZone:(NSZone *)zone;	// 0x316254b5
- (id)editingStringForObjectValue:(id)objectValue;	// 0x31625349
- (void)encodeWithCoder:(id)coder;	// 0x316254c5
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x31625359
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x3162537d
- (BOOL)isPartialStringValid:(id)valid newEditingString:(id *)string errorDescription:(id *)description;	// 0x31625459
- (BOOL)isPartialStringValid:(id *)valid proposedSelectedRange:(NSRange *)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id *)description;	// 0x3162545d
- (id)stringForObjectValue:(id)objectValue;	// 0x31625321
@end

