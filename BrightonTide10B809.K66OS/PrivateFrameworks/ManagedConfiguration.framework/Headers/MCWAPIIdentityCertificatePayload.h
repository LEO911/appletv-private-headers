/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCCertificatePayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
	NSData *_pemData;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSData *pemData;	// G=0x344cec6d; @synthesize=_pemData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344ce855
+ (id)typeStrings;	// 0x344ce82d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344ce8dd
- (void).cxx_destruct;	// 0x344cec7d
- (SecCertificate *)copyCertificate;	// 0x344ceb5d
- (SecIdentity *)copyIdentityFromKeychain;	// 0x344cebbd
- (id)description;	// 0x344cebc5
- (BOOL)isIdentity;	// 0x344cebc1
// declared property getter: - (id)pemData;	// 0x344cec6d
@end
