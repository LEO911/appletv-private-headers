/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x3195484d
+ (id)inputStreamWithData:(id)data;	// 0x319548a9
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x319548e9
+ (id)inputStreamWithURL:(id)url;	// 0x31954929
- (unsigned long)_cfTypeID;	// 0x319549d9
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x31954991
- (BOOL)hasBytesAvailable;	// 0x319549b5
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x31954969
@end

@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x31954b91
@end
