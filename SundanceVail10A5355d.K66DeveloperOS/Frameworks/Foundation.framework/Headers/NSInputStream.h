/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x346dbfa9
+ (id)inputStreamWithData:(id)data;	// 0x346dc005
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x346dc045
+ (id)inputStreamWithURL:(id)url;	// 0x346dc085
- (unsigned long)_cfTypeID;	// 0x346dc135
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x346dc0ed
- (BOOL)hasBytesAvailable;	// 0x346dc111
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x346dc0c5
@end

@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x346dc2ed
@end
