/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray, NSData, NSString;

@interface MCMDMPayload : MCPayload {
@private
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
@property(readonly, assign) int accessRights;	// G=0x3474765d; @synthesize=_accessRights
@property(readonly, assign) NSString *checkInURLString;	// G=0x3474766d; @synthesize=_checkInURLString
@property(readonly, assign) BOOL checkOutWhenRemoved;	// G=0x3474763d; @synthesize=_checkOutWhenRemoved
@property(retain) NSData *identityPersistentID;	// G=0x347479e9; S=0x347479c5; @synthesize=_identityPersistentID
@property(readonly, assign) NSString *identityUUID;	// G=0x347476ad; @synthesize=_identityUUID
@property(readonly, assign) NSArray *localizedAccessRightDescriptions;	// G=0x34747c69; 
@property(readonly, assign) NSString *serverURLString;	// G=0x3474768d; @synthesize=_serverURLString
@property(readonly, assign) BOOL signMessage;	// G=0x3474764d; @synthesize=_signMessage
@property(readonly, assign) NSString *topic;	// G=0x3474769d; @synthesize=_topic
@property(readonly, assign) BOOL useDevelopmentAPNS;	// G=0x3474767d; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x347479b5
+ (id)typeStrings;	// 0x347476cd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x34748295
- (id)_invalidRightsError;	// 0x347476f5
- (id)_invalidTopicError;	// 0x34747765
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x347477d5
// declared property getter: - (int)accessRights;	// 0x3474765d
// declared property getter: - (id)checkInURLString;	// 0x3474766d
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x3474763d
- (void)dealloc;	// 0x34747a21
- (id)description;	// 0x34747f1d
// declared property getter: - (id)identityPersistentID;	// 0x347479e9
// declared property getter: - (id)identityUUID;	// 0x347476ad
- (id)installationWarnings;	// 0x34747abd
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x34747c69
// declared property getter: - (id)serverURLString;	// 0x3474768d
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x347479c5
// declared property getter: - (BOOL)signMessage;	// 0x3474764d
- (id)stubDictionary;	// 0x34747835
- (id)subtitle1Description;	// 0x3474761d
- (id)subtitle1Label;	// 0x34747a11
- (id)subtitle2Description;	// 0x3474762d
- (id)subtitle2Label;	// 0x34747a01
- (id)title;	// 0x347476bd
// declared property getter: - (id)topic;	// 0x3474769d
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x3474767d
@end

