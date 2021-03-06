/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library

@class NSURL, ACAccountStore, NSString;

@interface ACAccountType : NSObject {
@private
	NSString *_accountTypeDescription;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_credentialType;	// 12 = 0xc
	int _credentialAvailability;	// 16 = 0x10
	NSURL *_objectID;	// 20 = 0x14
	int _visibility;	// 24 = 0x18
	id _credentialProtectionPolicy;	// 28 = 0x1c
	ACAccountStore *_accountStore;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) BOOL accessGranted;	// G=0x36e66b75; 
@property(assign, nonatomic) ACAccountStore *accountStore;	// G=0x36e66ba1; S=0x36e66bb1; @synthesize=_accountStore
@property(readonly, assign, nonatomic) NSString *accountTypeDescription;	// G=0x36e669c1; @synthesize=_accountTypeDescription
@property(readonly, assign, nonatomic) BOOL authenticationSupported;	// G=0x36e66b9d; 
@property(assign, nonatomic) int credentialAvailability;	// G=0x36e66ad1; S=0x36e66ac1; 
@property(copy, nonatomic) id credentialProtectionPolicy;	// G=0x36e66af1; S=0x36e66b35; 
@property(retain) NSString *credentialType;	// G=0x36e66aa1; S=0x36e66a61; converted property
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x36e66971; @synthesize=_identifier
@property(retain, nonatomic) NSURL *objectID;	// G=0x36e66a11; S=0x36e66a21; @synthesize=_objectID
@property(assign, nonatomic) int visibility;	// G=0x36e66ab1; S=0x36e66ae1; 
- (id)initWithCoder:(id)coder;	// 0x36e66575
- (id)initWithIdentifier:(id)identifier description:(id)description;	// 0x36e66501
// declared property getter: - (BOOL)accessGranted;	// 0x36e66b75
// declared property getter: - (id)accountStore;	// 0x36e66ba1
// declared property getter: - (id)accountTypeDescription;	// 0x36e669c1
// declared property getter: - (BOOL)authenticationSupported;	// 0x36e66b9d
// declared property getter: - (int)credentialAvailability;	// 0x36e66ad1
// declared property getter: - (id)credentialProtectionPolicy;	// 0x36e66af1
// converted property getter: - (id)credentialType;	// 0x36e66aa1
- (void)dealloc;	// 0x36e66851
- (id)description;	// 0x36e668ed
- (void)encodeWithCoder:(id)coder;	// 0x36e666ed
// declared property getter: - (id)identifier;	// 0x36e66971
// declared property getter: - (id)objectID;	// 0x36e66a11
// declared property setter: - (void)setAccountStore:(id)store;	// 0x36e66bb1
- (void)setAccountTypeDescription:(id)description;	// 0x36e669d1
// declared property setter: - (void)setCredentialAvailability:(int)availability;	// 0x36e66ac1
// declared property setter: - (void)setCredentialProtectionPolicy:(id)policy;	// 0x36e66b35
// converted property setter: - (void)setCredentialType:(id)type;	// 0x36e66a61
- (void)setIdentifier:(id)identifier;	// 0x36e66981
// declared property setter: - (void)setObjectID:(id)anId;	// 0x36e66a21
// declared property setter: - (void)setVisibility:(int)visibility;	// 0x36e66ae1
- (id)supportedDataclasses;	// 0x36e6696d
// declared property getter: - (int)visibility;	// 0x36e66ab1
@end

