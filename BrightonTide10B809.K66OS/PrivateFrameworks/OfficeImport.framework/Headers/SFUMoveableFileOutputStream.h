/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
	int mFd;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x34acca75
- (id)initWithTemporaryFile:(id)temporaryFile;	// 0x34acc889
- (BOOL)canCreateInputStream;	// 0x34accf95
- (BOOL)canSeek;	// 0x34accd0d
- (void)close;	// 0x34acd065
- (id)closeLocalStream;	// 0x34acd08d
- (void)dealloc;	// 0x34accbc5
- (void)flush;	// 0x34accf45
- (id)inputStream;	// 0x34accf99
- (BOOL)moveToPath:(id)path;	// 0x34accd6d
- (long long)offset;	// 0x34acccad
- (id)path;	// 0x34accc29
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34accd11
- (void)truncateToLength:(unsigned long)length;	// 0x34acce6d
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34accc39
@end
