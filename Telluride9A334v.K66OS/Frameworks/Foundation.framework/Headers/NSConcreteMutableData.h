/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSConcreteMutableData : NSMutableData {
@private
	unsigned _reserved : 1;	// 4 = 0x4
	unsigned _needToZero : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
}
@property(assign) unsigned length;	// G=0x305ff019; S=0x305fef05; converted property
- (id)init;	// 0x30606889
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x306244c5
- (id)initWithCapacity:(unsigned)capacity;	// 0x3060689d
- (id)initWithLength:(unsigned)length;	// 0x305fedb5
- (BOOL)_bytesAreVM;	// 0x3065d12d
- (void)_freeBytes;	// 0x30608f99
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x3061362d
- (void)appendData:(id)data;	// 0x3063f73d
- (const void *)bytes;	// 0x305ff009
- (void)dealloc;	// 0x30608f59
- (void)finalize;	// 0x3065d3a1
- (void)increaseLengthBy:(unsigned)by;	// 0x3065d141
// converted property getter: - (unsigned)length;	// 0x305ff019
- (void *)mutableBytes;	// 0x305feff9
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x306474d9
- (void)resetBytesInRange:(NSRange)range;	// 0x3065d281
// converted property setter: - (void)setLength:(unsigned)length;	// 0x305fef05
@end
