/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableData.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMutableData : NSMutableData {
	unsigned _reserved : 1;	// 4 = 0x4
	unsigned _needToZero : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
}
@property(assign) unsigned length;	// G=0x3463e139; S=0x3463e021; converted property
- (id)init;	// 0x34645e51
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x34663739
- (id)initWithCapacity:(unsigned)capacity;	// 0x34645e65
- (id)initWithLength:(unsigned)length;	// 0x3463dec5
- (BOOL)_bytesAreVM;	// 0x3469f39d
- (void)_freeBytes;	// 0x346485b1
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x34652741
- (void)appendData:(id)data;	// 0x3467ea81
- (const void *)bytes;	// 0x3463e129
- (void)dealloc;	// 0x34648571
- (void)finalize;	// 0x3469f619
- (void)increaseLengthBy:(unsigned)by;	// 0x3469f3b1
// converted property getter: - (unsigned)length;	// 0x3463e139
- (void *)mutableBytes;	// 0x3463e119
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x34686881
- (void)resetBytesInRange:(NSRange)range;	// 0x3469f4ed
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3463e021
@end
