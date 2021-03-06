/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"


@interface CIColor : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
	void *_pad[3];	// 8 = 0x8
}
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x3732b2a1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x3732b335
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3732b2dd
+ (id)colorWithString:(id)string;	// 0x3732b365
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x3732b4a9
- (id)initWithCoder:(id)coder;	// 0x3732ba35
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3732b515
- (id)initWithString:(id)string;	// 0x3732b3a1
- (CGColorRef)CGColor;	// 0x3732b891
- (float)alpha;	// 0x3732b6b1
- (float)blue;	// 0x3732b77d
- (CGColorRef)cgColor;	// 0x3732b881
- (CGColorSpaceRef)colorSpace;	// 0x3732b86d
- (const float *)components;	// 0x3732b69d
- (id)copyWithZone:(NSZone *)zone;	// 0x3732b979
- (void)dealloc;	// 0x3732b5e1
- (id)description;	// 0x3732bac1
- (void)encodeWithCoder:(id)coder;	// 0x3732b9bd
- (void)finalize;	// 0x3732b635
- (float)green;	// 0x3732b761
- (unsigned)hash;	// 0x3732b911
- (BOOL)isEqual:(id)equal;	// 0x3732b8a1
- (unsigned long)numberOfComponents;	// 0x3732b689
- (float)red;	// 0x3732b6c5
- (id)stringRepresentation;	// 0x3732b799
@end

