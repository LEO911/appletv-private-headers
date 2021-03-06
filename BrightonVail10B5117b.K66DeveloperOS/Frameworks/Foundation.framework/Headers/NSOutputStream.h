/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOutputStream.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x319f41d5
+ (id)outputStreamToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x319f42b9
+ (id)outputStreamToFileAtPath:(id)path append:(BOOL)append;	// 0x319f42fd
+ (id)outputStreamToMemory;	// 0x319f427d
+ (id)outputStreamWithURL:(id)url append:(BOOL)append;	// 0x319f4341
- (unsigned long)_cfTypeID;	// 0x319f4385
- (BOOL)hasSpaceAvailable;	// 0x319f4259
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x319f4231
@end

@interface NSOutputStream (NSCFOutputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x319f43cd
@end

