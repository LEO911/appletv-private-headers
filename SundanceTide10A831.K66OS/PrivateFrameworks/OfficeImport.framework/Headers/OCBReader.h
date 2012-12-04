/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCDEncryptedReader.h"


@interface OCBReader : OCDEncryptedReader {
	OcBinaryReader *mBinaryReader;	// 36 = 0x24
	FILE *mFile;	// 40 = 0x28
}
@property(assign, nonatomic) OcBinaryReader *binaryReader;	// G=0x369c7e2d; S=0x369c7a9d; @synthesize=mBinaryReader
@property(readonly, assign, nonatomic) OCCEncryptionInfoReader *encryptionInfoReader;	// G=0x36c20d71; 
@property(assign, nonatomic) FILE *file;	// G=0x369c7e8d; S=0x369c7e4d; @synthesize=mFile
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x369c7605
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x36c20d79
- (id)allocDecryptorWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilename:(id)filename;	// 0x36c20d7d
// declared property getter: - (OcBinaryReader *)binaryReader;	// 0x369c7e2d
- (void)closeFile;	// 0x36a544bd
- (void)dealloc;	// 0x36a53731
// declared property getter: - (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x36c20d71
// declared property getter: - (FILE *)file;	// 0x369c7e8d
- (bool)isBinaryReader;	// 0x36c20d75
- (id)read;	// 0x36c20eb1
- (void)restartReaderToUseDecryptedDocument;	// 0x36c20e01
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x369cc209
// declared property setter: - (void)setBinaryReader:(OcBinaryReader *)reader;	// 0x369c7a9d
// declared property setter: - (void)setFile:(FILE *)file;	// 0x369c7e4d
- (BOOL)start;	// 0x36c20ead
@end
