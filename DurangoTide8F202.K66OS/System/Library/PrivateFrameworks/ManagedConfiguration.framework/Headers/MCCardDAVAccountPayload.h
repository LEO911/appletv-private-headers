/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3006f51d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x3006f4ad; S=0x3006fd59; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3006f50d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x3006f4ed; S=0x3006fd2d; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x3006f4bd; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x3006f4dd; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x3006f4cd; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x3006f4fd; S=0x3006fd01; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3006fd85
+ (id)typeStrings;	// 0x3006f869
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3006f891
// declared property getter: - (id)accountDescription;	// 0x3006f51d
// declared property getter: - (id)accountPersistentUUID;	// 0x3006f4ad
- (void)dealloc;	// 0x3006f7c5
- (id)description;	// 0x3006f645
// declared property getter: - (id)hostname;	// 0x3006f50d
// declared property getter: - (id)password;	// 0x3006f4ed
// declared property getter: - (int)port;	// 0x3006f4bd
// declared property getter: - (id)principalURL;	// 0x3006f4dd
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x3006fd59
// declared property setter: - (void)setPassword:(id)password;	// 0x3006fd2d
// declared property setter: - (void)setUsername:(id)username;	// 0x3006fd01
- (id)stubDictionary;	// 0x3006f57d
- (id)subtitle1Description;	// 0x3006f541
- (id)subtitle1Label;	// 0x3006fced
- (id)subtitle2Description;	// 0x3006f52d
- (id)subtitle2Label;	// 0x3006fcd9
- (id)title;	// 0x3006f555
// declared property getter: - (BOOL)useSSL;	// 0x3006f4cd
// declared property getter: - (id)username;	// 0x3006f4fd
@end

