/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADSchemeColor : OADColor {
	int mIndex;	// 8 = 0x8
}
+ (id)schemeColorWithIndex:(int)index;	// 0x3499b01d
- (id)initWithSchemeColorIndex:(int)schemeColorIndex;	// 0x348043cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3493d865
- (unsigned)hash;	// 0x3486f549
- (BOOL)isEqual:(id)equal;	// 0x3486f4a5
- (int)schemeColorIndex;	// 0x34877dd9
@end
