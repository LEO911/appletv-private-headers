/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"

@class SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
	id<SFUInputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	long long mOffset;	// 12 = 0xc
}
- (id)initForDecryptionWithInputStream:(id)inputStream key:(id)key;	// 0x31e476c1
- (BOOL)canSeek;	// 0x31e47b31
- (void)close;	// 0x31e47bf1
- (id)closeLocalStream;	// 0x31e47c11
- (void)dealloc;	// 0x31e479e5
- (void)disableSystemCaching;	// 0x31e47bb1
- (void)enableSystemCaching;	// 0x31e47bd1
- (long long)offset;	// 0x31e47a49
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x31e47a61
- (void)seekToOffset:(long long)offset;	// 0x31e47b35
@end
