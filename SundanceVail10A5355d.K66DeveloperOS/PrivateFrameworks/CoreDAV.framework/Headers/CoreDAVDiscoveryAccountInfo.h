/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSSet, NSURL, NSData, NSString, NSDictionary;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x3047c2b9; S=0x3047c2cd; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x3047c30d; S=0x3047c321; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x3047c391; S=0x3047c3a5; @synthesize=_error
@property(retain) NSString *host;	// G=0x3047c1b5; S=0x3047c1c9; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x3047c271; S=0x3047c285; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x3047c24d; S=0x3047c261; @synthesize=_password
@property(assign) int port;	// G=0x3047c1d9; S=0x3047c1ed; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x3047c295; S=0x3047c2a9; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x3047c191; S=0x3047c1a5; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x3047c3d9; S=0x3047c3ed; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x3047c3b5; S=0x3047c3c9; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x3047c205; S=0x3047c219; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x3047c2dd; S=0x3047c2f5; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x3047c331; S=0x3047c349; @synthesize=_started
@property(assign) BOOL success;	// G=0x3047c361; S=0x3047c379; @synthesize=_success
@property(retain) NSString *user;	// G=0x3047c229; S=0x3047c23d; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x3047c3fd; S=0x3047c411; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x3047b669
// declared property getter: - (id)accountID;	// 0x3047c2b9
- (id)additionalHeaderValues;	// 0x3047bc31
// declared property getter: - (id)backingAccountInfoProvider;	// 0x3047c30d
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3047c101
- (void)dealloc;	// 0x3047b7e5
- (id)description;	// 0x3047b925
// declared property getter: - (id)error;	// 0x3047c391
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x3047bdf9
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x3047bf61
- (BOOL)handleCertificateError:(id)error;	// 0x3047bd7d
- (BOOL)handleShouldUseCredentialStorage;	// 0x3047c011
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3047bcc1
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x3047bd15
// declared property getter: - (id)host;	// 0x3047c1b5
// declared property getter: - (id)identityPersist;	// 0x3047c271
- (id)oauthToken;	// 0x3047bc79
// declared property getter: - (id)password;	// 0x3047c24d
// declared property getter: - (int)port;	// 0x3047c1d9
// declared property getter: - (id)principalURL;	// 0x3047c295
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x3047bc05
// declared property getter: - (id)scheme;	// 0x3047c191
// declared property getter: - (id)serverComplianceClasses;	// 0x3047c3d9
// declared property getter: - (id)serverHeaders;	// 0x3047c3b5
// declared property getter: - (id)serverRoot;	// 0x3047c205
// declared property setter: - (void)setAccountID:(id)anId;	// 0x3047c2cd
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x3047c321
// declared property setter: - (void)setError:(id)error;	// 0x3047c3a5
// declared property setter: - (void)setHost:(id)host;	// 0x3047c1c9
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x3047c285
// declared property setter: - (void)setPassword:(id)password;	// 0x3047c261
// declared property setter: - (void)setPort:(int)port;	// 0x3047c1ed
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3047c2a9
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3047c1a5
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x3047c3ed
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x3047c3c9
// declared property setter: - (void)setServerRoot:(id)root;	// 0x3047c219
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3047c2f5
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x3047c349
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x3047c379
// declared property setter: - (void)setUser:(id)user;	// 0x3047c23d
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x3047c411
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3047c2dd
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x3047c059
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x3047bda5
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x3047c0ad
- (BOOL)shouldTurnModalOnBadPassword;	// 0x3047bda1
- (BOOL)shouldUseOpportunisticSockets;	// 0x3047c149
// declared property getter: - (BOOL)started;	// 0x3047c331
// declared property getter: - (BOOL)success;	// 0x3047c361
- (id)url;	// 0x3047bb31
// declared property getter: - (id)user;	// 0x3047c229
// declared property getter: - (id)userAgentHeader;	// 0x3047c3fd
@end

