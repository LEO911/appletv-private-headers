/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSSimpleCString.h"
#import "Foundation-Structs.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x34d9143d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x34d91619
- (BOOL)_isDeallocating;	// 0x34d91829
- (BOOL)_tryRetain;	// 0x34d91825
- (id)autorelease;	// 0x34d9181d
- (const char *)cString;	// 0x34d91871
- (unsigned)cStringLength;	// 0x34d91599
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x34d915cd
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x34d91459
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x34d917b9
- (id)copy;	// 0x34d91611
- (id)copyWithZone:(NSZone *)zone;	// 0x34d91615
- (void)dealloc;	// 0x34d91839
- (unsigned)fastestEncoding;	// 0x34d915ad
- (void)finalize;	// 0x34d91855
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x34d914dd
- (unsigned)hash;	// 0x34d917f9
- (BOOL)isEqual:(id)equal;	// 0x34d91635
- (BOOL)isEqualToString:(id)string;	// 0x34d91705
- (unsigned)length;	// 0x34d91585
- (const char *)lossyCString;	// 0x34d91885
- (oneway void)release;	// 0x34d91835
- (id)retain;	// 0x34d91821
- (unsigned)retainCount;	// 0x34d9182d
- (unsigned)smallestEncoding;	// 0x34d915bd
@end

