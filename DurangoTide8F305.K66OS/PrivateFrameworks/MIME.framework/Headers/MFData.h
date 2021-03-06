/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"
#import "WeaklyReferencedObject.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying, WeaklyReferencedObject> {
	NSData *_internal;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSData *_parent;	// 12 = 0xc
	BOOL _subdata;	// 16 = 0x10
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3049f8ed
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x3049df65
- (id)init;	// 0x3049eba9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x3049ee91
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3049eb29
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3049eab5
- (id)initWithContentsOfFile:(id)file;	// 0x3049e891
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3049ed39
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x3049e975
- (id)initWithContentsOfURL:(id)url;	// 0x3049e9d9
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3049e9f9
- (id)initWithData:(id)data;	// 0x3049e709
- (id)initWithImmutableData:(id)immutableData;	// 0x3049e6f1
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x3049e721
- (id)_initWithFile:(id)file;	// 0x3049eb4d
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x3049f749
- (const void *)bytes;	// 0x3049e649
- (id)copyWithZone:(NSZone *)zone;	// 0x3049e6b9
- (id)data;	// 0x3049e579
- (void)dealloc;	// 0x3049f611
- (unsigned)length;	// 0x3049e669
- (BOOL)mf_immutable;	// 0x3049df71
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3049e689
- (void)release;	// 0x3049f8c9
- (id)retain;	// 0x3049f8d5
- (unsigned)retainCount;	// 0x3049f8e1
- (id)subdataWithRange:(NSRange)range;	// 0x3049e5a9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3049e549
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3049f52d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3049e519
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3049f4a1
@end

