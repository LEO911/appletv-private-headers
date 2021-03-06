/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDBorder.h"


@interface EPBorder : EDBorder {
	int mPrecedence;	// 20 = 0x14
}
+ (id)borderWithBorder:(id)border precedence:(int)precedence resources:(id)resources;	// 0x3712cac9
- (id)initWithBorder:(id)border precedence:(int)precedence resources:(id)resources;	// 0x370b3b9d
- (BOOL)isEqualToBorder:(id)border;	// 0x370b4419
- (int)precedence;	// 0x370b4409
@end

