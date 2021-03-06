/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface SFUJsonScanner : NSObject {
@private
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x34e5e181
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x34e5df59
- (void)dealloc;	// 0x34e5e0f9
- (unsigned short)nextCharacter;	// 0x34e5d661
- (id)parseArray;	// 0x34e5db39
- (BOOL)parseConstantString:(const char *)string;	// 0x34e5db05
- (id)parseDictionary;	// 0x34e5dc41
- (id)parseFalse;	// 0x34e5da25
- (id)parseHexCharacter;	// 0x34e5dfe5
- (id)parseNull;	// 0x34e5dabd
- (id)parseNumber;	// 0x34e5d809
- (id)parseObject;	// 0x34e5d751
- (id)parseString;	// 0x34e5dd85
- (id)parseTrue;	// 0x34e5da71
- (void)skipWhitespace;	// 0x34e5e081
@end

