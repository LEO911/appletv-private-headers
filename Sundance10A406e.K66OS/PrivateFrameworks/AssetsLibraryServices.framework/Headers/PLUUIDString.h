/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import "AssetsLibraryServices-Structs.h"
#import <NSString.h> // Unknown library


@interface PLUUIDString : NSString {
@private
	unsigned char _uuid[16];	// 4 = 0x4
@protected
	BOOL _uuidString[37];	// 20 = 0x14
}
+ (id)UUIDString;	// 0x33c8d44d
- (id)init;	// 0x33c8d489
- (id)initWithCFUUID:(CFUUIDRef)cfuuid;	// 0x33c8d529
- (id)initWithCFUUIDBytes:(XXStruct_eX1N7A)cfuuidbytes;	// 0x33c8d591
- (id)initWithUUID:(unsigned char [16])uuid;	// 0x33c8d5dd
- (id)initWithUUIDData:(id)uuiddata;	// 0x33c8d49d
- (const char *)UTF8String;	// 0x33c8d83d
- (XXStruct_eX1N7A)UUIDBytes;	// 0x33c8d661
- (id)UUIDData;	// 0x33c8d631
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x33c8d67d
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x33c8d799
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x33c8d6b5
- (BOOL)isEqualToString:(id)string;	// 0x33c8d70d
- (unsigned)length;	// 0x33c8d679
@end

