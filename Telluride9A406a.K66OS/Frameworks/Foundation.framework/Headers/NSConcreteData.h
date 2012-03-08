/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData {
@private
	unsigned _isInline : 1;	// 4 = 0x4
	unsigned _shouldFree : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
	unsigned char _space[12];	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x35ddd50d; converted property
- (id)init;	// 0x35df4c0d
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x35ddcdc1
- (BOOL)_bytesAreVM;	// 0x35e375b9
- (const void *)bytes;	// 0x35ddd0b9
- (id)copyWithZone:(NSZone *)zone;	// 0x35e0c735
- (void)dealloc;	// 0x35ddd51d
- (void)finalize;	// 0x35e375cd
- (void)getBytes:(void *)bytes;	// 0x35e21c89
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x35dfed15
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x35e1caf1
// converted property getter: - (unsigned)length;	// 0x35ddd50d
@end
