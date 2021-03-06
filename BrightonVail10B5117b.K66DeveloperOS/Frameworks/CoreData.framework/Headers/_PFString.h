/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSString.h> // Unknown library
#import "CoreData-Structs.h"


@interface _PFString : NSString {
	int _reserved1;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _sourceData;	// 16 = 0x10
	int _reserved2;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x30ee48c9; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30f20395
+ (id)alloc;	// 0x30f203e9
+ (id)allocWithZone:(NSZone *)zone;	// 0x30f203f1
- (const char *)UTF8String;	// 0x30ee9bf5
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x30ee9831
- (BOOL)_isDeallocating;	// 0x30f20511
- (BOOL)_tryRetain;	// 0x30f204c1
- (const char *)cString;	// 0x30f205cd
- (unsigned)cStringLength;	// 0x30f205f5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x30f05855
- (id)copy;	// 0x30eec8c1
- (id)copyWithZone:(NSZone *)zone;	// 0x30f20581
- (void)dealloc;	// 0x30f203f9
- (id)description;	// 0x30f20629
- (void)encodeWithCoder:(id)coder;	// 0x30f2053d
- (void)getCString:(char *)string;	// 0x30f205d1
- (void)getCharacters:(unsigned short *)characters;	// 0x30eec9f9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x30eea771
- (unsigned)hash;	// 0x30ee476d
- (BOOL)isEqual:(id)equal;	// 0x30ee4781
- (BOOL)isEqualToString:(id)string;	// 0x30f20605
// converted property getter: - (unsigned)length;	// 0x30ee48c9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f20591
- (oneway void)release;	// 0x30f20435
- (id)retain;	// 0x30f203fd
- (unsigned)retainCount;	// 0x30f204ad
@end

