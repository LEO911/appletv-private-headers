/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


__attribute__((visibility("hidden")))
@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
@private
	id<SFUInputStream> mInputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithInputStream:(id)inputStream;	// 0x34e5f961
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x34e5f99d
- (BOOL)canSeek;	// 0x34e5fb35
- (void)close;	// 0x34e5fbdd
- (id)closeLocalStream;	// 0x34e5f951
- (void)dealloc;	// 0x34e5fbfd
- (void)disableSystemCaching;	// 0x34e5fb9d
- (void)enableSystemCaching;	// 0x34e5fbbd
- (long long)offset;	// 0x34e5fa1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34e5fb09
- (void)seekToOffset:(long long)offset;	// 0x34e5fb59
@end
