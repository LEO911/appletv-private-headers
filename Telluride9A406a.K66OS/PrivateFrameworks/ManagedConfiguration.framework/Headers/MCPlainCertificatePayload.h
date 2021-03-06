/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCCertificatePayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {
@private
	NSString *_certificateFileName;	// 48 = 0x30
	NSData *_certificateData;	// 52 = 0x34
	NSString *_password;	// 56 = 0x38
	int _dataEncoding;	// 60 = 0x3c
}
@property(readonly, assign) NSData *certificateData;	// G=0x36474e49; @synthesize=_certificateData
@property(readonly, assign) NSString *certificateFileName;	// G=0x36474e69; @synthesize=_certificateFileName
@property(readonly, assign) int dataEncoding;	// G=0x36474e59; @synthesize=_dataEncoding
@property(readonly, assign) NSString *password;	// G=0x36474e39; @synthesize=_password
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36474eed
+ (id)typeStrings;	// 0x36474f4d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x364753bd
// declared property getter: - (id)certificateData;	// 0x36474e49
// declared property getter: - (id)certificateFileName;	// 0x36474e69
- (SecCertificate *)copyCertificate;	// 0x3647511d
// declared property getter: - (int)dataEncoding;	// 0x36474e59
- (void)dealloc;	// 0x36474e79
- (id)description;	// 0x36475039
- (id)installationWarnings;	// 0x36475265
- (BOOL)isIdentity;	// 0x36474fa5
- (BOOL)isSigned;	// 0x36475375
// declared property getter: - (id)password;	// 0x36474e39
- (id)persistentResourceID;	// 0x36475011
@end

