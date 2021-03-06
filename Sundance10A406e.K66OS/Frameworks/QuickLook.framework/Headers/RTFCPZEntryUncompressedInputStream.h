/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library
#import "RTFCPZEntryInputStream.h"

@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZEntryUncompressedInputStream : NSObject <RTFCPZEntryInputStream> {
	long long mOffset;	// 4 = 0x4
	long long mEnd;	// 12 = 0xc
	id<RTFCPZArchiveInputStream> mInput;	// 20 = 0x14
}
- (id)initWithOffset:(long long)offset end:(long long)end input:(id)input;	// 0x30e15c85
- (void)dealloc;	// 0x30e15cf5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x30e15dcd
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x30e15d41
@end

