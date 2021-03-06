/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject {
	NSMutableDictionary *_credentialItems;	// 4 = 0x4
	NSString *_credentialType;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleidFacetimeToken;	// G=0x364c2eb9; S=0x364c2dd1; 
@property(copy, nonatomic) NSString *appleidGameCenterToken;	// G=0x364c2ed5; S=0x364c2e15; 
@property(copy, nonatomic) NSString *appleidMadridToken;	// G=0x364c2ef1; S=0x364c2e59; 
@property(copy, nonatomic) NSString *appleidiCloudToken;	// G=0x364c2e9d; S=0x364c2d8d; 
@property(readonly, retain) NSMutableDictionary *credentialItems;	// G=0x364c2ab9; converted property
@property(copy, nonatomic) NSString *credentialType;	// G=0x364c2f41; S=0x364c2f0d; 
@property(retain, nonatomic) NSDate *expiryDate;	// G=0x364c2c69; S=0x364c2cdd; 
@property(copy, nonatomic) NSString *oauthRefreshToken;	// G=0x364c2c09; S=0x364c2c25; 
@property(copy, nonatomic) NSString *oauthToken;	// G=0x364c2b8d; S=0x364c2b49; 
@property(copy, nonatomic) NSString *oauthTokenSecret;	// G=0x364c2bed; S=0x364c2ba9; 
@property(copy, nonatomic) NSString *password;	// G=0x364c2d71; S=0x364c2d55; 
+ (id)credentialWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x364c25f1
+ (id)credentialWithPassword:(id)password;	// 0x364c266d
+ (id)keysForType:(id)type;	// 0x364c26d1
+ (id)nonPersistentCredentialItemsForType:(id)type;	// 0x364c2875
- (id)init;	// 0x364c28d9
- (id)initWithAppleIDiCloudToken:(id)appleIDiCloudToken facetimeToken:(id)token madridToken:(id)token3 gamecenterToken:(id)token4;	// 0x364c24a1
- (id)initWithCoder:(id)coder;	// 0x364c2951
- (id)initWithOAuth2Token:(id)oauth2Token refreshToken:(id)token expiryDate:(id)date;	// 0x364c21c1
- (id)initWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x364c22dd
- (id)initWithPassword:(id)password;	// 0x364c23d5
- (void).cxx_destruct;	// 0x364c2f55
// declared property getter: - (id)appleidFacetimeToken;	// 0x364c2eb9
// declared property getter: - (id)appleidGameCenterToken;	// 0x364c2ed5
// declared property getter: - (id)appleidMadridToken;	// 0x364c2ef1
// declared property getter: - (id)appleidiCloudToken;	// 0x364c2e9d
- (id)credentialItemForKey:(id)key;	// 0x364c2aed
// converted property getter: - (id)credentialItems;	// 0x364c2ab9
// declared property getter: - (id)credentialType;	// 0x364c2f41
- (void)encodeWithCoder:(id)coder;	// 0x364c2a45
// declared property getter: - (id)expiryDate;	// 0x364c2c69
- (unsigned)hash;	// 0x364c2161
- (BOOL)isEqual:(id)equal;	// 0x364c2005
- (id)keysForCredentialItems;	// 0x364c2acd
// declared property getter: - (id)oauthRefreshToken;	// 0x364c2c09
// declared property getter: - (id)oauthToken;	// 0x364c2b8d
// declared property getter: - (id)oauthTokenSecret;	// 0x364c2bed
// declared property getter: - (id)password;	// 0x364c2d71
// declared property setter: - (void)setAppleidFacetimeToken:(id)token;	// 0x364c2dd1
// declared property setter: - (void)setAppleidGameCenterToken:(id)token;	// 0x364c2e15
// declared property setter: - (void)setAppleidMadridToken:(id)token;	// 0x364c2e59
// declared property setter: - (void)setAppleidiCloudToken:(id)token;	// 0x364c2d8d
- (void)setCredentialItem:(id)item forKey:(id)key;	// 0x364c2b0d
// declared property setter: - (void)setCredentialType:(id)type;	// 0x364c2f0d
// declared property setter: - (void)setExpiryDate:(id)date;	// 0x364c2cdd
// declared property setter: - (void)setOauthRefreshToken:(id)token;	// 0x364c2c25
// declared property setter: - (void)setOauthToken:(id)token;	// 0x364c2b49
// declared property setter: - (void)setOauthTokenSecret:(id)secret;	// 0x364c2ba9
// declared property setter: - (void)setPassword:(id)password;	// 0x364c2d55
@end

