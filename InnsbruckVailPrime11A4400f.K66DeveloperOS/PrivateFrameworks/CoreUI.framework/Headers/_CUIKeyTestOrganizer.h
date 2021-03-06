/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import </libobjc.A.h>
#import "CoreUI-Structs.h"

@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {
	renditionkeytoken originalKey[16];	// 4 = 0x4
	NSArray *orderedNonZeroFlexibleAttributes;	// 68 = 0x44
	unsigned flexAttributesCount;	// 72 = 0x48
	renditionkeytoken testKey[16];	// 76 = 0x4c
	unsigned chooseCount;	// 140 = 0x8c
	unsigned subchooseCount;	// 144 = 0x90
}
- (id)initWithRenditionKey:(const renditionkeytoken *)renditionKey;	// 0x3078e46d
- (unsigned)_attributeToBumpIndex;	// 0x3078dfcd
- (void)_bumpTestKey;	// 0x3078e20d
- (BOOL)_bumpTestKeyAttributeIndex:(unsigned)index;	// 0x3078e069
- (id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken *)key;	// 0x3078df79
- (void)dealloc;	// 0x3078e68d
- (renditionkeytoken *)nextKey;	// 0x3078e6d9
@end

