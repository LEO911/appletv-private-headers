/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, NSString, NSData;

@interface MCProfileServiceProfile : MCProfile {
@private
	NSString *_URLString;	// 92 = 0x5c
	NSArray *_deviceAttributes;	// 96 = 0x60
	id _challenge;	// 100 = 0x64
	NSData *_enrollmentIdentityPersistentID;	// 104 = 0x68
	BOOL _confirmInstallation;	// 108 = 0x6c
	NSArray *_bogusPayloads;	// 112 = 0x70
}
@property(retain) NSString *URLString;	// G=0x3645fdc9; S=0x3645fda5; @synthesize=_URLString
@property(readonly, assign) id challenge;	// G=0x3645fb79; @synthesize=_challenge
@property(readonly, assign) BOOL confirmInstallation;	// G=0x3645fb69; @synthesize=_confirmInstallation
@property(readonly, assign) NSArray *deviceAttributes;	// G=0x3645fb89; @synthesize=_deviceAttributes
@property(retain) NSData *enrollmentIdentityPersistentID;	// G=0x3645fe05; S=0x3645fde1; @synthesize=_enrollmentIdentityPersistentID
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x364600f9
// declared property getter: - (id)URLString;	// 0x3645fdc9
- (id)_badDataTypeErrorWithFieldName:(id)fieldName;	// 0x3645fb99
- (id)_unsupportedValueErrorWithFieldName:(id)fieldName value:(id)value;	// 0x3645fbf9
// declared property getter: - (id)challenge;	// 0x3645fb79
// declared property getter: - (BOOL)confirmInstallation;	// 0x3645fb69
- (void)dealloc;	// 0x3645fd09
- (id)description;	// 0x3645fe1d
// declared property getter: - (id)deviceAttributes;	// 0x3645fb89
// declared property getter: - (id)enrollmentIdentityPersistentID;	// 0x3645fe05
- (id)localizedPayloadSummaryByType;	// 0x364600c1
- (id)payloads;	// 0x3645fc5d
// declared property setter: - (void)setEnrollmentIdentityPersistentID:(id)anId;	// 0x3645fde1
// declared property setter: - (void)setURLString:(id)string;	// 0x3645fda5
- (id)stubDictionary;	// 0x3645ff71
@end

