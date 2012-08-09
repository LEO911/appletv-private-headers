/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"


@interface MCCrypto : NSObject {
}
+ (id)_decryptionFailedError;	// 0x33671f55
+ (SecCertificate *)copyCertificateRefFromPEMData:(id)pemdata;	// 0x33671dcd
+ (SecCertificate *)copyCertificateRefFromPKCS1Data:(id)pkcs1Data;	// 0x33671db9
+ (BOOL)isValidPKCS12Data:(id)data;	// 0x33671f31
+ (id)objectFromEncryptedData:(id)encryptedData outCertificate:(SecCertificate **)certificate outError:(id *)error;	// 0x33672019
@end
