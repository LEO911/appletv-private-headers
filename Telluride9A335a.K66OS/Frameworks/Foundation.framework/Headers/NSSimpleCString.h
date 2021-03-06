/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSSimpleCString : NSString {
@private
	char *bytes;	// 4 = 0x4
	int numBytes;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3209ec69
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x3209ec71
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x3209eec5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x3209f411
- (unsigned)cStringLength;	// 0x3209edc5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x3209edf5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3209ec91
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x3209f171
- (id)copyWithZone:(NSZone *)zone;	// 0x3209ee39
- (void)dealloc;	// 0x3209f729
- (unsigned)fastestEncoding;	// 0x3209edd5
- (void)finalize;	// 0x3209f76d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x3209f361
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3209ed11
- (BOOL)hasPrefix:(id)prefix;	// 0x3209f20d
- (BOOL)hasSuffix:(id)suffix;	// 0x3209f2a5
- (unsigned)hash;	// 0x3209f341
- (BOOL)isEqual:(id)equal;	// 0x3209eee1
- (BOOL)isEqualToString:(id)string;	// 0x3209f0c5
- (unsigned)length;	// 0x3209edb5
- (unsigned)smallestEncoding;	// 0x3209ede5
- (id)stringByAppendingString:(id)string;	// 0x3209f509
@end

