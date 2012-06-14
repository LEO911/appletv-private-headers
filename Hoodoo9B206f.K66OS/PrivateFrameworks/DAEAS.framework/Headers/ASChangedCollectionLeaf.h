/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem <NSCoding> {
	int _changeType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_clientID;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	BOOL _isResponse;	// 56 = 0x38
	BOOL _validateOpeningTokens;	// 57 = 0x39
	NSDictionary *_applicationData;	// 60 = 0x3c
}
@property(retain) NSDictionary *applicationData;	// G=0x321c10f9; S=0x321c110d; @synthesize=_applicationData
@property(assign) int changeType;	// G=0x321c1031; S=0x321c1041; @synthesize=_changeType
@property(copy) NSString *clientID;	// G=0x321c1089; S=0x321c109d; @synthesize=_clientID
@property(readonly, assign) BOOL isResponse;	// G=0x321c0a11; converted property
@property(retain) NSString *serverID;	// G=0x321c1051; S=0x321c1065; @synthesize=_serverID
@property(copy) NSNumber *status;	// G=0x321c10c1; S=0x321c10d5; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x321c02a9
+ (BOOL)frontingBasicTypes;	// 0x321c03a5
+ (BOOL)notifyOfUnknownTokens;	// 0x321c03f9
+ (BOOL)parsingLeafNode;	// 0x321c02fd
+ (BOOL)parsingWithSubItems;	// 0x321c0351
- (id)init;	// 0x321c044d
- (id)initWithCoder:(id)coder;	// 0x321c0ca5
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x321c089d
// declared property getter: - (id)applicationData;	// 0x321c10f9
- (id)asParseRules;	// 0x321c0a21
// declared property getter: - (int)changeType;	// 0x321c1031
// declared property getter: - (id)clientID;	// 0x321c1089
- (int)dataclass;	// 0x321c092d
- (void)dealloc;	// 0x321c0979
- (void)encodeWithCoder:(id)coder;	// 0x321c0e95
// converted property getter: - (BOOL)isResponse;	// 0x321c0a11
- (void)loadClientIDs;	// 0x321c08e5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321c048d
// declared property getter: - (id)serverID;	// 0x321c1051
// declared property setter: - (void)setApplicationData:(id)data;	// 0x321c110d
// declared property setter: - (void)setChangeType:(int)type;	// 0x321c1041
// declared property setter: - (void)setClientID:(id)anId;	// 0x321c109d
// declared property setter: - (void)setServerID:(id)anId;	// 0x321c1065
// declared property setter: - (void)setStatus:(id)status;	// 0x321c10d5
- (void)setValidateOpeningTokens:(BOOL)tokens;	// 0x321c0a01
// declared property getter: - (id)status;	// 0x321c10c1
@end
