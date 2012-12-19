/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject {
	NSString *_apnName;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_proxy;	// 16 = 0x10
	NSNumber *_proxyPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *apnName;	// G=0x344bd06d; S=0x344bd07d; @synthesize=_apnName
@property(retain, nonatomic) NSString *password;	// G=0x344bd0dd; S=0x344bd0ed; @synthesize=_password
@property(retain, nonatomic) NSString *proxy;	// G=0x344bd115; S=0x344bd125; @synthesize=_proxy
@property(retain, nonatomic) NSNumber *proxyPort;	// G=0x344bd14d; S=0x344bd15d; @synthesize=_proxyPort
@property(retain, nonatomic) NSString *username;	// G=0x344bd0a5; S=0x344bd0b5; @synthesize=_username
- (void).cxx_destruct;	// 0x344bd185
// declared property getter: - (id)apnName;	// 0x344bd06d
- (id)defaultsRepresentation;	// 0x344bce49
- (id)description;	// 0x344bccc1
// declared property getter: - (id)password;	// 0x344bd0dd
// declared property getter: - (id)proxy;	// 0x344bd115
// declared property getter: - (id)proxyPort;	// 0x344bd14d
// declared property setter: - (void)setApnName:(id)name;	// 0x344bd07d
// declared property setter: - (void)setPassword:(id)password;	// 0x344bd0ed
// declared property setter: - (void)setProxy:(id)proxy;	// 0x344bd125
// declared property setter: - (void)setProxyPort:(id)port;	// 0x344bd15d
// declared property setter: - (void)setUsername:(id)username;	// 0x344bd0b5
- (id)strippedDefaultsRepresentation;	// 0x344bcdd1
// declared property getter: - (id)username;	// 0x344bd0a5
@end
