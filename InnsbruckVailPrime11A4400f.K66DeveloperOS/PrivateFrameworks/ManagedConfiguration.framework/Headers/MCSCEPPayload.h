/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSString, NSDictionary, NSArray, NSData;

@interface MCSCEPPayload : MCCertificatePayload {
	NSString *_URLString;	// 52 = 0x34
	NSString *_CAInstanceName;	// 56 = 0x38
	NSString *_challenge;	// 60 = 0x3c
	NSArray *_subject;	// 64 = 0x40
	unsigned _keySize;	// 68 = 0x44
	int _usageFlags;	// 72 = 0x48
	NSData *_CAFingerprint;	// 76 = 0x4c
	NSArray *_CACaps;	// 80 = 0x50
	NSDictionary *_subjectAltName;	// 84 = 0x54
	unsigned _retries;	// 88 = 0x58
	unsigned _retryDelay;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSArray *CACaps;	// G=0x313a3d1d; @synthesize=_CACaps
@property(readonly, assign, nonatomic) NSData *CAFingerprint;	// G=0x313a3d0d; @synthesize=_CAFingerprint
@property(readonly, assign, nonatomic) NSString *CAInstanceName;	// G=0x313a3cbd; @synthesize=_CAInstanceName
@property(readonly, assign, nonatomic) NSString *URLString;	// G=0x313a3cad; @synthesize=_URLString
@property(readonly, assign, nonatomic) NSString *challenge;	// G=0x313a3ccd; @synthesize=_challenge
@property(readonly, assign, nonatomic) unsigned keySize;	// G=0x313a3ced; @synthesize=_keySize
@property(readonly, assign, nonatomic) unsigned retries;	// G=0x313a3d3d; @synthesize=_retries
@property(readonly, assign, nonatomic) unsigned retryDelay;	// G=0x313a3d4d; @synthesize=_retryDelay
@property(readonly, assign, nonatomic) NSArray *subject;	// G=0x313a3cdd; @synthesize=_subject
@property(readonly, assign, nonatomic) NSDictionary *subjectAltName;	// G=0x313a3d2d; @synthesize=_subjectAltName
@property(readonly, assign, nonatomic) int usageFlags;	// G=0x313a3cfd; @synthesize=_usageFlags
+ (id)localizedPluralForm;	// 0x313a2d99
+ (id)localizedSingularForm;	// 0x313a2d85
+ (id)typeStrings;	// 0x313a2d5d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x313a2db5
- (void).cxx_destruct;	// 0x313a3d5d
// declared property getter: - (id)CACaps;	// 0x313a3d1d
// declared property getter: - (id)CAFingerprint;	// 0x313a3d0d
// declared property getter: - (id)CAInstanceName;	// 0x313a3cbd
// declared property getter: - (id)URLString;	// 0x313a3cad
// declared property getter: - (id)challenge;	// 0x313a3ccd
- (SecCertificate *)copyCertificate;	// 0x313a38f9
- (SecIdentity *)copyIdentityFromKeychain;	// 0x313a3961
- (id)description;	// 0x313a3a5d
- (BOOL)isIdentity;	// 0x313a2db1
- (BOOL)isRoot;	// 0x313a2dad
// declared property getter: - (unsigned)keySize;	// 0x313a3ced
// declared property getter: - (unsigned)retries;	// 0x313a3d3d
// declared property getter: - (unsigned)retryDelay;	// 0x313a3d4d
- (id)stubDictionary;	// 0x313a39c9
// declared property getter: - (id)subject;	// 0x313a3cdd
// declared property getter: - (id)subjectAltName;	// 0x313a3d2d
// declared property getter: - (int)usageFlags;	// 0x313a3cfd
@end

