/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x32bdcd19
- (id)initWithCoder:(id)coder;	// 0x32bdc495
- (BOOL)_isDeallocating;	// 0x32bdc54d
- (BOOL)_tryRetain;	// 0x32bdc575
- (const void *)bytes;	// 0x32bdc3f1
- (id)copyWithZone:(NSZone *)zone;	// 0x32bdc60d
- (id)description;	// 0x32bdc59d
- (void)encodeWithCoder:(id)coder;	// 0x32bdc4a5
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x32bdcd6d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x32bdcd81
- (BOOL)isEqualToData:(id)data;	// 0x32bdcd99
- (unsigned)length;	// 0x32bdc3e1
- (id)mutableCopy;	// 0x32bdc61d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32bdc631
- (id)privateCopy;	// 0x32bdc679
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x32bdcec5
- (void)release;	// 0x32bdc50d
- (id)retain;	// 0x32bdc4e5
- (unsigned)retainCount;	// 0x32bdc52d
- (id)subdataWithRange:(NSRange)range;	// 0x32bdc6c1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x32bdc739
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x32bdc6e9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x32bdc7a9
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32bdc759
@end
