/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSDictionary, NSError, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	NSDictionary *_responseDictionary;	// 12 = 0xc
	int _responseType;	// 16 = 0x10
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x354cb621; S=0x354cb631; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x354cb601; S=0x354cb611; @synthesize=_authenticatedAccount
@property(readonly, assign, nonatomic) NSError *error;	// G=0x354cb641; @synthesize=_error
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x354cb651; S=0x354cb665; @synthesize=_responseDictionary
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354cb45d
- (void)_setError:(id)error;	// 0x354cb375
// declared property getter: - (int)authenticateResponseType;	// 0x354cb621
// declared property getter: - (id)authenticatedAccount;	// 0x354cb601
- (id)copyXPCEncoding;	// 0x354cb3b9
- (void)dealloc;	// 0x354cb2fd
// declared property getter: - (id)error;	// 0x354cb641
// declared property getter: - (id)responseDictionary;	// 0x354cb651
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x354cb631
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x354cb611
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x354cb665
@end

