/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCVPNPayload : MCPayload {
	NSMutableDictionary *_atom;	// 40 = 0x28
	NSString *_certificateUUID;	// 44 = 0x2c
	unsigned char _userNameRequired;	// 48 = 0x30
	unsigned char _passwordRequired;	// 49 = 0x31
	unsigned char _proxyUserNameRequired;	// 50 = 0x32
	unsigned char _proxyPasswordRequired;	// 51 = 0x33
	unsigned char _sharedSecretRequired;	// 52 = 0x34
	unsigned char _pinRequired;	// 53 = 0x35
	NSString *_userNameKey;	// 56 = 0x38
	NSString *_passwordKey;	// 60 = 0x3c
	NSString *_proxyUserNameKey;	// 64 = 0x40
	NSString *_proxyPasswordKey;	// 68 = 0x44
	NSString *_sharedSecretKey;	// 72 = 0x48
	NSString *_pinKey;	// 76 = 0x4c
	NSString *_userName;	// 80 = 0x50
	NSString *_password;	// 84 = 0x54
	NSString *_proxyUserName;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_sharedSecret;	// 96 = 0x60
	NSString *_pin;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) NSDictionary *atom;	// G=0x3646ea3d; @synthesize=_atom
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x3646ea2d; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *password;	// G=0x3646e94d; S=0x3646ee6d; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *passwordKey;	// G=0x3646e9ad; @synthesize=_passwordKey
@property(readonly, assign, nonatomic) unsigned char passwordRequired;	// G=0x3646ea0d; @synthesize=_passwordRequired
@property(copy, nonatomic) NSString *pin;	// G=0x3646e90d; S=0x3646eefd; @synthesize=_pin
@property(readonly, assign, nonatomic) NSString *pinKey;	// G=0x3646e96d; @synthesize=_pinKey
@property(readonly, assign, nonatomic) unsigned char pinRequired;	// G=0x3646e9cd; @synthesize=_pinRequired
@property(copy, nonatomic) NSString *proxyPassword;	// G=0x3646e92d; S=0x3646eeb5; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyPasswordKey;	// G=0x3646e98d; @synthesize=_proxyPasswordKey
@property(readonly, assign, nonatomic) unsigned char proxyPasswordRequired;	// G=0x3646e9ed; @synthesize=_proxyPasswordRequired
@property(copy, nonatomic) NSString *proxyUserName;	// G=0x3646e93d; S=0x3646ee91; @synthesize=_proxyUserName
@property(readonly, assign, nonatomic) NSString *proxyUserNameKey;	// G=0x3646e99d; @synthesize=_proxyUserNameKey
@property(readonly, assign, nonatomic) unsigned char proxyUserNameRequired;	// G=0x3646e9fd; @synthesize=_proxyUserNameRequired
@property(copy, nonatomic) NSString *sharedSecret;	// G=0x3646e91d; S=0x3646eed9; @synthesize=_sharedSecret
@property(readonly, assign, nonatomic) NSString *sharedSecretKey;	// G=0x3646e97d; @synthesize=_sharedSecretKey
@property(readonly, assign, nonatomic) unsigned char sharedSecretRequired;	// G=0x3646e9dd; @synthesize=_sharedSecretRequired
@property(copy, nonatomic) NSString *userName;	// G=0x3646e95d; S=0x3646ee49; @synthesize=_userName
@property(readonly, assign, nonatomic) NSString *userNameKey;	// G=0x3646e9bd; @synthesize=_userNameKey
@property(readonly, assign, nonatomic) unsigned char userNameRequired;	// G=0x3646ea1d; @synthesize=_userNameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3646ede9
+ (id)typeStrings;	// 0x3646ece9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3646ef21
- (void)_validateVPNPayload:(id)payload;	// 0x3646ea4d
// declared property getter: - (id)atom;	// 0x3646ea3d
// declared property getter: - (id)certificateUUID;	// 0x3646ea2d
- (void)dealloc;	// 0x3646ed11
// declared property getter: - (id)password;	// 0x3646e94d
// declared property getter: - (id)passwordKey;	// 0x3646e9ad
// declared property getter: - (unsigned char)passwordRequired;	// 0x3646ea0d
// declared property getter: - (id)pin;	// 0x3646e90d
// declared property getter: - (id)pinKey;	// 0x3646e96d
// declared property getter: - (unsigned char)pinRequired;	// 0x3646e9cd
// declared property getter: - (id)proxyPassword;	// 0x3646e92d
// declared property getter: - (id)proxyPasswordKey;	// 0x3646e98d
// declared property getter: - (unsigned char)proxyPasswordRequired;	// 0x3646e9ed
// declared property getter: - (id)proxyUserName;	// 0x3646e93d
// declared property getter: - (id)proxyUserNameKey;	// 0x3646e99d
// declared property getter: - (unsigned char)proxyUserNameRequired;	// 0x3646e9fd
// declared property setter: - (void)setPassword:(id)password;	// 0x3646ee6d
// declared property setter: - (void)setPin:(id)pin;	// 0x3646eefd
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x3646eeb5
// declared property setter: - (void)setProxyUserName:(id)name;	// 0x3646ee91
// declared property setter: - (void)setSharedSecret:(id)secret;	// 0x3646eed9
// declared property setter: - (void)setUserName:(id)name;	// 0x3646ee49
// declared property getter: - (id)sharedSecret;	// 0x3646e91d
// declared property getter: - (id)sharedSecretKey;	// 0x3646e97d
// declared property getter: - (unsigned char)sharedSecretRequired;	// 0x3646e9dd
// declared property getter: - (id)userName;	// 0x3646e95d
// declared property getter: - (id)userNameKey;	// 0x3646e9bd
// declared property getter: - (unsigned char)userNameRequired;	// 0x3646ea1d
@end

