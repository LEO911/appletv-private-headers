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
@property(assign) unsigned length;	// G=0x3730c4c9; S=0x3730c3b1; converted property
- (id)init;	// 0x373141a9
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x37331a91
- (id)initWithCapacity:(unsigned)capacity;	// 0x373141bd
- (id)initWithLength:(unsigned)length;	// 0x3730c255
- (BOOL)_bytesAreVM;	// 0x3736d6cd
- (void)_freeBytes;	// 0x37316909
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x37320a99
- (void)appendData:(id)data;	// 0x3734cdd1
- (const void *)bytes;	// 0x3730c4b9
- (void)dealloc;	// 0x373168c9
- (void)finalize;	// 0x3736d949
- (void)increaseLengthBy:(unsigned)by;	// 0x3736d6e1
// converted property getter: - (unsigned)length;	// 0x3730c4c9
- (void *)mutableBytes;	// 0x3730c4a9
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x37354bd1
- (void)resetBytesInRange:(NSRange)range;	// 0x3736d81d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3730c3b1
@end

