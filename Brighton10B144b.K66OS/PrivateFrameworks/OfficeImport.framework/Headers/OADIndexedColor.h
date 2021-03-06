/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADIndexedColor : OADColor {
	int mIndex;	// 8 = 0x8
}
+ (id)indexedColorWithIndex:(int)index;	// 0x3497013d
- (id)initWithIndex:(int)index;	// 0x3496b595
- (id)colorFromPalette:(id)palette;	// 0x34a498f5
- (id)copyWithZone:(NSZone *)zone;	// 0x34972219
- (unsigned)hash;	// 0x34a49919
- (int)index;	// 0x3497db05
- (BOOL)isEqual:(id)equal;	// 0x34a49955
@end

