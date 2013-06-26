/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
	NSData *mData;	// 4 = 0x4
	const char *mStart;	// 8 = 0x8
	const char *mCurrent;	// 12 = 0xc
	const char *mEnd;	// 16 = 0x10
}
- (id)initWithData:(id)data;	// 0x3692df91
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x3692dfc9
- (BOOL)canSeek;	// 0x3692e1a1
- (void)close;	// 0x3692e2f1
- (id)closeLocalStream;	// 0x3692e2f5
- (void)dealloc;	// 0x3692e0f1
- (void)disableSystemCaching;	// 0x3692e2e9
- (void)enableSystemCaching;	// 0x3692e2ed
- (long long)offset;	// 0x3692e13d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x3692e161
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x3692e23d
- (void)seekToOffset:(long long)offset;	// 0x3692e1a5
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x3692e27d
@end
