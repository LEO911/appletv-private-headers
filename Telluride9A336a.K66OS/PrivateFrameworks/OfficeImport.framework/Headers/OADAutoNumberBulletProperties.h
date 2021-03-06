/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"


__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties {
@private
	int mSchemeType;	// 4 = 0x4
	int mStartIndex;	// 8 = 0x8
}
- (id)initWithAutoNumberSchemeType:(int)autoNumberSchemeType startIndex:(unsigned)index;	// 0x34cd9e49
- (int)autoNumberSchemeType;	// 0x34cd9ee1
- (BOOL)isEqual:(id)equal;	// 0x34cd9e69
- (unsigned)startIndex;	// 0x34e1c361
@end

