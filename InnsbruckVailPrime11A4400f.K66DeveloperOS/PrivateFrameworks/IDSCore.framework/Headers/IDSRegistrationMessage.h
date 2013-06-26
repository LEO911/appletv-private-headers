/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import <FTServices/FTIDSMessage.h>
#import "IDSCore-Structs.h"
#import "NSCopying.h"

@class NSData, NSArray, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface IDSRegistrationMessage : FTIDSMessage <NSCopying> {
	NSData *_validationData;	// 132 = 0x84
	NSArray *_responseServices;	// 136 = 0x88
	NSString *_language;	// 140 = 0x8c
	NSArray *_services;	// 144 = 0x90
	NSString *_hardwareVersion;	// 148 = 0x94
	NSString *_osVersion;	// 152 = 0x98
	NSString *_softwareVersion;	// 156 = 0x9c
	NSString *_protocolVersion;	// 160 = 0xa0
	NSString *_deviceName;	// 164 = 0xa4
	NSNumber *_responseHBI;	// 168 = 0xa8
}
@property(copy) NSString *deviceName;	// G=0x311ba9e9; S=0x311ba9fd; @synthesize=_deviceName
@property(copy) NSString *hardwareVersion;	// G=0x311ba959; S=0x311ba96d; @synthesize=_hardwareVersion
@property(copy) NSString *language;	// G=0x311ba911; S=0x311ba925; @synthesize=_language
@property(copy) NSString *osVersion;	// G=0x311ba97d; S=0x311ba991; @synthesize=_osVersion
@property(copy) NSString *protocolVersion;	// G=0x311ba9c5; S=0x311ba9d9; @synthesize=_protocolVersion
@property(copy) NSNumber *responseHBI;	// G=0x311baa0d; S=0x311baa21; @synthesize=_responseHBI
@property(copy) NSArray *responseServices;	// G=0x311ba8ed; S=0x311ba901; @synthesize=_responseServices
@property(copy) NSArray *services;	// G=0x311ba935; S=0x311ba949; @synthesize=_services
@property(copy) NSString *softwareVersion;	// G=0x311ba9a1; S=0x311ba9b5; @synthesize=_softwareVersion
@property(copy) NSData *validationData;	// G=0x311ba8c9; S=0x311ba8dd; @synthesize=_validationData
- (id)additionalMessageHeaders;	// 0x311ba73d
- (id)bagKey;	// 0x311ba3dd
- (id)copyWithZone:(NSZone *)zone;	// 0x311ba165
- (void)dealloc;	// 0x311ba061
// declared property getter: - (id)deviceName;	// 0x311ba9e9
- (void)handleResponseDictionary:(id)dictionary;	// 0x311ba80d
// declared property getter: - (id)hardwareVersion;	// 0x311ba959
- (BOOL)hasRequiredKeys:(id *)keys;	// 0x311ba315
// declared property getter: - (id)language;	// 0x311ba911
- (id)messageBody;	// 0x311ba499
- (id)nonStandardMessageHeadersForOutgoingPush;	// 0x311ba739
// declared property getter: - (id)osVersion;	// 0x311ba97d
// declared property getter: - (id)protocolVersion;	// 0x311ba9c5
- (id)requiredKeys;	// 0x311ba3e9
// declared property getter: - (id)responseHBI;	// 0x311baa0d
// declared property getter: - (id)responseServices;	// 0x311ba8ed
// declared property getter: - (id)services;	// 0x311ba935
// declared property setter: - (void)setDeviceName:(id)name;	// 0x311ba9fd
// declared property setter: - (void)setHardwareVersion:(id)version;	// 0x311ba96d
// declared property setter: - (void)setLanguage:(id)language;	// 0x311ba925
// declared property setter: - (void)setOsVersion:(id)version;	// 0x311ba991
// declared property setter: - (void)setProtocolVersion:(id)version;	// 0x311ba9d9
// declared property setter: - (void)setResponseHBI:(id)hbi;	// 0x311baa21
// declared property setter: - (void)setResponseServices:(id)services;	// 0x311ba901
// declared property setter: - (void)setServices:(id)services;	// 0x311ba949
// declared property setter: - (void)setSoftwareVersion:(id)version;	// 0x311ba9b5
// declared property setter: - (void)setValidationData:(id)data;	// 0x311ba8dd
// declared property getter: - (id)softwareVersion;	// 0x311ba9a1
// declared property getter: - (id)validationData;	// 0x311ba8c9
@end
