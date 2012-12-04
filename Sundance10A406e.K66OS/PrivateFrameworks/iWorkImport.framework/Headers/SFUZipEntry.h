/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 20 = 0x14
	int mCompressionMethod;	// 24 = 0x18
	unsigned long long mCompressedSize;	// 28 = 0x1c
	unsigned long long mUncompressedSize;	// 36 = 0x24
	unsigned long long mOffset;	// 44 = 0x2c
	unsigned mCrc;	// 52 = 0x34
	unsigned long long mDataOffset;	// 56 = 0x38
	BOOL mHasDataOffset;	// 64 = 0x40
	unsigned long long mEncodedLength;	// 68 = 0x44
	BOOL mHasEncodedLength;	// 76 = 0x4c
	SFUCryptoKey *mCryptoKey;	// 80 = 0x50
}
@property(assign) long long dataLength;	// G=0x324c9459; S=0x324c9d01; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x324c90f9
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x324c92f1
- (unsigned long long)backingFileDataOffset;	// 0x324c9abd
- (id)backingFilePath;	// 0x324c9a79
- (unsigned long long)calculateEncodedLength;	// 0x324c9f95
- (void)copyToFile:(id)file;	// 0x324c9821
- (unsigned)crc;	// 0x324c9af9
- (id)data;	// 0x324c96a9
// converted property getter: - (long long)dataLength;	// 0x324c9459
- (unsigned long long)dataOffset;	// 0x324c9d41
- (void)dealloc;	// 0x324c93a9
- (long long)encodedLength;	// 0x324c9471
- (id)inputStream;	// 0x324c9481
- (BOOL)isBackedByFile;	// 0x324c9a31
- (BOOL)isCompressed;	// 0x324c9a01
- (BOOL)isEncrypted;	// 0x324c9a19
- (BOOL)isReadable;	// 0x324c940d
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x324c9b09
- (void)setCompressionFlags:(unsigned short)flags;	// 0x324c9c49
- (void)setCryptoKey:(id)key;	// 0x324c9cc5
// converted property setter: - (void)setDataLength:(long long)length;	// 0x324c9d01
@end
