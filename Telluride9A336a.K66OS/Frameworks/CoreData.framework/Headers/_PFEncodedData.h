/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x323fccd9
- (id)initWithCoder:(id)coder;	// 0x323fc495
- (BOOL)_isDeallocating;	// 0x323fc54d
- (BOOL)_tryRetain;	// 0x323fc575
- (const void *)bytes;	// 0x323fc3f1
- (id)copyWithZone:(NSZone *)zone;	// 0x323fc60d
- (id)description;	// 0x323fc59d
- (void)encodeWithCoder:(id)coder;	// 0x323fc4a5
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x323fcd2d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x323fcd41
- (BOOL)isEqualToData:(id)data;	// 0x323fcd59
- (unsigned)length;	// 0x323fc3e1
- (id)mutableCopy;	// 0x323fc61d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x323fc631
- (id)privateCopy;	// 0x323fc679
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x323fce85
- (void)release;	// 0x323fc50d
- (id)retain;	// 0x323fc4e5
- (unsigned)retainCount;	// 0x323fc52d
- (id)subdataWithRange:(NSRange)range;	// 0x323fc6c1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x323fc739
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x323fc6e9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x323fc7a9
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x323fc759
@end
