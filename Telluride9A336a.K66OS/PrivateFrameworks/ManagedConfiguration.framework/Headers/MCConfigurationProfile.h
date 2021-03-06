/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {
@private
	NSArray *_payloads;	// 92 = 0x5c
	MCProfileServiceProfile *_OTAProfile;	// 96 = 0x60
}
@property(assign) MCProfileServiceProfile *OTAProfile;	// G=0x33070c85; S=0x33070c95; @synthesize=_OTAProfile
@property(readonly, assign) NSArray *payloads;	// G=0x33070ca5; @synthesize=_payloads
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3307183d
// declared property getter: - (id)OTAProfile;	// 0x33070c85
- (void)_addObjectsOfClass:(Class)aClass fromArray:(id)array toArray:(id)array3;	// 0x33070cb5
- (void)_sortPayloads;	// 0x33070e89
- (void)dealloc;	// 0x3307136d
- (id)description;	// 0x33071591
- (id)earliestCertificateExpiryDate;	// 0x33071221
- (id)installationWarnings;	// 0x33071719
- (BOOL)isManagedByProfileService;	// 0x33070c6d
- (id)localizedPayloadSummaryByType;	// 0x33070d59
- (id)payloadWithUUID:(id)uuid;	// 0x33071145
// declared property getter: - (id)payloads;	// 0x33070ca5
// declared property setter: - (void)setOTAProfile:(id)profile;	// 0x33070c95
- (id)stubDictionary;	// 0x330713cd
@end

