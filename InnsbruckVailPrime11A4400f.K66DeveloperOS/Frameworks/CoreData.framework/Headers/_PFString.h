/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <Foundation/NSString.h>


@interface _PFString : NSString {
	int _reserved1;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _sourceData;	// 16 = 0x10
	int _reserved2;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x2d04caa1; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x2d089e85
+ (id)alloc;	// 0x2d089ed9
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d089ee1
- (const char *)UTF8String;	// 0x2d052331
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x2d051f69
- (BOOL)_isDeallocating;	// 0x2d089ffd
- (BOOL)_tryRetain;	// 0x2d089fb1
- (const char *)cString;	// 0x2d08a0b5
- (unsigned)cStringLength;	// 0x2d08a0dd
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x2d06e991
- (id)copy;	// 0x2d055011
- (id)copyWithZone:(NSZone *)zone;	// 0x2d08a069
- (void)dealloc;	// 0x2d089ee9
- (id)description;	// 0x2d08a111
- (void)encodeWithCoder:(id)coder;	// 0x2d08a025
- (void)getCString:(char *)string;	// 0x2d08a0b9
- (void)getCharacters:(unsigned short *)characters;	// 0x2d055149
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x2d052e7d
- (unsigned)hash;	// 0x2d04c925
- (BOOL)isEqual:(id)equal;	// 0x2d04c939
- (BOOL)isEqualToString:(id)string;	// 0x2d08a0ed
// converted property getter: - (unsigned)length;	// 0x2d04caa1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d08a079
- (oneway void)release;	// 0x2d089f25
- (id)retain;	// 0x2d089eed
- (unsigned)retainCount;	// 0x2d089f9d
@end
