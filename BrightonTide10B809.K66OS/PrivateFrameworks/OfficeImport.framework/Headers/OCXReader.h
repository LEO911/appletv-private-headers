/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDEncryptedReader.h"

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
	OCPZipPackage *mZipPackage;	// 36 = 0x24
}
@property(retain, nonatomic) OCPZipPackage *zipPackage;	// G=0x348d2805; S=0x3499a9ad; @synthesize=mZipPackage
- (void)dealloc;	// 0x34908fe5
- (bool)isBinaryReader;	// 0x348d258d
- (id)read;	// 0x34a6b0f5
- (void)restartReaderToUseDecryptedDocument;	// 0x34a6b0b5
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x348d2211
// declared property setter: - (void)setZipPackage:(id)package;	// 0x3499a9ad
- (BOOL)start;	// 0x348d220d
- (BOOL)verifyFileFormat;	// 0x34a6b059
// declared property getter: - (id)zipPackage;	// 0x348d2805
@end

