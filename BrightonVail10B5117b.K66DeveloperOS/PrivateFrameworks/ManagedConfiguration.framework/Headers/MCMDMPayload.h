/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSArray;

@interface MCMDMPayload : MCPayload {
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
	BOOL _checkOutWhenRemoved;	// 69 = 0x45
}
@property(readonly, assign, nonatomic) int accessRights;	// G=0x3469a9a5; @synthesize=_accessRights
@property(readonly, assign, nonatomic) NSString *checkInURLString;	// G=0x3469a995; @synthesize=_checkInURLString
@property(readonly, assign, nonatomic) BOOL checkOutWhenRemoved;	// G=0x3469a9c5; @synthesize=_checkOutWhenRemoved
@property(retain, nonatomic) NSData *identityPersistentID;	// G=0x3469a92d; S=0x3469a93d; @synthesize=_identityPersistentID
@property(readonly, assign, nonatomic) NSString *identityUUID;	// G=0x3469a91d; @synthesize=_identityUUID
@property(readonly, assign, nonatomic) NSArray *localizedAccessRightDescriptions;	// G=0x3469a2ed; 
@property(readonly, assign, nonatomic) NSString *serverURLString;	// G=0x3469a975; @synthesize=_serverURLString
@property(readonly, assign, nonatomic) BOOL signMessage;	// G=0x3469a9b5; @synthesize=_signMessage
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x3469a965; @synthesize=_topic
@property(readonly, assign, nonatomic) BOOL useDevelopmentAPNS;	// G=0x3469a985; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x34699005
+ (id)typeStrings;	// 0x34698fdd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x346991d5
- (void).cxx_destruct;	// 0x3469a9d5
- (id)_invalidRightsError;	// 0x34699015
- (id)_invalidTopicError;	// 0x346990b1
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x3469914d
// declared property getter: - (int)accessRights;	// 0x3469a9a5
// declared property getter: - (id)checkInURLString;	// 0x3469a995
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x3469a9c5
- (id)description;	// 0x34699f29
// declared property getter: - (id)identityPersistentID;	// 0x3469a92d
// declared property getter: - (id)identityUUID;	// 0x3469a91d
- (id)installationWarnings;	// 0x3469a641
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x3469a2ed
// declared property getter: - (id)serverURLString;	// 0x3469a975
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x3469a93d
// declared property getter: - (BOOL)signMessage;	// 0x3469a9b5
- (id)stubDictionary;	// 0x34699d39
- (id)subtitle1Description;	// 0x3469a8e5
- (id)subtitle1Label;	// 0x3469a8d5
- (id)subtitle2Description;	// 0x3469a909
- (id)subtitle2Label;	// 0x3469a8f9
- (id)title;	// 0x3469a8c5
// declared property getter: - (id)topic;	// 0x3469a965
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x3469a985
@end

