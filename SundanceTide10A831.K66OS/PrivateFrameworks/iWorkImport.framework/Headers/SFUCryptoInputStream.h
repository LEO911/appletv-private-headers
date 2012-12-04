/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@class SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
	id<SFUInputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	long long mOffset;	// 12 = 0xc
}
- (id)initForDecryptionWithInputStream:(id)inputStream key:(id)key;	// 0x35d69bb1
- (BOOL)canSeek;	// 0x35d6a021
- (void)close;	// 0x35d6a069
- (id)closeLocalStream;	// 0x35d6a089
- (void)dealloc;	// 0x35d69ed5
- (void)disableSystemCaching;	// 0x35d6a029
- (void)enableSystemCaching;	// 0x35d6a049
- (long long)offset;	// 0x35d69f39
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x35d69f51
- (void)seekToOffset:(long long)offset;	// 0x35d6a025
@end
