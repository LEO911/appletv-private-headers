/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUFileInputStream : NSObject <SFUInputStream> {
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x3692d971
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x3692dbf5
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x3692da8d
- (BOOL)canSeek;	// 0x3692de25
- (void)close;	// 0x3692ded5
- (id)closeLocalStream;	// 0x3692df2d
- (void)dealloc;	// 0x3692dcd5
- (void)disableSystemCaching;	// 0x3692de65
- (void)enableSystemCaching;	// 0x3692de9d
- (long long)offset;	// 0x3692dd15
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x3692dd45
- (void)seekToOffset:(long long)offset;	// 0x3692de29
@end
