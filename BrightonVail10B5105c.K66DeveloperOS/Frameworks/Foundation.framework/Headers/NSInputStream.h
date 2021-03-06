/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x36118045
+ (id)inputStreamWithData:(id)data;	// 0x361180a1
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x361180e1
+ (id)inputStreamWithURL:(id)url;	// 0x36118121
- (unsigned long)_cfTypeID;	// 0x361181d1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x36118189
- (BOOL)hasBytesAvailable;	// 0x361181ad
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x36118161
@end

@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x36118389
@end

