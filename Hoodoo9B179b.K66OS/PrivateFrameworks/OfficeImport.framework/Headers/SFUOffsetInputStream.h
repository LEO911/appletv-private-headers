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
- (id)initWithInputStream:(id)inputStream;	// 0x32a15961
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x32a1599d
- (BOOL)canSeek;	// 0x32a15b35
- (void)close;	// 0x32a15bdd
- (id)closeLocalStream;	// 0x32a15951
- (void)dealloc;	// 0x32a15bfd
- (void)disableSystemCaching;	// 0x32a15b9d
- (void)enableSystemCaching;	// 0x32a15bbd
- (long long)offset;	// 0x32a15a1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x32a15b09
- (void)seekToOffset:(long long)offset;	// 0x32a15b59
@end
