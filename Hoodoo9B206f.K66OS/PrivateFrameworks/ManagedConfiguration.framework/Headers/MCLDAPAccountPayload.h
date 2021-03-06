/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray, NSString;

@interface MCLDAPAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSArray *_searchSettings;	// 60 = 0x3c
	NSString *_accountPersistentUUID;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x319040d9; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x31904079; S=0x31904271; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x319040c9; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x319040a9; S=0x31904249; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x31904089; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x31904099; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x319040b9; S=0x31904221; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x31904199
+ (id)typeStrings;	// 0x319041f9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x319045f1
// declared property getter: - (id)accountDescription;	// 0x319040d9
// declared property getter: - (id)accountPersistentUUID;	// 0x31904079
- (void)dealloc;	// 0x319040e9
- (id)description;	// 0x31904465
// declared property getter: - (id)hostname;	// 0x319040c9
// declared property getter: - (id)password;	// 0x319040a9
// declared property getter: - (id)searchSettings;	// 0x31904089
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x31904271
// declared property setter: - (void)setPassword:(id)password;	// 0x31904249
// declared property setter: - (void)setUsername:(id)username;	// 0x31904221
- (id)stubDictionary;	// 0x31904381
- (id)subtitle1Description;	// 0x31904331
- (id)subtitle1Label;	// 0x31904341
- (id)subtitle2Description;	// 0x31904295
- (id)subtitle2Label;	// 0x319042e1
- (id)title;	// 0x31904351
// declared property getter: - (BOOL)useSSL;	// 0x31904099
// declared property getter: - (id)username;	// 0x319040b9
@end

