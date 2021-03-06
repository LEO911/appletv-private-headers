/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x36246b8d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x36246c25; S=0x36246c39; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x36246b9d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x36246bd1; S=0x36246be5; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x36246c15; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x36246bf5; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x36246c05; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x36246bad; S=0x36246bc1; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36246191
+ (id)typeStrings;	// 0x36246169
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36246219
- (void).cxx_destruct;	// 0x36246c49
// declared property getter: - (id)accountDescription;	// 0x36246b8d
// declared property getter: - (id)accountPersistentUUID;	// 0x36246c25
- (id)description;	// 0x3624683d
// declared property getter: - (id)hostname;	// 0x36246b9d
// declared property getter: - (id)password;	// 0x36246bd1
// declared property getter: - (int)port;	// 0x36246c15
// declared property getter: - (id)principalURL;	// 0x36246bf5
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x36246c39
// declared property setter: - (void)setPassword:(id)password;	// 0x36246be5
// declared property setter: - (void)setUsername:(id)username;	// 0x36246bc1
- (id)stubDictionary;	// 0x36246a01
- (id)subtitle1Description;	// 0x36246b5d
- (id)subtitle1Label;	// 0x36246b4d
- (id)subtitle2Description;	// 0x36246b7d
- (id)subtitle2Label;	// 0x36246b6d
- (id)title;	// 0x36246af1
// declared property getter: - (BOOL)useSSL;	// 0x36246c05
// declared property getter: - (id)username;	// 0x36246bad
@end

