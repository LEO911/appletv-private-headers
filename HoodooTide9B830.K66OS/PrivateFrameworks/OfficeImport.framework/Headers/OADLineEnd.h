/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <NSCopying> {
@private
	unsigned char mType;	// 12 = 0xc
	unsigned char mWidth;	// 13 = 0xd
	unsigned char mLength;	// 14 = 0xe
	unsigned mIsTypeOverridden : 1;	// 15 = 0xf
	unsigned mIsWidthOverridden : 1;	// 15 = 0xf
	unsigned mIsLengthOverridden : 1;	// 15 = 0xf
}
@property(assign) int length;	// G=0x311ed305; S=0x31160d99; converted property
@property(assign) int type;	// G=0x311ed22d; S=0x31160d51; converted property
@property(assign) int width;	// G=0x311ed299; S=0x31160d75; converted property
+ (id)defaultProperties;	// 0x3116008d
- (id)initWithDefaults;	// 0x311a2169
- (id)initWithType:(int)type width:(int)width length:(int)length;	// 0x3138a3bd
- (id)copyWithZone:(NSZone *)zone;	// 0x3124ed31
- (unsigned)hash;	// 0x3138a321
- (BOOL)isEqual:(id)equal;	// 0x3116cfc1
- (BOOL)isLengthOverridden;	// 0x311ed335
- (BOOL)isTypeOverridden;	// 0x311ed25d
- (BOOL)isWidthOverridden;	// 0x311ed2c9
// converted property getter: - (int)length;	// 0x311ed305
// converted property setter: - (void)setLength:(int)length;	// 0x31160d99
// converted property setter: - (void)setType:(int)type;	// 0x31160d51
// converted property setter: - (void)setWidth:(int)width;	// 0x31160d75
// converted property getter: - (int)type;	// 0x311ed22d
// converted property getter: - (int)width;	// 0x311ed299
@end

