/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x30caa141; converted property
+ (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x30caa281
+ (void)initialize;	// 0x30caa30d
+ (id)regularExpressionWithString:(id)string;	// 0x30caa2d1
- (id)init;	// 0x30caa165
- (id)initWithCoder:(id)coder;	// 0x30caa375
- (id)initWithExpressionString:(id)expressionString;	// 0x30caa151
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x30caa5f1
- (id)copyWithZone:(NSZone *)zone;	// 0x30caa181
- (void)dealloc;	// 0x30caa755
- (void)encodeWithCoder:(id)coder;	// 0x30caa34d
// converted property getter: - (id)expressionString;	// 0x30caa141
- (unsigned)hash;	// 0x30caa5d1
- (BOOL)isEqual:(id)equal;	// 0x30caa1f5
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x30caa46d
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x30caa3e5
- (unsigned)numberOfSubexpressions;	// 0x30caa12d
@end

