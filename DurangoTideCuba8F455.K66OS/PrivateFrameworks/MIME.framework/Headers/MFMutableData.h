/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSMutableData.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"


@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
	void *_bytes;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _mappedLength;	// 12 = 0xc
	unsigned _capacity;	// 16 = 0x10
	unsigned _threshold;	// 20 = 0x14
	char *_path;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	unsigned _flushFrom;	// 32 = 0x20
	BOOL _flush;	// 36 = 0x24
	BOOL _immutable;	// 37 = 0x25
	BOOL _vm;	// 38 = 0x26
}
@property(assign) unsigned length;	// G=0x314f1f75; S=0x314f3de1; converted property
- (id)init;	// 0x314f2501
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x314f3921
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x314f24ed
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x314f3b55
- (id)initWithCapacity:(unsigned)capacity;	// 0x314f3c15
- (id)initWithContentsOfFile:(id)file;	// 0x314f2421
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x314f2cb5
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x314f2441
- (id)initWithContentsOfURL:(id)url;	// 0x314f2461
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x314f2481
- (id)initWithData:(id)data;	// 0x314f23d5
- (id)initWithLength:(unsigned)length;	// 0x314f2395
- (void)_flushToDisk:(unsigned)disk capacity:(unsigned)capacity;	// 0x314f422d
- (id)_initWithFd:(int)fd path:(id)path mutable:(BOOL)aMutable;	// 0x314f3b7d
- (void)_mapMutableData:(BOOL)data;	// 0x314f46c1
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x314f3d51
- (void)appendData:(id)data;	// 0x314f21bd
- (const void *)bytes;	// 0x314f22c9
- (id)copyWithZone:(NSZone *)zone;	// 0x314f2365
- (void)dealloc;	// 0x314f3c71
// converted property getter: - (unsigned)length;	// 0x314f1f75
- (BOOL)mf_immutable;	// 0x314f1f85
- (void)mf_makeImmutable;	// 0x314f204d
- (const void *)mutableBytes;	// 0x314f2209
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x314f232d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x314f3de1
- (void)setMappingThreshold:(unsigned)threshold;	// 0x314f20b9
- (id)subdataWithRange:(NSRange)range;	// 0x314f2115
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x314f201d
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x314f4081
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x314f1fed
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x314f3415
@end

