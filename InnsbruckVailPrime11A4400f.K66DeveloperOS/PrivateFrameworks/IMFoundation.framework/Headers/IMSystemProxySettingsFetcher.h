/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import </libobjc.A.h>

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {
	unsigned short _port;	// 4 = 0x4
	unsigned short _proxyPort;	// 6 = 0x6
	id _delegate;	// 8 = 0x8
	NSString *_host;	// 12 = 0xc
	int _proxyProtocol;	// 16 = 0x10
	NSString *_proxyHost;	// 20 = 0x14
	NSString *_proxyAccount;	// 24 = 0x18
	NSString *_proxyPassword;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *_host;	// G=0x312060c9; S=0x312060dd; @synthesize
@property(assign, nonatomic) unsigned short _port;	// G=0x312060ed; S=0x312060fd; @synthesize
@property(copy, nonatomic) NSString *_proxyAccount;	// G=0x31206171; S=0x31206185; @synthesize
@property(copy, nonatomic) NSString *_proxyHost;	// G=0x3120612d; S=0x31206141; @synthesize
@property(copy, nonatomic) NSString *_proxyPassword;	// G=0x31206195; S=0x312061a9; @synthesize
@property(assign, nonatomic) unsigned short _proxyPort;	// G=0x31206151; S=0x31206161; @synthesize
@property(assign, nonatomic) int _proxyProtocol;	// G=0x3120610d; S=0x3120611d; @synthesize
@property(assign) id delegate;	// G=0x3120609d; S=0x312060b1; @synthesize=_delegate
- (id)initWithHost:(id)host port:(unsigned short)port delegate:(id)delegate;	// 0x31205eb9
- (id)initWithProxyProtocol:(int)proxyProtocol proxyHost:(id)host proxyPort:(unsigned short)port delegate:(id)delegate;	// 0x31205f3d
- (void)_callAccountSettingsDelegateMethod;	// 0x31205e21
- (void)_callProxySettingsDelegateMethod;	// 0x31205db9
- (void)_getProxyAccountAndPasswordFromKeychain;	// 0x31205e75
// declared property getter: - (id)_host;	// 0x312060c9
// declared property getter: - (unsigned short)_port;	// 0x312060ed
// declared property getter: - (id)_proxyAccount;	// 0x31206171
// declared property getter: - (id)_proxyHost;	// 0x3120612d
// declared property getter: - (id)_proxyPassword;	// 0x31206195
// declared property getter: - (unsigned short)_proxyPort;	// 0x31206151
// declared property getter: - (int)_proxyProtocol;	// 0x3120610d
- (void)_takeProxySettingsFromDictionary:(CFDictionaryRef)dictionary;	// 0x31205eb5
- (void)dealloc;	// 0x31206011
// declared property getter: - (id)delegate;	// 0x3120609d
- (void)retrieveProxyAccountSettings;	// 0x31205fd1
- (void)retrieveProxySettings;	// 0x31205fcd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x312060b1
// declared property setter: - (void)set_host:(id)host;	// 0x312060dd
// declared property setter: - (void)set_port:(unsigned short)port;	// 0x312060fd
// declared property setter: - (void)set_proxyAccount:(id)account;	// 0x31206185
// declared property setter: - (void)set_proxyHost:(id)host;	// 0x31206141
// declared property setter: - (void)set_proxyPassword:(id)password;	// 0x312061a9
// declared property setter: - (void)set_proxyPort:(unsigned short)port;	// 0x31206161
// declared property setter: - (void)set_proxyProtocol:(int)protocol;	// 0x3120611d
@end

