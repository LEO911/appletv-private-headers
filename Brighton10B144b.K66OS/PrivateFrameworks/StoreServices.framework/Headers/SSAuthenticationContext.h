/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSDictionary, NSNumber, NSArray, NSString;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
	NSString *_accountName;	// 4 = 0x4
	BOOL _accountNameEditable;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	BOOL _allowsRetry;	// 16 = 0x10
	BOOL _canCreateNewAccount;	// 17 = 0x11
	BOOL _canSetActiveAccount;	// 18 = 0x12
	NSString *_clientIdentifierHeader;	// 20 = 0x14
	BOOL _demoAccount;	// 24 = 0x18
	NSDictionary *_httpHeaders;	// 28 = 0x1c
	NSString *_initialPassword;	// 32 = 0x20
	NSString *_preferredITunesStoreClient;	// 36 = 0x24
	int _promptStyle;	// 40 = 0x28
	NSDictionary *_requestParameters;	// 44 = 0x2c
	NSNumber *_requiredUniqueIdentifier;	// 48 = 0x30
	BOOL _shouldFollowAccountButtons;	// 52 = 0x34
	BOOL _shouldIgnoreProtocol;	// 53 = 0x35
	BOOL _shouldSuppressDialogs;	// 54 = 0x36
	NSDictionary *_signupRequestParameters;	// 56 = 0x38
	int _tokenType;	// 60 = 0x3c
	NSArray *_userAgentComponents;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSDictionary *HTTPHeaders;	// G=0x354ca17d; @synthesize=_httpHeaders
@property(readonly, assign, nonatomic) NSString *accountName;	// G=0x354ca101; @synthesize=_accountName
@property(readonly, assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// G=0x354c9ecd; @synthesize=_accountNameEditable
@property(readonly, assign) int accountScope;	// G=0x354ca115; @synthesize=_accountScope
@property(readonly, assign, nonatomic) BOOL allowsRetry;	// G=0x354ca129; @synthesize=_allowsRetry
@property(readonly, assign, nonatomic) BOOL canCreateNewAccount;	// G=0x354ca139; @synthesize=_canCreateNewAccount
@property(readonly, assign, nonatomic) BOOL canSetActiveAccount;	// G=0x354ca149; @synthesize=_canSetActiveAccount
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x354ca159; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// G=0x354ca16d; @synthesize=_demoAccount
@property(readonly, assign, nonatomic) NSString *initialPassword;	// G=0x354ca191; @synthesize=_initialPassword
@property(readonly, assign, nonatomic) NSString *preferredITunesStoreClient;	// G=0x354ca1a5; @synthesize=_preferredITunesStoreClient
@property(readonly, assign, nonatomic) int promptStyle;	// G=0x354ca1b9; @synthesize=_promptStyle
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x354ca1c9; @synthesize=_requestParameters
@property(readonly, assign, nonatomic) NSNumber *requiredUniqueIdentifier;	// G=0x354ca1dd; @synthesize=_requiredUniqueIdentifier
@property(readonly, assign, nonatomic) BOOL shouldFollowAccountButtons;	// G=0x354ca1ed; @synthesize=_shouldFollowAccountButtons
@property(readonly, assign, nonatomic) BOOL shouldIgnoreProtocol;	// G=0x354ca1fd; @synthesize=_shouldIgnoreProtocol
@property(readonly, assign, nonatomic) BOOL shouldSuppressDialogs;	// G=0x354ca20d; @synthesize=_shouldSuppressDialogs
@property(readonly, assign, nonatomic) NSDictionary *signupRequestParameters;	// G=0x354ca21d; @synthesize=_signupRequestParameters
@property(readonly, assign, nonatomic) int tokenType;	// G=0x354ca231; @synthesize=_tokenType
@property(readonly, assign, nonatomic) NSArray *userAgentComponents;	// G=0x354ca241; @synthesize=_userAgentComponents
+ (id)contextForSignIn;	// 0x354c96f5
- (id)init;	// 0x354c9419
- (id)initWithAccount:(id)account;	// 0x354c9429
- (id)initWithAccountIdentifier:(id)accountIdentifier;	// 0x354c9535
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c9a25
// declared property getter: - (id)HTTPHeaders;	// 0x354ca17d
- (BOOL)_allowCreateAccount;	// 0x354c9f0d
- (void)_copyIvarsToCopy:(id)copy withZone:(NSZone *)zone;	// 0x354c9f55
- (id)_initSSAuthenticationContext;	// 0x354c9399
// declared property getter: - (id)accountName;	// 0x354ca101
// declared property getter: - (int)accountScope;	// 0x354ca115
// declared property getter: - (BOOL)allowsRetry;	// 0x354ca129
// declared property getter: - (BOOL)canCreateNewAccount;	// 0x354ca139
// declared property getter: - (BOOL)canSetActiveAccount;	// 0x354ca149
// declared property getter: - (id)clientIdentifierHeader;	// 0x354ca159
- (id)copyWithZone:(NSZone *)zone;	// 0x354c9d89
- (id)copyXPCEncoding;	// 0x354c9781
- (void)dealloc;	// 0x354c9605
- (id)description;	// 0x354c9e29
// declared property getter: - (id)initialPassword;	// 0x354ca191
// declared property getter: - (BOOL)isAccountNameEditable;	// 0x354c9ecd
// declared property getter: - (BOOL)isDemoAccount;	// 0x354ca16d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x354c9dd9
// declared property getter: - (id)preferredITunesStoreClient;	// 0x354ca1a5
// declared property getter: - (int)promptStyle;	// 0x354ca1b9
// declared property getter: - (id)requestParameters;	// 0x354ca1c9
// declared property getter: - (id)requiredUniqueIdentifier;	// 0x354ca1dd
// declared property getter: - (BOOL)shouldFollowAccountButtons;	// 0x354ca1ed
// declared property getter: - (BOOL)shouldIgnoreProtocol;	// 0x354ca1fd
// declared property getter: - (BOOL)shouldSuppressDialogs;	// 0x354ca20d
// declared property getter: - (id)signupRequestParameters;	// 0x354ca21d
// declared property getter: - (int)tokenType;	// 0x354ca231
// declared property getter: - (id)userAgentComponents;	// 0x354ca241
@end

