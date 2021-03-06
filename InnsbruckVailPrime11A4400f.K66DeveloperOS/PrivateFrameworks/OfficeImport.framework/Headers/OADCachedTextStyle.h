/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>


@interface OADCachedTextStyle : NSObject {
	OADCachedTextStyleData mData;	// 4 = 0x4
	unsigned mHash;	// 28 = 0x1c
}
- (id)initWithTextBodyProperties:(id)textBodyProperties paragraphProperties:(id)properties characterProperties:(id)properties3 colorContext:(id)context graphicStyleCache:(id)cache;	// 0x317792e9
- (id).cxx_construct;	// 0x317792e5
- (void)applyToParagraphProperties:(id)paragraphProperties graphicStyleCache:(id)cache;	// 0x319a506d
- (void)applyToTextBodyProperties:(id)textBodyProperties graphicStyleCache:(id)cache;	// 0x319a545d
- (unsigned)hash;	// 0x317799f1
- (BOOL)isEqual:(id)equal;	// 0x31779a05
@end

