/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSAuthenticationContext.h"

@class NSDictionary, NSArray, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying> {
}
@property(copy, nonatomic) NSDictionary *HTTPHeaders;	// S=0x3650d1a9; @dynamic
@property(copy, nonatomic) NSString *accountName;	// S=0x3650ce89; @dynamic
@property(assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// S=0x3650cecd; @dynamic
@property(assign) int accountScope;	// S=0x3650cedd; @dynamic
@property(assign, nonatomic) BOOL canCreateNewAccount;	// S=0x3650ceed; @dynamic
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x3650d155; @dynamic
@property(assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// S=0x3650d199; @dynamic
@property(copy, nonatomic) NSString *preferredITunesStoreClient;	// S=0x3650cefd; @dynamic
@property(assign, nonatomic) int promptStyle;	// S=0x3650cf41; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x3650cf51; @dynamic
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier;	// S=0x3650cf95; @dynamic
@property(assign, nonatomic) BOOL shouldFollowAccountButtons;	// S=0x3650cfd9; @dynamic
@property(assign, nonatomic) BOOL shouldIgnoreProtocol;	// S=0x3650cfe9; @dynamic
@property(copy, nonatomic) NSDictionary *signupRequestParameters;	// S=0x3650cff9; @dynamic
@property(assign, nonatomic) int tokenType;	// S=0x3650d1ed; @dynamic
@property(copy, nonatomic) NSArray *userAgentComponents;	// S=0x3650d03d; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x3650cde1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3650ce35
// declared property setter: - (void)setAccountName:(id)name;	// 0x3650ce89
// declared property setter: - (void)setAccountNameEditable:(BOOL)editable;	// 0x3650cecd
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x3650cedd
// declared property setter: - (void)setCanCreateNewAccount:(BOOL)account;	// 0x3650ceed
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x3650d155
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x3650d199
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x3650d1a9
// declared property setter: - (void)setPreferredITunesStoreClient:(id)client;	// 0x3650cefd
// declared property setter: - (void)setPromptStyle:(int)style;	// 0x3650cf41
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x3650cf51
// declared property setter: - (void)setRequiredUniqueIdentifier:(id)identifier;	// 0x3650cf95
// declared property setter: - (void)setShouldFollowAccountButtons:(BOOL)followAccountButtons;	// 0x3650cfd9
// declared property setter: - (void)setShouldIgnoreProtocol:(BOOL)ignoreProtocol;	// 0x3650cfe9
// declared property setter: - (void)setSignupRequestParameters:(id)parameters;	// 0x3650cff9
// declared property setter: - (void)setTokenType:(int)type;	// 0x3650d1ed
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x3650d03d
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3650d081
@end
