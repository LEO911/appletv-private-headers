/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
@private
	unsigned *_indexes;	// 4 = 0x4
	unsigned _hash;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
@property(readonly, assign) unsigned hash;	// G=0x30290585; converted property
@property(readonly, assign) unsigned length;	// G=0x3027799d; converted property
+ (id)indexPathWithIndex:(unsigned)index;	// 0x302c5f81
+ (id)indexPathWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x302779ad
- (id)init;	// 0x3029cf41
- (id)initWithCoder:(id)coder;	// 0x302c5c51
- (id)initWithIndex:(unsigned)index;	// 0x302c5a85
- (id)initWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x302778dd
- (int)compare:(id)compare;	// 0x30290fed
- (id)copyWithZone:(NSZone *)zone;	// 0x30290575
- (void)dealloc;	// 0x30278749
- (id)description;	// 0x302c6071
- (void)encodeWithCoder:(id)coder;	// 0x302c5aa5
- (void)getIndexes:(unsigned *)indexes;	// 0x302c6045
// converted property getter: - (unsigned)hash;	// 0x30290585
- (unsigned)indexAtPosition:(unsigned)position;	// 0x302779ed
- (id)indexPathByAddingIndex:(unsigned)index;	// 0x3029cf55
- (id)indexPathByRemovingLastIndex;	// 0x302c5fbd
- (BOOL)isEqual:(id)equal;	// 0x302905d5
// converted property getter: - (unsigned)length;	// 0x3027799d
@end
