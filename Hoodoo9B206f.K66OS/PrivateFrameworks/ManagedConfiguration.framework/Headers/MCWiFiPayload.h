/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSArray, NSNumber, NSDictionary;

@interface MCWiFiPayload : MCPayload {
	NSString *_ssid;	// 40 = 0x28
	BOOL _hidden;	// 44 = 0x2c
	NSString *_encryptionType;	// 48 = 0x30
	BOOL _isWEP;	// 52 = 0x34
	BOOL _isWPA;	// 53 = 0x35
	BOOL _autoJoin;	// 54 = 0x36
	NSDictionary *_eapClientConfig;	// 56 = 0x38
	BOOL _passwordRequired;	// 60 = 0x3c
	BOOL _usernameRequired;	// 61 = 0x3d
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
	int _proxyType;	// 80 = 0x50
	NSString *_proxyServer;	// 84 = 0x54
	NSNumber *_proxyServerPort;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_proxyPACURLString;	// 96 = 0x60
	NSString *_credentialUUID;	// 100 = 0x64
	NSString *_proxyUsername;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BOOL autoJoin;	// G=0x318ffbed; @synthesize=_autoJoin
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x318ffb8d; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x318ffb0d; S=0x319019d9; @synthesize=_credentialUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x318ffbdd; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x318ffc1d; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x318ffc2d; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x318ffc0d; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x318ffbfd; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x318ffb9d; S=0x319019b1; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x318ffbad; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x318ffb7d; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *proxyPACURLString;	// G=0x318ffb1d; @synthesize=_proxyPACURLString
@property(readonly, assign, nonatomic) NSString *proxyPassword;	// G=0x318ffb2d; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyServer;	// G=0x318ffb5d; @synthesize=_proxyServer
@property(readonly, assign, nonatomic) NSNumber *proxyServerPort;	// G=0x318ffb4d; @synthesize=_proxyServerPort
@property(readonly, assign, nonatomic) int proxyType;	// G=0x318ffb6d; @synthesize=_proxyType
@property(readonly, assign, nonatomic) NSString *proxyUsername;	// G=0x318ffb3d; @synthesize=_proxyUsername
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x318ffc3d; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x318ffbbd; S=0x31901989; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x318ffbcd; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x31901909
+ (id)typeStrings;	// 0x318ffe49
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x319008e9
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x318ffe71
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x318ffd11
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x318ffc4d
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x318ffdd5
// declared property getter: - (BOOL)autoJoin;	// 0x318ffbed
// declared property getter: - (id)certificateUUID;	// 0x318ffb8d
// declared property getter: - (id)credentialUUID;	// 0x318ffb0d
- (void)dealloc;	// 0x31901e51
- (id)description;	// 0x31901a01
// declared property getter: - (id)eapClientConfig;	// 0x318ffbdd
// declared property getter: - (id)encryptionType;	// 0x318ffc1d
// declared property getter: - (BOOL)isHidden;	// 0x318ffc2d
// declared property getter: - (BOOL)isWEP;	// 0x318ffc0d
// declared property getter: - (BOOL)isWPA;	// 0x318ffbfd
// declared property getter: - (id)password;	// 0x318ffb9d
// declared property getter: - (BOOL)passwordRequired;	// 0x318ffbad
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x318ffb7d
// declared property getter: - (id)proxyPACURLString;	// 0x318ffb1d
// declared property getter: - (id)proxyPassword;	// 0x318ffb2d
// declared property getter: - (id)proxyServer;	// 0x318ffb5d
// declared property getter: - (id)proxyServerPort;	// 0x318ffb4d
// declared property getter: - (int)proxyType;	// 0x318ffb6d
// declared property getter: - (id)proxyUsername;	// 0x318ffb3d
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x319019d9
// declared property setter: - (void)setPassword:(id)password;	// 0x319019b1
// declared property setter: - (void)setUsername:(id)username;	// 0x31901989
// declared property getter: - (id)ssid;	// 0x318ffc3d
- (id)stubDictionary;	// 0x31901cad
- (id)subtitle1Description;	// 0x318ffe39
- (id)subtitle1Label;	// 0x31901c9d
- (id)subtitle2Description;	// 0x31901c35
- (id)subtitle2Label;	// 0x31901c8d
// declared property getter: - (id)username;	// 0x318ffbbd
// declared property getter: - (BOOL)usernameRequired;	// 0x318ffbcd
@end

