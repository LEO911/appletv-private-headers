/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipEntry : SFUDataRepresentation {
@private
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 12 = 0xc
	int mCompressionMethod;	// 16 = 0x10
	unsigned long long mCompressedSize;	// 20 = 0x14
	unsigned long long mUncompressedSize;	// 28 = 0x1c
	unsigned long long mOffset;	// 36 = 0x24
	unsigned mCrc;	// 44 = 0x2c
	unsigned long long mDataOffset;	// 48 = 0x30
	BOOL mHasDataOffset;	// 56 = 0x38
	unsigned long long mEncodedLength;	// 60 = 0x3c
	BOOL mHasEncodedLength;	// 68 = 0x44
	SFUCryptoKey *mCryptoKey;	// 72 = 0x48
}
@property(assign) long long dataLength;	// G=0x32c4e6b9; S=0x32d90045; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x32c4dd1d
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x32d90309
- (unsigned long long)backingFileDataOffset;	// 0x32d90125
- (id)backingFilePath;	// 0x32d901c9
- (unsigned long long)calculateEncodedLength;	// 0x32d90519
- (void)copyToFile:(id)file;	// 0x32d903a5
- (unsigned)crc;	// 0x32d90035
- (id)data;	// 0x32c5da15
// converted property getter: - (long long)dataLength;	// 0x32c4e6b9
- (unsigned long long)dataOffset;	// 0x32c4e979
- (void)dealloc;	// 0x32c67b1d
- (long long)encodedLength;	// 0x32d902b5
- (id)inputStream;	// 0x32c4e6c9
- (BOOL)isBackedByFile;	// 0x32d90275
- (BOOL)isCompressed;	// 0x32d9000d
- (BOOL)isEncrypted;	// 0x32d90021
- (BOOL)isReadable;	// 0x32d902c9
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x32d90661
- (void)setCompressionFlags:(unsigned short)flags;	// 0x32c4defd
- (void)setCryptoKey:(id)key;	// 0x32d900ed
// converted property setter: - (void)setDataLength:(long long)length;	// 0x32d90045
@end

