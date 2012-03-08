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
@property(readonly, assign, nonatomic) NSDictionary *atom;	// G=0x30434a29; @synthesize=_atom
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x30434a19; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *password;	// G=0x30434939; S=0x30434e59; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *passwordKey;	// G=0x30434999; @synthesize=_passwordKey
@property(readonly, assign, nonatomic) unsigned char passwordRequired;	// G=0x304349f9; @synthesize=_passwordRequired
@property(copy, nonatomic) NSString *pin;	// G=0x304348f9; S=0x30434ee9; @synthesize=_pin
@property(readonly, assign, nonatomic) NSString *pinKey;	// G=0x30434959; @synthesize=_pinKey
@property(readonly, assign, nonatomic) unsigned char pinRequired;	// G=0x304349b9; @synthesize=_pinRequired
@property(copy, nonatomic) NSString *proxyPassword;	// G=0x30434919; S=0x30434ea1; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyPasswordKey;	// G=0x30434979; @synthesize=_proxyPasswordKey
@property(readonly, assign, nonatomic) unsigned char proxyPasswordRequired;	// G=0x304349d9; @synthesize=_proxyPasswordRequired
@property(copy, nonatomic) NSString *proxyUserName;	// G=0x30434929; S=0x30434e7d; @synthesize=_proxyUserName
@property(readonly, assign, nonatomic) NSString *proxyUserNameKey;	// G=0x30434989; @synthesize=_proxyUserNameKey
@property(readonly, assign, nonatomic) unsigned char proxyUserNameRequired;	// G=0x304349e9; @synthesize=_proxyUserNameRequired
@property(copy, nonatomic) NSString *sharedSecret;	// G=0x30434909; S=0x30434ec5; @synthesize=_sharedSecret
@property(readonly, assign, nonatomic) NSString *sharedSecretKey;	// G=0x30434969; @synthesize=_sharedSecretKey
@property(readonly, assign, nonatomic) unsigned char sharedSecretRequired;	// G=0x304349c9; @synthesize=_sharedSecretRequired
@property(copy, nonatomic) NSString *userName;	// G=0x30434949; S=0x30434e35; @synthesize=_userName
@property(readonly, assign, nonatomic) NSString *userNameKey;	// G=0x304349a9; @synthesize=_userNameKey
@property(readonly, assign, nonatomic) unsigned char userNameRequired;	// G=0x30434a09; @synthesize=_userNameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x30434dd5
+ (id)typeStrings;	// 0x30434cd5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30434f0d
- (void)_validateVPNPayload:(id)payload;	// 0x30434a39
// declared property getter: - (id)atom;	// 0x30434a29
// declared property getter: - (id)certificateUUID;	// 0x30434a19
- (void)dealloc;	// 0x30434cfd
// declared property getter: - (id)password;	// 0x30434939
// declared property getter: - (id)passwordKey;	// 0x30434999
// declared property getter: - (unsigned char)passwordRequired;	// 0x304349f9
// declared property getter: - (id)pin;	// 0x304348f9
// declared property getter: - (id)pinKey;	// 0x30434959
// declared property getter: - (unsigned char)pinRequired;	// 0x304349b9
// declared property getter: - (id)proxyPassword;	// 0x30434919
// declared property getter: - (id)proxyPasswordKey;	// 0x30434979
// declared property getter: - (unsigned char)proxyPasswordRequired;	// 0x304349d9
// declared property getter: - (id)proxyUserName;	// 0x30434929
// declared property getter: - (id)proxyUserNameKey;	// 0x30434989
// declared property getter: - (unsigned char)proxyUserNameRequired;	// 0x304349e9
// declared property setter: - (void)setPassword:(id)password;	// 0x30434e59
// declared property setter: - (void)setPin:(id)pin;	// 0x30434ee9
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x30434ea1
// declared property setter: - (void)setProxyUserName:(id)name;	// 0x30434e7d
// declared property setter: - (void)setSharedSecret:(id)secret;	// 0x30434ec5
// declared property setter: - (void)setUserName:(id)name;	// 0x30434e35
// declared property getter: - (id)sharedSecret;	// 0x30434909
// declared property getter: - (id)sharedSecretKey;	// 0x30434969
// declared property getter: - (unsigned char)sharedSecretRequired;	// 0x304349c9
// declared property getter: - (id)userName;	// 0x30434949
// declared property getter: - (id)userNameKey;	// 0x304349a9
// declared property getter: - (unsigned char)userNameRequired;	// 0x30434a09
@end
