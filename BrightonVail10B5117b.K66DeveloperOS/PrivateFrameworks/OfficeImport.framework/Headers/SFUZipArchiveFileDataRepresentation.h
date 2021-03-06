/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
	SFUFileDataRepresentation *mFileRepresentation;	// 20 = 0x14
	int mFd;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x34aacc39
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34aaf839
- (long long)dataLength;	// 0x34aad9d1
- (void)dealloc;	// 0x34ae3275
- (BOOL)hasSameLocationAs:(id)as;	// 0x34ca8af5
- (id)inputStream;	// 0x34aad505
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34aaf8ad
- (BOOL)isEncrypted;	// 0x34ca8af1
- (BOOL)isReadable;	// 0x34ca8acd
- (id)path;	// 0x34ca8bbd
@end

